// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
 
struct FAssetData;
#ifdef EDITORSCRIPTINGUTILITIES_EditorAssetLibrary_generated_h
#error "EditorAssetLibrary.generated.h already included, missing '#pragma once' in EditorAssetLibrary.h"
#endif
#define EDITORSCRIPTINGUTILITIES_EditorAssetLibrary_generated_h

#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_SPARSE_DATA
#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSyncBrowserToObjects); \
	DECLARE_FUNCTION(execRemoveMetadataTag); \
	DECLARE_FUNCTION(execSetMetadataTag); \
	DECLARE_FUNCTION(execGetMetadataTag); \
	DECLARE_FUNCTION(execGetMetadataTagValues); \
	DECLARE_FUNCTION(execGetTagValues); \
	DECLARE_FUNCTION(execListAssetByTagValue); \
	DECLARE_FUNCTION(execListAssets); \
	DECLARE_FUNCTION(execMakeDirectory); \
	DECLARE_FUNCTION(execDoesDirectoryHaveAssets); \
	DECLARE_FUNCTION(execDoesDirectoryExist); \
	DECLARE_FUNCTION(execSaveDirectory); \
	DECLARE_FUNCTION(execSaveAsset); \
	DECLARE_FUNCTION(execSaveLoadedAssets); \
	DECLARE_FUNCTION(execSaveLoadedAsset); \
	DECLARE_FUNCTION(execCheckoutDirectory); \
	DECLARE_FUNCTION(execCheckoutAsset); \
	DECLARE_FUNCTION(execCheckoutLoadedAssets); \
	DECLARE_FUNCTION(execCheckoutLoadedAsset); \
	DECLARE_FUNCTION(execRenameDirectory); \
	DECLARE_FUNCTION(execRenameAsset); \
	DECLARE_FUNCTION(execRenameLoadedAsset); \
	DECLARE_FUNCTION(execDuplicateDirectory); \
	DECLARE_FUNCTION(execDuplicateAsset); \
	DECLARE_FUNCTION(execDuplicateLoadedAsset); \
	DECLARE_FUNCTION(execDeleteDirectory); \
	DECLARE_FUNCTION(execDeleteAsset); \
	DECLARE_FUNCTION(execDeleteLoadedAssets); \
	DECLARE_FUNCTION(execDeleteLoadedAsset); \
	DECLARE_FUNCTION(execConsolidateAssets); \
	DECLARE_FUNCTION(execFindPackageReferencersForAsset); \
	DECLARE_FUNCTION(execDoAssetsExist); \
	DECLARE_FUNCTION(execDoesAssetExist); \
	DECLARE_FUNCTION(execFindAssetData); \
	DECLARE_FUNCTION(execGetPathNameForLoadedAsset); \
	DECLARE_FUNCTION(execLoadBlueprintClass); \
	DECLARE_FUNCTION(execLoadAsset);


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSyncBrowserToObjects); \
	DECLARE_FUNCTION(execRemoveMetadataTag); \
	DECLARE_FUNCTION(execSetMetadataTag); \
	DECLARE_FUNCTION(execGetMetadataTag); \
	DECLARE_FUNCTION(execGetMetadataTagValues); \
	DECLARE_FUNCTION(execGetTagValues); \
	DECLARE_FUNCTION(execListAssetByTagValue); \
	DECLARE_FUNCTION(execListAssets); \
	DECLARE_FUNCTION(execMakeDirectory); \
	DECLARE_FUNCTION(execDoesDirectoryHaveAssets); \
	DECLARE_FUNCTION(execDoesDirectoryExist); \
	DECLARE_FUNCTION(execSaveDirectory); \
	DECLARE_FUNCTION(execSaveAsset); \
	DECLARE_FUNCTION(execSaveLoadedAssets); \
	DECLARE_FUNCTION(execSaveLoadedAsset); \
	DECLARE_FUNCTION(execCheckoutDirectory); \
	DECLARE_FUNCTION(execCheckoutAsset); \
	DECLARE_FUNCTION(execCheckoutLoadedAssets); \
	DECLARE_FUNCTION(execCheckoutLoadedAsset); \
	DECLARE_FUNCTION(execRenameDirectory); \
	DECLARE_FUNCTION(execRenameAsset); \
	DECLARE_FUNCTION(execRenameLoadedAsset); \
	DECLARE_FUNCTION(execDuplicateDirectory); \
	DECLARE_FUNCTION(execDuplicateAsset); \
	DECLARE_FUNCTION(execDuplicateLoadedAsset); \
	DECLARE_FUNCTION(execDeleteDirectory); \
	DECLARE_FUNCTION(execDeleteAsset); \
	DECLARE_FUNCTION(execDeleteLoadedAssets); \
	DECLARE_FUNCTION(execDeleteLoadedAsset); \
	DECLARE_FUNCTION(execConsolidateAssets); \
	DECLARE_FUNCTION(execFindPackageReferencersForAsset); \
	DECLARE_FUNCTION(execDoAssetsExist); \
	DECLARE_FUNCTION(execDoesAssetExist); \
	DECLARE_FUNCTION(execFindAssetData); \
	DECLARE_FUNCTION(execGetPathNameForLoadedAsset); \
	DECLARE_FUNCTION(execLoadBlueprintClass); \
	DECLARE_FUNCTION(execLoadAsset);


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorAssetLibrary(); \
	friend struct Z_Construct_UClass_UEditorAssetLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorAssetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorAssetLibrary)


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUEditorAssetLibrary(); \
	friend struct Z_Construct_UClass_UEditorAssetLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorAssetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorAssetLibrary)


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorAssetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorAssetLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorAssetLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorAssetLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorAssetLibrary(UEditorAssetLibrary&&); \
	NO_API UEditorAssetLibrary(const UEditorAssetLibrary&); \
public:


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorAssetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorAssetLibrary(UEditorAssetLibrary&&); \
	NO_API UEditorAssetLibrary(const UEditorAssetLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorAssetLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorAssetLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorAssetLibrary)


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_23_PROLOG
#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_SPARSE_DATA \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_RPC_WRAPPERS \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_INCLASS \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_SPARSE_DATA \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<class UEditorAssetLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorAssetLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
