/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#include "DxyzDisplay.h"
#include "DxyzLiveLinkPlugin.h"

extern  "C" {
#include "libavcodec/avcodec.h"
#include "libavutil/imgutils.h"
#include "libavutil/hwcontext.h"
#include "libavutil/time.h"
#include "libswscale/swscale.h"
#include "libswresample/swresample.h"
}

/* polls for possible required screen refresh at least this often, should be less than 1/fps */
#define REFRESH_RATE 0.01

#define MAX_QUEUE_SIZE (15 * 1024 * 1024)
#define MIN_FRAMES 30

/* AV sync correction is done if above the maximum AV sync threshold */
#define AV_SYNC_THRESHOLD_MAX 0.1

int DxyzDisplay::sNumberOfThreads = 0;

DxyzDisplay::DxyzDisplay()
	: mDisplayThread(nullptr)
	, mFrameq(nullptr)
	, mVideoPktq(nullptr)
	, mFrameTimer(0.0)
	, mMaxFrameDuration(0.0)
	, mImgBuffer()
	, mImgConvertCtx(nullptr)
	, mCamSize(FVector2D(0, 0))
	, mVideoTexture()
	, mVideoUpdateTextureRegion(nullptr)
	, mIsRunning(false)
	, mForceRefresh(false)
	, mInitialized(false)
	, mLastFrameId(-1)
{
}

DxyzDisplay::~DxyzDisplay()
{
	if (nullptr != mDisplayThread)
	{
		if (mIsRunning)
			mDisplayThread->Kill();
		mDisplayThread = nullptr;
	}
}

void DxyzDisplay::Initialize(FFMPEGFrameQueue* iFrameq, FFMPEGPacketQueue* iVideoPktq, int iMaxFrameDuration, FVector2D Size)
{
	mFrameq = iFrameq;
	mVideoPktq = iVideoPktq;
	mMaxFrameDuration = iMaxFrameDuration;

	// Texture initialization
	mCamSize = Size;
	mVideoTexture = UTexture2D::CreateTransient(mCamSize.X, mCamSize.Y);
	mVideoTexture->UpdateResource();
	mVideoUpdateTextureRegion = new FUpdateTextureRegion2D(0, 0, 0, 0, mCamSize.X, mCamSize.Y);

	mInitialized = true;
}

void DxyzDisplay::StartDisplayThread()
{
	if (!mIsRunning)
	{
		mIsRunning = true;
		// Create the connection thread.
		mDisplayThread = FRunnableThread::Create(
			this,
			*FString::Printf(TEXT("DisplayThread_%d"), sNumberOfThreads),
			0,
			TPri_Normal
		);
		++sNumberOfThreads;
	}
}

void DxyzDisplay::StopDisplayThread()
{
	if (mIsRunning)
	{
		UE_LOG(DxyzLog, Log, TEXT("[DxyzDisplay] - Info : Stop display thread..."));
		mIsRunning = false;
		mDisplayThread->WaitForCompletion();
		UE_LOG(DxyzLog, Log, TEXT("[DxyzDisplay] - Info : ...display thread stopped"));
	}
}

void DxyzDisplay::_videoRefresh(double *remaining_time)
{
	double vTime = 0.0f;

	bool vRetry = true;
	while (vRetry && mIsRunning)
	{
		if (mFrameq->GetNumRemaining() > 0)
		{
			double vDelay;
			FFMPEGFrame *vFrame, *lastvp;

			/* dequeue the picture */
			lastvp = mFrameq->PeekLast();
			vFrame = mFrameq->Peek();

			if (vFrame->GetSerial() != mVideoPktq->GetSerial())
			{
				mFrameq->Next();
				continue;
			}

			if (lastvp->GetSerial() != vFrame->GetSerial())
				mFrameTimer = av_gettime_relative() / (double)AV_TIME_BASE;

			/* compute nominal last duration */
			vDelay = lastvp->GetDifference(vFrame, mMaxFrameDuration);

			vTime = av_gettime_relative() / (double)AV_TIME_BASE;
			if (vTime < mFrameTimer + vDelay)
			{
				*remaining_time = FFMIN(mFrameTimer + vDelay - vTime, *remaining_time);
				if (mForceRefresh && mFrameq->GetIndexShown())
					_displayNextFrame();

				mForceRefresh = false;
				return;
			}

			mFrameTimer += vDelay;
			if (vDelay > 0 && vTime - mFrameTimer > AV_SYNC_THRESHOLD_MAX)
				mFrameTimer = vTime;

			mFrameq->Next();

			mForceRefresh = true;
			vRetry = false;
		}
	}

	if (mForceRefresh && mFrameq->GetIndexShown())
		_displayNextFrame();

	mForceRefresh = false;
}

