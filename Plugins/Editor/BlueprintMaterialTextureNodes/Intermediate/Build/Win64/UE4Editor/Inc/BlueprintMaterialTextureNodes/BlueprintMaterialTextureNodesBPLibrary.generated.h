// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceConstant;
class UTexture2D;
struct FLinearColor;
class UMaterialInterface;
class UTextureRenderTarget2D;
struct FVector2D;
#ifdef BLUEPRINTMATERIALTEXTURENODES_BlueprintMaterialTextureNodesBPLibrary_generated_h
#error "BlueprintMaterialTextureNodesBPLibrary.generated.h already included, missing '#pragma once' in BlueprintMaterialTextureNodesBPLibrary.h"
#endif
#define BLUEPRINTMATERIALTEXTURENODES_BlueprintMaterialTextureNodesBPLibrary_generated_h

#define Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_SPARSE_DATA
#define Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMICDitheredLODTransition_EditorOnly); \
	DECLARE_FUNCTION(execSetMICTwoSided_EditorOnly); \
	DECLARE_FUNCTION(execSetMICBlendMode_EditorOnly); \
	DECLARE_FUNCTION(execSetMICShadingModel_EditorOnly); \
	DECLARE_FUNCTION(execSetMICTextureParam_EditorOnly); \
	DECLARE_FUNCTION(execSetMICVectorParam_EditorOnly); \
	DECLARE_FUNCTION(execSetMICScalarParam_EditorOnly); \
	DECLARE_FUNCTION(execUpdateMIC); \
	DECLARE_FUNCTION(execCreateMIC_EditorOnly); \
	DECLARE_FUNCTION(execRenderTarget_SampleUV_EditorOnly); \
	DECLARE_FUNCTION(execRenderTarget_SampleRectangle_EditorOnly); \
	DECLARE_FUNCTION(execTexture2D_SampleUV_EditorOnly);


#define Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMICDitheredLODTransition_EditorOnly); \
	DECLARE_FUNCTION(execSetMICTwoSided_EditorOnly); \
	DECLARE_FUNCTION(execSetMICBlendMode_EditorOnly); \
	DECLARE_FUNCTION(execSetMICShadingModel_EditorOnly); \
	DECLARE_FUNCTION(execSetMICTextureParam_EditorOnly); \
	DECLARE_FUNCTION(execSetMICVectorParam_EditorOnly); \
	DECLARE_FUNCTION(execSetMICScalarParam_EditorOnly); \
	DECLARE_FUNCTION(execUpdateMIC); \
	DECLARE_FUNCTION(execCreateMIC_EditorOnly); \
	DECLARE_FUNCTION(execRenderTarget_SampleUV_EditorOnly); \
	DECLARE_FUNCTION(execRenderTarget_SampleRectangle_EditorOnly); \
	DECLARE_FUNCTION(execTexture2D_SampleUV_EditorOnly);


#define Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintMaterialTextureNodesBPLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintMaterialTextureNodesBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintMaterialTextureNodes"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintMaterialTextureNodesBPLibrary)


#define Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintMaterialTextureNodesBPLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintMaterialTextureNodesBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintMaterialTextureNodes"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintMaterialTextureNodesBPLibrary)


#define Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintMaterialTextureNodesBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintMaterialTextureNodesBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintMaterialTextureNodesBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintMaterialTextureNodesBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintMaterialTextureNodesBPLibrary(UBlueprintMaterialTextureNodesBPLibrary&&); \
	NO_API UBlueprintMaterialTextureNodesBPLibrary(const UBlueprintMaterialTextureNodesBPLibrary&); \
public:


#define Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintMaterialTextureNodesBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintMaterialTextureNodesBPLibrary(UBlueprintMaterialTextureNodesBPLibrary&&); \
	NO_API UBlueprintMaterialTextureNodesBPLibrary(const UBlueprintMaterialTextureNodesBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintMaterialTextureNodesBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintMaterialTextureNodesBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintMaterialTextureNodesBPLibrary)


#define Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_26_PROLOG
#define Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_SPARSE_DATA \
	Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_RPC_WRAPPERS \
	Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_INCLASS \
	Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_SPARSE_DATA \
	Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintMaterialTextureNodesBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTMATERIALTEXTURENODES_API UClass* StaticClass<class UBlueprintMaterialTextureNodesBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
