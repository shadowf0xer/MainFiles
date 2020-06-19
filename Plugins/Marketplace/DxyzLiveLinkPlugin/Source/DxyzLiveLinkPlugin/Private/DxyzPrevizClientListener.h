/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Louis-Paul Cordier (lp.cordier@dynamixyz.com)
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "FastXml.h"
#include "Sockets.h"
#include "HAL/Runnable.h"
#include "HAL/RunnableThread.h"
#include "Interfaces/IPv4/IPv4Endpoint.h"

#include "DxyzLiveLinkSource.h"
#include "DxyzAnimFrame.h"
#include "PingPong.hpp"
#include "NetworkBuffer.hpp"

#include "DxyzPrevizClientListener.generated.h"

class FDxyzLiveLinkSource;

USTRUCT()
struct FDxyzChannel
{
    GENERATED_BODY()

        FDxyzChannel()
        : NbCoeffUsed(0)
        , Name("")
        , GroupName("")
        , TypeName("")
        , ClassName("")
        , CoeffBufferIndex(0)
        , IsHead(false)
        , IsEye(false){}

    UPROPERTY()
        uint32  NbCoeffUsed;

    UPROPERTY()
        FString Name;

    UPROPERTY()
        FString GroupName;

    UPROPERTY()
        FString TypeName;

    UPROPERTY()
        FString ClassName;

    UPROPERTY()
        uint32  CoeffBufferIndex;

    UPROPERTY()
        bool IsHead;

    UPROPERTY()
        bool IsEye;
};

UCLASS()
class UDxyzPrevizClientListener : public UObject, public FRunnable
{
    GENERATED_BODY()

public:
    UDxyzPrevizClientListener(/*const FObjectInitializer&*/);
    virtual ~UDxyzPrevizClientListener();

    // Connection methods.
    bool connectToPrevizServer(const FIPv4Endpoint& iGrabberInternetAddr,
                               FDxyzLiveLinkSource* iSource);

    bool disconnectFromPrevizServer();

    // Accessors.
    bool    isClientRunning() const { return mIsRunning; };
    bool    isConnected() const { return mIsConnected; };
    bool    getDxyzAnimFrame(UDxyzAnimFrame*);

    void setShowConnectionLogs(bool iShow) { mShowLogs = iShow; };

    FIPv4Endpoint   getGrabberEndpoint();

    void setSemaphore(FThreadSafeCounter* iSem) { mSemaphore = iSem; };

protected:
    // FRunnable interface.
    virtual bool    Init();
    virtual uint32  Run();
    virtual void    Stop();
    virtual void    Exit();

    // Grabber connection.
    bool    _connectToGrabber();
    bool    _initializeChannelsFromESCData(uint8 * iData);
    bool    _allocateBuffers(size_t coeffCount);

    // Event callback.
    void    _triggerConnectionEstablished();
    void    _triggerConnectionLost();

    // Socket management.
    bool    _reallocSocket();
    void    _destroySocket();
    int     _readFromSocket(uint8* iBuf, int iSize);

protected:
    // Sockets.
    FIPv4Endpoint   mGrabberAddr;
    FSocket*        mSocket;
    ISocketSubsystem* mSckSubSys;

    // Network buffering.
    size_t mNbCoeff;
    NetworkBuffer mbufPing;
    NetworkBuffer mbufPong;
    PingPongBuffer<NetworkBuffer>   mPpong;

    // Channels.
    FCriticalSection mChan_mtx;
    TArray<FDxyzChannel> mChanList;
    
    FString mEscName;

    // Threading.
    FRunnableThread* mThread;
    FDxyzLiveLinkSource* mLLSource;
    FCriticalSection mSource_mtx;

    // Threading state.
    bool mIsRunning;
    bool mIsConnected;

    FThreadSafeCounter* mSemaphore;

    bool mShowLogs;

    static int sNumberOfThreads;

	unsigned int dNbFrames;
	unsigned int dCurrentFrameTag;
	unsigned int dErrorRate;
};

class XMLParser : public IFastXmlCallback
{

public:
    XMLParser()
        : mChanList()
		, mIsEntity(false)
        , mIsSettings(false)
        , mEscName()
        , mCurrCoeffIndex(0) {};

