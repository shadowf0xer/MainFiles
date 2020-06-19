// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FBox;
class ULidarPointCloud;
struct FLidarPointCloudPoint;
enum class ELidarPointCloudDuplicateHandling : uint8;
class UObject;
struct FLatentActionInfo;
enum class ELidarPointCloudAsyncMode : uint8;
struct FColor;
struct FLidarPointCloudTraceHit;
#ifdef LIDARPOINTCLOUDRUNTIME_LidarPointCloud_generated_h
#error "LidarPointCloud.generated.h already included, missing '#pragma once' in LidarPointCloud.h"
#endif
#define LIDARPOINTCLOUDRUNTIME_LidarPointCloud_generated_h

#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_601_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics; \
	LIDARPOINTCLOUDRUNTIME_API static class UScriptStruct* StaticStruct();


template<> LIDARPOINTCLOUDRUNTIME_API UScriptStruct* StaticStruct<struct FLidarPointCloudTraceHit>();

#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_SPARSE_DATA
#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetVisibilityAsync); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsByRayAsync); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInBoxAsync); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInSphereAsync); \
	DECLARE_FUNCTION(execGetPointsBounds); \
	DECLARE_FUNCTION(execShiftPointsBy); \
	DECLARE_FUNCTION(execMergeSingle); \
	DECLARE_FUNCTION(execMerge); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execRemoveHiddenPoints); \
	DECLARE_FUNCTION(execRemovePointsByRay); \
	DECLARE_FUNCTION(execRemovePointsInBox); \
	DECLARE_FUNCTION(execRemovePointsInSphere); \
	DECLARE_FUNCTION(execRemovePoint); \
	DECLARE_FUNCTION(execInsertPoints); \
	DECLARE_FUNCTION(execInsertPoint); \
	DECLARE_FUNCTION(execExport); \
	DECLARE_FUNCTION(execReimport); \
	DECLARE_FUNCTION(execIsCentered); \
	DECLARE_FUNCTION(execRestoreOriginalCoordinates); \
	DECLARE_FUNCTION(execCenterPoints); \
	DECLARE_FUNCTION(execSetLocationOffset); \
	DECLARE_FUNCTION(execLoadAllNodes); \
	DECLARE_FUNCTION(execIsFullyLoaded); \
	DECLARE_FUNCTION(execRemoveCollision); \
	DECLARE_FUNCTION(execBuildCollision); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execSetSourcePath); \
	DECLARE_FUNCTION(execMarkPointVisibilityDirty); \
	DECLARE_FUNCTION(execApplyColorToPointsByRay); \
	DECLARE_FUNCTION(execApplyColorToFirstPointByRay); \
	DECLARE_FUNCTION(execApplyColorToPointsInBox); \
	DECLARE_FUNCTION(execApplyColorToPointsInSphere); \
	DECLARE_FUNCTION(execApplyColorToAllPoints); \
	DECLARE_FUNCTION(execUnhideAll); \
	DECLARE_FUNCTION(execHideAll); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsByRay); \
	DECLARE_FUNCTION(execSetVisibilityOfFirstPointByRay); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInBox); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInSphere); \
	DECLARE_FUNCTION(execLineTraceMulti); \
	DECLARE_FUNCTION(execLineTraceSingle); \
	DECLARE_FUNCTION(execGetPointsInBoxAsCopies); \
	DECLARE_FUNCTION(execGetPointsInSphereAsCopies); \
	DECLARE_FUNCTION(execGetPointsAsCopies); \
	DECLARE_FUNCTION(execRefreshRendering); \
	DECLARE_FUNCTION(execHasCollisionData); \
	DECLARE_FUNCTION(execRefreshBounds); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetSourcePath); \
	DECLARE_FUNCTION(execGetDataSize); \
	DECLARE_FUNCTION(execGetNumNodes); \
	DECLARE_FUNCTION(execGetNumPoints); \
	DECLARE_FUNCTION(execGetNumLODs);


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetVisibilityAsync); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsByRayAsync); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInBoxAsync); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInSphereAsync); \
	DECLARE_FUNCTION(execGetPointsBounds); \
	DECLARE_FUNCTION(execShiftPointsBy); \
	DECLARE_FUNCTION(execMergeSingle); \
	DECLARE_FUNCTION(execMerge); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execRemoveHiddenPoints); \
	DECLARE_FUNCTION(execRemovePointsByRay); \
	DECLARE_FUNCTION(execRemovePointsInBox); \
	DECLARE_FUNCTION(execRemovePointsInSphere); \
	DECLARE_FUNCTION(execRemovePoint); \
	DECLARE_FUNCTION(execInsertPoints); \
	DECLARE_FUNCTION(execInsertPoint); \
	DECLARE_FUNCTION(execExport); \
	DECLARE_FUNCTION(execReimport); \
	DECLARE_FUNCTION(execIsCentered); \
	DECLARE_FUNCTION(execRestoreOriginalCoordinates); \
	DECLARE_FUNCTION(execCenterPoints); \
	DECLARE_FUNCTION(execSetLocationOffset); \
	DECLARE_FUNCTION(execLoadAllNodes); \
	DECLARE_FUNCTION(execIsFullyLoaded); \
	DECLARE_FUNCTION(execRemoveCollision); \
	DECLARE_FUNCTION(execBuildCollision); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execSetSourcePath); \
	DECLARE_FUNCTION(execMarkPointVisibilityDirty); \
	DECLARE_FUNCTION(execApplyColorToPointsByRay); \
	DECLARE_FUNCTION(execApplyColorToFirstPointByRay); \
	DECLARE_FUNCTION(execApplyColorToPointsInBox); \
	DECLARE_FUNCTION(execApplyColorToPointsInSphere); \
	DECLARE_FUNCTION(execApplyColorToAllPoints); \
	DECLARE_FUNCTION(execUnhideAll); \
	DECLARE_FUNCTION(execHideAll); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsByRay); \
	DECLARE_FUNCTION(execSetVisibilityOfFirstPointByRay); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInBox); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInSphere); \
	DECLARE_FUNCTION(execLineTraceMulti); \
	DECLARE_FUNCTION(execLineTraceSingle); \
	DECLARE_FUNCTION(execGetPointsInBoxAsCopies); \
	DECLARE_FUNCTION(execGetPointsInSphereAsCopies); \
	DECLARE_FUNCTION(execGetPointsAsCopies); \
	DECLARE_FUNCTION(execRefreshRendering); \
	DECLARE_FUNCTION(execHasCollisionData); \
	DECLARE_FUNCTION(execRefreshBounds); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetSourcePath); \
	DECLARE_FUNCTION(execGetDataSize); \
	DECLARE_FUNCTION(execGetNumNodes); \
	DECLARE_FUNCTION(execGetNumPoints); \
	DECLARE_FUNCTION(execGetNumLODs);


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULidarPointCloud, NO_API)


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarPointCloud(); \
	friend struct Z_Construct_UClass_ULidarPointCloud_Statics; \
