// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraComponent;
class USceneCaptureComponent2D;
class APlayerCameraManager;
struct FVector2D;
struct FComposureUVMapSettings;
class UMaterialInstanceDynamic;
struct FComposurePostMoveSettings;
struct FMatrix;
class UObject;
class UComposurePlayerCompositingTarget;
#ifdef COMPOSURE_ComposureBlueprintLibrary_generated_h
#error "ComposureBlueprintLibrary.generated.h already included, missing '#pragma once' in ComposureBlueprintLibrary.h"
#endif
#define COMPOSURE_ComposureBlueprintLibrary_generated_h

#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_SPARSE_DATA
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyCameraSettingsToSceneCapture); \
	DECLARE_FUNCTION(execGetPlayerDisplayGamma); \
	DECLARE_FUNCTION(execGetRedGreenUVFactorsFromChromaticAberration); \
	DECLARE_FUNCTION(execInvertUVDisplacementMapEncodingParameters); \
	DECLARE_FUNCTION(execSetUVMapSettingsToMaterialParameters); \
	DECLARE_FUNCTION(execGetCroppingUVTransformationMatrixFromPostMoveSettings); \
	DECLARE_FUNCTION(execGetProjectionMatrixFromPostMoveSettings); \
	DECLARE_FUNCTION(execCreatePlayerCompositingTarget);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyCameraSettingsToSceneCapture); \
	DECLARE_FUNCTION(execGetPlayerDisplayGamma); \
	DECLARE_FUNCTION(execGetRedGreenUVFactorsFromChromaticAberration); \
	DECLARE_FUNCTION(execInvertUVDisplacementMapEncodingParameters); \
	DECLARE_FUNCTION(execSetUVMapSettingsToMaterialParameters); \
	DECLARE_FUNCTION(execGetCroppingUVTransformationMatrixFromPostMoveSettings); \
	DECLARE_FUNCTION(execGetProjectionMatrixFromPostMoveSettings); \
	DECLARE_FUNCTION(execCreatePlayerCompositingTarget);


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComposureBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UComposureBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UComposureBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), COMPOSURE_API) \
	DECLARE_SERIALIZER(UComposureBlueprintLibrary)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUComposureBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UComposureBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UComposureBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), COMPOSURE_API) \
	DECLARE_SERIALIZER(UComposureBlueprintLibrary)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPOSURE_API UComposureBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposureBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSURE_API, UComposureBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposureBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COMPOSURE_API UComposureBlueprintLibrary(UComposureBlueprintLibrary&&); \
	COMPOSURE_API UComposureBlueprintLibrary(const UComposureBlueprintLibrary&); \
public:


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPOSURE_API UComposureBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COMPOSURE_API UComposureBlueprintLibrary(UComposureBlueprintLibrary&&); \
	COMPOSURE_API UComposureBlueprintLibrary(const UComposureBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSURE_API, UComposureBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposureBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposureBlueprintLibrary)


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_15_PROLOG
#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_RPC_WRAPPERS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_INCLASS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_SPARSE_DATA \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ComposureBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UComposureBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
