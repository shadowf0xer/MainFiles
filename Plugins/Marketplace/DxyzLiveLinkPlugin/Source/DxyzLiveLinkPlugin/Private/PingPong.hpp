/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* This algorithm is provided by the Dynamixyz Interface Kit (DIK)
* Authors:
* Louis-Paul Cordier (lp.cordier@dynamixyz.com)
**************************************************************************/

#pragma once

enum {
    PINGPONG_PING = 1,
    PINGPONG_PONG = 2
};


template<typename E>
class PingPongBuffer
{
public:
    PingPongBuffer()
        : mPing(NULL)
		, mPong(NULL)
		, isDataAvailable(false)
		, mCurrentBuf(PINGPONG_PING) {};

    ~PingPongBuffer() {};

    int setPing(E &iPing);
    int setPong(E &iPong);
    void resetPingPong();

    //Accessor
    void writeRequest(E* &oData);
    void writeCancelRequest(E* &oData);
    void writeRelease(E* &oData);

    void readRequest(E* &oData);
    void readRelease(E* &oData);

    void read(E &oObject);

protected:
    E* mPing;
    E* mPong;

    bool isDataAvailable;
    int mCurrentBuf;

    FCriticalSection mtx_ping;
    FCriticalSection mtx_pong;
    FCriticalSection mtx_status;
};

/*---------------------------------------------------------------------------*/

template<typename E>
inline int PingPongBuffer<E>::setPing(E& iPing)
{
    mPing = &iPing;
    return 0;
}

template<typename E>
inline int PingPongBuffer<E>::setPong(E& iPong)
{
    mPong = &iPong;
    return 0;
}

template<typename E>
inline void PingPongBuffer<E>::resetPingPong()
{
    mPing = mPong = NULL;
}

template<typename E>
inline void PingPongBuffer<E>::writeRequest(E* &oData)
{
    mtx_status.Lock();
    if (mCurrentBuf == PINGPONG_PING)
    {
        mtx_pong.Lock(); //TODO: check errors? Add trylock?
        mtx_status.Unlock();
        oData = mPong;
    }
    else
    {
        mtx_ping.Lock();
        mtx_status.Unlock();
        oData = mPing;
    }
}

template<typename E>
inline void PingPongBuffer<E>::writeCancelRequest(E* &oData)
{
    mtx_status.Lock();
    if (oData == mPong)
    {
        mtx_pong.Unlock();
        mtx_status.Unlock();
    }
    else //oData is mPing
    {
        mtx_ping.Unlock();
        mtx_status.Unlock();
    }
}

template<typename E>
inline void PingPongBuffer<E>::writeRelease(E* & oData)
{
    mtx_status.Lock();
    if (mCurrentBuf == PINGPONG_PING)
    {
        check(mPong == oData);

        mCurrentBuf = PINGPONG_PONG;
        mtx_status.Unlock();
        mtx_pong.Unlock();
    }
    else // if(PINGPONG_PONG)
    {
        check(mPing == oData);

        mCurrentBuf = PINGPONG_PING;
        mtx_status.Unlock();
        mtx_ping.Unlock();
    }
}

template<typename E>
inline void PingPongBuffer<E>::readRequest(E* & oData)
{
    mtx_status.Lock();
    if (mCurrentBuf == PINGPONG_PING)
    {
        mtx_ping.Lock();
        mtx_status.Unlock();
        oData = mPing;
    }
    else // if(PINGPONG_PONG)
    {
        mtx_pong.Lock();
        mtx_status.Unlock();
        oData = mPong;
    }
}

template<typename E>
inline void PingPongBuffer<E>::readRelease(E* & oData)
{
    if (mPing == oData)
    {
        mtx_ping.Unlock();
    }
    else // if(PINGPONG_PONG)
    {
        mtx_pong.Unlock();
    }
}

template<typename E>
inline void PingPongBuffer<E>::read(E &oObject)
{
    mtx_status.Lock();
    if (mCurrentBuf == PINGPONG_PING)
    {
        mtx_ping.Lock();
        mtx_status.Unlock();
        memcpy(&oObject, mPing, sizeof(E));
        mtx_ping.Unlock();
    }
    else // if(PINGPONG_PONG)
    {
        mtx_pong.Lock();
        mtx_status.Unlock();
        memcpy(&oObject, mPong, sizeof(E));
        mtx_pong.Unlock();
    }
}