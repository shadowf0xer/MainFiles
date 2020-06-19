// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSETTINGS_SettingValueMask_generated_h
#error "SettingValueMask.generated.h already included, missing '#pragma once' in SettingValueMask.h"
#endif
#define AUTOSETTINGS_SettingValueMask_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_RPC_WRAPPERS \
	virtual FString RecombineValues_Implementation(const FString& SettingValue, const FString& ConsoleValue) const; \
	virtual FString MaskValue_Implementation(const FString& ConsoleValue) const; \
 \
	DECLARE_FUNCTION(execRecombineValues); \
	DECLARE_FUNCTION(execMaskValue);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FString RecombineValues_Implementation(const FString& SettingValue, const FString& ConsoleValue) const; \
	virtual FString MaskValue_Implementation(const FString& ConsoleValue) const; \
 \
	DECLARE_FUNCTION(execRecombineValues); \
	DECLARE_FUNCTION(execMaskValue);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_EVENT_PARMS \
	struct SettingValueMask_eventMaskValue_Parms \
	{ \
		FString ConsoleValue; \
		FString ReturnValue; \
	}; \
	struct SettingValueMask_eventRecombineValues_Parms \
	{ \
		FString SettingValue; \
		FString ConsoleValue; \
		FString ReturnValue; \
	};


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_CALLBACK_WRAPPERS
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSettingValueMask(); \
	friend struct Z_Construct_UClass_USettingValueMask_Statics; \
public: \
	DECLARE_CLASS(USettingValueMask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(USettingValueMask)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSettingValueMask(); \
	friend struct Z_Construct_UClass_USettingValueMask_Statics; \
public: \
	DECLARE_CLASS(USettingValueMask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(USettingValueMask)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingValueMask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingValueMask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingValueMask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingValueMask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USettingValueMask(USettingValueMask&&); \
	NO_API USettingValueMask(const USettingValueMask&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingValueMask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USettingValueMask(USettingValueMask&&); \
	NO_API USettingValueMask(const USettingValueMask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingValueMask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingValueMask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingValueMask)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_11_PROLOG \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_EVENT_PARMS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class USettingValueMask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingValueMask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