public: \
	DECLARE_CLASS(ULidarPointCloud, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULidarPointCloud) \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ULidarPointCloud*>(this); }


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_INCLASS \
private: \
	static void StaticRegisterNativesULidarPointCloud(); \
	friend struct Z_Construct_UClass_ULidarPointCloud_Statics; \
public: \
	DECLARE_CLASS(ULidarPointCloud, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULidarPointCloud) \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ULidarPointCloud*>(this); }


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarPointCloud(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarPointCloud) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarPointCloud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarPointCloud); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULidarPointCloud(ULidarPointCloud&&); \
	NO_API ULidarPointCloud(const ULidarPointCloud&); \
public:


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULidarPointCloud(ULidarPointCloud&&); \
	NO_API ULidarPointCloud(const ULidarPointCloud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarPointCloud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarPointCloud); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarPointCloud)


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SourcePath() { return STRUCT_OFFSET(ULidarPointCloud, SourcePath); } \
	FORCEINLINE static uint32 __PPO__ClassificationsImported() { return STRUCT_OFFSET(ULidarPointCloud, ClassificationsImported); } \
	FORCEINLINE static uint32 __PPO__BodySetup() { return STRUCT_OFFSET(ULidarPointCloud, BodySetup); }


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_85_PROLOG
#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_SPARSE_DATA \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_INCLASS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_SPARSE_DATA \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDRUNTIME_API UClass* StaticClass<class ULidarPointCloud>();

#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_SPARSE_DATA
#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLineTraceMulti); \
	DECLARE_FUNCTION(execLineTraceSingle); \
	DECLARE_FUNCTION(execAlignClouds); \
	DECLARE_FUNCTION(execExportPointCloudToFile); \
	DECLARE_FUNCTION(execCreatePointCloudFromData); \
	DECLARE_FUNCTION(execCreatePointCloudFromFile); \
	DECLARE_FUNCTION(execCreatePointCloudEmpty);


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLineTraceMulti); \
	DECLARE_FUNCTION(execLineTraceSingle); \
	DECLARE_FUNCTION(execAlignClouds); \
	DECLARE_FUNCTION(execExportPointCloudToFile); \
	DECLARE_FUNCTION(execCreatePointCloudFromData); \
	DECLARE_FUNCTION(execCreatePointCloudFromFile); \
	DECLARE_FUNCTION(execCreatePointCloudEmpty);


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarPointCloudBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULidarPointCloudBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULidarPointCloudBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULidarPointCloudBlueprintLibrary)


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_INCLASS \
private: \
	static void StaticRegisterNativesULidarPointCloudBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULidarPointCloudBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULidarPointCloudBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULidarPointCloudBlueprintLibrary)


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarPointCloudBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarPointCloudBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarPointCloudBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarPointCloudBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULidarPointCloudBlueprintLibrary(ULidarPointCloudBlueprintLibrary&&); \
	NO_API ULidarPointCloudBlueprintLibrary(const ULidarPointCloudBlueprintLibrary&); \
public:


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarPointCloudBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULidarPointCloudBlueprintLibrary(ULidarPointCloudBlueprintLibrary&&); \
	NO_API ULidarPointCloudBlueprintLibrary(const ULidarPointCloudBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarPointCloudBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarPointCloudBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarPointCloudBlueprintLibrary)


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_624_PROLOG
#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_SPARSE_DATA \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_INCLASS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_SPARSE_DATA \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_627_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDRUNTIME_API UClass* StaticClass<class ULidarPointCloudBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
