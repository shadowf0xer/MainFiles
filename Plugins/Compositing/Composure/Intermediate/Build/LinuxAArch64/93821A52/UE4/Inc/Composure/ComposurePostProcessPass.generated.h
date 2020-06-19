// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
class UMaterialInterface;
#ifdef COMPOSURE_ComposurePostProcessPass_generated_h
#error "ComposurePostProcessPass.generated.h already included, missing '#pragma once' in ComposurePostProcessPass.h"
#endif
#define COMPOSURE_ComposurePostProcessPass_generated_h

#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_SPARSE_DATA
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOutputRenderTarget); \
	DECLARE_FUNCTION(execGetOutputRenderTarget); \
	DECLARE_FUNCTION(execGetSetupMaterial); \
	DECLARE_FUNCTION(execSetSetupMaterial);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOutputRenderTarget); \
	DECLARE_FUNCTION(execGetOutputRenderTarget); \
	DECLARE_FUNCTION(execGetSetupMaterial); \
	DECLARE_FUNCTION(execSetSetupMaterial);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComposurePostProcessPass(); \
	friend struct Z_Construct_UClass_UComposurePostProcessPass_Statics; \
public: \
	DECLARE_CLASS(UComposurePostProcessPass, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UComposurePostProcessPass)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUComposurePostProcessPass(); \
	friend struct Z_Construct_UClass_UComposurePostProcessPass_Statics; \
public: \
	DECLARE_CLASS(UComposurePostProcessPass, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UComposurePostProcessPass)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposurePostProcessPass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposurePostProcessPass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposurePostProcessPass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposurePostProcessPass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComposurePostProcessPass(UComposurePostProcessPass&&); \
	NO_API UComposurePostProcessPass(const UComposurePostProcessPass&); \
public:


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposurePostProcessPass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComposurePostProcessPass(UComposurePostProcessPass&&); \
	NO_API UComposurePostProcessPass(const UComposurePostProcessPass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposurePostProcessPass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposurePostProcessPass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposurePostProcessPass)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SceneCapture() { return STRUCT_OFFSET(UComposurePostProcessPass, SceneCapture); } \
	FORCEINLINE static uint32 __PPO__BlendableInterface() { return STRUCT_OFFSET(UComposurePostProcessPass, BlendableInterface); } \
	FORCEINLINE static uint32 __PPO__SetupMaterial() { return STRUCT_OFFSET(UComposurePostProcessPass, SetupMaterial); } \
	FORCEINLINE static uint32 __PPO__TonemapperReplacement() { return STRUCT_OFFSET(UComposurePostProcessPass, TonemapperReplacement); }


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_23_PROLOG
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_RPC_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_INCLASS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ComposurePostProcessPass."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UComposurePostProcessPass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
