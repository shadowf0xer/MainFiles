/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#include "DxyzLiveLinkPlugin.h"
#include "DxyzLiveLinkSource.h"
#include "Misc/CoreDelegates.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "Runtime/Launch/Resources/Version.h" 

//General Log
DEFINE_LOG_CATEGORY(DxyzLog);

void FDxyzLiveLinkPlugin::StartupModule()
{
	mInitialized = false;

	_loadFFmpegLibraries();

    // Load Live Link module and read json config
    if (!FDxyzLiveLinkSource::SReadJsonConfig(true))
    {
        // If we were called before engine has fully initialized, call again sources initialisation. If not this won't do anything as it already happened
        FCoreDelegates::OnPostEngineInit.AddRaw(this, &FDxyzLiveLinkPlugin::OnPostEngineInit);
    }

	// Save config before exiting
	FCoreDelegates::OnPreExit.AddRaw(this, &FDxyzLiveLinkPlugin::OnPreExit);
}

void FDxyzLiveLinkPlugin::ShutdownModule()
{ 
	_freeFFmpegLibraries();
}

void FDxyzLiveLinkPlugin::OnPostEngineInit()
{
    FDxyzLiveLinkSource::SReadJsonConfig();
}

void FDxyzLiveLinkPlugin::OnPreExit()
{
	FDxyzLiveLinkSource::SBuildJsonConfig();
}

void FDxyzLiveLinkPlugin::_loadFFmpegLibraries()
{
    FString vBaseDir = IPluginManager::Get().FindPlugin("DxyzLiveLinkPlugin")->GetBaseDir();
    FString vFFMpegPath;

#if PLATFORM_WINDOWS && PLATFORM_64BITS
	vFFMpegPath = FPaths::Combine(*vBaseDir, TEXT("ThirdParty/ffmpeg/win64/bin"));
    mAVUtilHandle = FPlatformProcess::GetDllHandle(*FPaths::Combine(vFFMpegPath, FString("avutil-56.dll")));
    mSWResampleHandle = FPlatformProcess::GetDllHandle(*FPaths::Combine(vFFMpegPath, FString("swresample-3.dll")));
    mAVCodecHandle = FPlatformProcess::GetDllHandle(*FPaths::Combine(vFFMpegPath, FString("avcodec-58.dll")));
    mAVFormatHandle = FPlatformProcess::GetDllHandle(*FPaths::Combine(vFFMpegPath, FString("avformat-58.dll")));
    mSWScaleHandle = FPlatformProcess::GetDllHandle(*FPaths::Combine(vFFMpegPath, FString("swscale-5.dll")));
#elif PLATFORM_MAC
    vFFMpegPath = FPaths::Combine(*vBaseDir, TEXT("ThirdParty/ffmpeg/mac/lib"));
    mAVUtilHandle = FPlatformProcess::GetDllHandle(*FPaths::Combine(vFFMpegPath, FString("libavutil.56.dylib")));
    mSWResampleHandle = FPlatformProcess::GetDllHandle(*FPaths::Combine(vFFMpegPath, FString("libswresample.3.dylib")));
    mAVCodecHandle = FPlatformProcess::GetDllHandle(*FPaths::Combine(vFFMpegPath, FString("libavcodec.58.dylib")));
    mAVFormatHandle = FPlatformProcess::GetDllHandle(*FPaths::Combine(vFFMpegPath, FString("libavformat.58.dylib")));
    mSWScaleHandle = FPlatformProcess::GetDllHandle(*FPaths::Combine(vFFMpegPath, FString("libswscale.5.dylib")));

#endif //PLATFORM_WINDOWS && PLATFORM_64BITS

#if LIBAVCODEC_VERSION_INT < AV_VERSION_INT(58, 9, 100)
	av_register_all();
#endif

	avformat_network_init();
	av_log_set_level(AV_LOG_DEBUG);

	mInitialized = true;
}

void FDxyzLiveLinkPlugin::_freeFFmpegLibraries()
{
	if (!mInitialized)
		return;

	if (mSWScaleHandle)
		FPlatformProcess::FreeDllHandle(mSWScaleHandle);
	if (mAVFormatHandle)
		FPlatformProcess::FreeDllHandle(mAVFormatHandle);
	if (mAVCodecHandle)
		FPlatformProcess::FreeDllHandle(mAVCodecHandle);
	if (mSWResampleHandle)
		FPlatformProcess::FreeDllHandle(mSWResampleHandle);
	if (mAVUtilHandle)
		FPlatformProcess::FreeDllHandle(mAVUtilHandle);

	mInitialized = false;
}

IMPLEMENT_MODULE(FDxyzLiveLinkPlugin, DxyzLiveLinkPlugin);