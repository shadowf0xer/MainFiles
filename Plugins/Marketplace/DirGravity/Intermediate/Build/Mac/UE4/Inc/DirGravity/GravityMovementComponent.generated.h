// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef DIRGRAVITY_GravityMovementComponent_generated_h
#error "GravityMovementComponent.generated.h already included, missing '#pragma once' in GravityMovementComponent.h"
#endif
#define DIRGRAVITY_GravityMovementComponent_generated_h

#define HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_SPARSE_DATA
#define HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGravityDirection); \
	DECLARE_FUNCTION(execGetGravityDirection);


#define HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGravityDirection); \
	DECLARE_FUNCTION(execGetGravityDirection);


#define HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGravityMovementComponent(); \
	friend struct Z_Construct_UClass_UGravityMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UGravityMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DirGravity"), NO_API) \
	DECLARE_SERIALIZER(UGravityMovementComponent)


#define HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUGravityMovementComponent(); \
	friend struct Z_Construct_UClass_UGravityMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UGravityMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DirGravity"), NO_API) \
	DECLARE_SERIALIZER(UGravityMovementComponent)


#define HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGravityMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGravityMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGravityMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGravityMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGravityMovementComponent(UGravityMovementComponent&&); \
	NO_API UGravityMovementComponent(const UGravityMovementComponent&); \
public:


#define HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGravityMovementComponent(UGravityMovementComponent&&); \
	NO_API UGravityMovementComponent(const UGravityMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGravityMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGravityMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGravityMovementComponent)


#define HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bShowDebugLines() { return STRUCT_OFFSET(UGravityMovementComponent, bShowDebugLines); } \
	FORCEINLINE static uint32 __PPO__CustomGravityDirection() { return STRUCT_OFFSET(UGravityMovementComponent, CustomGravityDirection); }


#define HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_9_PROLOG
#define HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_SPARSE_DATA \
	HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_RPC_WRAPPERS \
	HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_INCLASS \
	HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_SPARSE_DATA \
	HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIRGRAVITY_API UClass* StaticClass<class UGravityMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_DirGravity_Source_DirGravity_Public_GravityMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
