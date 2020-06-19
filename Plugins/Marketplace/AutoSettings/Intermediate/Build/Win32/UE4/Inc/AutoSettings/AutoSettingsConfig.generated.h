// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
struct FGameplayTag;
#ifdef AUTOSETTINGS_AutoSettingsConfig_generated_h
#error "AutoSettingsConfig.generated.h already included, missing '#pragma once' in AutoSettingsConfig.h"
#endif
#define AUTOSETTINGS_AutoSettingsConfig_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_157_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKeyFriendlyName_Statics; \
	AUTOSETTINGS_API static class UScriptStruct* StaticStruct();


template<> AUTOSETTINGS_API UScriptStruct* StaticStruct<struct FKeyFriendlyName>();

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAxisAssociation_Statics; \
	AUTOSETTINGS_API static class UScriptStruct* StaticStruct();


template<> AUTOSETTINGS_API UScriptStruct* StaticStruct<struct FAxisAssociation>();

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMappingGroupLink_Statics; \
	AUTOSETTINGS_API static class UScriptStruct* StaticStruct();


template<> AUTOSETTINGS_API UScriptStruct* StaticStruct<struct FMappingGroupLink>();

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKeyScale_Statics; \
	AUTOSETTINGS_API static class UScriptStruct* StaticStruct();


template<> AUTOSETTINGS_API UScriptStruct* StaticStruct<struct FKeyScale>();

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKeyGroup_Statics; \
	AUTOSETTINGS_API static class UScriptStruct* StaticStruct();


template<> AUTOSETTINGS_API UScriptStruct* StaticStruct<struct FKeyGroup>();

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKeyIconSet_Statics; \
	AUTOSETTINGS_API static class UScriptStruct* StaticStruct();


template<> AUTOSETTINGS_API UScriptStruct* StaticStruct<struct FKeyIconSet>();

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKeyIconPair_Statics; \
	AUTOSETTINGS_API static class UScriptStruct* StaticStruct();


template<> AUTOSETTINGS_API UScriptStruct* StaticStruct<struct FKeyIconPair>();

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetKeyGroupStatic); \
	DECLARE_FUNCTION(execGetKeyFriendlyNameStatic);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetKeyGroupStatic); \
	DECLARE_FUNCTION(execGetKeyFriendlyNameStatic);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoSettingsConfig(); \
	friend struct Z_Construct_UClass_UAutoSettingsConfig_Statics; \
public: \
	DECLARE_CLASS(UAutoSettingsConfig, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UAutoSettingsConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_INCLASS \
private: \
	static void StaticRegisterNativesUAutoSettingsConfig(); \
	friend struct Z_Construct_UClass_UAutoSettingsConfig_Statics; \
public: \
	DECLARE_CLASS(UAutoSettingsConfig, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UAutoSettingsConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutoSettingsConfig(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoSettingsConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoSettingsConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoSettingsConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutoSettingsConfig(UAutoSettingsConfig&&); \
	NO_API UAutoSettingsConfig(const UAutoSettingsConfig&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutoSettingsConfig(UAutoSettingsConfig&&); \
	NO_API UAutoSettingsConfig(const UAutoSettingsConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoSettingsConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoSettingsConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAutoSettingsConfig)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlacklistedActions_DEPRECATED() { return STRUCT_OFFSET(UAutoSettingsConfig, BlacklistedActions_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__BlacklistedAxes_DEPRECATED() { return STRUCT_OFFSET(UAutoSettingsConfig, BlacklistedAxes_DEPRECATED); }


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_169_PROLOG
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h_172_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class UAutoSettingsConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_AutoSettingsConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
