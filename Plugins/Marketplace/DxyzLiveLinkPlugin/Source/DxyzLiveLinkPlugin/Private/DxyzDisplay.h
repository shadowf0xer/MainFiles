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
#include "FFMPEG/FFMPEGFrame.h"
#include "Engine/Texture2D.h"

extern  "C" {
#include "libavformat/avformat.h"
}

class DxyzDisplay : public FRunnable
{
public:
    DxyzDisplay();
    ~DxyzDisplay();

	void Initialize(FFMPEGFrameQueue* iFrameq, FFMPEGPacketQueue* iVideoPktq, int iMaxFrameDuration, FVector2D Size);

	void StartDisplayThread();
	void StopDisplayThread();

	UTexture2D* GetVideoTexture() { if (mIsRunning) return mVideoTexture; else return nullptr; };
	FVector2D GetVideoSize() { return mCamSize; };

protected:
	virtual bool    Init();
	virtual uint32  Run();
	virtual void    Stop();
	virtual void    Exit();

private:
	void _videoRefresh(double *remaining_time);
	void _displayNextFrame();
	int _updateTexture(AVFrame *frame, struct SwsContext **img_convert_ctx);

	static int sNumberOfThreads;

	mutable FCriticalSection mMutex;
	FRunnableThread* mDisplayThread;
	FFMPEGFrameQueue* mFrameq;
	FFMPEGPacketQueue* mVideoPktq;
	
	double mFrameTimer;
	double mMaxFrameDuration;

	TArray<uint8> mImgBuffer;
	struct SwsContext *mImgConvertCtx;
	FVector2D mCamSize;
	UTexture2D* mVideoTexture;
	FUpdateTextureRegion2D* mVideoUpdateTextureRegion;
	bool mIsRunning;
	bool mForceRefresh;
	bool mInitialized;

	// Debug
	int mLastFrameId;
};
