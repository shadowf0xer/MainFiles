// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSETTINGS_CVarChangeListener_generated_h
#error "CVarChangeListener.generated.h already included, missing '#pragma once' in CVarChangeListener.h"
#endif
#define AUTOSETTINGS_CVarChangeListener_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_10_DELEGATE \
struct _Script_AutoSettings_eventStringCVarChangedEvent_Parms \
{ \
	FString NewValue; \
}; \
static inline void FStringCVarChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& StringCVarChangedEvent, const FString& NewValue) \
{ \
	_Script_AutoSettings_eventStringCVarChangedEvent_Parms Parms; \
	Parms.NewValue=NewValue; \
	StringCVarChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_9_DELEGATE \
struct _Script_AutoSettings_eventFloatCVarChangedEvent_Parms \
{ \
	float NewValue; \
}; \
static inline void FFloatCVarChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& FloatCVarChangedEvent, float NewValue) \
{ \
	_Script_AutoSettings_eventFloatCVarChangedEvent_Parms Parms; \
	Parms.NewValue=NewValue; \
	FloatCVarChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_8_DELEGATE \
struct _Script_AutoSettings_eventBoolCVarChangedEvent_Parms \
{ \
	bool NewValue; \
}; \
static inline void FBoolCVarChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& BoolCVarChangedEvent, bool NewValue) \
{ \
	_Script_AutoSettings_eventBoolCVarChangedEvent_Parms Parms; \
	Parms.NewValue=NewValue ? true : false; \
	BoolCVarChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_7_DELEGATE \
struct _Script_AutoSettings_eventIntCVarChangedEvent_Parms \
{ \
	int32 NewValue; \
}; \
static inline void FIntCVarChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& IntCVarChangedEvent, int32 NewValue) \
{ \
	_Script_AutoSettings_eventIntCVarChangedEvent_Parms Parms; \
	Parms.NewValue=NewValue; \
	IntCVarChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_RPC_WRAPPERS
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCVarChangeListener(); \
	friend struct Z_Construct_UClass_UCVarChangeListener_Statics; \
public: \
	DECLARE_CLASS(UCVarChangeListener, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UCVarChangeListener)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCVarChangeListener(); \
	friend struct Z_Construct_UClass_UCVarChangeListener_Statics; \
public: \
	DECLARE_CLASS(UCVarChangeListener, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UCVarChangeListener)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCVarChangeListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCVarChangeListener) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCVarChangeListener); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCVarChangeListener); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCVarChangeListener(UCVarChangeListener&&); \
	NO_API UCVarChangeListener(const UCVarChangeListener&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCVarChangeListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCVarChangeListener(UCVarChangeListener&&); \
	NO_API UCVarChangeListener(const UCVarChangeListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCVarChangeListener); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCVarChangeListener); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCVarChangeListener)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_15_PROLOG
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class UCVarChangeListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
