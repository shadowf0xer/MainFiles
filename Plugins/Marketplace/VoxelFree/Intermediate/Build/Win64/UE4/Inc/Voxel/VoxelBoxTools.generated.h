// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLatentActionInfo;
class AVoxelWorld;
struct FVoxelIntBox;
struct FVoxelPaintMaterial;
#ifdef VOXEL_VoxelBoxTools_generated_h
#error "VoxelBoxTools.generated.h already included, missing '#pragma once' in VoxelBoxTools.h"
#endif
#define VOXEL_VoxelBoxTools_generated_h

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMaterialBoxAsync); \
	DECLARE_FUNCTION(execRemoveBoxAsync); \
	DECLARE_FUNCTION(execAddBoxAsync); \
	DECLARE_FUNCTION(execSetValueBoxAsync); \
	DECLARE_FUNCTION(execSetMaterialBox); \
	DECLARE_FUNCTION(execRemoveBox); \
	DECLARE_FUNCTION(execAddBox); \
	DECLARE_FUNCTION(execSetValueBox);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaterialBoxAsync); \
	DECLARE_FUNCTION(execRemoveBoxAsync); \
	DECLARE_FUNCTION(execAddBoxAsync); \
	DECLARE_FUNCTION(execSetValueBoxAsync); \
	DECLARE_FUNCTION(execSetMaterialBox); \
	DECLARE_FUNCTION(execRemoveBox); \
	DECLARE_FUNCTION(execAddBox); \
	DECLARE_FUNCTION(execSetValueBox);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelBoxTools(); \
	friend struct Z_Construct_UClass_UVoxelBoxTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelBoxTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelBoxTools)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelBoxTools(); \
	friend struct Z_Construct_UClass_UVoxelBoxTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelBoxTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelBoxTools)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelBoxTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelBoxTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelBoxTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelBoxTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelBoxTools(UVoxelBoxTools&&); \
	NO_API UVoxelBoxTools(const UVoxelBoxTools&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelBoxTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelBoxTools(UVoxelBoxTools&&); \
	NO_API UVoxelBoxTools(const UVoxelBoxTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelBoxTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelBoxTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelBoxTools)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_17_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelBoxTools>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelBoxTools_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
