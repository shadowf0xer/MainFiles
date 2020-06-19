/*************************************************************************
* From https://github.com/bakjos/FFMPEGMedia (Giovanny Gutiérrez)
*************************************************************************/

#include "FFMPEGPacketQueue.h"

extern "C" {
    #include <inttypes.h>
    #include "libavcodec/avcodec.h"
}

struct MyAVPacketList {
    AVPacket pkt;
    struct MyAVPacketList *next;
    int serial;
};

typedef struct MyAVPacketList MyAVPacketList;

AVPacket* FFMPEGPacketQueue::mFlush_pkt_queue = NULL;
std::mutex  mFlush_pkt_queue_mutex;

FFMPEGPacketQueue::FFMPEGPacketQueue()
{
    
    mFirst_pkt = NULL;
    mLast_pkt = NULL;
    mNb_packets = 0;
    mSize = 0;
    mDuration = 0;
    mAbort_request = true;
    mSerial = 0;
}


FFMPEGPacketQueue::~FFMPEGPacketQueue()
{
     Flush();
}

AVPacket* FFMPEGPacketQueue::FlushPkt() {
    if ( mFlush_pkt_queue == NULL) {
        mFlush_pkt_queue_mutex.lock();
        if ( mFlush_pkt_queue == NULL) {
            mFlush_pkt_queue = new AVPacket();
            av_init_packet(mFlush_pkt_queue);
            mFlush_pkt_queue->data = (uint8_t *)mFlush_pkt_queue;
        }
        mFlush_pkt_queue_mutex.unlock();
    }
    return mFlush_pkt_queue;
}

int FFMPEGPacketQueue::Put(AVPacket *pkt) {
    int ret;

    mMutex.Lock();
    ret = PutPrivate( pkt);
    mMutex.Unlock();

    if (pkt != FlushPkt() && ret < 0)
        av_packet_unref(pkt);

    return ret;
}

int FFMPEGPacketQueue::PutNullPacket(int stream_index) {
    AVPacket pkt1, *pkt = &pkt1;
    av_init_packet(pkt);
    pkt->data = NULL;
    pkt->size = 0;
    pkt->stream_index = stream_index;
    return Put(pkt);
}

int FFMPEGPacketQueue::PutPrivate(AVPacket *pkt) {
    MyAVPacketList *pkt1;

    if (mAbort_request)
        return -1;

    pkt1 = new MyAVPacketList();
    if (!pkt1)
        return -1;
    pkt1->pkt = *pkt;
    pkt1->next = NULL;
    if (pkt == FlushPkt())
        mSerial++;
    pkt1->serial = mSerial;

    if (!mLast_pkt)
        mFirst_pkt = pkt1;
    else
        mLast_pkt->next = pkt1;
    mLast_pkt = pkt1;
    mNb_packets++;
    mSize += pkt1->pkt.size + sizeof(*pkt1);
    mDuration += pkt1->pkt.duration;
    /* XXX: should duplicate packet data in DV case */
    mCond.signal();
    return 0;
}

int  FFMPEGPacketQueue::Get(AVPacket *pkt, int block, int *serial) {
    MyAVPacketList *pkt1;
    int ret;

    mMutex.Lock();

    for (;;) {
        if (mAbort_request) {
            ret = -1;
            break;
        }

        pkt1 = mFirst_pkt;
        if (pkt1) {
            mFirst_pkt = pkt1->next;
            if (!mFirst_pkt)
                mLast_pkt = NULL;
            mNb_packets--;
            mSize -= pkt1->pkt.size + sizeof(*pkt1);
            mDuration -= pkt1->pkt.duration;
            *pkt = pkt1->pkt;
            if (serial)
                *serial = pkt1->serial;
            delete pkt1;
            ret = 1;
            break;
        }
        else if (!block) {
            ret = 0;
            break;
        }
        else {
            mCond.wait(mMutex);
        }
    }
    mMutex.Unlock();
    return ret;
}


void FFMPEGPacketQueue::Abort() {
    mMutex.Lock();
    mAbort_request = true;
    mCond.signal();
    mMutex.Unlock();
}

void FFMPEGPacketQueue::Start() {
    mMutex.Lock();
    mAbort_request = false;
    PutPrivate(FlushPkt());
    mMutex.Unlock();
}

void FFMPEGPacketQueue::Flush() {
    MyAVPacketList *pkt, *pkt1;

    mMutex.Lock();
    for (pkt = mFirst_pkt; pkt; pkt = pkt1) {
        pkt1 = pkt->next;
        av_packet_unref(&pkt->pkt);
        delete pkt;
    }
    mLast_pkt = NULL;
    mFirst_pkt = NULL;
    mNb_packets = 0;
    mSize = 0;
    mDuration = 0;
    mMutex.Unlock();
}

int FFMPEGPacketQueue::PutFlush() {
    return Put(FlushPkt());
}

int FFMPEGPacketQueue::GetSize() {
    return mSize;
}

int FFMPEGPacketQueue::GetSerial() {
    return mSerial;
}

bool FFMPEGPacketQueue::IsAbortRequest() {
    return mAbort_request;
}

int FFMPEGPacketQueue::GetNumPackets() {
    return mNb_packets;
}

int FFMPEGPacketQueue::GetDuration() {
    return mDuration;    
}

bool FFMPEGPacketQueue::IsFlushPacket( void* data) {
    if ( mFlush_pkt_queue != NULL) {
        return mFlush_pkt_queue->data == data;
    }
    return false;
}



