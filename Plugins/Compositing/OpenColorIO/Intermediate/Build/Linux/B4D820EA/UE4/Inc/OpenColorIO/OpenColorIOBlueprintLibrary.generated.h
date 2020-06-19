// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FOpenColorIOColorConversionSettings;
class UTexture;
class UTextureRenderTarget2D;
#ifdef OPENCOLORIO_OpenColorIOBlueprintLibrary_generated_h
#error "OpenColorIOBlueprintLibrary.generated.h already included, missing '#pragma once' in OpenColorIOBlueprintLibrary.h"
#endif
#define OPENCOLORIO_OpenColorIOBlueprintLibrary_generated_h

#define Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_SPARSE_DATA
#define Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyColorSpaceTransform);


#define Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyColorSpaceTransform);


#define Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenColorIOBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UOpenColorIOBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UOpenColorIOBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenColorIO"), OPENCOLORIO_API) \
	DECLARE_SERIALIZER(UOpenColorIOBlueprintLibrary)


#define Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUOpenColorIOBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UOpenColorIOBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UOpenColorIOBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenColorIO"), OPENCOLORIO_API) \
	DECLARE_SERIALIZER(UOpenColorIOBlueprintLibrary)


#define Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPENCOLORIO_API UOpenColorIOBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenColorIOBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPENCOLORIO_API, UOpenColorIOBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenColorIOBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OPENCOLORIO_API UOpenColorIOBlueprintLibrary(UOpenColorIOBlueprintLibrary&&); \
	OPENCOLORIO_API UOpenColorIOBlueprintLibrary(const UOpenColorIOBlueprintLibrary&); \
public:


#define Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPENCOLORIO_API UOpenColorIOBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OPENCOLORIO_API UOpenColorIOBlueprintLibrary(UOpenColorIOBlueprintLibrary&&); \
	OPENCOLORIO_API UOpenColorIOBlueprintLibrary(const UOpenColorIOBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPENCOLORIO_API, UOpenColorIOBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenColorIOBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenColorIOBlueprintLibrary)


#define Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_13_PROLOG
#define Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_SPARSE_DATA \
	Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_RPC_WRAPPERS \
	Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_INCLASS \
	Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_SPARSE_DATA \
	Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OpenColorIOBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENCOLORIO_API UClass* StaticClass<class UOpenColorIOBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
