// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAutoSettingData;
#ifdef AUTOSETTINGS_SettingsManager_generated_h
#error "SettingsManager.generated.h already included, missing '#pragma once' in SettingsManager.h"
#endif
#define AUTOSETTINGS_SettingsManager_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutoSettingData_Statics; \
	AUTOSETTINGS_API static class UScriptStruct* StaticStruct();


template<> AUTOSETTINGS_API UScriptStruct* StaticStruct<struct FAutoSettingData>();

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_41_DELEGATE \
struct _Script_AutoSettings_eventSettingSavedSignature_Parms \
{ \
	FAutoSettingData SettingData; \
}; \
static inline void FSettingSavedSignature_DelegateWrapper(const FMulticastScriptDelegate& SettingSavedSignature, FAutoSettingData SettingData) \
{ \
	_Script_AutoSettings_eventSettingSavedSignature_Parms Parms; \
	Parms.SettingData=SettingData; \
	SettingSavedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplySettingStatic); \
	DECLARE_FUNCTION(execSaveSettingStatic); \
	DECLARE_FUNCTION(execAutoDetectSettingsStatic); \
	DECLARE_FUNCTION(execRegisterStringCVarSettingWithCallback); \
	DECLARE_FUNCTION(execRegisterFloatCVarSettingWithCallback); \
	DECLARE_FUNCTION(execRegisterBoolCVarSettingWithCallback); \
	DECLARE_FUNCTION(execRegisterIntCVarSettingWithCallback); \
	DECLARE_FUNCTION(execRegisterStringCVarSetting); \
	DECLARE_FUNCTION(execRegisterFloatCVarSetting); \
	DECLARE_FUNCTION(execRegisterBoolCVarSetting); \
	DECLARE_FUNCTION(execRegisterIntCVarSetting); \
	DECLARE_FUNCTION(execGetValue);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplySettingStatic); \
	DECLARE_FUNCTION(execSaveSettingStatic); \
	DECLARE_FUNCTION(execAutoDetectSettingsStatic); \
	DECLARE_FUNCTION(execRegisterStringCVarSettingWithCallback); \
	DECLARE_FUNCTION(execRegisterFloatCVarSettingWithCallback); \
	DECLARE_FUNCTION(execRegisterBoolCVarSettingWithCallback); \
	DECLARE_FUNCTION(execRegisterIntCVarSettingWithCallback); \
	DECLARE_FUNCTION(execRegisterStringCVarSetting); \
	DECLARE_FUNCTION(execRegisterFloatCVarSetting); \
	DECLARE_FUNCTION(execRegisterBoolCVarSetting); \
	DECLARE_FUNCTION(execRegisterIntCVarSetting); \
	DECLARE_FUNCTION(execGetValue);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSettingsManager(); \
	friend struct Z_Construct_UClass_USettingsManager_Statics; \
public: \
	DECLARE_CLASS(USettingsManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(USettingsManager)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUSettingsManager(); \
	friend struct Z_Construct_UClass_USettingsManager_Statics; \
public: \
	DECLARE_CLASS(USettingsManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(USettingsManager)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingsManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingsManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingsManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingsManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USettingsManager(USettingsManager&&); \
	NO_API USettingsManager(const USettingsManager&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USettingsManager(USettingsManager&&); \
	NO_API USettingsManager(const USettingsManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingsManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USettingsManager)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IniFilename() { return STRUCT_OFFSET(USettingsManager, IniFilename); }


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_46_PROLOG
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class USettingsManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_SettingsManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
