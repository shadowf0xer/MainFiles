// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputChord;
class UBindCapturePrompt;
#ifdef AUTOSETTINGS_BindCaptureButton_generated_h
#error "BindCaptureButton.generated.h already included, missing '#pragma once' in BindCaptureButton.h"
#endif
#define AUTOSETTINGS_BindCaptureButton_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_RPC_WRAPPERS \
	virtual void InitializePrompt_Implementation(UBindCapturePrompt* PromptWidget); \
 \
	DECLARE_FUNCTION(execChordCaptured); \
	DECLARE_FUNCTION(execInitializePrompt); \
	DECLARE_FUNCTION(execStartCapture);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InitializePrompt_Implementation(UBindCapturePrompt* PromptWidget); \
 \
	DECLARE_FUNCTION(execChordCaptured); \
	DECLARE_FUNCTION(execInitializePrompt); \
	DECLARE_FUNCTION(execStartCapture);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_EVENT_PARMS \
	struct BindCaptureButton_eventInitializePrompt_Parms \
	{ \
		UBindCapturePrompt* PromptWidget; \
	};


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_CALLBACK_WRAPPERS
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBindCaptureButton(); \
	friend struct Z_Construct_UClass_UBindCaptureButton_Statics; \
public: \
	DECLARE_CLASS(UBindCaptureButton, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UBindCaptureButton)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBindCaptureButton(); \
	friend struct Z_Construct_UClass_UBindCaptureButton_Statics; \
public: \
	DECLARE_CLASS(UBindCaptureButton, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UBindCaptureButton)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBindCaptureButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBindCaptureButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBindCaptureButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBindCaptureButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBindCaptureButton(UBindCaptureButton&&); \
	NO_API UBindCaptureButton(const UBindCaptureButton&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBindCaptureButton(UBindCaptureButton&&); \
	NO_API UBindCaptureButton(const UBindCaptureButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBindCaptureButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBindCaptureButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBindCaptureButton)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Prompt() { return STRUCT_OFFSET(UBindCaptureButton, Prompt); }


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_12_PROLOG \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_EVENT_PARMS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class UBindCaptureButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCaptureButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
