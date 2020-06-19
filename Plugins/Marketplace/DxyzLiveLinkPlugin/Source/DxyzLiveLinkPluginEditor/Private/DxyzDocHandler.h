/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SWindow.h"
#include "DxyzDocHandler.generated.h"

UCLASS(Config=Editor)
class UDxyzDocHandler : public UObject
{
    GENERATED_BODY()

    UDxyzDocHandler();
    virtual ~UDxyzDocHandler();

public:
    void ShowDocWindowIfNeeded();

public:
    UPROPERTY(Config)
        bool ShowDocPopup;

protected:
    void OnCheckStateChanged(ECheckBoxState InNewState);
};