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
struct FVector;
struct FVoxelPaintMaterial;
#ifdef VOXEL_VoxelSphereTools_generated_h
#error "VoxelSphereTools.generated.h already included, missing '#pragma once' in VoxelSphereTools.h"
#endif
#define VOXEL_VoxelSphereTools_generated_h

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRevertSphereToGeneratorAsync); \
	DECLARE_FUNCTION(execRevertSphereAsync); \
	DECLARE_FUNCTION(execTrimSphereAsync); \
	DECLARE_FUNCTION(execSharpenSphereAsync); \
	DECLARE_FUNCTION(execSmoothSphereAsync); \
	DECLARE_FUNCTION(execApplyKernelSphereAsync); \
	DECLARE_FUNCTION(execSetMaterialSphereAsync); \
	DECLARE_FUNCTION(execRemoveSphereAsync); \
	DECLARE_FUNCTION(execAddSphereAsync); \
	DECLARE_FUNCTION(execSetValueSphereAsync); \
	DECLARE_FUNCTION(execRevertSphereToGenerator); \
	DECLARE_FUNCTION(execRevertSphere); \
	DECLARE_FUNCTION(execTrimSphere); \
	DECLARE_FUNCTION(execSharpenSphere); \
	DECLARE_FUNCTION(execSmoothSphere); \
	DECLARE_FUNCTION(execApplyKernelSphere); \
	DECLARE_FUNCTION(execSetMaterialSphere); \
	DECLARE_FUNCTION(execRemoveSphere); \
	DECLARE_FUNCTION(execAddSphere); \
	DECLARE_FUNCTION(execSetValueSphere);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRevertSphereToGeneratorAsync); \
	DECLARE_FUNCTION(execRevertSphereAsync); \
	DECLARE_FUNCTION(execTrimSphereAsync); \
	DECLARE_FUNCTION(execSharpenSphereAsync); \
	DECLARE_FUNCTION(execSmoothSphereAsync); \
	DECLARE_FUNCTION(execApplyKernelSphereAsync); \
	DECLARE_FUNCTION(execSetMaterialSphereAsync); \
	DECLARE_FUNCTION(execRemoveSphereAsync); \
	DECLARE_FUNCTION(execAddSphereAsync); \
	DECLARE_FUNCTION(execSetValueSphereAsync); \
	DECLARE_FUNCTION(execRevertSphereToGenerator); \
	DECLARE_FUNCTION(execRevertSphere); \
	DECLARE_FUNCTION(execTrimSphere); \
	DECLARE_FUNCTION(execSharpenSphere); \
	DECLARE_FUNCTION(execSmoothSphere); \
	DECLARE_FUNCTION(execApplyKernelSphere); \
	DECLARE_FUNCTION(execSetMaterialSphere); \
	DECLARE_FUNCTION(execRemoveSphere); \
	DECLARE_FUNCTION(execAddSphere); \
	DECLARE_FUNCTION(execSetValueSphere);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelSphereTools(); \
	friend struct Z_Construct_UClass_UVoxelSphereTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelSphereTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelSphereTools)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelSphereTools(); \
	friend struct Z_Construct_UClass_UVoxelSphereTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelSphereTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelSphereTools)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSphereTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSphereTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSphereTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSphereTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelSphereTools(UVoxelSphereTools&&); \
	NO_API UVoxelSphereTools(const UVoxelSphereTools&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSphereTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelSphereTools(UVoxelSphereTools&&); \
	NO_API UVoxelSphereTools(const UVoxelSphereTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSphereTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSphereTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSphereTools)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_16_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelSphereTools>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelSphereTools_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
