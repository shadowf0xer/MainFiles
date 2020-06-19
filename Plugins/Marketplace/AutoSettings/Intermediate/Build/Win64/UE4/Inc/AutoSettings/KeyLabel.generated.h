// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESlateVisibility : uint8;
struct FSlateBrush;
class UTexture;
#ifdef AUTOSETTINGS_KeyLabel_generated_h
#error "KeyLabel.generated.h already included, missing '#pragma once' in KeyLabel.h"
#endif
#define AUTOSETTINGS_KeyLabel_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_RPC_WRAPPERS \
	virtual ESlateVisibility GetDisplayNameVisibility_Implementation() const; \
	virtual ESlateVisibility GetIconVisibility_Implementation() const; \
	virtual FSlateBrush GetIconBrush_Implementation() const; \
 \
	DECLARE_FUNCTION(execOnGlobalKeyIconTagsModified); \
	DECLARE_FUNCTION(execGetDisplayNameVisibility); \
	DECLARE_FUNCTION(execGetIconVisibility); \
	DECLARE_FUNCTION(execGetIconBrush); \
	DECLARE_FUNCTION(execHasValidKey); \
	DECLARE_FUNCTION(execHasIcon); \
	DECLARE_FUNCTION(execGetIcon); \
	DECLARE_FUNCTION(execGetDisplayName);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual ESlateVisibility GetDisplayNameVisibility_Implementation() const; \
	virtual ESlateVisibility GetIconVisibility_Implementation() const; \
	virtual FSlateBrush GetIconBrush_Implementation() const; \
 \
	DECLARE_FUNCTION(execOnGlobalKeyIconTagsModified); \
	DECLARE_FUNCTION(execGetDisplayNameVisibility); \
	DECLARE_FUNCTION(execGetIconVisibility); \
	DECLARE_FUNCTION(execGetIconBrush); \
	DECLARE_FUNCTION(execHasValidKey); \
	DECLARE_FUNCTION(execHasIcon); \
	DECLARE_FUNCTION(execGetIcon); \
	DECLARE_FUNCTION(execGetDisplayName);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_EVENT_PARMS \
	struct KeyLabel_eventGetDisplayNameVisibility_Parms \
	{ \
		ESlateVisibility ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		KeyLabel_eventGetDisplayNameVisibility_Parms() \
			: ReturnValue((ESlateVisibility)0) \
		{ \
		} \
	}; \
	struct KeyLabel_eventGetIconBrush_Parms \
	{ \
		FSlateBrush ReturnValue; \
	}; \
	struct KeyLabel_eventGetIconVisibility_Parms \
	{ \
		ESlateVisibility ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		KeyLabel_eventGetIconVisibility_Parms() \
			: ReturnValue((ESlateVisibility)0) \
		{ \
		} \
	};


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_CALLBACK_WRAPPERS
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKeyLabel(); \
	friend struct Z_Construct_UClass_UKeyLabel_Statics; \
public: \
	DECLARE_CLASS(UKeyLabel, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UKeyLabel)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUKeyLabel(); \
	friend struct Z_Construct_UClass_UKeyLabel_Statics; \
public: \
	DECLARE_CLASS(UKeyLabel, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UKeyLabel)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKeyLabel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKeyLabel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKeyLabel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKeyLabel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKeyLabel(UKeyLabel&&); \
	NO_API UKeyLabel(const UKeyLabel&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKeyLabel(UKeyLabel&&); \
	NO_API UKeyLabel(const UKeyLabel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKeyLabel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKeyLabel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKeyLabel)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_12_PROLOG \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_EVENT_PARMS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class UKeyLabel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_KeyLabel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
