// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXELGRAPH_VoxelNoiseNodesEnums_generated_h
#error "VoxelNoiseNodesEnums.generated.h already included, missing '#pragma once' in VoxelNoiseNodesEnums.h"
#endif
#define VOXELGRAPH_VoxelNoiseNodesEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_VoxelGraph_Public_VoxelNodes_VoxelNoiseNodesEnums_h


#define FOREACH_ENUM_ECELLULARRETURNTYPE(op) \
	op(ECellularReturnType::CellValue) \
	op(ECellularReturnType::Distance) \
	op(ECellularReturnType::Distance2) \
	op(ECellularReturnType::Distance2Add) \
	op(ECellularReturnType::Distance2Sub) \
	op(ECellularReturnType::Distance2Mul) \
	op(ECellularReturnType::Distance2Div) 

enum class ECellularReturnType : uint8;
template<> VOXELGRAPH_API UEnum* StaticEnum<ECellularReturnType>();

#define FOREACH_ENUM_ECELLULARDISTANCEFUNCTION(op) \
	op(ECellularDistanceFunction::Euclidean) \
	op(ECellularDistanceFunction::Manhattan) \
	op(ECellularDistanceFunction::Natural) 

enum class ECellularDistanceFunction : uint8;
template<> VOXELGRAPH_API UEnum* StaticEnum<ECellularDistanceFunction>();

#define FOREACH_ENUM_EINTERP(op) \
	op(EInterp::Linear) \
	op(EInterp::Hermite) \
	op(EInterp::Quintic) 

enum class EInterp : uint8;
template<> VOXELGRAPH_API UEnum* StaticEnum<EInterp>();

#define FOREACH_ENUM_EFRACTALTYPE(op) \
	op(EFractalType::FBM) \
	op(EFractalType::Billow) \
	op(EFractalType::RigidMulti) 

enum class EFractalType : uint8;
template<> VOXELGRAPH_API UEnum* StaticEnum<EFractalType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
