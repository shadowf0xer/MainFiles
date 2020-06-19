// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDatasmithImportOptions;
class UObject; class UObject;
class UObject;
struct FDatasmithImportFactoryCreateFileResult;
class UDatasmithSceneElement;
#ifdef DATASMITHIMPORTER_DatasmithBlueprintLibrary_generated_h
#error "DatasmithBlueprintLibrary.generated.h already included, missing '#pragma once' in DatasmithBlueprintLibrary.h"
#endif
#define DATASMITHIMPORTER_DatasmithBlueprintLibrary_generated_h

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATASMITHIMPORTER_API UScriptStruct* StaticStruct<struct FDatasmithImportFactoryCreateFileResult>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroyScene); \
	DECLARE_FUNCTION(execGetImportOptions); \
	DECLARE_FUNCTION(execGetAllOptions); \
	DECLARE_FUNCTION(execGetOptions); \
	DECLARE_FUNCTION(execReimportScene); \
	DECLARE_FUNCTION(execImportScene); \
	DECLARE_FUNCTION(execTranslateScene); \
	DECLARE_FUNCTION(execGetExistingDatasmithScene); \
	DECLARE_FUNCTION(execConstructDatasmithSceneFromFile);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroyScene); \
	DECLARE_FUNCTION(execGetImportOptions); \
	DECLARE_FUNCTION(execGetAllOptions); \
	DECLARE_FUNCTION(execGetOptions); \
	DECLARE_FUNCTION(execReimportScene); \
	DECLARE_FUNCTION(execImportScene); \
	DECLARE_FUNCTION(execTranslateScene); \
	DECLARE_FUNCTION(execGetExistingDatasmithScene); \
	DECLARE_FUNCTION(execConstructDatasmithSceneFromFile);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithSceneElement(); \
	friend struct Z_Construct_UClass_UDatasmithSceneElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithSceneElement, UDatasmithSceneElementBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithSceneElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithSceneElement(); \
	friend struct Z_Construct_UClass_UDatasmithSceneElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithSceneElement, UDatasmithSceneElementBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithSceneElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithSceneElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithSceneElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithSceneElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithSceneElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithSceneElement(UDatasmithSceneElement&&); \
	NO_API UDatasmithSceneElement(const UDatasmithSceneElement&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithSceneElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithSceneElement(UDatasmithSceneElement&&); \
	NO_API UDatasmithSceneElement(const UDatasmithSceneElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithSceneElement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithSceneElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithSceneElement)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_46_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithSceneElement>();

#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupStaticLighting); \
	DECLARE_FUNCTION(execComputeLightmapResolution);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupStaticLighting); \
	DECLARE_FUNCTION(execComputeLightmapResolution);


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithStaticMeshBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UDatasmithStaticMeshBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), DATASMITHIMPORTER_API) \
	DECLARE_SERIALIZER(UDatasmithStaticMeshBlueprintLibrary)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithStaticMeshBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UDatasmithStaticMeshBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), DATASMITHIMPORTER_API) \
	DECLARE_SERIALIZER(UDatasmithStaticMeshBlueprintLibrary)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATASMITHIMPORTER_API UDatasmithStaticMeshBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithStaticMeshBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHIMPORTER_API, UDatasmithStaticMeshBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithStaticMeshBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DATASMITHIMPORTER_API UDatasmithStaticMeshBlueprintLibrary(UDatasmithStaticMeshBlueprintLibrary&&); \
	DATASMITHIMPORTER_API UDatasmithStaticMeshBlueprintLibrary(const UDatasmithStaticMeshBlueprintLibrary&); \
public:


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATASMITHIMPORTER_API UDatasmithStaticMeshBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DATASMITHIMPORTER_API UDatasmithStaticMeshBlueprintLibrary(UDatasmithStaticMeshBlueprintLibrary&&); \
	DATASMITHIMPORTER_API UDatasmithStaticMeshBlueprintLibrary(const UDatasmithStaticMeshBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHIMPORTER_API, UDatasmithStaticMeshBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithStaticMeshBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithStaticMeshBlueprintLibrary)


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_123_PROLOG
#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_INCLASS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithStaticMeshBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
