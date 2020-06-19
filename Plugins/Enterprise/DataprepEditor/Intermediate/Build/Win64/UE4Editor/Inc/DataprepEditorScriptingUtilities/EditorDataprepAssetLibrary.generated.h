// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataprepActionAsset;
class UDataprepParameterizableObject;
class UDataprepAssetInterface;
class UDataprepContentConsumer;
class UDataprepAsset;
class UDataprepContentProducer;
enum class EDataprepReportMethod : uint8;
#ifdef DATAPREPEDITORSCRIPTINGUTILITIES_EditorDataprepAssetLibrary_generated_h
#error "EditorDataprepAssetLibrary.generated.h already included, missing '#pragma once' in EditorDataprepAssetLibrary.h"
#endif
#define DATAPREPEDITORSCRIPTINGUTILITIES_EditorDataprepAssetLibrary_generated_h

#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_SPARSE_DATA
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStepObject); \
	DECLARE_FUNCTION(execSwapSteps); \
	DECLARE_FUNCTION(execMoveStep); \
	DECLARE_FUNCTION(execRemoveStep); \
	DECLARE_FUNCTION(execAddStepByDuplication); \
	DECLARE_FUNCTION(execAddStep); \
	DECLARE_FUNCTION(execGetStepsCount); \
	DECLARE_FUNCTION(execGetConsumer); \
	DECLARE_FUNCTION(execGetAction); \
	DECLARE_FUNCTION(execSwapActions); \
	DECLARE_FUNCTION(execAddActionByDuplication); \
	DECLARE_FUNCTION(execAddAction); \
	DECLARE_FUNCTION(execRemoveAction); \
	DECLARE_FUNCTION(execGetActionCount); \
	DECLARE_FUNCTION(execAddProducerAutomated); \
	DECLARE_FUNCTION(execAddProducer); \
	DECLARE_FUNCTION(execRemoveProducer); \
	DECLARE_FUNCTION(execGetProducer); \
	DECLARE_FUNCTION(execGetProducersCount); \
	DECLARE_FUNCTION(execExecuteDataprep);


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStepObject); \
	DECLARE_FUNCTION(execSwapSteps); \
	DECLARE_FUNCTION(execMoveStep); \
	DECLARE_FUNCTION(execRemoveStep); \
	DECLARE_FUNCTION(execAddStepByDuplication); \
	DECLARE_FUNCTION(execAddStep); \
	DECLARE_FUNCTION(execGetStepsCount); \
	DECLARE_FUNCTION(execGetConsumer); \
	DECLARE_FUNCTION(execGetAction); \
	DECLARE_FUNCTION(execSwapActions); \
	DECLARE_FUNCTION(execAddActionByDuplication); \
	DECLARE_FUNCTION(execAddAction); \
	DECLARE_FUNCTION(execRemoveAction); \
	DECLARE_FUNCTION(execGetActionCount); \
	DECLARE_FUNCTION(execAddProducerAutomated); \
	DECLARE_FUNCTION(execAddProducer); \
	DECLARE_FUNCTION(execRemoveProducer); \
	DECLARE_FUNCTION(execGetProducer); \
	DECLARE_FUNCTION(execGetProducersCount); \
	DECLARE_FUNCTION(execExecuteDataprep);


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorDataprepAssetLibrary(); \
	friend struct Z_Construct_UClass_UEditorDataprepAssetLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorDataprepAssetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepEditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorDataprepAssetLibrary)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUEditorDataprepAssetLibrary(); \
	friend struct Z_Construct_UClass_UEditorDataprepAssetLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorDataprepAssetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepEditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorDataprepAssetLibrary)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorDataprepAssetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorDataprepAssetLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorDataprepAssetLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorDataprepAssetLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorDataprepAssetLibrary(UEditorDataprepAssetLibrary&&); \
	NO_API UEditorDataprepAssetLibrary(const UEditorDataprepAssetLibrary&); \
public:


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorDataprepAssetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorDataprepAssetLibrary(UEditorDataprepAssetLibrary&&); \
	NO_API UEditorDataprepAssetLibrary(const UEditorDataprepAssetLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorDataprepAssetLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorDataprepAssetLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorDataprepAssetLibrary)


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_54_PROLOG
#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_INCLASS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_SPARSE_DATA \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAPREPEDITORSCRIPTINGUTILITIES_API UClass* StaticClass<class UEditorDataprepAssetLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h


#define FOREACH_ENUM_EDATAPREPREPORTMETHOD(op) \
	op(EDataprepReportMethod::StandardLog) \
	op(EDataprepReportMethod::SameFeedbackAsEditor) \
	op(EDataprepReportMethod::NoFeedback) 

enum class EDataprepReportMethod : uint8;
template<> DATAPREPEDITORSCRIPTINGUTILITIES_API UEnum* StaticEnum<EDataprepReportMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
