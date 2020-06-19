/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "DxyzDocHandler.h"

DECLARE_LOG_CATEGORY_EXTERN(DxyzLogEditor, Log, All);

class UBlueprint;

class FDxyzLiveLinkPluginEditor : public IModuleInterface
{
public:
    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    void OnEngineInit(TSharedPtr<SWindow> InRootWindow, bool bIsNewProjectWindow);

private:
    FDelegateHandle LoadedDelegateHandle;
    TWeakObjectPtr<UDxyzDocHandler> Settings;
};
