/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Louis-Paul Cordier (lp.cordier@dynamixyz.com)
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#include "DxyzPrevizClientListener.h"

#include "Common/TcpSocketBuilder.h"

#define OPTIMAL_IP_PACKET_SIZE 1400

int UDxyzPrevizClientListener::sNumberOfThreads = 0;

UDxyzPrevizClientListener::UDxyzPrevizClientListener()
    : mGrabberAddr()
	, mSocket(nullptr)
	, mNbCoeff(0)
	, mEscName()
	, mThread(nullptr)
    , mLLSource(nullptr)
	, mIsRunning(false)
    , mIsConnected(false)
	, mSemaphore(nullptr)
	, mShowLogs(true)
	, dNbFrames(0)
	, dCurrentFrameTag(0)
	, dErrorRate(0)
{
    mPpong.setPing(mbufPing);
    mPpong.setPong(mbufPong);

	mSckSubSys = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
}

UDxyzPrevizClientListener::~UDxyzPrevizClientListener()
{
    if (mIsRunning)
    {
        disconnectFromPrevizServer();
    }

    mPpong.resetPingPong();
    mbufPing.freeBuffer();
    mbufPong.freeBuffer();

    if (nullptr != mThread)
    {
        mThread->Kill(true);
        delete mThread;
    }

    this->ConditionalBeginDestroy();
}


/*---------------------------------------------------------------------------*/
// Grabber connection handling.
/*---------------------------------------------------------------------------*/

bool UDxyzPrevizClientListener::connectToPrevizServer(
    const FIPv4Endpoint & iGrabberInternetAddr,
    FDxyzLiveLinkSource* iSource
)
{
    mIsRunning = true;
    mIsConnected = false;
    mNbCoeff = 0;

    mGrabberAddr = iGrabberInternetAddr;
    mLLSource = iSource;

    // Create the connection thread.
    mThread = FRunnableThread::Create(
        this,
		*FString::Format(TEXT("PrevizClient{0}"), { sNumberOfThreads }),
        0,
        TPri_Normal
    );
    ++sNumberOfThreads;

    return true;
}

bool UDxyzPrevizClientListener::disconnectFromPrevizServer()
{
    if (mIsRunning)
    {
        if(mIsConnected)
            mLLSource->setConnected(false);
        
        mIsRunning = false;
        mThread->WaitForCompletion();

        _destroySocket();

        mPpong.resetPingPong();
        mbufPing.freeBuffer();
        mbufPong.freeBuffer();
    }

    return true;
}




/*---------------------------------------------------------------------------*/
// Network Thread implementation.
/*---------------------------------------------------------------------------*/

bool UDxyzPrevizClientListener::Init() 
{
    return true;
}

uint32	UDxyzPrevizClientListener::Run()
{
    int connectAttempt = 0;
    bool res = false;
    int32 socketReceivedBytes;

    UE_LOG(DxyzLog, Log, TEXT("[DxyzPrevizClientListener] - Info : Connection thread started."));

    while (mIsRunning)
    {
        if (nullptr == mSocket)
        {
            _reallocSocket();
        }

        if (!mIsConnected)
        {
            mIsConnected = _connectToGrabber();
        }

        if (mIsConnected)
        {
            connectAttempt = 0;

            // Process inccoming packets.
            NetworkBuffer* vCurBuf;
            while (mIsConnected && mIsRunning)
            {
                // Select a buffer.
                mPpong.writeRequest(vCurBuf);

                // Discard its content.
                vCurBuf->isValid = false;

                // Wait for data on the socket.
                socketReceivedBytes =
                    _readFromSocket((uint8*)vCurBuf->pktBuf, vCurBuf->pktBufSize);

                // Check the connection state.
                if (mSocket->GetConnectionState() != SCS_Connected || -1 == socketReceivedBytes)
                {
                    // We've got a disconnection Houston!
                    // This will cause the next condition to fails.
                    mPpong.writeRelease(vCurBuf);
                    _destroySocket();

                    continue;
                }

                if (vCurBuf->pktBufSize != socketReceivedBytes)
                {
                    UE_LOG(DxyzLog, Warning,
                        TEXT("[DxyzPrevizClientListener] - Warning : Received buffer on socket is different from the expected size."));
                    mPpong.writeRelease(vCurBuf);

                    _destroySocket();
                    continue;
                }

                // The buffer is OK.
                vCurBuf->isValid = true;
                mPpong.writeRelease(vCurBuf);
                mSemaphore->Increment();
            }
            
        }
        else
        {
            ++connectAttempt;
            
            if (mShowLogs)
                UE_LOG(DxyzLog, Log, TEXT("[DxyzPrevizClientListener] - Info : Connection attempt %d failed : %s"), 
                    connectAttempt, 
                    mSckSubSys->GetSocketError());

			FPlatformProcess::Sleep(1);
            _reallocSocket();
        }
        
    }

    return 0;
}



