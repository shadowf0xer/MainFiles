// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSETTINGS_AutoSettingWidget_generated_h
#error "AutoSettingWidget.generated.h already included, missing '#pragma once' in AutoSettingWidget.h"
#endif
#define AUTOSETTINGS_AutoSettingWidget_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_RPC_WRAPPERS \
	virtual void UpdateSelection_Implementation(const FString& Value); \
 \
	DECLARE_FUNCTION(execApplySettingValue); \
	DECLARE_FUNCTION(execUpdateSelection); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execSave); \
	DECLARE_FUNCTION(execApply); \
	DECLARE_FUNCTION(execHasUnsavedChange); \
	DECLARE_FUNCTION(execHasUnappliedChange);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateSelection_Implementation(const FString& Value); \
 \
	DECLARE_FUNCTION(execApplySettingValue); \
	DECLARE_FUNCTION(execUpdateSelection); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execSave); \
	DECLARE_FUNCTION(execApply); \
	DECLARE_FUNCTION(execHasUnsavedChange); \
	DECLARE_FUNCTION(execHasUnappliedChange);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_EVENT_PARMS \
	struct AutoSettingWidget_eventUpdateSelection_Parms \
	{ \
		FString Value; \
	};


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_CALLBACK_WRAPPERS
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoSettingWidget(); \
	friend struct Z_Construct_UClass_UAutoSettingWidget_Statics; \
public: \
	DECLARE_CLASS(UAutoSettingWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UAutoSettingWidget)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAutoSettingWidget(); \
	friend struct Z_Construct_UClass_UAutoSettingWidget_Statics; \
public: \
	DECLARE_CLASS(UAutoSettingWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UAutoSettingWidget)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutoSettingWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoSettingWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoSettingWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoSettingWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutoSettingWidget(UAutoSettingWidget&&); \
	NO_API UAutoSettingWidget(const UAutoSettingWidget&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutoSettingWidget(UAutoSettingWidget&&); \
	NO_API UAutoSettingWidget(const UAutoSettingWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoSettingWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoSettingWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoSettingWidget)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentValue() { return STRUCT_OFFSET(UAutoSettingWidget, CurrentValue); } \
	FORCEINLINE static uint32 __PPO__bHasUnappliedChange() { return STRUCT_OFFSET(UAutoSettingWidget, bHasUnappliedChange); } \
	FORCEINLINE static uint32 __PPO__bHasUnsavedChange() { return STRUCT_OFFSET(UAutoSettingWidget, bHasUnsavedChange); } \
	FORCEINLINE static uint32 __PPO__bUpdatingSettingSelection() { return STRUCT_OFFSET(UAutoSettingWidget, bUpdatingSettingSelection); }


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_13_PROLOG \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_EVENT_PARMS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class UAutoSettingWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_UI_AutoSettingWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
