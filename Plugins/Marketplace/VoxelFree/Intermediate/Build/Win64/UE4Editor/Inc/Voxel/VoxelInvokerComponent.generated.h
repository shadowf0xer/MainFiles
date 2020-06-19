// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVoxelInvokerSettings;
class AVoxelWorldInterface;
struct FIntVector;
struct FVector;
#ifdef VOXEL_VoxelInvokerComponent_generated_h
#error "VoxelInvokerComponent.generated.h already included, missing '#pragma once' in VoxelInvokerComponent.h"
#endif
#define VOXEL_VoxelInvokerComponent_generated_h

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_RPC_WRAPPERS \
	virtual FVoxelInvokerSettings GetInvokerSettings_Implementation(AVoxelWorldInterface* VoxelWorld) const; \
	virtual FIntVector GetInvokerVoxelPosition_Implementation(AVoxelWorldInterface* VoxelWorld) const; \
	virtual bool IsLocalInvoker_Implementation() const; \
 \
	DECLARE_FUNCTION(execRefreshAllVoxelInvokers); \
	DECLARE_FUNCTION(execIsInvokerEnabled); \
	DECLARE_FUNCTION(execDisableInvoker); \
	DECLARE_FUNCTION(execEnableInvoker); \
	DECLARE_FUNCTION(execGetInvokerSettings); \
	DECLARE_FUNCTION(execGetInvokerVoxelPosition); \
	DECLARE_FUNCTION(execIsLocalInvoker);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefreshAllVoxelInvokers); \
	DECLARE_FUNCTION(execIsInvokerEnabled); \
	DECLARE_FUNCTION(execDisableInvoker); \
	DECLARE_FUNCTION(execEnableInvoker); \
	DECLARE_FUNCTION(execGetInvokerSettings); \
	DECLARE_FUNCTION(execGetInvokerVoxelPosition); \
	DECLARE_FUNCTION(execIsLocalInvoker);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_EVENT_PARMS \
	struct VoxelInvokerComponentBase_eventGetInvokerSettings_Parms \
	{ \
		AVoxelWorldInterface* VoxelWorld; \
		FVoxelInvokerSettings ReturnValue; \
	}; \
	struct VoxelInvokerComponentBase_eventGetInvokerVoxelPosition_Parms \
	{ \
		AVoxelWorldInterface* VoxelWorld; \
		FIntVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VoxelInvokerComponentBase_eventGetInvokerVoxelPosition_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct VoxelInvokerComponentBase_eventIsLocalInvoker_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VoxelInvokerComponentBase_eventIsLocalInvoker_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_CALLBACK_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelInvokerComponentBase(); \
	friend struct Z_Construct_UClass_UVoxelInvokerComponentBase_Statics; \
public: \
	DECLARE_CLASS(UVoxelInvokerComponentBase, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelInvokerComponentBase)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelInvokerComponentBase(); \
	friend struct Z_Construct_UClass_UVoxelInvokerComponentBase_Statics; \
public: \
	DECLARE_CLASS(UVoxelInvokerComponentBase, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelInvokerComponentBase)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelInvokerComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelInvokerComponentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelInvokerComponentBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelInvokerComponentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelInvokerComponentBase(UVoxelInvokerComponentBase&&); \
	NO_API UVoxelInvokerComponentBase(const UVoxelInvokerComponentBase&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelInvokerComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelInvokerComponentBase(UVoxelInvokerComponentBase&&); \
	NO_API UVoxelInvokerComponentBase(const UVoxelInvokerComponentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelInvokerComponentBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelInvokerComponentBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelInvokerComponentBase)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bStartsEnabled() { return STRUCT_OFFSET(UVoxelInvokerComponentBase, bStartsEnabled); }


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_15_PROLOG \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_EVENT_PARMS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_CALLBACK_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_CALLBACK_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelInvokerComponentBase>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_RPC_WRAPPERS \
	virtual FVector GetInvokerGlobalPosition_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetInvokerGlobalPosition);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInvokerGlobalPosition);


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_EVENT_PARMS \
	struct VoxelSimpleInvokerComponent_eventGetInvokerGlobalPosition_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VoxelSimpleInvokerComponent_eventGetInvokerGlobalPosition_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_CALLBACK_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelSimpleInvokerComponent(); \
	friend struct Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelSimpleInvokerComponent, UVoxelInvokerComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelSimpleInvokerComponent)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelSimpleInvokerComponent(); \
	friend struct Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelSimpleInvokerComponent, UVoxelInvokerComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelSimpleInvokerComponent)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSimpleInvokerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSimpleInvokerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSimpleInvokerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSimpleInvokerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelSimpleInvokerComponent(UVoxelSimpleInvokerComponent&&); \
	NO_API UVoxelSimpleInvokerComponent(const UVoxelSimpleInvokerComponent&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSimpleInvokerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelSimpleInvokerComponent(UVoxelSimpleInvokerComponent&&); \
	NO_API UVoxelSimpleInvokerComponent(const UVoxelSimpleInvokerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSimpleInvokerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSimpleInvokerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSimpleInvokerComponent)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_98_PROLOG \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_EVENT_PARMS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_CALLBACK_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_CALLBACK_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelSimpleInvokerComponent>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_RPC_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelInvokerWithPredictionComponent(); \
	friend struct Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelInvokerWithPredictionComponent, UVoxelSimpleInvokerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelInvokerWithPredictionComponent)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelInvokerWithPredictionComponent(); \
	friend struct Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelInvokerWithPredictionComponent, UVoxelSimpleInvokerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelInvokerWithPredictionComponent)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelInvokerWithPredictionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelInvokerWithPredictionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelInvokerWithPredictionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelInvokerWithPredictionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelInvokerWithPredictionComponent(UVoxelInvokerWithPredictionComponent&&); \
	NO_API UVoxelInvokerWithPredictionComponent(const UVoxelInvokerWithPredictionComponent&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelInvokerWithPredictionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelInvokerWithPredictionComponent(UVoxelInvokerWithPredictionComponent&&); \
	NO_API UVoxelInvokerWithPredictionComponent(const UVoxelInvokerWithPredictionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelInvokerWithPredictionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelInvokerWithPredictionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelInvokerWithPredictionComponent)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_151_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelInvokerWithPredictionComponent>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_RPC_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelInvokerAutoCameraComponent(); \
	friend struct Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelInvokerAutoCameraComponent, UVoxelSimpleInvokerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelInvokerAutoCameraComponent)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelInvokerAutoCameraComponent(); \
	friend struct Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelInvokerAutoCameraComponent, UVoxelSimpleInvokerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelInvokerAutoCameraComponent)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelInvokerAutoCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelInvokerAutoCameraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelInvokerAutoCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelInvokerAutoCameraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelInvokerAutoCameraComponent(UVoxelInvokerAutoCameraComponent&&); \
	NO_API UVoxelInvokerAutoCameraComponent(const UVoxelInvokerAutoCameraComponent&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelInvokerAutoCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelInvokerAutoCameraComponent(UVoxelInvokerAutoCameraComponent&&); \
	NO_API UVoxelInvokerAutoCameraComponent(const UVoxelInvokerAutoCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelInvokerAutoCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelInvokerAutoCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelInvokerAutoCameraComponent)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_173_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelInvokerAutoCameraComponent>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_RPC_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelLODVolumeInvokerComponent(); \
	friend struct Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelLODVolumeInvokerComponent, UVoxelInvokerComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelLODVolumeInvokerComponent) \
	DECLARE_WITHIN(AVoxelLODVolume)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelLODVolumeInvokerComponent(); \
	friend struct Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelLODVolumeInvokerComponent, UVoxelInvokerComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(UVoxelLODVolumeInvokerComponent) \
	DECLARE_WITHIN(AVoxelLODVolume)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelLODVolumeInvokerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelLODVolumeInvokerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelLODVolumeInvokerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelLODVolumeInvokerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelLODVolumeInvokerComponent(UVoxelLODVolumeInvokerComponent&&); \
	NO_API UVoxelLODVolumeInvokerComponent(const UVoxelLODVolumeInvokerComponent&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelLODVolumeInvokerComponent(UVoxelLODVolumeInvokerComponent&&); \
	NO_API UVoxelLODVolumeInvokerComponent(const UVoxelLODVolumeInvokerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelLODVolumeInvokerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelLODVolumeInvokerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelLODVolumeInvokerComponent)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_184_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class UVoxelLODVolumeInvokerComponent>();

#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_SPARSE_DATA
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_RPC_WRAPPERS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelLODVolume(); \
	friend struct Z_Construct_UClass_AVoxelLODVolume_Statics; \
public: \
	DECLARE_CLASS(AVoxelLODVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelLODVolume)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_INCLASS \
private: \
	static void StaticRegisterNativesAVoxelLODVolume(); \
	friend struct Z_Construct_UClass_AVoxelLODVolume_Statics; \
public: \
	DECLARE_CLASS(AVoxelLODVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), NO_API) \
	DECLARE_SERIALIZER(AVoxelLODVolume)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelLODVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelLODVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelLODVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelLODVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelLODVolume(AVoxelLODVolume&&); \
	NO_API AVoxelLODVolume(const AVoxelLODVolume&); \
public:


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelLODVolume(AVoxelLODVolume&&); \
	NO_API AVoxelLODVolume(const AVoxelLODVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelLODVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelLODVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelLODVolume)


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_222_PROLOG
#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_RPC_WRAPPERS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_INCLASS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_SPARSE_DATA \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXEL_API UClass* StaticClass<class AVoxelLODVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VoxelFree_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