void UDxyzPrevizClientListener::Stop()
{
}

void UDxyzPrevizClientListener::Exit()
{
}


/*---------------------------------------------------------------------------*/
// Grabber connection process.
/*---------------------------------------------------------------------------*/

bool UDxyzPrevizClientListener::_connectToGrabber() {

    bool res = false;
    uint32_t vCoeffCount;

    // Attempt to connect to the grabber.
    res = mSocket->Connect(*mGrabberAddr.ToInternetAddr());

    if (!res)
        return false;

	dNbFrames = 0;
	dErrorRate = 0;

    UE_LOG(DxyzLog, Log, TEXT("[DxyzPrevizClientListener] - Info : Socket is connected to %s:%d."), 
        *mGrabberAddr.Address.ToString(), mGrabberAddr.Port);

    // Retrieve Streaming Coefficient Number
    vCoeffCount = 0;
    if (sizeof(vCoeffCount) != _readFromSocket((uint8*)&vCoeffCount, sizeof(vCoeffCount)))
    {
        UE_LOG(DxyzLog, Error, TEXT("[DxyzPrevizClientListener] - Error : Could not read the number of coefficients."));
        vCoeffCount = 0;
        return false;
    }

    if (vCoeffCount == 0)
    {
        UE_LOG(DxyzLog, Error, TEXT("[DxyzPrevizClientListener] - Error : Number of coefficients is zero."));
        return false;
    }

    mNbCoeff = vCoeffCount;

    UE_LOG(DxyzLog, Log, TEXT("[DxyzPrevizClientListener] - Info : %d retargeting coefficients for this Dynamixyz Grabber RT profile."), vCoeffCount);


    // Retrieve ESC Buffer Size
    uint32	vESCBufferSize = 0;
    if (sizeof(uint32) != _readFromSocket((uint8*)&vESCBufferSize, sizeof(uint32)))
    {
        UE_LOG(DxyzLog, Error, TEXT("[DxyzPrevizClientListener] - Error : ESC Initialisation failed : could not read data size."));
        return false;
    }

    if (vESCBufferSize == 0)
    {
        UE_LOG(DxyzLog, Error, TEXT("[DxyzPrevizClientListener] - Error : Size of ESC is zero"));
        return false;
    }


    // Retrieve ESC Content
    char* vESCBuffer = nullptr;
    vESCBuffer = (char*) malloc((vESCBufferSize+1) * sizeof(char)); // +1 for the last character

    if (vESCBuffer == nullptr) {
        UE_LOG(DxyzLog, Error, TEXT("[DxyzPrevizClientListener] - Error : Malloc issue"));
        return false;
    }

    int iSizeBuffer = vESCBufferSize * sizeof(char);

    if (iSizeBuffer != _readFromSocket((uint8*)vESCBuffer, iSizeBuffer))
    {
        UE_LOG(DxyzLog, Error, TEXT("[DxyzPrevizClientListener] - Error : XML content corrupted"));
        return false;
    }

    vESCBuffer[vESCBufferSize] = '\0';  // we add the last character
    if (!_initializeChannelsFromESCData((uint8*)vESCBuffer))
    {
        free(vESCBuffer);
        UE_LOG(DxyzLog, Error, TEXT("[DxyzPrevizClientListener] - Error : XML-ESC parsing failed"));
        return false;
    }

    {
        FScopeLock vScopLock(&mChan_mtx);
        if (mChanList.Num() == 0)
        {
            free(vESCBuffer);
            UE_LOG(DxyzLog, Error, TEXT("[DxyzPrevizClientListener] - Error : Streaming channel list is empty"));
            mChan_mtx.Unlock();
            return false;
        }
    }

    // Send event back to the blueprint.
    _triggerConnectionEstablished();

    //free ESC Buffer
    free(vESCBuffer);

    //Allocate network buffer
    res = _allocateBuffers(vCoeffCount);
    if (!res)
        return false;

    return true;
}

