/*************************************************************************
* From https://github.com/bakjos/FFMPEGMedia (Giovanny Gutiérrez)
*************************************************************************/

#include "FFMPEGFrameQueue.h"
#include "FFMPEGFrame.h"


FFMPEGFrameQueue::FFMPEGFrameQueue()
{
    for ( int i = 0; i < FRAME_QUEUE_SIZE; i++) {
        mQueue[i] = new FFMPEGFrame();
    }

    mRindex = 0;
    mWindex = 0;
    mSize = 0;
    mMax_size = 0;
    mKeep_last = 0;
    mRindex_shown = 0;
    mPktq = NULL;
}


FFMPEGFrameQueue::~FFMPEGFrameQueue()
{
    Destroy();
    for (int i = 0; i < FRAME_QUEUE_SIZE; i++) {
        if ( mQueue[i] ) delete mQueue[i];
        mQueue[i] = NULL;
    }
}

int FFMPEGFrameQueue::Init( FFMPEGPacketQueue *pktq, int max_size, int keep_last) {
    this->mPktq = pktq;
    this->mMax_size = FFMIN(max_size, FRAME_QUEUE_SIZE);
    this->mKeep_last = !!keep_last;
    for (int i = 0; i < this->mMax_size; i++)
        if (!(mQueue[i]->Init()))
            return AVERROR(ENOMEM);
    return 0;
}

void FFMPEGFrameQueue::Destroy() {
    
    for (int i = 0; i < mMax_size; i++) {
        FFMPEGFrame *vp = mQueue[i];
        if ( vp) vp->Destroy();
    }
}

void FFMPEGFrameQueue::Signal() {
    mMutex.Lock();
    mCond.signal();
    mMutex.Unlock();
}

FFMPEGFrame *FFMPEGFrameQueue::Peek() {
    return mQueue[(mRindex + mRindex_shown) % mMax_size];
}

FFMPEGFrame *FFMPEGFrameQueue::PeekNext() {
    return mQueue[(mRindex + mRindex_shown + 1) % mMax_size];
}

FFMPEGFrame *FFMPEGFrameQueue::PeekLast() {
    return mQueue[mRindex];
}

FFMPEGFrame *FFMPEGFrameQueue::PeekWritable() {
    mMutex.Lock();
    while (mSize >= mMax_size &&
        !mPktq->IsAbortRequest()) {
        mCond.wait(mMutex);
    }
    mMutex.Unlock();

    if (mPktq->IsAbortRequest())
        return NULL;

    return mQueue[mWindex];
}
FFMPEGFrame *FFMPEGFrameQueue::PeekReadable() {
    mMutex.Lock();
    while (mSize - mRindex_shown <= 0 &&
        !mPktq->IsAbortRequest()) {
        mCond.wait(mMutex);
    }
    mMutex.Unlock();

    if (mPktq->IsAbortRequest())
        return NULL;

    return mQueue[(mRindex + mRindex_shown) % mMax_size];
}

int FFMPEGFrameQueue::QueuePicture( AVFrame *src_frame, double pts, double duration, int64_t pos, int serial) {
    
    FFMPEGFrame *vp = PeekWritable();
    if (!vp )
        return -1;

    vp->UpdateFrame(src_frame, pts, duration, pos, serial);
    av_frame_move_ref(vp->GetFrame(), src_frame);

    Push();
    return 0;
}

void FFMPEGFrameQueue::Push() {
    if (++mWindex == mMax_size)
        mWindex = 0;
    mMutex.Lock();
    mSize++;
    mCond.signal();
    mMutex.Unlock();
}

void FFMPEGFrameQueue::Next() {
    if (mKeep_last && !mRindex_shown) {
        mRindex_shown = 1;
        return;
    }
    mQueue[mRindex]->UnRef();
    if (++mRindex == mMax_size)
        mRindex = 0;
    mMutex.Lock();
    mSize--;
    mCond.signal();
    mMutex.Unlock();
   
}

void FFMPEGFrameQueue::Lock() {
    mMutex.Lock();
}

void FFMPEGFrameQueue::Unlock() {
    mMutex.Unlock();
}

int FFMPEGFrameQueue::GetNumRemaining() {
     return mSize - mRindex_shown;
}

int64_t FFMPEGFrameQueue::GetQueueLastPos() {
    FFMPEGFrame *fp = mQueue[mRindex];
    if (mRindex_shown && fp->GetSerial() == mPktq->GetSerial())
        return fp->GetPos();
    else
        return -1;
}

int  FFMPEGFrameQueue::GetIndexShown() {
    return mRindex_shown;
}
