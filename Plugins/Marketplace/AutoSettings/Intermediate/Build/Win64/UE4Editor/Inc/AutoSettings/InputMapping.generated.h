// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputChord;
#ifdef AUTOSETTINGS_InputMapping_generated_h
#error "InputMapping.generated.h already included, missing '#pragma once' in InputMapping.h"
#endif
#define AUTOSETTINGS_InputMapping_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_RPC_WRAPPERS \
	virtual void UpdateLabel_Implementation(); \
	virtual void UpdateMapping_Implementation(); \
 \
	DECLARE_FUNCTION(execChordCaptured); \
	DECLARE_FUNCTION(execUpdateLabel); \
	DECLARE_FUNCTION(execBindChord); \
	DECLARE_FUNCTION(execUpdateMapping);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateLabel_Implementation(); \
	virtual void UpdateMapping_Implementation(); \
 \
	DECLARE_FUNCTION(execChordCaptured); \
	DECLARE_FUNCTION(execUpdateLabel); \
	DECLARE_FUNCTION(execBindChord); \
	DECLARE_FUNCTION(execUpdateMapping);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_EVENT_PARMS
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_CALLBACK_WRAPPERS
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputMapping(); \
	friend struct Z_Construct_UClass_UInputMapping_Statics; \
public: \
	DECLARE_CLASS(UInputMapping, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UInputMapping)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInputMapping(); \
	friend struct Z_Construct_UClass_UInputMapping_Statics; \
public: \
	DECLARE_CLASS(UInputMapping, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UInputMapping)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputMapping(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputMapping) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputMapping); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputMapping); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputMapping(UInputMapping&&); \
	NO_API UInputMapping(const UInputMapping&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputMapping(UInputMapping&&); \
	NO_API UInputMapping(const UInputMapping&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputMapping); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputMapping); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputMapping)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MappingGroup() { return STRUCT_OFFSET(UInputMapping, MappingGroup); } \
	FORCEINLINE static uint32 __PPO__KeyGroup() { return STRUCT_OFFSET(UInputMapping, KeyGroup); } \
	FORCEINLINE static uint32 __PPO__IconTags() { return STRUCT_OFFSET(UInputMapping, IconTags); } \
	FORCEINLINE static uint32 __PPO__BindCaptureButton() { return STRUCT_OFFSET(UInputMapping, BindCaptureButton); }


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_12_PROLOG \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_EVENT_PARMS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class UInputMapping>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_InputMapping_UI_InputMapping_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
