// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVoxelWorld;
struct FVoxelIntBox;
class APlayerController;
struct FVoxelToolManagerTickData;
#ifdef VOXEL_VoxelToolManager_generated_h
#error "VoxelToolManager.generated.h already included, missing '#pragma once' in VoxelToolManager.h"
#endif
#define VOXEL_VoxelToolManager_generated_h

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_491_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelToolManager_RevertSettings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FVoxelToolManager_SphereSettingsBase Super;


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelToolManager_RevertSettings>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_367_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelToolManager_MeshSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelToolManager_MeshSettings>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_355_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelToolManager_SphereSettings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FVoxelToolManager_SphereSettingsBase Super;


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelToolManager_SphereSettings>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_319_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelToolManager_SphereSettingsBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelToolManager_SphereSettingsBase>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_298_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelToolManager_SmoothSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelToolManager_SmoothSettings>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_263_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelToolManager_LevelSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelToolManager_LevelSettings>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_239_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelToolManager_TrimSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelToolManager_TrimSettings>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelToolManager_FlattenSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelToolManager_FlattenSettings>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelToolManager_SurfaceSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelToolManager_SurfaceSettings>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelToolManagerTickData_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


template<> VOXEL_API UScriptStruct* StaticStruct<struct FVoxelToolManagerTickData>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_20_DELEGATE \
struct _Script_Voxel_eventVoxelToolManager_OnBoundsUpdated_Parms \
{ \
	AVoxelWorld* World; \
	FVoxelIntBox Bounds; \
}; \
static inline void FVoxelToolManager_OnBoundsUpdated_DelegateWrapper(const FMulticastScriptDelegate& VoxelToolManager_OnBoundsUpdated, AVoxelWorld* World, FVoxelIntBox Bounds) \
{ \
	_Script_Voxel_eventVoxelToolManager_OnBoundsUpdated_Parms Parms; \
	Parms.World=World; \
	Parms.Bounds=Bounds; \
	VoxelToolManager_OnBoundsUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRecreateToolInstance); \
	DECLARE_FUNCTION(execClearToolInstance); \
	DECLARE_FUNCTION(execSimpleTick); \
	DECLARE_FUNCTION(execTick);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRecreateToolInstance); \
	DECLARE_FUNCTION(execClearToolInstance); \
	DECLARE_FUNCTION(execSimpleTick); \
	DECLARE_FUNCTION(execTick);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelToolManager(); \
	friend struct Z_Construct_UClass_UVoxelToolManager_Statics; \
public: \
	DECLARE_CLASS(UVoxelToolManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelToolManager)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelToolManager(); \
	friend struct Z_Construct_UClass_UVoxelToolManager_Statics; \
public: \
	DECLARE_CLASS(UVoxelToolManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelToolManager)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelToolManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelToolManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelToolManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelToolManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelToolManager(UVoxelToolManager&&); \
	NO_API UVoxelToolManager(const UVoxelToolManager&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelToolManager(UVoxelToolManager&&); \
	NO_API UVoxelToolManager(const UVoxelToolManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelToolManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelToolManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelToolManager)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VoxelWorld() { return STRUCT_OFFSET(UVoxelToolManager, VoxelWorld); } \
	FORCEINLINE static uint32 __PPO__SimpleTick_LastKnownMousePosition() { return STRUCT_OFFSET(UVoxelToolManager, SimpleTick_LastKnownMousePosition); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_506_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h_509_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelToolManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelTools_VoxelToolManager_h


#define FOREACH_ENUM_EVOXELTOOLMANAGERMASKTYPE(op) \
	op(EVoxelToolManagerMaskType::Texture) \
	op(EVoxelToolManagerMaskType::WorldGenerator) 

enum class EVoxelToolManagerMaskType : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelToolManagerMaskType>();

#define FOREACH_ENUM_EVOXELTOOLMANAGERALIGNMENT(op) \
	op(EVoxelToolManagerAlignment::Surface) \
	op(EVoxelToolManagerAlignment::View) \
	op(EVoxelToolManagerAlignment::Ground) \
	op(EVoxelToolManagerAlignment::Up) 

enum class EVoxelToolManagerAlignment : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelToolManagerAlignment>();

#define FOREACH_ENUM_EVOXELTOOLMANAGERFALLOFF(op) \
	op(EVoxelToolManagerFalloff::Linear) \
	op(EVoxelToolManagerFalloff::Smooth) \
	op(EVoxelToolManagerFalloff::Spherical) \
	op(EVoxelToolManagerFalloff::Tip) 

enum class EVoxelToolManagerFalloff : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelToolManagerFalloff>();

#define FOREACH_ENUM_EVOXELTOOLMANAGERTOOL(op) \
	op(EVoxelToolManagerTool::Surface) \
	op(EVoxelToolManagerTool::Flatten) \
	op(EVoxelToolManagerTool::Trim) \
	op(EVoxelToolManagerTool::Level) \
	op(EVoxelToolManagerTool::Smooth) \
	op(EVoxelToolManagerTool::Sphere) \
	op(EVoxelToolManagerTool::Mesh) \
	op(EVoxelToolManagerTool::Revert) \
	op(EVoxelToolManagerTool::Custom) 

enum class EVoxelToolManagerTool : uint8;
template<> VOXEL_API UEnum* StaticEnum<EVoxelToolManagerTool>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
