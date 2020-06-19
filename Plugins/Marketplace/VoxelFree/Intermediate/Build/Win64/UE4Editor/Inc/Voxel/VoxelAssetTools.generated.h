// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVoxelWorld;
struct FVoxelPlaceableItemReference;
class UObject;
struct FLatentActionInfo;
struct FVoxelIntBox;
class UVoxelDataAsset;
struct FVoxelMaterial;
struct FVector;
enum class EVoxelAssetMergeMode : uint8;
class UVoxelTransformableWorldGenerator;
 
struct FTransform;
#ifdef VOXEL_VoxelAssetTools_generated_h
#error "VoxelAssetTools.generated.h already included, missing '#pragma once' in VoxelAssetTools.h"
#endif
#define VOXEL_VoxelAssetTools_generated_h

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPlaceableItemReference_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelPlaceableItemReference>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemovePlaceableItem); \
	DECLARE_FUNCTION(execAddDisableEditsBoxAsync); \
	DECLARE_FUNCTION(execAddDisableEditsBox); \
	DECLARE_FUNCTION(execCreateDataAssetFromWorldSection); \
	DECLARE_FUNCTION(execSetDataAssetMaterial); \
	DECLARE_FUNCTION(execInvertDataAsset); \
	DECLARE_FUNCTION(execImportDataAssetFastAsync); \
	DECLARE_FUNCTION(execImportDataAssetFast); \
	DECLARE_FUNCTION(execImportAssetAsync); \
	DECLARE_FUNCTION(execImportAsset); \
	DECLARE_FUNCTION(execImportModifierAssetAsync); \
	DECLARE_FUNCTION(execImportModifierAsset); \
	DECLARE_FUNCTION(execImportAssetAsReferenceAsync); \
	DECLARE_FUNCTION(execImportAssetAsReference);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemovePlaceableItem); \
	DECLARE_FUNCTION(execAddDisableEditsBoxAsync); \
	DECLARE_FUNCTION(execAddDisableEditsBox); \
	DECLARE_FUNCTION(execCreateDataAssetFromWorldSection); \
	DECLARE_FUNCTION(execSetDataAssetMaterial); \
	DECLARE_FUNCTION(execInvertDataAsset); \
	DECLARE_FUNCTION(execImportDataAssetFastAsync); \
	DECLARE_FUNCTION(execImportDataAssetFast); \
	DECLARE_FUNCTION(execImportAssetAsync); \
	DECLARE_FUNCTION(execImportAsset); \
	DECLARE_FUNCTION(execImportModifierAssetAsync); \
	DECLARE_FUNCTION(execImportModifierAsset); \
	DECLARE_FUNCTION(execImportAssetAsReferenceAsync); \
	DECLARE_FUNCTION(execImportAssetAsReference);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelAssetTools(); \
	friend struct Z_Construct_UClass_UVoxelAssetTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelAssetTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelAssetTools)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelAssetTools(); \
	friend struct Z_Construct_UClass_UVoxelAssetTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelAssetTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelAssetTools)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelAssetTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelAssetTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelAssetTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelAssetTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelAssetTools(UVoxelAssetTools&&); \
	NO_API UVoxelAssetTools(const UVoxelAssetTools&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelAssetTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelAssetTools(UVoxelAssetTools&&); \
	NO_API UVoxelAssetTools(const UVoxelAssetTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelAssetTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelAssetTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelAssetTools)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_41_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelAssetTools>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h


#define FOREACH_ENUM_EVOXELASSETMERGEMODE(op) \
	op(EVoxelAssetMergeMode::AllValues) \
	op(EVoxelAssetMergeMode::AllMaterials) \
	op(EVoxelAssetMergeMode::AllValuesAndAllMaterials) \
	op(EVoxelAssetMergeMode::InnerValues) \
	op(EVoxelAssetMergeMode::InnerMaterials) \
	op(EVoxelAssetMergeMode::InnerValuesAndInnerMaterials) 

enum class EVoxelAssetMergeMode : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelAssetMergeMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