void DxyzDisplay::_displayNextFrame()
{
	FFMPEGFrame *vFrame = mFrameq->PeekLast();

	if (vFrame && !vFrame->IsUploaded())
	{
		if (_updateTexture(vFrame->GetFrame(), &mImgConvertCtx) < 0)
			return;
		vFrame->SetUploaded(true);
	}
}

int DxyzDisplay::_updateTexture(AVFrame *frame, struct SwsContext **img_convert_ctx)
{
	int vBufSize = av_image_get_buffer_size(AV_PIX_FMT_RGBA, frame->width, frame->height, 1) + 1;
	if (mImgBuffer.Num() != vBufSize)
		mImgBuffer.Reset(vBufSize);

	int ret = 0;
	int pitch[4] = { 0, 0, 0, 0 };
	ret = av_image_fill_linesizes(pitch, AV_PIX_FMT_BGRA, frame->width);

	uint8_t* data[4] = { 0 };
	av_image_fill_pointers(data, AV_PIX_FMT_BGRA, frame->height, mImgBuffer.GetData(), pitch);

	*img_convert_ctx = sws_getCachedContext(*img_convert_ctx,
		frame->width, frame->height, (AVPixelFormat)frame->format, frame->width, frame->height, AV_PIX_FMT_BGRA, SWS_BICUBIC, NULL, NULL, NULL);

	if (NULL != *img_convert_ctx)
	{
		sws_scale(*img_convert_ctx, frame->data, frame->linesize, 0, frame->height, data, pitch);
	}
	else
	{
		UE_LOG(DxyzLog, Error, TEXT("[DxyzDisplay] - Error : Cannot initialize the conversion context"));
		return -1;
	}

	FScopeLock Lock(&mMutex);

	if (mInitialized && mImgBuffer.GetData())
	{
		// Update texture 2D
		mVideoTexture->UpdateTextureRegions((int32)0, (uint32)1,
			mVideoUpdateTextureRegion, (uint32)(4 * mCamSize.X), (uint32)4, mImgBuffer.GetData());

		AVDictionaryEntry* tag = av_dict_get(frame->metadata, "frameid", NULL, 0);
		int vId = FCString::Atoi(*FString(tag->value));
		if (vId != mLastFrameId + 1)
		{
			if(mLastFrameId != 100000)
				UE_LOG(DxyzLog, Log, TEXT("[DxyzDisplay] - Info : Missed one frame in display"));
		}
		mLastFrameId = vId;
	}

	return ret;
}

bool DxyzDisplay::Init()
{
	return true;
}

uint32	DxyzDisplay::Run()
{
	double remaining_time = 0.0;

	UE_LOG(DxyzLog, Log, TEXT("[DxyzDisplay] - Info : Start display thread"));

	while (mIsRunning)
	{
		if (remaining_time > 0.0)
			av_usleep((int64_t)(remaining_time * 1000000.0));

		remaining_time = REFRESH_RATE;

		_videoRefresh(&remaining_time);
	}

	return 0;
}

void DxyzDisplay::Stop()
{
	mMaxFrameDuration = 0.0;
}

void DxyzDisplay::Exit()
{
}
