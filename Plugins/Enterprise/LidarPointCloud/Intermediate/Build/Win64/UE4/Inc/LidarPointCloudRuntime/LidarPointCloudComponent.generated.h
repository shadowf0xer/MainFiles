// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULidarPointCloud;
struct FVector;
struct FColor;
struct FLidarPointCloudPoint;
#ifdef LIDARPOINTCLOUDRUNTIME_LidarPointCloudComponent_generated_h
#error "LidarPointCloudComponent.generated.h already included, missing '#pragma once' in LidarPointCloudComponent.h"
#endif
#define LIDARPOINTCLOUDRUNTIME_LidarPointCloudComponent_generated_h

#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_SPARSE_DATA
#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyRenderingParameters); \
	DECLARE_FUNCTION(execSetPointCloud); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsByRayAsync); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInBoxAsync); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInSphereAsync); \
	DECLARE_FUNCTION(execRemovePointsByRay); \
	DECLARE_FUNCTION(execRemovePointsInBox); \
	DECLARE_FUNCTION(execRemovePointsInSphere); \
	DECLARE_FUNCTION(execApplyColorToPointsByRay); \
	DECLARE_FUNCTION(execApplyColorToFirstPointByRay); \
	DECLARE_FUNCTION(execApplyColorToPointsInBox); \
	DECLARE_FUNCTION(execApplyColorToPointsInSphere); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsByRay); \
	DECLARE_FUNCTION(execSetVisibilityOfFirstPointByRay); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInBox); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInSphere); \
	DECLARE_FUNCTION(execLineTraceMulti); \
	DECLARE_FUNCTION(execLineTraceSingle); \
	DECLARE_FUNCTION(execGetPointsInBoxAsCopies); \
	DECLARE_FUNCTION(execGetPointsInSphereAsCopies); \
	DECLARE_FUNCTION(execGetPointCloud);


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyRenderingParameters); \
	DECLARE_FUNCTION(execSetPointCloud); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsByRayAsync); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInBoxAsync); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInSphereAsync); \
	DECLARE_FUNCTION(execRemovePointsByRay); \
	DECLARE_FUNCTION(execRemovePointsInBox); \
	DECLARE_FUNCTION(execRemovePointsInSphere); \
	DECLARE_FUNCTION(execApplyColorToPointsByRay); \
	DECLARE_FUNCTION(execApplyColorToFirstPointByRay); \
	DECLARE_FUNCTION(execApplyColorToPointsInBox); \
	DECLARE_FUNCTION(execApplyColorToPointsInSphere); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsByRay); \
	DECLARE_FUNCTION(execSetVisibilityOfFirstPointByRay); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInBox); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInSphere); \
	DECLARE_FUNCTION(execLineTraceMulti); \
	DECLARE_FUNCTION(execLineTraceSingle); \
	DECLARE_FUNCTION(execGetPointsInBoxAsCopies); \
	DECLARE_FUNCTION(execGetPointsInSphereAsCopies); \
	DECLARE_FUNCTION(execGetPointCloud);


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarPointCloudComponent(); \
	friend struct Z_Construct_UClass_ULidarPointCloudComponent_Statics; \
public: \
	DECLARE_CLASS(ULidarPointCloudComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULidarPointCloudComponent)


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_INCLASS \
private: \
	static void StaticRegisterNativesULidarPointCloudComponent(); \
	friend struct Z_Construct_UClass_ULidarPointCloudComponent_Statics; \
public: \
	DECLARE_CLASS(ULidarPointCloudComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULidarPointCloudComponent)


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarPointCloudComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarPointCloudComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarPointCloudComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarPointCloudComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULidarPointCloudComponent(ULidarPointCloudComponent&&); \
	NO_API ULidarPointCloudComponent(const ULidarPointCloudComponent&); \
public:


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULidarPointCloudComponent(ULidarPointCloudComponent&&); \
	NO_API ULidarPointCloudComponent(const ULidarPointCloudComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarPointCloudComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarPointCloudComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarPointCloudComponent)


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PointCloud() { return STRUCT_OFFSET(ULidarPointCloudComponent, PointCloud); } \
	FORCEINLINE static uint32 __PPO__CustomMaterial() { return STRUCT_OFFSET(ULidarPointCloudComponent, CustomMaterial); } \
	FORCEINLINE static uint32 __PPO__Material() { return STRUCT_OFFSET(ULidarPointCloudComponent, Material); } \
	FORCEINLINE static uint32 __PPO__MasterMaterial() { return STRUCT_OFFSET(ULidarPointCloudComponent, MasterMaterial); } \
	FORCEINLINE static uint32 __PPO__MasterMaterialMasked() { return STRUCT_OFFSET(ULidarPointCloudComponent, MasterMaterialMasked); }


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_35_PROLOG
#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_SPARSE_DATA \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_INCLASS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_SPARSE_DATA \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDRUNTIME_API UClass* StaticClass<class ULidarPointCloudComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h


#define FOREACH_ENUM_ELIDARPOINTCLOUDSPRITESHAPE(op) \
	op(ELidarPointCloudSpriteShape::Square) \
	op(ELidarPointCloudSpriteShape::Circle) 

enum class ELidarPointCloudSpriteShape : uint8;
template<> LIDARPOINTCLOUDRUNTIME_API UEnum* StaticEnum<ELidarPointCloudSpriteShape>();

#define FOREACH_ENUM_ELIDARPOINTCLOUDCOLORATIONMODE(op) \
	op(ELidarPointCloudColorationMode::None) \
	op(ELidarPointCloudColorationMode::Data) \
	op(ELidarPointCloudColorationMode::Elevation) \
	op(ELidarPointCloudColorationMode::Position) \
	op(ELidarPointCloudColorationMode::Classification) 

enum class ELidarPointCloudColorationMode : uint8;
template<> LIDARPOINTCLOUDRUNTIME_API UEnum* StaticEnum<ELidarPointCloudColorationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
