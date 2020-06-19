/*************************************************************************
* From https://github.com/bakjos/FFMPEGMedia (Giovanny Gutiérrez)
*************************************************************************/

#pragma once


#include "CondWait.h"
#include "FFMPEGPacketQueue.h"
#include "FFMPEGFrameQueue.h"
#include <thread>
#include <functional>

extern "C" {
#include <libavcodec/avcodec.h>
}


class FFMPEGDecoder
{
public:
	FFMPEGDecoder();
    ~FFMPEGDecoder();

    void Init(AVCodecContext *avctx, FFMPEGPacketQueue *queue, CondWait *empty_queue_cond);
    int DecodeFrame( AVFrame *frame, AVSubtitle *sub);
    void SetDecoderReorderPts ( int pts );
    void Abort(FFMPEGFrameQueue* fq);
    void Destroy();
    int Start(std::function<int (void *)> thread_func, void *arg );

    AVCodecContext* GetAvctx();
    int GetPktSerial();
    int GetFinished();
    
    void SetTime ( int64_t start_pts, AVRational  start_pts_tb);
    void SetFinished ( int finished );

private:
    int mDecoder_reorder_pts;
    AVPacket mPkt;
    FFMPEGPacketQueue *mQueue;
    AVCodecContext *mAvctx;
    int mPkt_serial;
    int mFinished;
    bool mPacket_pending;
    CondWait *mEmpty_queue_cond;
    int64_t mStart_pts;
    AVRational mStart_pts_tb;
    int64_t mNext_pts;
    AVRational mNext_pts_tb;

    std::thread *mDecoder_tid;
};

