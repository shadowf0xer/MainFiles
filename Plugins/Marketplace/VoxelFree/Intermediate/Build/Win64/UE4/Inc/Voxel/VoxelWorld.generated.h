// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVoxelMultiplayerInterface;
struct FIntVector;
struct FVector;
enum class EVoxelWorldCoordinatesRounding : uint8;
class UVoxelWorldGenerator;
#ifdef VOXEL_VoxelWorld_generated_h
#error "VoxelWorld.generated.h already included, missing '#pragma once' in VoxelWorld.h"
#endif
#define VOXEL_VoxelWorld_generated_h

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_45_DELEGATE \
static inline void FOnMaxFoliageInstancesReached_DelegateWrapper(const FMulticastScriptDelegate& OnMaxFoliageInstancesReached) \
{ \
	OnMaxFoliageInstancesReached.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_44_DELEGATE \
static inline void FOnWorldDestroyed_DelegateWrapper(const FMulticastScriptDelegate& OnWorldDestroyed) \
{ \
	OnWorldDestroyed.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_43_DELEGATE \
static inline void FOnWorldLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnWorldLoaded) \
{ \
	OnWorldLoaded.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMultiplayerInterfaceInstance); \
	DECLARE_FUNCTION(execCreateMultiplayerInterfaceInstance); \
	DECLARE_FUNCTION(execAddOffset); \
	DECLARE_FUNCTION(execSetOffset); \
	DECLARE_FUNCTION(execGetNeighboringPositions); \
	DECLARE_FUNCTION(execLocalToGlobalFloatBP); \
	DECLARE_FUNCTION(execLocalToGlobal); \
	DECLARE_FUNCTION(execGlobalToLocalFloatBP); \
	DECLARE_FUNCTION(execGlobalToLocal); \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execIsCreated); \
	DECLARE_FUNCTION(execSetWorldSize); \
	DECLARE_FUNCTION(execSetRenderOctreeDepth); \
	DECLARE_FUNCTION(execSetWorldGeneratorClass); \
	DECLARE_FUNCTION(execSetWorldGeneratorObject); \
	DECLARE_FUNCTION(execDestroyWorld); \
	DECLARE_FUNCTION(execCreateWorld);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMultiplayerInterfaceInstance); \
	DECLARE_FUNCTION(execCreateMultiplayerInterfaceInstance); \
	DECLARE_FUNCTION(execAddOffset); \
	DECLARE_FUNCTION(execSetOffset); \
	DECLARE_FUNCTION(execGetNeighboringPositions); \
	DECLARE_FUNCTION(execLocalToGlobalFloatBP); \
	DECLARE_FUNCTION(execLocalToGlobal); \
	DECLARE_FUNCTION(execGlobalToLocalFloatBP); \
	DECLARE_FUNCTION(execGlobalToLocal); \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execIsCreated); \
	DECLARE_FUNCTION(execSetWorldSize); \
	DECLARE_FUNCTION(execSetRenderOctreeDepth); \
	DECLARE_FUNCTION(execSetWorldGeneratorClass); \
	DECLARE_FUNCTION(execSetWorldGeneratorObject); \
	DECLARE_FUNCTION(execDestroyWorld); \
	DECLARE_FUNCTION(execCreateWorld);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AVoxelWorld, NO_API)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelWorld(); \
	friend struct Z_Construct_UClass_AVoxelWorld_Statics; \
public: \
	DECLARE_CLASS(AVoxelWorld, AVoxelWorldInterface, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelWorld) \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AVoxelWorld*>(this); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_INCLASS \
private: \
	static void StaticRegisterNativesAVoxelWorld(); \
	friend struct Z_Construct_UClass_AVoxelWorld_Statics; \
public: \
	DECLARE_CLASS(AVoxelWorld, AVoxelWorldInterface, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelWorld) \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AVoxelWorld*>(this); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelWorld(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelWorld) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelWorld); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelWorld); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelWorld(AVoxelWorld&&); \
	NO_API AVoxelWorld(const AVoxelWorld&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelWorld(AVoxelWorld&&); \
	NO_API AVoxelWorld(const AVoxelWorld&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelWorld); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelWorld); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelWorld)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MultiplayerInterfaceInstance() { return STRUCT_OFFSET(AVoxelWorld, MultiplayerInterfaceInstance); } \
	FORCEINLINE static uint32 __PPO__bIsToggled() { return STRUCT_OFFSET(AVoxelWorld, bIsToggled); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_50_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class AVoxelWorld>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelWorld_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
