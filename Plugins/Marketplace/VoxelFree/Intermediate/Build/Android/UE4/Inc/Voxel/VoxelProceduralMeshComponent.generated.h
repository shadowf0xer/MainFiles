// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVoxelIntBox;
#ifdef VOXEL_VoxelProceduralMeshComponent_generated_h
#error "VoxelProceduralMeshComponent.generated.h already included, missing '#pragma once' in VoxelProceduralMeshComponent.h"
#endif
#define VOXEL_VoxelProceduralMeshComponent_generated_h

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVoxelCollisionsFrozen); \
	DECLARE_FUNCTION(execAreVoxelCollisionsFrozen);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVoxelCollisionsFrozen); \
	DECLARE_FUNCTION(execAreVoxelCollisionsFrozen);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_EVENT_PARMS \
	struct VoxelProceduralMeshComponent_eventInitChunk_Parms \
	{ \
		uint8 ChunkLOD; \
		FVoxelIntBox ChunkBounds; \
	};


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_CALLBACK_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelProceduralMeshComponent(); \
	friend struct Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelProceduralMeshComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelProceduralMeshComponent)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelProceduralMeshComponent(); \
	friend struct Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelProceduralMeshComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelProceduralMeshComponent)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelProceduralMeshComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelProceduralMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelProceduralMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelProceduralMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelProceduralMeshComponent(UVoxelProceduralMeshComponent&&); \
	NO_API UVoxelProceduralMeshComponent(const UVoxelProceduralMeshComponent&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelProceduralMeshComponent(UVoxelProceduralMeshComponent&&); \
	NO_API UVoxelProceduralMeshComponent(const UVoxelProceduralMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelProceduralMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelProceduralMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelProceduralMeshComponent)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BodySetup() { return STRUCT_OFFSET(UVoxelProceduralMeshComponent, BodySetup); } \
	FORCEINLINE static uint32 __PPO__BodySetupBeingCooked() { return STRUCT_OFFSET(UVoxelProceduralMeshComponent, BodySetupBeingCooked); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_38_PROLOG \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_EVENT_PARMS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_CALLBACK_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_CALLBACK_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelProceduralMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
