// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXELGRAPH_VoxelPinCategory_generated_h
#error "VoxelPinCategory.generated.h already included, missing '#pragma once' in VoxelPinCategory.h"
#endif
#define VOXELGRAPH_VoxelPinCategory_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelPinCategory_h


#define FOREACH_ENUM_EVOXELDATAPINCATEGORY(op) \
	op(EVoxelDataPinCategory::Boolean) \
	op(EVoxelDataPinCategory::Int) \
	op(EVoxelDataPinCategory::Float) \
	op(EVoxelDataPinCategory::Material) \
	op(EVoxelDataPinCategory::Color) 

enum class EVoxelDataPinCategory : uint8;
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelDataPinCategory>();

#define FOREACH_ENUM_EVOXELPINCATEGORY(op) \
	op(EVoxelPinCategory::Exec) \
	op(EVoxelPinCategory::Boolean) \
	op(EVoxelPinCategory::Int) \
	op(EVoxelPinCategory::Float) \
	op(EVoxelPinCategory::Material) \
	op(EVoxelPinCategory::Color) \
	op(EVoxelPinCategory::Seed) \
	op(EVoxelPinCategory::Wildcard) 

enum class EVoxelPinCategory : uint8;
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelPinCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
