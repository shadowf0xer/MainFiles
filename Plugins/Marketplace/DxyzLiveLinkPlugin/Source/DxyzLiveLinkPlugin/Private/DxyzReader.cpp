/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#include "DxyzReader.h"
#include "DxyzLiveLinkPlugin.h"

extern  "C" {
#include "libavcodec/avcodec.h"
#include "libavutil/time.h"
#include "libswscale/swscale.h"
}

#include <vector>

#if PLATFORM_WINDOWS
#include "Windows/AllowWindowsPlatformTypes.h"
#include <Iphlpapi.h>
#include <winerror.h>
#include "Windows/HideWindowsPlatformTypes.h"
#endif

#define MAX_QUEUE_SIZE (15 * 1024 * 1024)
#define MIN_FRAMES 30

int DxyzReader::sNumberOfThreads = 0;

DxyzReader::DxyzReader()
	: mReadThread(nullptr)
	, mFrameq()
	, mVideoPktq()
	, mVidDecoder(MakeShareable(new FFMPEGDecoder()))
	, mCtx(nullptr)
	, mVideoCtx(nullptr)
	, mVideoStream(nullptr)
	, mContinueReadCond()
	, mDxyzDisplay(nullptr)
	, mTimeOut(0)
	, mInitialized(false)
	, mIsRunning(false)
	, mNbTreatedFrame(0)
	, mFPS(0.0f)
	, mPrintDebug(false)
{
	mDxyzDisplay = new DxyzDisplay();
}

DxyzReader::~DxyzReader()
{
	StopReading();

	if (nullptr != mReadThread)
	{
		if (mIsRunning)
			mReadThread->Kill();
		mReadThread = nullptr;
	}

	if (nullptr != mDxyzDisplay)
	{
		delete mDxyzDisplay;
		mDxyzDisplay = nullptr;
	}
}

bool DxyzReader::GetNetworkInterfaces(TArray<FString>& Interfaces)
{
	return _getInterfaces(Interfaces);
}

bool DxyzReader::ReadUrl(const FString& iUrl, const FString& iInterface, FString& OutAddr)
{
	return _initialize(iUrl, iInterface, OutAddr);
}

void DxyzReader::StopReading()
{
	if (mIsRunning)
	{
		StopReadThread();
		_closeStream();
		_closeContext();
	}
}

void DxyzReader::StartDisplay()
{
	int vMaxFrameDuration = (mCtx->iformat->flags & AVFMT_TS_DISCONT) ? 10.0 : 3600.0;

	// Initialize the DxyzDisplay
	mDxyzDisplay->Initialize(&mFrameq, &mVideoPktq, vMaxFrameDuration,
		FVector2D(mVideoStream->codecpar->width, mVideoStream->codecpar->height));

	// Start the display thread
	mDxyzDisplay->StartDisplayThread();
}

void DxyzReader::StopDisplay()
{
	mDxyzDisplay->StopDisplayThread();
}

UTexture2D* DxyzReader::GetVideoTexture()
{
	return mDxyzDisplay->GetVideoTexture();
}

FVector2D DxyzReader::GetVideoSize()
{
	return mDxyzDisplay->GetVideoSize();
}

// Callback for opening rtp stream
int DxyzReader::interrupt_cb(void* iData)
{
	DxyzReader* vData = static_cast<DxyzReader*>(iData);
	if (nullptr != vData)
	{
		if (vData->isInitialized())
			return 0;

		int64_t vTime = av_gettime();

		if (vTime > vData->getTimeOut())
			return 1; // We reached the timeout. Abort the function.
		else
			return 0;
	}
	return -1;
}

bool DxyzReader::_getInterfaces(TArray<FString>& oInterfaces)
{
// Look for different network interfaces on the computer : works for Windows only today
#if PLATFORM_WINDOWS
	// Retrieve the size of the buffer we need to allocate.
	ULONG bufSz = 0;
	if (GetAdaptersInfo(NULL, &bufSz) != ERROR_BUFFER_OVERFLOW)
	{
		UE_LOG(DxyzLog, Error, TEXT("[DxyzReader] - Error : Error trying to get the adapter info buffer size"));
		return false;
	}

	std::vector<BYTE> buf;
	buf.resize(bufSz, 0);

	if (GetAdaptersInfo((IP_ADAPTER_INFO*)&buf[0], &bufSz) != ERROR_SUCCESS)
	{
		UE_LOG(DxyzLog, Error, TEXT("[DxyzReader] - Error : Error trying to get the adapter info buffer"));
		return false;
	}

	// Iterate through the list of interfaces.
	IP_ADAPTER_INFO* pAdapterInfo = (IP_ADAPTER_INFO*)&buf[0];
	for (; pAdapterInfo != NULL; pAdapterInfo = pAdapterInfo->Next)
	{
		FString vName = FString(pAdapterInfo->Description);
		FString vAddr = FString(pAdapterInfo->IpAddressList.IpAddress.String);
		oInterfaces.Add(vAddr);
	}
#endif

	return true;
}

