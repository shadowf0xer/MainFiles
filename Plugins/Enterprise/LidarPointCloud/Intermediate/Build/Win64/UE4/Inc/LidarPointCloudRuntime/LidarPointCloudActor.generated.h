// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULidarPointCloud;
#ifdef LIDARPOINTCLOUDRUNTIME_LidarPointCloudActor_generated_h
#error "LidarPointCloudActor.generated.h already included, missing '#pragma once' in LidarPointCloudActor.h"
#endif
#define LIDARPOINTCLOUDRUNTIME_LidarPointCloudActor_generated_h

#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_SPARSE_DATA
#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPointCloud); \
	DECLARE_FUNCTION(execGetPointCloud);


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPointCloud); \
	DECLARE_FUNCTION(execGetPointCloud);


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALidarPointCloudActor(); \
	friend struct Z_Construct_UClass_ALidarPointCloudActor_Statics; \
public: \
	DECLARE_CLASS(ALidarPointCloudActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(ALidarPointCloudActor)


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesALidarPointCloudActor(); \
	friend struct Z_Construct_UClass_ALidarPointCloudActor_Statics; \
public: \
	DECLARE_CLASS(ALidarPointCloudActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(ALidarPointCloudActor)


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALidarPointCloudActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALidarPointCloudActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALidarPointCloudActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALidarPointCloudActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALidarPointCloudActor(ALidarPointCloudActor&&); \
	NO_API ALidarPointCloudActor(const ALidarPointCloudActor&); \
public:


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALidarPointCloudActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALidarPointCloudActor(ALidarPointCloudActor&&); \
	NO_API ALidarPointCloudActor(const ALidarPointCloudActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALidarPointCloudActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALidarPointCloudActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALidarPointCloudActor)


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PointCloudComponent() { return STRUCT_OFFSET(ALidarPointCloudActor, PointCloudComponent); }


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_11_PROLOG
#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_SPARSE_DATA \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_INCLASS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_SPARSE_DATA \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LidarPointCloudActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDRUNTIME_API UClass* StaticClass<class ALidarPointCloudActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
