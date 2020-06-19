// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGICNODERUNTIME_MagicNodeLogger_generated_h
#error "MagicNodeLogger.generated.h already included, missing '#pragma once' in MagicNodeLogger.h"
#endif
#define MAGICNODERUNTIME_MagicNodeLogger_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MagicNode_Source_MagicNodeRuntime_Public_MagicNodeLogger_h


#define FOREACH_ENUM_EMGCSEVERITY(op) \
	op(EMGCSeverity::Fatal) \
	op(EMGCSeverity::Error) \
	op(EMGCSeverity::Warning) \
	op(EMGCSeverity::Info) 

enum class EMGCSeverity : uint8;
template<> MAGICNODERUNTIME_API UEnum* StaticEnum<EMGCSeverity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
