// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBox;
struct FVector;
struct FLinearColor;
struct FColor;
#ifdef POINTCLOUD_PointCloudComponent_generated_h
#error "PointCloudComponent.generated.h already included, missing '#pragma once' in PointCloudComponent.h"
#endif
#define POINTCLOUD_PointCloudComponent_generated_h

#define Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_SPARSE_DATA
#define Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPointsOutsideBox); \
	DECLARE_FUNCTION(execGetPointsInBox); \
	DECLARE_FUNCTION(execSetPointSize); \
	DECLARE_FUNCTION(execSetPointColor); \
	DECLARE_FUNCTION(execClearPointCloud); \
	DECLARE_FUNCTION(execSetPointCloudWithColors); \
	DECLARE_FUNCTION(execSetPointCloud); \
	DECLARE_FUNCTION(execSetIsVisible);


#define Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPointsOutsideBox); \
	DECLARE_FUNCTION(execGetPointsInBox); \
	DECLARE_FUNCTION(execSetPointSize); \
	DECLARE_FUNCTION(execSetPointColor); \
	DECLARE_FUNCTION(execClearPointCloud); \
	DECLARE_FUNCTION(execSetPointCloudWithColors); \
	DECLARE_FUNCTION(execSetPointCloud); \
	DECLARE_FUNCTION(execSetIsVisible);


#define Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointCloudComponent(); \
	friend struct Z_Construct_UClass_UPointCloudComponent_Statics; \
public: \
	DECLARE_CLASS(UPointCloudComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PointCloud"), NO_API) \
	DECLARE_SERIALIZER(UPointCloudComponent)


#define Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPointCloudComponent(); \
	friend struct Z_Construct_UClass_UPointCloudComponent_Statics; \
public: \
	DECLARE_CLASS(UPointCloudComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PointCloud"), NO_API) \
	DECLARE_SERIALIZER(UPointCloudComponent)


#define Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointCloudComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointCloudComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCloudComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCloudComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointCloudComponent(UPointCloudComponent&&); \
	NO_API UPointCloudComponent(const UPointCloudComponent&); \
public:


#define Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointCloudComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointCloudComponent(UPointCloudComponent&&); \
	NO_API UPointCloudComponent(const UPointCloudComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCloudComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCloudComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointCloudComponent)


#define Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WorldBounds() { return STRUCT_OFFSET(UPointCloudComponent, WorldBounds); }


#define Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_15_PROLOG
#define Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_SPARSE_DATA \
	Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_RPC_WRAPPERS \
	Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_INCLASS \
	Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_SPARSE_DATA \
	Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PointCloudComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POINTCLOUD_API UClass* StaticClass<class UPointCloudComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