bool UDxyzPrevizClientListener::_initializeChannelsFromESCData(uint8 * iData)
{
	if (iData == NULL)
		return false;

    FScopeLock vLock(&mChan_mtx);
    
	FString XMLString = UTF8_TO_TCHAR((const char*)iData);
    XMLParser vParser;

    FText vErr;
    int vErrline;
    bool res = FFastXml::ParseXmlFile(&vParser, NULL, XMLString.GetCharArray().GetData(), NULL, false, false, vErr, vErrline);
    if (res)
    {
        vParser.getChanList(mChanList);
        mEscName = vParser.getEscName();
    }
    else
    {
        UE_LOG(DxyzLog, Error, TEXT("[DxyzPrevizClientListener] - Error : FFastXml could not parse ESC ! (%s)"), *vErr.ToString());
        return false;
    }

    return true;
}

bool UDxyzPrevizClientListener::_allocateBuffers(size_t iCoeffCount)
{
    int vByteSizeCoeff = (sizeof(float) * iCoeffCount);
    bool res;
    int32 allocatedSize;
    size_t vpktBufSize;

    // size of all coeff + frame tag (unsigned int) + 4 unsigned for TC : HH MM SS FF
    vpktBufSize = vByteSizeCoeff + (5 * sizeof(unsigned int));

    // We are padding packet with dummy data, on the server side, to reach the 
    // packet MTU size to force the packet to be sent on the network.
    if (vpktBufSize < OPTIMAL_IP_PACKET_SIZE)
        vpktBufSize = OPTIMAL_IP_PACKET_SIZE;

    if (!mbufPing.reallocBuffer(vpktBufSize))
        return false;

    if (!mbufPong.reallocBuffer(vpktBufSize))
    {
        mbufPing.freeBuffer();
        return false;
    }

    //Allow to bufferize 1200 frame (~10 sec buffering at 120FPS/sec)
    allocatedSize = 0;
    res = mSocket->SetReceiveBufferSize(1200 * vpktBufSize, allocatedSize);

    if (res)
    {
        UE_LOG(DxyzLog, Log, TEXT("[DxyzPrevizClientListener] - Info : Set network buffering to %d frames"),
            allocatedSize / vpktBufSize);
    }

    if ((1200 * vpktBufSize != allocatedSize) || !res)
    {
        UE_LOG(DxyzLog,
            Warning,
            TEXT("[DxyzPrevizClientListener] - Warning : Could not set receive OS network buffer. Asked: %d - Allocated: %d"),
            1200 * vpktBufSize, allocatedSize);
    }

    return true;
}


/*---------------------------------------------------------------------------*/
// Network events.
/*---------------------------------------------------------------------------*/

void UDxyzPrevizClientListener::_triggerConnectionEstablished()
{
    // Deep copy the channel list.
mChan_mtx.Lock();
    UE_LOG(DxyzLog, Log, TEXT("[DxyzPrevizClientListener] - Info : %d entities detected in the ESC"), mChanList.Num());
    TArray<FDxyzChannel> vChanList = mChanList;
mChan_mtx.Unlock();

    mLLSource->ConnectionEstablished(vChanList, mEscName);
}

void UDxyzPrevizClientListener::_triggerConnectionLost()
{
    mLLSource->setConnected(false);

	UE_LOG(DxyzLog, Verbose, TEXT("[DxyzPrevizClientListener] - Info : Number of frames processed : %d"), dNbFrames);

	if(dErrorRate > 0)
		UE_LOG(DxyzLog, Verbose, TEXT("[DxyzPrevizClientListener] - Info : Number of missed frames : %d"), dErrorRate);
}

/*---------------------------------------------------------------------------*/
// Public accessors.
/*---------------------------------------------------------------------------*/

