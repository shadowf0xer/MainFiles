// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSETTINGS_RadioButton_generated_h
#error "RadioButton.generated.h already included, missing '#pragma once' in RadioButton.h"
#endif
#define AUTOSETTINGS_RadioButton_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_8_DELEGATE \
struct _Script_AutoSettings_eventRadioSelectedSignature_Parms \
{ \
	FString Value; \
}; \
static inline void FRadioSelectedSignature_DelegateWrapper(const FMulticastScriptDelegate& RadioSelectedSignature, const FString& Value) \
{ \
	_Script_AutoSettings_eventRadioSelectedSignature_Parms Parms; \
	Parms.Value=Value; \
	RadioSelectedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSelected); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execTriggerSelection); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetSelected);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSelected); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execTriggerSelection); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetSelected);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_EVENT_PARMS \
	struct RadioButton_eventUpdateLabel_Parms \
	{ \
		FText InLabel; \
	}; \
	struct RadioButton_eventUpdateSelected_Parms \
	{ \
		bool InSelected; \
	};


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_CALLBACK_WRAPPERS
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURadioButton(); \
	friend struct Z_Construct_UClass_URadioButton_Statics; \
public: \
	DECLARE_CLASS(URadioButton, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(URadioButton)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_INCLASS \
private: \
	static void StaticRegisterNativesURadioButton(); \
	friend struct Z_Construct_UClass_URadioButton_Statics; \
public: \
	DECLARE_CLASS(URadioButton, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(URadioButton)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URadioButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URadioButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadioButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadioButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URadioButton(URadioButton&&); \
	NO_API URadioButton(const URadioButton&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URadioButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URadioButton(URadioButton&&); \
	NO_API URadioButton(const URadioButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadioButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadioButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URadioButton)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Label() { return STRUCT_OFFSET(URadioButton, Label); } \
	FORCEINLINE static uint32 __PPO__Value() { return STRUCT_OFFSET(URadioButton, Value); } \
	FORCEINLINE static uint32 __PPO__Selected() { return STRUCT_OFFSET(URadioButton, Selected); }


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_13_PROLOG \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_EVENT_PARMS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class URadioButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
