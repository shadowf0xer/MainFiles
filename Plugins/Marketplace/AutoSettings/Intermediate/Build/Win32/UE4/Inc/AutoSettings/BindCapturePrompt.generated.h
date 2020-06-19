// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputChord;
struct FKey;
struct FGameplayTag;
#ifdef AUTOSETTINGS_BindCapturePrompt_generated_h
#error "BindCapturePrompt.generated.h already included, missing '#pragma once' in BindCapturePrompt.h"
#endif
#define AUTOSETTINGS_BindCapturePrompt_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_14_DELEGATE \
struct _Script_AutoSettings_eventCapturePromptClosedEvent_Parms \
{ \
	bool bWasCancelled; \
}; \
static inline void FCapturePromptClosedEvent_DelegateWrapper(const FMulticastScriptDelegate& CapturePromptClosedEvent, bool bWasCancelled) \
{ \
	_Script_AutoSettings_eventCapturePromptClosedEvent_Parms Parms; \
	Parms.bWasCancelled=bWasCancelled ? true : false; \
	CapturePromptClosedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_12_DELEGATE \
struct _Script_AutoSettings_eventChordRejectedEvent_Parms \
{ \
	FInputChord CapturedChord; \
}; \
static inline void FChordRejectedEvent_DelegateWrapper(const FMulticastScriptDelegate& ChordRejectedEvent, FInputChord CapturedChord) \
{ \
	_Script_AutoSettings_eventChordRejectedEvent_Parms Parms; \
	Parms.CapturedChord=CapturedChord; \
	ChordRejectedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_10_DELEGATE \
struct _Script_AutoSettings_eventChordCapturedEvent_Parms \
{ \
	FInputChord CapturedChord; \
}; \
static inline void FChordCapturedEvent_DelegateWrapper(const FMulticastScriptDelegate& ChordCapturedEvent, FInputChord CapturedChord) \
{ \
	_Script_AutoSettings_eventChordCapturedEvent_Parms Parms; \
	Parms.CapturedChord=CapturedChord; \
	ChordCapturedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_RPC_WRAPPERS \
	virtual bool IsKeyAllowed_Implementation(FKey PrimaryKey); \
 \
	DECLARE_FUNCTION(execIsKeyAllowed); \
	DECLARE_FUNCTION(execGetKeyGroup); \
	DECLARE_FUNCTION(execCancel);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsKeyAllowed_Implementation(FKey PrimaryKey); \
 \
	DECLARE_FUNCTION(execIsKeyAllowed); \
	DECLARE_FUNCTION(execGetKeyGroup); \
	DECLARE_FUNCTION(execCancel);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_EVENT_PARMS \
	struct BindCapturePrompt_eventIsKeyAllowed_Parms \
	{ \
		FKey PrimaryKey; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BindCapturePrompt_eventIsKeyAllowed_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_CALLBACK_WRAPPERS
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBindCapturePrompt(); \
	friend struct Z_Construct_UClass_UBindCapturePrompt_Statics; \
public: \
	DECLARE_CLASS(UBindCapturePrompt, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UBindCapturePrompt)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUBindCapturePrompt(); \
	friend struct Z_Construct_UClass_UBindCapturePrompt_Statics; \
public: \
	DECLARE_CLASS(UBindCapturePrompt, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UBindCapturePrompt)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBindCapturePrompt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBindCapturePrompt) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBindCapturePrompt); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBindCapturePrompt); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBindCapturePrompt(UBindCapturePrompt&&); \
	NO_API UBindCapturePrompt(const UBindCapturePrompt&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBindCapturePrompt(UBindCapturePrompt&&); \
	NO_API UBindCapturePrompt(const UBindCapturePrompt&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBindCapturePrompt); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBindCapturePrompt); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBindCapturePrompt)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__KeysDown() { return STRUCT_OFFSET(UBindCapturePrompt, KeysDown); } \
	FORCEINLINE static uint32 __PPO__PreviousIgnoreInput() { return STRUCT_OFFSET(UBindCapturePrompt, PreviousIgnoreInput); } \
	FORCEINLINE static uint32 __PPO__AccumulatedMouseDelta() { return STRUCT_OFFSET(UBindCapturePrompt, AccumulatedMouseDelta); }


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_28_PROLOG \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_EVENT_PARMS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class UBindCapturePrompt>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_BindCapturePrompt_h


#define FOREACH_ENUM_EBINDINGCAPTUREMODE(op) \
	op(EBindingCaptureMode::OnReleased) \
	op(EBindingCaptureMode::OnPressed) 

enum class EBindingCaptureMode : uint8;
template<> AUTOSETTINGS_API UEnum* StaticEnum<EBindingCaptureMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
