// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXEL_VoxelConfigEnums_generated_h
#error "VoxelConfigEnums.generated.h already included, missing '#pragma once' in VoxelConfigEnums.h"
#endif
#define VOXEL_VoxelConfigEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelConfigEnums_h


#define FOREACH_ENUM_EVOXELRGBHARDNESS(op) \
	op(EVoxelRGBHardness::FourWayBlend) \
	op(EVoxelRGBHardness::FiveWayBlend) \
	op(EVoxelRGBHardness::R) \
	op(EVoxelRGBHardness::G) \
	op(EVoxelRGBHardness::B) \
	op(EVoxelRGBHardness::A) \
	op(EVoxelRGBHardness::U0) \
	op(EVoxelRGBHardness::U1) \
	op(EVoxelRGBHardness::V0) \
	op(EVoxelRGBHardness::V1) 

enum class EVoxelRGBHardness : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelRGBHardness>();

#define FOREACH_ENUM_EVOXELDATATYPE(op) \
	op(EVoxelDataType::Values) \
	op(EVoxelDataType::Materials) \
	op(EVoxelDataType::Foliage) 

enum class EVoxelDataType : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelDataType>();

#define FOREACH_ENUM_EVOXELSAMPLERMODE(op) \
	op(EVoxelSamplerMode::Clamp) \
	op(EVoxelSamplerMode::Tile) 

enum class EVoxelSamplerMode : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelSamplerMode>();

#define FOREACH_ENUM_EVOXELSPAWNERACTORSPAWNTYPE(op) \
	op(EVoxelSpawnerActorSpawnType::All) \
	op(EVoxelSpawnerActorSpawnType::OnlyFloating) 

enum class EVoxelSpawnerActorSpawnType : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelSpawnerActorSpawnType>();

#define FOREACH_ENUM_EVOXELRGBA(op) \
	op(EVoxelRGBA::R) \
	op(EVoxelRGBA::G) \
	op(EVoxelRGBA::B) \
	op(EVoxelRGBA::A) 

enum class EVoxelRGBA : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelRGBA>();

#define FOREACH_ENUM_EVOXELUVCONFIG(op) \
	op(EVoxelUVConfig::GlobalUVs) \
	op(EVoxelUVConfig::PackWorldUpInUVs) \
	op(EVoxelUVConfig::PerVoxelUVs) \
	op(EVoxelUVConfig::Max) 

enum class EVoxelUVConfig : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelUVConfig>();

#define FOREACH_ENUM_EVOXELMATERIALCONFIG(op) \
	op(EVoxelMaterialConfig::RGB) \
	op(EVoxelMaterialConfig::SingleIndex) \
	op(EVoxelMaterialConfig::DoubleIndex_DEPRECATED) \
	op(EVoxelMaterialConfig::MultiIndex) 

enum class EVoxelMaterialConfig : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelMaterialConfig>();

#define FOREACH_ENUM_EVOXELNORMALCONFIG(op) \
	op(EVoxelNormalConfig::NoNormal) \
	op(EVoxelNormalConfig::GradientNormal) \
	op(EVoxelNormalConfig::MeshNormal) 

enum class EVoxelNormalConfig : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelNormalConfig>();

#define FOREACH_ENUM_EVOXELRENDERTYPE(op) \
	op(EVoxelRenderType::MarchingCubes) \
	op(EVoxelRenderType::Cubic) \
	op(EVoxelRenderType::SurfaceNets) 

enum class EVoxelRenderType : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelRenderType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
