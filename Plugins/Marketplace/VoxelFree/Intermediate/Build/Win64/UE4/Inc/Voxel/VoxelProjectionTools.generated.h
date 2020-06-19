// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVoxelWorld;
struct FVoxelProjectionHit;
struct FVoxelSurfaceEditsVoxels;
struct FVector;
struct FIntVector;
class UObject;
struct FLatentActionInfo;
struct FVoxelLineTraceParameters;
enum class EVoxelProjectionShape : uint8;
class AActor;
struct FLinearColor;
#ifdef VOXEL_VoxelProjectionTools_generated_h
#error "VoxelProjectionTools.generated.h already included, missing '#pragma once' in VoxelProjectionTools.h"
#endif
#define VOXEL_VoxelProjectionTools_generated_h

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelProjectionHit>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelLineTraceParameters>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateSurfaceVoxelsFromHitsWithExactValues); \
	DECLARE_FUNCTION(execCreateSurfaceVoxelsFromHits); \
	DECLARE_FUNCTION(execGetHitsAveragePosition); \
	DECLARE_FUNCTION(execGetHitsAverageNormal); \
	DECLARE_FUNCTION(execGetHitsPositions); \
	DECLARE_FUNCTION(execFindProjectionVoxelsAsync); \
	DECLARE_FUNCTION(execFindProjectionVoxels); \
	DECLARE_FUNCTION(execMakeVoxelLineTraceParameters);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateSurfaceVoxelsFromHitsWithExactValues); \
	DECLARE_FUNCTION(execCreateSurfaceVoxelsFromHits); \
	DECLARE_FUNCTION(execGetHitsAveragePosition); \
	DECLARE_FUNCTION(execGetHitsAverageNormal); \
	DECLARE_FUNCTION(execGetHitsPositions); \
	DECLARE_FUNCTION(execFindProjectionVoxelsAsync); \
	DECLARE_FUNCTION(execFindProjectionVoxels); \
	DECLARE_FUNCTION(execMakeVoxelLineTraceParameters);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelProjectionTools(); \
	friend struct Z_Construct_UClass_UVoxelProjectionTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelProjectionTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelProjectionTools)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelProjectionTools(); \
	friend struct Z_Construct_UClass_UVoxelProjectionTools_Statics; \
public: \
	DECLARE_CLASS(UVoxelProjectionTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelProjectionTools)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelProjectionTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelProjectionTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelProjectionTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelProjectionTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelProjectionTools(UVoxelProjectionTools&&); \
	NO_API UVoxelProjectionTools(const UVoxelProjectionTools&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelProjectionTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelProjectionTools(UVoxelProjectionTools&&); \
	NO_API UVoxelProjectionTools(const UVoxelProjectionTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelProjectionTools); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelProjectionTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelProjectionTools)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_68_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelProjectionTools>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h


#define FOREACH_ENUM_EVOXELPROJECTIONSHAPE(op) \
	op(EVoxelProjectionShape::Circle) \
	op(EVoxelProjectionShape::Square) 

enum class EVoxelProjectionShape : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelProjectionShape>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
