// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSettingOption;
#ifdef AUTOSETTINGS_SelectSetting_generated_h
#error "SelectSetting.generated.h already included, missing '#pragma once' in SelectSetting.h"
#endif
#define AUTOSETTINGS_SelectSetting_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_RPC_WRAPPERS \
	virtual void UpdateOptions_Implementation(TArray<FSettingOption> const& InOptions); \
 \
	DECLARE_FUNCTION(execUpdateOptions);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateOptions_Implementation(TArray<FSettingOption> const& InOptions); \
 \
	DECLARE_FUNCTION(execUpdateOptions);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_EVENT_PARMS \
	struct SelectSetting_eventUpdateOptions_Parms \
	{ \
		TArray<FSettingOption> InOptions; \
	};


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_CALLBACK_WRAPPERS
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSelectSetting(); \
	friend struct Z_Construct_UClass_USelectSetting_Statics; \
public: \
	DECLARE_CLASS(USelectSetting, UAutoSettingWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(USelectSetting)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSelectSetting(); \
	friend struct Z_Construct_UClass_USelectSetting_Statics; \
public: \
	DECLARE_CLASS(USelectSetting, UAutoSettingWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(USelectSetting)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USelectSetting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectSetting) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USelectSetting); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectSetting); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USelectSetting(USelectSetting&&); \
	NO_API USelectSetting(const USelectSetting&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USelectSetting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USelectSetting(USelectSetting&&); \
	NO_API USelectSetting(const USelectSetting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USelectSetting); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectSetting); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectSetting)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bUpdatingSettingOptions() { return STRUCT_OFFSET(USelectSetting, bUpdatingSettingOptions); }


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_12_PROLOG \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_EVENT_PARMS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class USelectSetting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SelectSetting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
