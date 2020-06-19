// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDataValidationResult : uint8;
class UObject;
#ifdef DATAVALIDATION_EditorValidatorBase_generated_h
#error "EditorValidatorBase.generated.h already included, missing '#pragma once' in EditorValidatorBase.h"
#endif
#define DATAVALIDATION_EditorValidatorBase_generated_h

#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_SPARSE_DATA
#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_RPC_WRAPPERS \
	virtual EDataValidationResult ValidateLoadedAsset_Implementation(UObject* InAsset, TArray<FText>& ValidationErrors); \
	virtual bool CanValidateAsset_Implementation(UObject* InAsset) const; \
 \
	DECLARE_FUNCTION(execGetValidationResult); \
	DECLARE_FUNCTION(execAssetWarning); \
	DECLARE_FUNCTION(execAssetPasses); \
	DECLARE_FUNCTION(execAssetFails); \
	DECLARE_FUNCTION(execValidateLoadedAsset); \
	DECLARE_FUNCTION(execCanValidateAsset);


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual EDataValidationResult ValidateLoadedAsset_Implementation(UObject* InAsset, TArray<FText>& ValidationErrors); \
	virtual bool CanValidateAsset_Implementation(UObject* InAsset) const; \
 \
	DECLARE_FUNCTION(execGetValidationResult); \
	DECLARE_FUNCTION(execAssetWarning); \
	DECLARE_FUNCTION(execAssetPasses); \
	DECLARE_FUNCTION(execAssetFails); \
	DECLARE_FUNCTION(execValidateLoadedAsset); \
	DECLARE_FUNCTION(execCanValidateAsset);


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_EVENT_PARMS \
	struct EditorValidatorBase_eventCanValidateAsset_Parms \
	{ \
		UObject* InAsset; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorValidatorBase_eventCanValidateAsset_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EditorValidatorBase_eventValidateLoadedAsset_Parms \
	{ \
		UObject* InAsset; \
		TArray<FText> ValidationErrors; \
		EDataValidationResult ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EditorValidatorBase_eventValidateLoadedAsset_Parms() \
			: ReturnValue((EDataValidationResult)0) \
		{ \
		} \
	};


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_CALLBACK_WRAPPERS
#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorValidatorBase(); \
	friend struct Z_Construct_UClass_UEditorValidatorBase_Statics; \
public: \
	DECLARE_CLASS(UEditorValidatorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UEditorValidatorBase)


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUEditorValidatorBase(); \
	friend struct Z_Construct_UClass_UEditorValidatorBase_Statics; \
public: \
	DECLARE_CLASS(UEditorValidatorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UEditorValidatorBase)


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorValidatorBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorValidatorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorValidatorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorValidatorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorValidatorBase(UEditorValidatorBase&&); \
	NO_API UEditorValidatorBase(const UEditorValidatorBase&); \
public:


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorValidatorBase(UEditorValidatorBase&&); \
	NO_API UEditorValidatorBase(const UEditorValidatorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorValidatorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorValidatorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorValidatorBase)


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsEnabled() { return STRUCT_OFFSET(UEditorValidatorBase, bIsEnabled); }


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_26_PROLOG \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_EVENT_PARMS


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_SPARSE_DATA \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_RPC_WRAPPERS \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_CALLBACK_WRAPPERS \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_INCLASS \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_SPARSE_DATA \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_CALLBACK_WRAPPERS \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAVALIDATION_API UClass* StaticClass<class UEditorValidatorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