bool DxyzReader::_initialize(const FString& Url, const FString& Interface, FString& OutAddr)
{
	UE_LOG(DxyzLog, Log, TEXT("[DxyzReader] - Info : Opening ffmpeg context for %s..."), *Url);

	/************************ READ CONTEXT ************************/
	if (mCtx)
		_closeContext();

	mInitialized = false;
    mTimeOut = av_gettime() + 1000000;

	mCtx = avformat_alloc_context();
	mCtx->interrupt_callback.callback = interrupt_cb;
	mCtx->interrupt_callback.opaque = this;

	OutAddr = Url;
	if(!Interface.IsEmpty())
		OutAddr = FString::Format(TEXT("{0}?localaddr={1}"), { Url, Interface });

	AVDictionary *vOpts = NULL;
	av_dict_set(&vOpts, "probesize", TCHAR_TO_UTF8(*FString::FromInt(32)), 0);

	// Load URL
	int vErr = avformat_open_input(&mCtx, TCHAR_TO_UTF8(*OutAddr), NULL, &vOpts);
	if (vErr < 0)
	{
		UE_LOG(DxyzLog, Error, TEXT("[DxyzReader] - Error : Could not load URL %s"), *OutAddr);
		if (mCtx)
		{
			avformat_close_input(&mCtx);
			mCtx = nullptr;
		}
		return false;
	}

	UE_LOG(DxyzLog, Log, TEXT("[DxyzReader] - Info : ...context successfully opened"));

	mInitialized = true;
	mCtx->interrupt_callback.callback = nullptr;

	// Get rtp stream information
	vErr = avformat_find_stream_info(mCtx, NULL);
	if (vErr < 0)
		UE_LOG(DxyzLog, Warning, TEXT("[DxyzReader] - Warning : Could not read stream info"));

	/************************ GET STREAMS ************************/

	if(mVideoStream)
		_closeStream();

	FScopeLock Lock(&mMutex);

	// Initialize frame queue with packet queue
	if (mFrameq.Init(&mVideoPktq, VIDEO_PICTURE_QUEUE_SIZE, 1) < 0)
	{
		UE_LOG(DxyzLog, Error, TEXT("[DxyzReader] - Error : Could not initialize frame queue"));
		_closeStream();
		return false;
	}

	// Look for a video stream
	bool vStreamFound = false;
	for (unsigned int i = 0; i < mCtx->nb_streams; i++)
	{
		AVStream* vStreamDescriptor = mCtx->streams[i];
		AVCodecParameters* vCodecParams = vStreamDescriptor->codecpar;

		if (vCodecParams->codec_type == AVMEDIA_TYPE_VIDEO)
		{
			UE_LOG(DxyzLog, Log, TEXT("[DxyzReader] - Info : Initializing video stream %d"), i);

			if (_openVideoStream(i))
			{
				vStreamFound = true;
				break;
			}
			else
			{
				UE_LOG(DxyzLog, Warning, TEXT("[DxyzReader] - Warning : Could not initialize video stream %d"), i);
			}
		}
	}

	if (!vStreamFound)
	{
		UE_LOG(DxyzLog, Error, TEXT("[DxyzReader] - Error : No valid stream was found in the media !"));
		return false;
	}

	// Start the reading thread
	StartReadThread();

	mIsRunning = true;

	return true;
}

void DxyzReader::_closeContext()
{
	if (mCtx)
	{
		mCtx->video_codec = NULL;
		mCtx->audio_codec = NULL;
		avformat_close_input(&mCtx);
		mCtx = nullptr;
	}
}

