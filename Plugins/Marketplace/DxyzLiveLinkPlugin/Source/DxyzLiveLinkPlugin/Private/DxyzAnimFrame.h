/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Louis-Paul Cordier (lp.cordier@dynamixyz.com)
**************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "DxyzAnimFrame.generated.h"

UCLASS(Blueprintable, hideCategories = AnimInstance, BlueprintType)
class UDxyzAnimFrame : public UObject
{
    GENERATED_BODY()

public:
    UDxyzAnimFrame();
    virtual ~UDxyzAnimFrame();

    // Buffer allocation methods.
    bool            reallocBuffer(size_t iBufSize);
    void            freeBuffer();

public:
    unsigned int    frameID;

    void*           coeffBuffer;
    size_t          coeffBufferSize;

    unsigned int    TCBuffer[4];
};


inline bool UDxyzAnimFrame::reallocBuffer(size_t iBufSize)
{
    if (iBufSize == coeffBufferSize)
        return true;

    coeffBuffer = FMemory::Realloc(coeffBuffer, iBufSize);

    if (nullptr == coeffBuffer)
        return false; // malloc' error.

                      // else
    coeffBufferSize = iBufSize;

    return true;
}
