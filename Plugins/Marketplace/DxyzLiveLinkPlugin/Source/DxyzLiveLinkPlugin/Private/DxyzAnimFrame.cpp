/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Louis-Paul Cordier (lp.cordier@dynamixyz.com)
**************************************************************************/

#include "DxyzAnimFrame.h"

UDxyzAnimFrame::UDxyzAnimFrame()
    : frameID(0)
    , coeffBuffer(nullptr)
    , coeffBufferSize(0)
{
    FMemory::Memset(TCBuffer, 0, sizeof(TCBuffer));
}


UDxyzAnimFrame::~UDxyzAnimFrame()
{
    freeBuffer();
}


void UDxyzAnimFrame::freeBuffer()
{
    if (coeffBuffer != nullptr)
    {
        FMemory::Free(coeffBuffer);
        coeffBuffer = nullptr;
        coeffBufferSize = 0;
    }
}


