// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVoxelIntBox;
struct FIntVector;
struct FTransform;
struct FVector;
#ifdef VOXEL_VoxelIntBoxLibrary_generated_h
#error "VoxelIntBoxLibrary.generated.h already included, missing '#pragma once' in VoxelIntBoxLibrary.h"
#endif
#define VOXEL_VoxelIntBoxLibrary_generated_h

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotEqual_IntBoxIntBox); \
	DECLARE_FUNCTION(execEqualEqual_IntBoxIntBox); \
	DECLARE_FUNCTION(execScale); \
	DECLARE_FUNCTION(execAddBox); \
	DECLARE_FUNCTION(execAddPoint); \
	DECLARE_FUNCTION(execApplyTransform); \
	DECLARE_FUNCTION(execExtend_IntVector); \
	DECLARE_FUNCTION(execExtend); \
	DECLARE_FUNCTION(execOverlap); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execContains); \
	DECLARE_FUNCTION(execIntersect); \
	DECLARE_FUNCTION(execGetCorners); \
	DECLARE_FUNCTION(execGetCenter); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execIsVectorInsideBox); \
	DECLARE_FUNCTION(execIsIntVectorInsideBox); \
	DECLARE_FUNCTION(execMakeBoxFromLocalPositionAndRadius); \
	DECLARE_FUNCTION(execConv_IntBoxToString); \
	DECLARE_FUNCTION(execRemoveTranslation); \
	DECLARE_FUNCTION(execCenter); \
	DECLARE_FUNCTION(execTranslateBox); \
	DECLARE_FUNCTION(execInfiniteBox); \
	DECLARE_FUNCTION(execBreakIntBox); \
	DECLARE_FUNCTION(execMakeIntBox);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotEqual_IntBoxIntBox); \
	DECLARE_FUNCTION(execEqualEqual_IntBoxIntBox); \
	DECLARE_FUNCTION(execScale); \
	DECLARE_FUNCTION(execAddBox); \
	DECLARE_FUNCTION(execAddPoint); \
	DECLARE_FUNCTION(execApplyTransform); \
	DECLARE_FUNCTION(execExtend_IntVector); \
	DECLARE_FUNCTION(execExtend); \
	DECLARE_FUNCTION(execOverlap); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execContains); \
	DECLARE_FUNCTION(execIntersect); \
	DECLARE_FUNCTION(execGetCorners); \
	DECLARE_FUNCTION(execGetCenter); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execIsVectorInsideBox); \
	DECLARE_FUNCTION(execIsIntVectorInsideBox); \
	DECLARE_FUNCTION(execMakeBoxFromLocalPositionAndRadius); \
	DECLARE_FUNCTION(execConv_IntBoxToString); \
	DECLARE_FUNCTION(execRemoveTranslation); \
	DECLARE_FUNCTION(execCenter); \
	DECLARE_FUNCTION(execTranslateBox); \
	DECLARE_FUNCTION(execInfiniteBox); \
	DECLARE_FUNCTION(execBreakIntBox); \
	DECLARE_FUNCTION(execMakeIntBox);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelIntBoxLibrary(); \
	friend struct Z_Construct_UClass_UVoxelIntBoxLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoxelIntBoxLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelIntBoxLibrary)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelIntBoxLibrary(); \
	friend struct Z_Construct_UClass_UVoxelIntBoxLibrary_Statics; \
public: \
	DECLARE_CLASS(UVoxelIntBoxLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelIntBoxLibrary)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelIntBoxLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelIntBoxLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelIntBoxLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelIntBoxLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelIntBoxLibrary(UVoxelIntBoxLibrary&&); \
	NO_API UVoxelIntBoxLibrary(const UVoxelIntBoxLibrary&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelIntBoxLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelIntBoxLibrary(UVoxelIntBoxLibrary&&); \
	NO_API UVoxelIntBoxLibrary(const UVoxelIntBoxLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelIntBoxLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelIntBoxLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelIntBoxLibrary)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_11_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelIntBoxLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelIntBoxLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
