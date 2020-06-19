// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URadioButton;
class UPanelSlot;
struct FSettingOption;
#ifdef AUTOSETTINGS_RadioSelect_generated_h
#error "RadioSelect.generated.h already included, missing '#pragma once' in RadioSelect.h"
#endif
#define AUTOSETTINGS_RadioSelect_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_RPC_WRAPPERS \
	virtual void OnButtonCreated_Implementation(URadioButton* Button, UPanelSlot* NewSlot); \
 \
	DECLARE_FUNCTION(execButtonSelected); \
	DECLARE_FUNCTION(execOnButtonCreated); \
	DECLARE_FUNCTION(execGetRadioButtonWidgets); \
	DECLARE_FUNCTION(execSelect); \
	DECLARE_FUNCTION(execSetOptions); \
	DECLARE_FUNCTION(execGetOptions);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnButtonCreated_Implementation(URadioButton* Button, UPanelSlot* NewSlot); \
 \
	DECLARE_FUNCTION(execButtonSelected); \
	DECLARE_FUNCTION(execOnButtonCreated); \
	DECLARE_FUNCTION(execGetRadioButtonWidgets); \
	DECLARE_FUNCTION(execSelect); \
	DECLARE_FUNCTION(execSetOptions); \
	DECLARE_FUNCTION(execGetOptions);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_EVENT_PARMS \
	struct RadioSelect_eventOnButtonCreated_Parms \
	{ \
		URadioButton* Button; \
		UPanelSlot* NewSlot; \
	};


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_CALLBACK_WRAPPERS
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURadioSelect(); \
	friend struct Z_Construct_UClass_URadioSelect_Statics; \
public: \
	DECLARE_CLASS(URadioSelect, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(URadioSelect)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURadioSelect(); \
	friend struct Z_Construct_UClass_URadioSelect_Statics; \
public: \
	DECLARE_CLASS(URadioSelect, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(URadioSelect)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URadioSelect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URadioSelect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadioSelect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadioSelect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URadioSelect(URadioSelect&&); \
	NO_API URadioSelect(const URadioSelect&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URadioSelect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URadioSelect(URadioSelect&&); \
	NO_API URadioSelect(const URadioSelect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadioSelect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadioSelect); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URadioSelect)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ButtonContainer() { return STRUCT_OFFSET(URadioSelect, ButtonContainer); } \
	FORCEINLINE static uint32 __PPO__RadioButtons() { return STRUCT_OFFSET(URadioSelect, RadioButtons); }


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_14_PROLOG \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_EVENT_PARMS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class URadioSelect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_GenericControls_RadioSelect_RadioSelect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
