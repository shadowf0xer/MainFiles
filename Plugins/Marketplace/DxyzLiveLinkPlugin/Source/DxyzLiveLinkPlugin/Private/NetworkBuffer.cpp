/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Louis-Paul Cordier (lp.cordier@dynamixyz.com)
**************************************************************************/

#include "NetworkBuffer.hpp"

bool NetworkBuffer::reallocBuffer(size_t iBufSize)
{
    pktBuf = (char*)FMemory::Realloc(pktBuf, iBufSize);

    if (nullptr == pktBuf)
        return false; // malloc' error.

                      // else
    pktBufSize = iBufSize;

    return true;
}



void NetworkBuffer::freeBuffer()
{
    if (nullptr != pktBuf)
    {
        FMemory::Free((char*)pktBuf);
        pktBuf = nullptr;
        pktBufSize = 0;
    }
}