bool UDxyzPrevizClientListener::getDxyzAnimFrame(UDxyzAnimFrame* animFrame) {

    if (nullptr == animFrame)
        return false;

    if (!mIsRunning || !mIsConnected)
        return false;

    // (Re)Allocate the frame buffer if needed.
    bool res = animFrame->reallocBuffer(mNbCoeff * sizeof(float));
    if (!res)
    {
        UE_LOG(DxyzLog, Error, TEXT("[DxyzPrevizClientListener] - Error : Could not reallocate frame buffer."));
        return false;
    }


    // Copy the data into the frame.
    // +-------------------------------------+
    // | ID | Coeffs | TimeCode | <opt.pad.> |
    // +-------------------------------------+
    //  uint|float*x | 4*uint   | char* -> MTU

    NetworkBuffer* vCurrBuf;
mPpong.readRequest(vCurrBuf);
    if (!vCurrBuf->isValid)
    {
    mPpong.readRelease(vCurrBuf);
        return false;
    }

    // Frame ID
    animFrame->frameID = ((unsigned int*)vCurrBuf->pktBuf)[0];

	++dNbFrames;
	if (animFrame->frameID > 0 && (animFrame->frameID - dCurrentFrameTag != 1))
		++dErrorRate;

	dCurrentFrameTag = animFrame->frameID;

    // Copy the coefficients.
    FMemory::Memcpy(
        animFrame->coeffBuffer,
        &(vCurrBuf->pktBuf[4]),
        mNbCoeff * sizeof(float)
    );

    // Copy the Timecode
    FMemory::Memcpy(
        animFrame->TCBuffer,
        &(vCurrBuf->pktBuf[4 + mNbCoeff * sizeof(float)]),
        4 * sizeof(unsigned int)
    );

mPpong.readRelease(vCurrBuf);

    return true;
}

FIPv4Endpoint UDxyzPrevizClientListener::getGrabberEndpoint()
{
    return mGrabberAddr;
}

/*---------------------------------------------------------------------------*/
// Socket low-level implementation.
/*---------------------------------------------------------------------------*/

bool UDxyzPrevizClientListener::_reallocSocket()
{
    bool res = false;

    _destroySocket();

    FTcpSocketBuilder socketBuilder =
        FTcpSocketBuilder(TEXT("FTcpListener Previz Grabber Client"));
    //socketBuilder.AsNonBlocking();
    //socketBuilder.AsBlocking();

    mSocket = socketBuilder;
    mSocket->SetNonBlocking(false);

    if (nullptr == mSocket)
    {
        UE_LOG(DxyzLog, Error, TEXT("[DxyzPrevizClientListener] - Error : Socket subsystem creation failure"));
        return false;
    }

    return true;
}



void UDxyzPrevizClientListener::_destroySocket()
{
    if (mSocket != nullptr)
    {
        if (!mSocket->Close())
        {
            UE_LOG(DxyzLog, Warning, TEXT("[DxyzPrevizClientListener] - Warning : Can't close underlying socket : %s"),
                mSckSubSys->GetSocketError());
        }
        else
        {
            if (mShowLogs)
                UE_LOG(DxyzLog, Log, TEXT("[DxyzPrevizClientListener] - Info : Socket closed"));
        }

		mSckSubSys->DestroySocket(mSocket);
        mSocket = nullptr;
    }
	
	if (mIsConnected)
		_triggerConnectionLost();

    mIsConnected = false;
}



int	UDxyzPrevizClientListener::_readFromSocket(uint8* iBuf, int iSize)
{
    if (nullptr == mSocket)
    {
        UE_LOG(DxyzLog, Error, TEXT("[DxyzPrevizClientListener] - Error : Invalid socket."));
        return -1;
    }

    if (nullptr == iBuf)
    {
        UE_LOG(DxyzLog, Error, TEXT("[DxyzPrevizClientListener] - Error : Nullptr input buffer."));
        return -1;
    }

    if (ESocketConnectionState::SCS_Connected != mSocket->GetConnectionState())
    {
        UE_LOG(DxyzLog, Error, TEXT("[DxyzPrevizClientListener] - Error : The given buffer pointer is null."));
        return -1;
    }

    // Read the data on the socket.
    int vReadData;
    bool res = mSocket->Recv(iBuf, iSize, vReadData, ESocketReceiveFlags::WaitAll);

    if (!res)
    {
        UE_LOG(DxyzLog, Error, TEXT("[DxyzPrevizClientListener] - Error : Error while receiving data from socket."));
        return -1;
    }

    if (vReadData != iSize)
    {
        UE_LOG(DxyzLog, Warning, TEXT("[DxyzPrevizClientListener] - Warning : Socket read, asked: %d B retrieved: %d B."), iSize, vReadData);
    }

    return vReadData;
}
