// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXEL_VoxelWorldGeneratorPicker_generated_h
#error "VoxelWorldGeneratorPicker.generated.h already included, missing '#pragma once' in VoxelWorldGeneratorPicker.h"
#endif
#define VOXEL_VoxelWorldGeneratorPicker_generated_h

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldGenerators_VoxelWorldGeneratorPicker_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelTransformableWorldGeneratorPicker>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldGenerators_VoxelWorldGeneratorPicker_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelWorldGeneratorPicker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorldGenerators_VoxelWorldGeneratorPicker_h


#define FOREACH_ENUM_EVOXELWORLDGENERATORPICKERTYPE(op) \
	op(EVoxelWorldGeneratorPickerType::Class) \
	op(EVoxelWorldGeneratorPickerType::Object) 

enum class EVoxelWorldGeneratorPickerType : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelWorldGeneratorPickerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
