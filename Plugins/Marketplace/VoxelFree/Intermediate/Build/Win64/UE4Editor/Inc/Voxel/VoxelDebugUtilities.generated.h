// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVoxelWorld;
enum class EVoxelDataType : uint8;
struct FColor;
struct FVoxelIntBox;
struct FLinearColor;
struct FTransform;
#ifdef VOXEL_VoxelDebugUtilities_generated_h
#error "VoxelDebugUtilities.generated.h already included, missing '#pragma once' in VoxelDebugUtilities.h"
#endif
#define VOXEL_VoxelDebugUtilities_generated_h

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawDataOctree); \
	DECLARE_FUNCTION(execDebugVoxelsInsideBounds); \
	DECLARE_FUNCTION(execDrawDebugIntBox);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawDataOctree); \
	DECLARE_FUNCTION(execDebugVoxelsInsideBounds); \
	DECLARE_FUNCTION(execDrawDebugIntBox);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelDebugUtilities(); \
	friend struct Z_Construct_UClass_UVoxelDebugUtilities_Statics; \
public: \
	DECLARE_CLASS(UVoxelDebugUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelDebugUtilities)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelDebugUtilities(); \
	friend struct Z_Construct_UClass_UVoxelDebugUtilities_Statics; \
public: \
	DECLARE_CLASS(UVoxelDebugUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelDebugUtilities)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelDebugUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelDebugUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelDebugUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelDebugUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelDebugUtilities(UVoxelDebugUtilities&&); \
	NO_API UVoxelDebugUtilities(const UVoxelDebugUtilities&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelDebugUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelDebugUtilities(UVoxelDebugUtilities&&); \
	NO_API UVoxelDebugUtilities(const UVoxelDebugUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelDebugUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelDebugUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelDebugUtilities)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_15_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelDebugUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
