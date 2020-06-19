// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSETTINGS_SliderSetting_generated_h
#error "SliderSetting.generated.h already included, missing '#pragma once' in SliderSetting.h"
#endif
#define AUTOSETTINGS_SliderSetting_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_RPC_WRAPPERS \
	virtual bool ShouldSaveCurrentValue_Implementation() const; \
	virtual void UpdateSliderValue_Implementation(float NormalizedValue, float RawValue); \
 \
	DECLARE_FUNCTION(execShouldSaveCurrentValue); \
	DECLARE_FUNCTION(execSliderValueUpdated); \
	DECLARE_FUNCTION(execUpdateSliderValue); \
	DECLARE_FUNCTION(execNormalizedValueToRaw); \
	DECLARE_FUNCTION(execRawValueToNormalized); \
	DECLARE_FUNCTION(execClampRawValue);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ShouldSaveCurrentValue_Implementation() const; \
	virtual void UpdateSliderValue_Implementation(float NormalizedValue, float RawValue); \
 \
	DECLARE_FUNCTION(execShouldSaveCurrentValue); \
	DECLARE_FUNCTION(execSliderValueUpdated); \
	DECLARE_FUNCTION(execUpdateSliderValue); \
	DECLARE_FUNCTION(execNormalizedValueToRaw); \
	DECLARE_FUNCTION(execRawValueToNormalized); \
	DECLARE_FUNCTION(execClampRawValue);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_EVENT_PARMS \
	struct SliderSetting_eventOnSliderValueUpdated_Parms \
	{ \
		float NormalizedValue; \
		float RawValue; \
	}; \
	struct SliderSetting_eventShouldSaveCurrentValue_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SliderSetting_eventShouldSaveCurrentValue_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SliderSetting_eventUpdateSliderValue_Parms \
	{ \
		float NormalizedValue; \
		float RawValue; \
	};


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_CALLBACK_WRAPPERS
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSliderSetting(); \
	friend struct Z_Construct_UClass_USliderSetting_Statics; \
public: \
	DECLARE_CLASS(USliderSetting, UAutoSettingWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(USliderSetting)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSliderSetting(); \
	friend struct Z_Construct_UClass_USliderSetting_Statics; \
public: \
	DECLARE_CLASS(USliderSetting, UAutoSettingWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(USliderSetting)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USliderSetting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USliderSetting) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USliderSetting); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USliderSetting); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USliderSetting(USliderSetting&&); \
	NO_API USliderSetting(const USliderSetting&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USliderSetting(USliderSetting&&); \
	NO_API USliderSetting(const USliderSetting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USliderSetting); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USliderSetting); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USliderSetting)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_11_PROLOG \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_EVENT_PARMS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class USliderSetting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_SettingControls_SliderSetting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
