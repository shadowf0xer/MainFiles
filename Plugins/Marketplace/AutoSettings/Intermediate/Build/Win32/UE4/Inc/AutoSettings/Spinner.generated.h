// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSettingOption;
#ifdef AUTOSETTINGS_Spinner_generated_h
#error "Spinner.generated.h already included, missing '#pragma once' in Spinner.h"
#endif
#define AUTOSETTINGS_Spinner_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_9_DELEGATE \
struct _Script_AutoSettings_eventSpinnerSelectionChanged_Parms \
{ \
	FString Value; \
}; \
static inline void FSpinnerSelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& SpinnerSelectionChanged, const FString& Value) \
{ \
	_Script_AutoSettings_eventSpinnerSelectionChanged_Parms Parms; \
	Parms.Value=Value; \
	SpinnerSelectionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_RPC_WRAPPERS \
	virtual void OnSelectionChanged_Implementation(FSettingOption SelectedOption); \
 \
	DECLARE_FUNCTION(execOnSelectionChanged); \
	DECLARE_FUNCTION(execGetCurrentIndex); \
	DECLARE_FUNCTION(execGetCurrentOption); \
	DECLARE_FUNCTION(execHasValidPrevious); \
	DECLARE_FUNCTION(execHasValidNext); \
	DECLARE_FUNCTION(execPrevious); \
	DECLARE_FUNCTION(execNext); \
	DECLARE_FUNCTION(execSelectIndex); \
	DECLARE_FUNCTION(execSelectValue);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnSelectionChanged_Implementation(FSettingOption SelectedOption); \
 \
	DECLARE_FUNCTION(execOnSelectionChanged); \
	DECLARE_FUNCTION(execGetCurrentIndex); \
	DECLARE_FUNCTION(execGetCurrentOption); \
	DECLARE_FUNCTION(execHasValidPrevious); \
	DECLARE_FUNCTION(execHasValidNext); \
	DECLARE_FUNCTION(execPrevious); \
	DECLARE_FUNCTION(execNext); \
	DECLARE_FUNCTION(execSelectIndex); \
	DECLARE_FUNCTION(execSelectValue);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_EVENT_PARMS \
	struct Spinner_eventOnSelectionChanged_Parms \
	{ \
		FSettingOption SelectedOption; \
	};


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_CALLBACK_WRAPPERS
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpinner(); \
	friend struct Z_Construct_UClass_USpinner_Statics; \
public: \
	DECLARE_CLASS(USpinner, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(USpinner)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSpinner(); \
	friend struct Z_Construct_UClass_USpinner_Statics; \
public: \
	DECLARE_CLASS(USpinner, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(USpinner)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpinner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpinner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpinner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpinner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpinner(USpinner&&); \
	NO_API USpinner(const USpinner&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpinner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpinner(USpinner&&); \
	NO_API USpinner(const USpinner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpinner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpinner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpinner)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_14_PROLOG \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_EVENT_PARMS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class USpinner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_Spinner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
