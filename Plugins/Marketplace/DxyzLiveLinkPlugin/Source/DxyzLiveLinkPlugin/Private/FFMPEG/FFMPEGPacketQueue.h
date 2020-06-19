/*************************************************************************
* From https://github.com/bakjos/FFMPEGMedia (Giovanny Gutiérrez)
*************************************************************************/

#pragma once

#include "CondWait.h"
#include <mutex>

struct MyAVPacketList;
struct AVPacket;


class FFMPEGPacketQueue
{
public:
    FFMPEGPacketQueue();
    ~FFMPEGPacketQueue();

    int Get(AVPacket *pkt, int block, int *serial);
    int Put(AVPacket *pkt);
    int PutFlush();
    int PutNullPacket(int stream_index);
    void Start();
    void Abort();
    void Flush();
    int GetSize();
    bool IsAbortRequest();
    int GetSerial();
    int GetNumPackets();
    int GetDuration();
    static bool IsFlushPacket( void* data);

protected:

    AVPacket* FlushPkt();
    int PutPrivate(AVPacket *pkt);

    static AVPacket* mFlush_pkt_queue;

    MyAVPacketList *mFirst_pkt, *mLast_pkt;
    int mNb_packets;
    int mSize;
    int64_t mDuration;
    bool mAbort_request;
    int mSerial;
    
    FCriticalSection mMutex;
    CondWait mCond;

    //friend class FFMPEGClock; DxyzStreamReader : no nead here

};

