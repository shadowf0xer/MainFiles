// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
class APlayerCameraManager;
class UTexture;
#ifdef COMPOSURE_ComposurePlayerCompositingTarget_generated_h
#error "ComposurePlayerCompositingTarget.generated.h already included, missing '#pragma once' in ComposurePlayerCompositingTarget.h"
#endif
#define COMPOSURE_ComposurePlayerCompositingTarget_generated_h

#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_SPARSE_DATA
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRenderTarget); \
	DECLARE_FUNCTION(execSetPlayerCameraManager); \
	DECLARE_FUNCTION(execGetPlayerCameraManager);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRenderTarget); \
	DECLARE_FUNCTION(execSetPlayerCameraManager); \
	DECLARE_FUNCTION(execGetPlayerCameraManager);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComposurePlayerCompositingTarget(); \
	friend struct Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics; \
public: \
	DECLARE_CLASS(UComposurePlayerCompositingTarget, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UComposurePlayerCompositingTarget) \
	virtual UObject* _getUObject() const override { return const_cast<UComposurePlayerCompositingTarget*>(this); }


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUComposurePlayerCompositingTarget(); \
	friend struct Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics; \
public: \
	DECLARE_CLASS(UComposurePlayerCompositingTarget, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UComposurePlayerCompositingTarget) \
	virtual UObject* _getUObject() const override { return const_cast<UComposurePlayerCompositingTarget*>(this); }


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposurePlayerCompositingTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposurePlayerCompositingTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposurePlayerCompositingTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposurePlayerCompositingTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComposurePlayerCompositingTarget(UComposurePlayerCompositingTarget&&); \
	NO_API UComposurePlayerCompositingTarget(const UComposurePlayerCompositingTarget&); \
public:


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposurePlayerCompositingTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComposurePlayerCompositingTarget(UComposurePlayerCompositingTarget&&); \
	NO_API UComposurePlayerCompositingTarget(const UComposurePlayerCompositingTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposurePlayerCompositingTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposurePlayerCompositingTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposurePlayerCompositingTarget)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerCameraManager() { return STRUCT_OFFSET(UComposurePlayerCompositingTarget, PlayerCameraManager); } \
	FORCEINLINE static uint32 __PPO__PlayerCameraModifier() { return STRUCT_OFFSET(UComposurePlayerCompositingTarget, PlayerCameraModifier); } \
	FORCEINLINE static uint32 __PPO__ReplaceTonemapperMID() { return STRUCT_OFFSET(UComposurePlayerCompositingTarget, ReplaceTonemapperMID); }


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_35_PROLOG
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_RPC_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_INCLASS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_38_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ComposurePlayerCompositingTarget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UComposurePlayerCompositingTarget>();

#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_SPARSE_DATA
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDisplayTexture); \
	DECLARE_FUNCTION(execSetDisplayTexture);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDisplayTexture); \
	DECLARE_FUNCTION(execSetDisplayTexture);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComposureCompositingTargetComponent(); \
	friend struct Z_Construct_UClass_UComposureCompositingTargetComponent_Statics; \
public: \
	DECLARE_CLASS(UComposureCompositingTargetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UComposureCompositingTargetComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UComposureCompositingTargetComponent*>(this); }


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_INCLASS \
private: \
	static void StaticRegisterNativesUComposureCompositingTargetComponent(); \
	friend struct Z_Construct_UClass_UComposureCompositingTargetComponent_Statics; \
public: \
	DECLARE_CLASS(UComposureCompositingTargetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UComposureCompositingTargetComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UComposureCompositingTargetComponent*>(this); }


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposureCompositingTargetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposureCompositingTargetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposureCompositingTargetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposureCompositingTargetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComposureCompositingTargetComponent(UComposureCompositingTargetComponent&&); \
	NO_API UComposureCompositingTargetComponent(const UComposureCompositingTargetComponent&); \
public:


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposureCompositingTargetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComposureCompositingTargetComponent(UComposureCompositingTargetComponent&&); \
	NO_API UComposureCompositingTargetComponent(const UComposureCompositingTargetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposureCompositingTargetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposureCompositingTargetComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposureCompositingTargetComponent)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DisplayTexture() { return STRUCT_OFFSET(UComposureCompositingTargetComponent, DisplayTexture); }


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_99_PROLOG
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_RPC_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_INCLASS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_102_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ComposureCompositingTargetComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UComposureCompositingTargetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
