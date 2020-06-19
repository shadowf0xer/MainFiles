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

extern  "C" {
#include "libavformat/avformat.h"
}

//General Log
DECLARE_LOG_CATEGORY_EXTERN(DxyzLog, Log, All);

class FDxyzLiveLinkPlugin : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
    void OnPostEngineInit();
	void OnPreExit();

private:
	void _loadFFmpegLibraries();
	void _freeFFmpegLibraries();
	
	void* mAVCodecHandle;
	void* mAVFormatHandle;
	void* mAVUtilHandle;
	void* mSWScaleHandle;
	void* mSWResampleHandle;

	/** Whether the module has been initialized. */
	bool mInitialized;
};
