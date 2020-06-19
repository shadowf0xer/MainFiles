/*************************************************************************
* From https://github.com/bakjos/FFMPEGMedia (Giovanny Gutiérrez)
*************************************************************************/

#include "FFMPEGDecoder.h"


FFMPEGDecoder::FFMPEGDecoder() {
    mDecoder_reorder_pts = 1;
    mQueue = NULL;
    mAvctx = NULL;
    mPkt_serial = -1;
    mFinished = 0;
    mPacket_pending = false;
    mEmpty_queue_cond = NULL;
    mStart_pts = 0;
    mStart_pts_tb = {0,0};
    mNext_pts = 0;
    mNext_pts_tb = {0, 0};
    mPkt = {0};
    mDecoder_tid = NULL;
}


FFMPEGDecoder::~FFMPEGDecoder()
{
}

void FFMPEGDecoder::Init(AVCodecContext *avctx, FFMPEGPacketQueue *queue, CondWait *empty_queue_cond) {
    this->mAvctx = avctx;
    this->mQueue = queue;
    this->mEmpty_queue_cond = empty_queue_cond;
    this->mStart_pts = AV_NOPTS_VALUE;
    this->mPkt_serial = -1;
}

int FFMPEGDecoder::DecodeFrame( AVFrame *frame, AVSubtitle *sub) {
    int ret = AVERROR(EAGAIN);

    for (;;) {
        AVPacket pkt;

        if (mQueue->GetSerial() == mPkt_serial) {
            do {
                if (mQueue->IsAbortRequest())
                    return -1;

                switch (mAvctx->codec_type) {
                case AVMEDIA_TYPE_VIDEO:
                    ret = avcodec_receive_frame(mAvctx, frame);
                    if (ret >= 0) {
                        if (mDecoder_reorder_pts == -1) {
                            frame->pts = frame->best_effort_timestamp;
                        }
                        else if (!mDecoder_reorder_pts) {
                            frame->pts = frame->pkt_dts;
                        }
                    }
                    break;
                case AVMEDIA_TYPE_AUDIO:
                    ret = avcodec_receive_frame(mAvctx, frame);
                    if (ret >= 0) {
                        AVRational tb = { 1, frame->sample_rate };
                        if (frame->pts != AV_NOPTS_VALUE)
                            frame->pts = av_rescale_q(frame->pts, mAvctx->pkt_timebase, tb);
                        else if (mNext_pts != AV_NOPTS_VALUE)
                            frame->pts = av_rescale_q(mNext_pts, mNext_pts_tb, tb);
                        if (frame->pts != AV_NOPTS_VALUE) {
                            mNext_pts = frame->pts + frame->nb_samples;
                            mNext_pts_tb = tb;
                        }
                    }
                    break;
                }
                if (ret == AVERROR_EOF) {
                    mFinished = mPkt_serial;
                    avcodec_flush_buffers(mAvctx);
                    return 0;
                }
                if (ret >= 0)
                    return 1;
            } while (ret != AVERROR(EAGAIN));
        }

        do {
            if (mQueue->GetNumPackets() == 0)
                mEmpty_queue_cond->signal();
            if (mPacket_pending) {
                av_packet_move_ref(&pkt, &pkt);
                mPacket_pending = false;
            }
            else {
                if (mQueue->Get(&pkt, 1, &mPkt_serial) < 0)
                    return -1;
            }
        } while (mQueue->GetSerial() != mPkt_serial);

        if (FFMPEGPacketQueue::IsFlushPacket(pkt.data)) {
            avcodec_flush_buffers(mAvctx);
            mFinished = 0;
            mNext_pts = mStart_pts;
            mNext_pts_tb = mStart_pts_tb;
        }
        else {
            if (mAvctx->codec_type == AVMEDIA_TYPE_SUBTITLE) {
                int got_frame = 0;
                ret = avcodec_decode_subtitle2(mAvctx, sub, &got_frame, &pkt);
                if (ret < 0) {
                    ret = AVERROR(EAGAIN);
                }
                else {
                    if (got_frame && !pkt.data) {
                        mPacket_pending = 1;
                        av_packet_move_ref(&pkt, &pkt);
                    }
                    ret = got_frame ? 0 : (pkt.data ? AVERROR(EAGAIN) : AVERROR_EOF);
                }
            }
            else {
                if (avcodec_send_packet(mAvctx, &pkt) == AVERROR(EAGAIN)) {
                    av_log(mAvctx, AV_LOG_ERROR, "Receive_frame and send_packet both returned EAGAIN, which is an API violation.\n");
                    mPacket_pending = 1;
                    av_packet_move_ref(&pkt, &pkt);
                }
            }
            av_packet_unref(&pkt);
        }
    }

    return ret;
}

void FFMPEGDecoder::SetDecoderReorderPts ( int pts ) {
    mDecoder_reorder_pts = pts;
}

void  FFMPEGDecoder::Destroy() {    
    av_packet_unref(&mPkt);
    avcodec_free_context(&mAvctx);
}

void FFMPEGDecoder::Abort(FFMPEGFrameQueue* fq) {
    mQueue->Abort();
    fq->Signal();

    try {
        if (mDecoder_tid->joinable()) {
            mDecoder_tid->join();
        }
    }
    catch (std::system_error &) {
    }

    delete mDecoder_tid;

    mQueue->Flush();
}

int FFMPEGDecoder::Start(std::function<int (void *)> thread_func, void *arg ) {
    mQueue->Start();

    std::thread cpp_thread(thread_func, arg);
    mDecoder_tid = new std::thread(std::move(cpp_thread));

    if (!mDecoder_tid) {
        //av_log(NULL, AV_LOG_ERROR, "SDL_CreateThread(): %s\n", SDL_GetError());
        return AVERROR(ENOMEM);
    }
#ifdef TARGET_WIN32
    HANDLE hThread = decoder_tid->native_handle();
    int currentPriority = GetThreadPriority(hThread);

    if (currentPriority != THREAD_PRIORITY_HIGHEST &&
        SetThreadPriority(hThread, THREAD_PRIORITY_HIGHEST) == 0) {
        OFX_LOG(ofx_error, "Error setting the thread priority");
    }
#endif

    return 0;
}

AVCodecContext*  FFMPEGDecoder::GetAvctx() {
    return mAvctx;
}

int  FFMPEGDecoder::GetPktSerial() {
    return mPkt_serial;
}

int  FFMPEGDecoder::GetFinished() {
    return mFinished;
}

void  FFMPEGDecoder::SetTime ( int64_t start_pts, AVRational  start_pts_tb) {
    this->mStart_pts = start_pts;
    this->mStart_pts_tb = start_pts_tb;
}

void  FFMPEGDecoder::SetFinished ( int finished ) {
    this->mFinished = finished;
}

