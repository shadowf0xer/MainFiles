// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXELGRAPH_VoxelAxisDependencies_generated_h
#error "VoxelAxisDependencies.generated.h already included, missing '#pragma once' in VoxelAxisDependencies.h"
#endif
#define VOXELGRAPH_VoxelAxisDependencies_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelAxisDependencies_h


#define FOREACH_ENUM_EVOXELFUNCTIONAXISDEPENDENCIES(op) \
	op(EVoxelFunctionAxisDependencies::X) \
	op(EVoxelFunctionAxisDependencies::XYWithCache) \
	op(EVoxelFunctionAxisDependencies::XYWithoutCache) \
	op(EVoxelFunctionAxisDependencies::XYZWithCache) \
	op(EVoxelFunctionAxisDependencies::XYZWithoutCache) 

enum class EVoxelFunctionAxisDependencies : uint8;
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelFunctionAxisDependencies>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