bool DxyzReader::_openVideoStream(unsigned int iStreamIdx)
{
	AVCodecContext *vCodecCtx;
	const AVCodec *vCodec;
	AVDictionary *vOpts = NULL;

	vCodecCtx = avcodec_alloc_context3(NULL);

	int vRet = avcodec_parameters_to_context(vCodecCtx, mCtx->streams[iStreamIdx]->codecpar);
	if (vRet < 0)
	{
		UE_LOG(DxyzLog, Error, TEXT("[DxyzReader] - Error : Could not initialize the codec context"));
		avcodec_free_context(&vCodecCtx);
		return false;
	}
	vCodecCtx->pkt_timebase = mCtx->streams[iStreamIdx]->time_base;

	vCodec = avcodec_find_decoder(vCodecCtx->codec_id);
	if (!vCodec)
	{
		const AVCodecDescriptor *vDesc = avcodec_descriptor_get(vCodecCtx->codec_id);
		UE_LOG(DxyzLog, Error, TEXT("[DxyzReader] - Error : Coudn't find a decoder for %s"), UTF8_TO_TCHAR(vDesc->long_name));
		return false;
	}

	vCodecCtx->codec_id = vCodec->id;

	int thread_count = av_cpu_count();
	thread_count = FFMAX(1, FFMIN(thread_count, 16));
	vCodecCtx->thread_count = thread_count;
	av_dict_set(&vOpts, "threads", TCHAR_TO_UTF8(*FString::FromInt(thread_count)), 0);

	av_dict_set(&vOpts, "refcounted_frames", "1", 0);

	vRet = avcodec_open2(vCodecCtx, vCodec, &vOpts);
	if (vRet < 0)
	{
		UE_LOG(DxyzLog, Error, TEXT("[DxyzReader] - Error : Could not open codec !"));
		avcodec_free_context(&vCodecCtx);
		return false;
	}

	mVideoStream = mCtx->streams[iStreamIdx];

	// Init video decoder with packet queue and waiting condition
	mVidDecoder->Init(vCodecCtx, &mVideoPktq, &mContinueReadCond);

	// Start decoder and start the cpp thread to get video frames
	vRet = mVidDecoder->Start([this](void * data) { return _videoThread(); }, NULL);
	if (vRet < 0)
	{
		UE_LOG(DxyzLog, Error, TEXT("[DxyzReader] - Error : Error starting the video thread !"));
		av_dict_free(&vOpts);
		return false;
	}

	mVideoCtx = vCodecCtx;

	av_dict_free(&vOpts);

	UE_LOG(DxyzLog, Log, TEXT("[DxyzReader] - Info : Stream successfully opened"));
	return true;
}

int DxyzReader::_videoThread()
{
	AVFrame *vFrame = av_frame_alloc();
	if (!vFrame)
	{
		UE_LOG(DxyzLog, Error, TEXT("[DxyzReader] - Error : Error allocating ffmpeg frame !"));
		return AVERROR(ENOMEM);
	}

	double vPts;
	double vDuration;
	int vRet;
	AVRational tb = mVideoStream->time_base; //{ 1000000, 1 }; 
	AVRational frame_rate = av_guess_frame_rate(mCtx, mVideoStream, NULL);

	int vId = 0; //Just for debugging purposes, we store the id of the frame to be sure we do not miss one after
	// When it reaches 100000, we go back to 0 because int64 cannot be converted to FString easily

	FDateTime vNow = FDateTime::Now();

	for (;;)
	{
		vRet = _getNextFrame(vFrame);
		if (vRet < 0)
		{
			av_frame_free(&vFrame);
			return 0;
		}
		if (vRet == 0)
			continue;

		// Compute FPS
		++mNbTreatedFrame;
		int vElapsed = (FDateTime::Now() - vNow).GetTotalMilliseconds();
		if (vElapsed >= 1000)
		{
			mFPS = ((float)mNbTreatedFrame / ((float)vElapsed / 1000.0f));
			mNbTreatedFrame = 0;
			vNow = FDateTime::Now();

			if(mPrintDebug)
				UE_LOG(DxyzLog, Log, TEXT("[DxyzReader] - Info : RTP reception FPS : %f"), mFPS);
		}

		vPts = (vFrame->pts == AV_NOPTS_VALUE) ? NAN : (vFrame->pts * av_q2d(tb) - 1.0);
		vDuration = (frame_rate.num && frame_rate.den ? av_q2d({ frame_rate.den, frame_rate.num }) : 0);
		
		av_dict_set(&(vFrame->metadata), "frameid", TCHAR_TO_UTF8(*FString::FromInt(vId)), 0);

		// Put frame into the frame queue
		mFrameq.QueuePicture(vFrame, vPts, vDuration, vFrame->pkt_pos, mVidDecoder->GetPktSerial());
		
		av_frame_unref(vFrame);
		++vId;

		if (vId > 100000)
			vId = 0;
	}

	av_frame_free(&vFrame);
	return 0;
}