    virtual ~XMLParser() {};

    //IFastXmlCallback
    bool ProcessXmlDeclaration(const TCHAR* ElementData, int32 XmlFileLineNumber)
    {
        mIsEntity = false;
        mIsSettings = false;
        mChanList.Empty();
        mCurrCoeffIndex = 0;
        return true;
    }
    bool ProcessElement(const TCHAR* ElementName, const TCHAR* ElementData, int32 XmlFileLineNumber)
    {
        mIsEntity = FString(ElementName).Compare("entity") == 0;
        mIsSettings = FString(ElementName).Compare("settings") == 0;
        
        if (mIsEntity)
        {
            FDxyzChannel vDxyzChannel;
            vDxyzChannel.CoeffBufferIndex = mCurrCoeffIndex;

            mChanList.Add(vDxyzChannel);
        }
        return true;
    }
    bool ProcessAttribute(const TCHAR* AttributeName, const TCHAR* AttributeValue)
    {
        if (mIsEntity)
        {
            FDxyzChannel& vDxyzChannel = mChanList[mChanList.Num() - 1];

            // Parse the entity name
            if (FString(AttributeName).Compare("name") == 0)
            {
                if (FString(AttributeValue).IsEmpty()) return false;
                
                FString vValue = AttributeValue;

                int first = vValue.Find("[");
                if (first != -1)
                {
                    int last = vValue.Find("]");

                    int firstWithoutConteneur = vDxyzChannel.Name.Find(".");
                    if (firstWithoutConteneur > first)
                        first = firstWithoutConteneur;

                    vDxyzChannel.Name = vValue.Mid(first + 1, (last - first) - 1);
                    vDxyzChannel.GroupName = vValue.Mid(0, first);
                }
                else
                {
                    vDxyzChannel.Name = AttributeValue;
                    vDxyzChannel.GroupName = "";
                }
            }
            // Parse the entity type
            else if (FString(AttributeName).Compare("type") == 0)
            {
                if (FString(AttributeValue).IsEmpty()) return false;
                vDxyzChannel.TypeName = AttributeValue;
            }
            // Parse the entity solver
            else if (FString(AttributeName).Compare("solver") == 0)
            {
                if (FString(AttributeValue).IsEmpty()) return false;
                vDxyzChannel.IsHead = (FString(AttributeValue).Compare("head") == 0);
                vDxyzChannel.IsEye = (FString(AttributeValue).Compare("eye") == 0
					|| FString(AttributeValue).Contains("gaze"));
            }
            // Parse the entity class.
            else if (FString(AttributeName).Compare("class") == 0)
            {
                if (FString(AttributeValue).IsEmpty()) return false;
                vDxyzChannel.ClassName = AttributeValue;
                if (FString(AttributeValue).Compare("blendshapetarget") == 0
                    || FString(AttributeValue).Compare("customproperty") == 0)
                {
                    vDxyzChannel.NbCoeffUsed = 1;
                    // If it is a blendshape, we remove the IsEye bool (only used with bones)
                    if (vDxyzChannel.IsEye)
                        vDxyzChannel.IsEye = false;
                }
                else
                {
                    vDxyzChannel.NbCoeffUsed = 9;
                }

                mCurrCoeffIndex += vDxyzChannel.NbCoeffUsed;
            }
        }
        else if (mIsSettings)
        {
            // Parse the entity name
            if (FString(AttributeName).Compare("name") == 0)
            {
                if (FString(AttributeValue).IsEmpty()) return false;

                mEscName = AttributeValue;
            }
        }
        return true;
    }
    bool ProcessClose(const TCHAR* Element)
    {
        return true;
    }
    bool ProcessComment(const TCHAR* Comment)
    {
        return true;
    }

    void getChanList(TArray<FDxyzChannel>& oChanList)
    {
        mChan_mtx.Lock();
        oChanList = mChanList;
        mChan_mtx.Unlock();
    };

    FString getEscName() { return mEscName; };

private:
    TArray<FDxyzChannel> mChanList;
    bool mIsEntity;
    bool mIsSettings;
    FString mEscName;
    unsigned int mCurrCoeffIndex;
    FCriticalSection mChan_mtx;
};