// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVoxelFloatTexture;
#ifdef VOXEL_VoxelTextureTools_generated_h
#error "VoxelTextureTools.generated.h already included, missing '#pragma once' in VoxelTextureTools.h"
#endif
#define VOXEL_VoxelTextureTools_generated_h

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMaximum); \
	DECLARE_FUNCTION(execMinimum);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMaximum); \
	DECLARE_FUNCTION(execMinimum);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelTextureTools(); \
	friend struct Z_Construct_UClass_UVoxelTextureTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelTextureTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelTextureTools)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelTextureTools(); \
	friend struct Z_Construct_UClass_UVoxelTextureTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelTextureTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelTextureTools)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelTextureTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelTextureTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelTextureTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelTextureTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelTextureTools(UVoxelTextureTools&&); \
	NO_API UVoxelTextureTools(const UVoxelTextureTools&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelTextureTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelTextureTools(UVoxelTextureTools&&); \
	NO_API UVoxelTextureTools(const UVoxelTextureTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelTextureTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelTextureTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelTextureTools)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_11_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelTextureTools>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
