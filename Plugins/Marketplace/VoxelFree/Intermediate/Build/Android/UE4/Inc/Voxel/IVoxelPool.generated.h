// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXEL_IVoxelPool_generated_h
#error "IVoxelPool.generated.h already included, missing '#pragma once' in IVoxelPool.h"
#endif
#define VOXEL_IVoxelPool_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_Voxel_Public_IVoxelPool_h


#define FOREACH_ENUM_EVOXELTASKTYPE(op) \
	op(EVoxelTaskType::ChunksMeshing) \
	op(EVoxelTaskType::CollisionsChunksMeshing) \
	op(EVoxelTaskType::VisibleChunksMeshing) \
	op(EVoxelTaskType::VisibleCollisionsChunksMeshing) \
	op(EVoxelTaskType::CollisionCooking) \
	op(EVoxelTaskType::FoliageBuild) \
	op(EVoxelTaskType::HISMBuild) \
	op(EVoxelTaskType::AsyncEditFunctions) \
	op(EVoxelTaskType::MeshMerge) \
	op(EVoxelTaskType::RenderOctree) 

enum class EVoxelTaskType : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelTaskType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
