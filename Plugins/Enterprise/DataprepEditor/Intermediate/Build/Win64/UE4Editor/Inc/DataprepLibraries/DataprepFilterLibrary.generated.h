// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
enum class EDataprepSizeSource : uint8;
enum class EDataprepSizeFilterMode : uint8;
enum class EEditorScriptingStringMatchType : uint8;
#ifdef DATAPREPLIBRARIES_DataprepFilterLibrary_generated_h
#error "DataprepFilterLibrary.generated.h already included, missing '#pragma once' in DataprepFilterLibrary.h"
#endif
#define DATAPREPLIBRARIES_DataprepFilterLibrary_generated_h

#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_SPARSE_DATA
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFilterByTag); \
	DECLARE_FUNCTION(execFilterBySize); \
	DECLARE_FUNCTION(execFilterByName); \
	DECLARE_FUNCTION(execFilterByClass);


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFilterByTag); \
	DECLARE_FUNCTION(execFilterBySize); \
	DECLARE_FUNCTION(execFilterByName); \
	DECLARE_FUNCTION(execFilterByClass);


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepFilterLibrary(); \
	friend struct Z_Construct_UClass_UDataprepFilterLibrary_Statics; \
public: \
	DECLARE_CLASS(UDataprepFilterLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepLibraries"), NO_API) \
	DECLARE_SERIALIZER(UDataprepFilterLibrary)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUDataprepFilterLibrary(); \
	friend struct Z_Construct_UClass_UDataprepFilterLibrary_Statics; \
public: \
	DECLARE_CLASS(UDataprepFilterLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepLibraries"), NO_API) \
	DECLARE_SERIALIZER(UDataprepFilterLibrary)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepFilterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepFilterLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepFilterLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepFilterLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepFilterLibrary(UDataprepFilterLibrary&&); \
	NO_API UDataprepFilterLibrary(const UDataprepFilterLibrary&); \
public:


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepFilterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepFilterLibrary(UDataprepFilterLibrary&&); \
	NO_API UDataprepFilterLibrary(const UDataprepFilterLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepFilterLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepFilterLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepFilterLibrary)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_23_PROLOG
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_INCLASS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAPREPLIBRARIES_API UClass* StaticClass<class UDataprepFilterLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h


#define FOREACH_ENUM_EDATAPREPSIZEFILTERMODE(op) \
	op(EDataprepSizeFilterMode::SmallerThan) \
	op(EDataprepSizeFilterMode::BiggerThan) 

enum class EDataprepSizeFilterMode : uint8;
template<> DATAPREPLIBRARIES_API UEnum* StaticEnum<EDataprepSizeFilterMode>();

#define FOREACH_ENUM_EDATAPREPSIZESOURCE(op) \
	op(EDataprepSizeSource::BoundingBoxVolume) 

enum class EDataprepSizeSource : uint8;
template<> DATAPREPLIBRARIES_API UEnum* StaticEnum<EDataprepSizeSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
