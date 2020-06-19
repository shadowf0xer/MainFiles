/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Louis-Paul Cordier (lp.cordier@dynamixyz.com)
**************************************************************************/

#pragma once

class NetworkBuffer
{
public:
    NetworkBuffer()
        : pktBuf(nullptr)
        , pktBufSize(0)
        , isValid(false) {};

    ~NetworkBuffer() { freeBuffer(); }

    bool reallocBuffer(size_t iBufSize);
    void freeBuffer();

    char*   pktBuf;
    size_t  pktBufSize;
    bool    isValid;
};
