// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIDARPOINTCLOUDRUNTIME_LidarPointCloudShared_generated_h
#error "LidarPointCloudShared.generated.h already included, missing '#pragma once' in LidarPointCloudShared.h"
#endif
#define LIDARPOINTCLOUDRUNTIME_LidarPointCloudShared_generated_h

#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudShared_h_175_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LIDARPOINTCLOUDRUNTIME_API UScriptStruct* StaticStruct<struct FLidarPointCloudPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudShared_h


#define FOREACH_ENUM_ELIDARPOINTCLOUDASYNCMODE(op) \
	op(ELidarPointCloudAsyncMode::Success) \
	op(ELidarPointCloudAsyncMode::Failure) \
	op(ELidarPointCloudAsyncMode::Progress) 

enum class ELidarPointCloudAsyncMode : uint8;
template<> LIDARPOINTCLOUDRUNTIME_API UEnum* StaticEnum<ELidarPointCloudAsyncMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