int DxyzReader::_getNextFrame(AVFrame *frame)
{
	int vGotPic = mVidDecoder->DecodeFrame(frame, NULL);

	if (vGotPic < 0)
	{
		// Exits the loop (should happen if there is an error or if the video thread is stopping)
		UE_LOG(DxyzLog, Warning, TEXT("[DxyzReader] - Warning : Could not decode frame"));
		return -1;
	}

	if (vGotPic)
	{
		if (frame->pts != AV_NOPTS_VALUE)
		{
			frame->sample_aspect_ratio = av_guess_sample_aspect_ratio(mCtx, mVideoStream, frame);
		}
		else
		{
			// This frame will be ignored
			vGotPic = 0;
		}
	}

	return vGotPic;
}

int DxyzReader::_streamHasEnoughPackets(AVStream *st, FFMPEGPacketQueue *queue) {
	return (queue->IsAbortRequest() ||
		(st->disposition & AV_DISPOSITION_ATTACHED_PIC) ||
		((queue->GetNumPackets() > MIN_FRAMES) && (!queue->GetDuration() || (av_q2d(st->time_base) * queue->GetDuration() > 1.0))));
}

void DxyzReader::_closeStream()
{
	UE_LOG(DxyzLog, Log, TEXT("[DxyzReader] - Info : Shutting down (context %p)"), mCtx);

	mIsRunning = false;

	mVidDecoder->Abort(&mFrameq);

	mVideoCtx = nullptr;
	mVidDecoder->Destroy();

	//FJU : hardware acc ?

	mVideoStream = nullptr;

	if (nullptr != mReadThread)
	{
		mReadThread->WaitForCompletion();
	}
}

void DxyzReader::StartReadThread()
{
	if (!mIsRunning)
	{
		mIsRunning = true;
		// Create the connection thread.
		mReadThread = FRunnableThread::Create(
			this,
			*FString::Printf(TEXT("ReadThread_%d"), sNumberOfThreads),
			0,
			TPri_Normal
		);
		++sNumberOfThreads;
	}
}


void DxyzReader::StopReadThread()
{
	if (mIsRunning)
	{
		UE_LOG(DxyzLog, Log, TEXT("[DxyzReader] - Info : Stop reading thread..."));
		mIsRunning = false;
		mReadThread->WaitForCompletion();
		UE_LOG(DxyzLog, Log, TEXT("[DxyzReader] - Info : ...reading thread stopped"));
	}
}


bool DxyzReader::Init()
{
	return true;
}

uint32	DxyzReader::Run()
{
	AVPacket vPkt;
	int vRet = 0;
	
	UE_LOG(DxyzLog, Log, TEXT("[DxyzReader] - Info : Start reading thread"));

	while (mIsRunning)
	{
		if (!mIsRunning)
			return 0;

		if (mVideoPktq.GetSize() > MAX_QUEUE_SIZE /*|| _streamHasEnoughPackets(mVideoStream, &mVideoPktq)*/)
		{
			// Wait 20 ms
			mMutex.Lock();
			mContinueReadCond.waitTimeout(mMutex, 20);
			mMutex.Unlock();

			UE_LOG(DxyzLog, Log, TEXT("[DxyzReader] - Info : Too much packets in queue, wait 20ms"));
			continue;
		}

		try
		{
			vRet = av_read_frame(mCtx, &vPkt);
		}
		catch (...) {
			vRet = -1;
		}

		if (vRet < 0)
		{
			if (mCtx->pb && mCtx->pb->error)
				break;

			// Wait 5 ms
			mMutex.Lock();
			mContinueReadCond.waitTimeout(mMutex, 5);
			mMutex.Unlock();
			continue;
		}

		mVideoPktq.Put(&vPkt);
	}
	return 0;
}

void DxyzReader::Stop()
{
}

void DxyzReader::Exit()
{
}
