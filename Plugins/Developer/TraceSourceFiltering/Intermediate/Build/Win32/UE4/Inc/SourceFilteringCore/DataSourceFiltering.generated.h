// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOURCEFILTERINGCORE_DataSourceFiltering_generated_h
#error "DataSourceFiltering.generated.h already included, missing '#pragma once' in DataSourceFiltering.h"
#endif
#define SOURCEFILTERINGCORE_DataSourceFiltering_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_DataSourceFiltering_h


#define FOREACH_ENUM_EFILTERSETMODE(op) \
	op(EFilterSetMode::AND) \
	op(EFilterSetMode::OR) \
	op(EFilterSetMode::NOT) \
	op(EFilterSetMode::Count) 

enum class EFilterSetMode : uint8;
template<> SOURCEFILTERINGCORE_API UEnum* StaticEnum<EFilterSetMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
