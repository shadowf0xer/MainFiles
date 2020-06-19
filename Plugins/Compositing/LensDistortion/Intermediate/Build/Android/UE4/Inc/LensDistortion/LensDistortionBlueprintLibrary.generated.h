// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLensDistortionCameraModel;
class UObject;
class UTextureRenderTarget2D;
#ifdef LENSDISTORTION_LensDistortionBlueprintLibrary_generated_h
#error "LensDistortionBlueprintLibrary.generated.h already included, missing '#pragma once' in LensDistortionBlueprintLibrary.h"
#endif
#define LENSDISTORTION_LensDistortionBlueprintLibrary_generated_h

#define Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_SPARSE_DATA
#define Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotEqual_CompareLensDistortionModels); \
	DECLARE_FUNCTION(execEqualEqual_CompareLensDistortionModels); \
	DECLARE_FUNCTION(execDrawUVDisplacementToRenderTarget); \
	DECLARE_FUNCTION(execGetUndistortOverscanFactor);


#define Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotEqual_CompareLensDistortionModels); \
	DECLARE_FUNCTION(execEqualEqual_CompareLensDistortionModels); \
	DECLARE_FUNCTION(execDrawUVDisplacementToRenderTarget); \
	DECLARE_FUNCTION(execGetUndistortOverscanFactor);


#define Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensDistortionBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULensDistortionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LensDistortion"), LENSDISTORTION_API) \
	DECLARE_SERIALIZER(ULensDistortionBlueprintLibrary)


#define Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULensDistortionBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULensDistortionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LensDistortion"), LENSDISTORTION_API) \
	DECLARE_SERIALIZER(ULensDistortionBlueprintLibrary)


#define Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LENSDISTORTION_API ULensDistortionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensDistortionBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LENSDISTORTION_API, ULensDistortionBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensDistortionBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LENSDISTORTION_API ULensDistortionBlueprintLibrary(ULensDistortionBlueprintLibrary&&); \
	LENSDISTORTION_API ULensDistortionBlueprintLibrary(const ULensDistortionBlueprintLibrary&); \
public:


#define Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LENSDISTORTION_API ULensDistortionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LENSDISTORTION_API ULensDistortionBlueprintLibrary(ULensDistortionBlueprintLibrary&&); \
	LENSDISTORTION_API ULensDistortionBlueprintLibrary(const ULensDistortionBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LENSDISTORTION_API, ULensDistortionBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensDistortionBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensDistortionBlueprintLibrary)


#define Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_12_PROLOG
#define Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_SPARSE_DATA \
	Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_RPC_WRAPPERS \
	Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_INCLASS \
	Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_SPARSE_DATA \
	Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LensDistortionBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LENSDISTORTION_API UClass* StaticClass<class ULensDistortionBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
