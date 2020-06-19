// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
class UWidget;
class UAutoSettingWidget;
#ifdef AUTOSETTINGS_SettingContainerUtils_generated_h
#error "SettingContainerUtils.generated.h already included, missing '#pragma once' in SettingContainerUtils.h"
#endif
#define AUTOSETTINGS_SettingContainerUtils_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancelChildSettings); \
	DECLARE_FUNCTION(execSaveChildSettings); \
	DECLARE_FUNCTION(execApplyChildSettings); \
	DECLARE_FUNCTION(execDoesAnyChildSettingHaveUnsavedChange); \
	DECLARE_FUNCTION(execDoesAnyChildSettingHaveUnappliedChange); \
	DECLARE_FUNCTION(execGetChildSettings);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancelChildSettings); \
	DECLARE_FUNCTION(execSaveChildSettings); \
	DECLARE_FUNCTION(execApplyChildSettings); \
	DECLARE_FUNCTION(execDoesAnyChildSettingHaveUnsavedChange); \
	DECLARE_FUNCTION(execDoesAnyChildSettingHaveUnappliedChange); \
	DECLARE_FUNCTION(execGetChildSettings);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSettingContainerUtils(); \
	friend struct Z_Construct_UClass_USettingContainerUtils_Statics; \
public: \
	DECLARE_CLASS(USettingContainerUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(USettingContainerUtils)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSettingContainerUtils(); \
	friend struct Z_Construct_UClass_USettingContainerUtils_Statics; \
public: \
	DECLARE_CLASS(USettingContainerUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(USettingContainerUtils)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingContainerUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingContainerUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingContainerUtils); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingContainerUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USettingContainerUtils(USettingContainerUtils&&); \
	NO_API USettingContainerUtils(const USettingContainerUtils&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingContainerUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USettingContainerUtils(USettingContainerUtils&&); \
	NO_API USettingContainerUtils(const USettingContainerUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingContainerUtils); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingContainerUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingContainerUtils)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_15_PROLOG
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class USettingContainerUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Utility_SettingContainerUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
