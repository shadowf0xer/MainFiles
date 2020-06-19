// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSETTINGS_ToggleSetting_generated_h
#error "ToggleSetting.generated.h already included, missing '#pragma once' in ToggleSetting.h"
#endif
#define AUTOSETTINGS_ToggleSetting_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_RPC_WRAPPERS \
	virtual void UpdateToggleState_Implementation(bool State); \
 \
	DECLARE_FUNCTION(execToggleStateUpdated); \
	DECLARE_FUNCTION(execUpdateToggleState);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateToggleState_Implementation(bool State); \
 \
	DECLARE_FUNCTION(execToggleStateUpdated); \
	DECLARE_FUNCTION(execUpdateToggleState);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_EVENT_PARMS \
	struct ToggleSetting_eventUpdateToggleState_Parms \
	{ \
		bool State; \
	};


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_CALLBACK_WRAPPERS
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToggleSetting(); \
	friend struct Z_Construct_UClass_UToggleSetting_Statics; \
public: \
	DECLARE_CLASS(UToggleSetting, UAutoSettingWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UToggleSetting)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUToggleSetting(); \
	friend struct Z_Construct_UClass_UToggleSetting_Statics; \
public: \
	DECLARE_CLASS(UToggleSetting, UAutoSettingWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UToggleSetting)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToggleSetting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToggleSetting) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToggleSetting); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToggleSetting); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToggleSetting(UToggleSetting&&); \
	NO_API UToggleSetting(const UToggleSetting&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToggleSetting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToggleSetting(UToggleSetting&&); \
	NO_API UToggleSetting(const UToggleSetting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToggleSetting); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToggleSetting); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToggleSetting)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_11_PROLOG \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_EVENT_PARMS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class UToggleSetting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_ToggleSetting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
