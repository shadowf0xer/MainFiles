/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "HAL/Runnable.h"
#include "HAL/RunnableThread.h"
#include "FFMPEG/FFMPEGFrameQueue.h"
#include "FFMPEG/FFMPEGDecoder.h"
#include "Engine/Texture2D.h"

extern  "C" {
#include "libavformat/avformat.h"
}

#include "DxyzDisplay.h"

class DxyzReader : public FRunnable
{
public:
	DxyzReader();
	~DxyzReader();

	bool GetNetworkInterfaces(TArray<FString>& Interfaces);
	bool ReadUrl(const FString& iUrl, const FString& iInterface, FString& OutAddr);
	void StartReadThread();
	void StopReadThread();
	void StopReading();

	void StartDisplay();
	void StopDisplay();

	UTexture2D* GetVideoTexture();
	FVector2D GetVideoSize();

	inline bool isInitialized() { return mInitialized; };
	inline int64_t getTimeOut() { return mTimeOut; };
	static int interrupt_cb(void*);
	

protected:
	virtual bool    Init();
	virtual uint32  Run();
	virtual void    Stop();
	virtual void    Exit();

private:
	bool _getInterfaces(TArray<FString>& oInterfaces);

	bool _initialize(const FString& Url, const FString& Interface, FString& OutAddr);
	void _closeContext();
	bool _openVideoStream(unsigned int iStreamIdx);
	void _closeStream();

	int _videoThread();
	int _getNextFrame(AVFrame *frame);

	int _streamHasEnoughPackets(AVStream *st, FFMPEGPacketQueue *queue);

	static int sNumberOfThreads;
	mutable FCriticalSection mMutex;

	FRunnableThread* mReadThread;
	FFMPEGFrameQueue mFrameq;
	FFMPEGPacketQueue mVideoPktq;
	TSharedPtr<FFMPEGDecoder> mVidDecoder;
	AVFormatContext* mCtx;
	AVCodecContext* mVideoCtx;
	AVStream *mVideoStream;
	CondWait mContinueReadCond;
	DxyzDisplay* mDxyzDisplay;
	int64_t mTimeOut;

	bool mInitialized;
	bool mIsRunning;
	int mNbTreatedFrame;
	double mFPS;

	bool mPrintDebug;
};
