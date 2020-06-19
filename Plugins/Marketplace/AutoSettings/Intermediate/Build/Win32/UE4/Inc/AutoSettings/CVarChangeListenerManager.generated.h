// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSETTINGS_CVarChangeListenerManager_generated_h
#error "CVarChangeListenerManager.generated.h already included, missing '#pragma once' in CVarChangeListenerManager.h"
#endif
#define AUTOSETTINGS_CVarChangeListenerManager_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_11_DELEGATE \
struct _Script_AutoSettings_eventStringCVarChangedSignature_Parms \
{ \
	FString NewValue; \
}; \
static inline void FStringCVarChangedSignature_DelegateWrapper(const FScriptDelegate& StringCVarChangedSignature, const FString& NewValue) \
{ \
	_Script_AutoSettings_eventStringCVarChangedSignature_Parms Parms; \
	Parms.NewValue=NewValue; \
	StringCVarChangedSignature.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_10_DELEGATE \
struct _Script_AutoSettings_eventFloatCVarChangedSignature_Parms \
{ \
	float NewValue; \
}; \
static inline void FFloatCVarChangedSignature_DelegateWrapper(const FScriptDelegate& FloatCVarChangedSignature, float NewValue) \
{ \
	_Script_AutoSettings_eventFloatCVarChangedSignature_Parms Parms; \
	Parms.NewValue=NewValue; \
	FloatCVarChangedSignature.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_9_DELEGATE \
struct _Script_AutoSettings_eventBoolCVarChangedSignature_Parms \
{ \
	bool NewValue; \
}; \
static inline void FBoolCVarChangedSignature_DelegateWrapper(const FScriptDelegate& BoolCVarChangedSignature, bool NewValue) \
{ \
	_Script_AutoSettings_eventBoolCVarChangedSignature_Parms Parms; \
	Parms.NewValue=NewValue ? true : false; \
	BoolCVarChangedSignature.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_8_DELEGATE \
struct _Script_AutoSettings_eventIntCVarChangedSignature_Parms \
{ \
	int32 NewValue; \
}; \
static inline void FIntCVarChangedSignature_DelegateWrapper(const FScriptDelegate& IntCVarChangedSignature, int32 NewValue) \
{ \
	_Script_AutoSettings_eventIntCVarChangedSignature_Parms Parms; \
	Parms.NewValue=NewValue; \
	IntCVarChangedSignature.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddStringCVarCallbackStatic); \
	DECLARE_FUNCTION(execAddFloatCVarCallbackStatic); \
	DECLARE_FUNCTION(execAddBoolCVarCallbackStatic); \
	DECLARE_FUNCTION(execAddIntCVarCallbackStatic);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddStringCVarCallbackStatic); \
	DECLARE_FUNCTION(execAddFloatCVarCallbackStatic); \
	DECLARE_FUNCTION(execAddBoolCVarCallbackStatic); \
	DECLARE_FUNCTION(execAddIntCVarCallbackStatic);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCVarChangeListenerManager(); \
	friend struct Z_Construct_UClass_UCVarChangeListenerManager_Statics; \
public: \
	DECLARE_CLASS(UCVarChangeListenerManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UCVarChangeListenerManager)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCVarChangeListenerManager(); \
	friend struct Z_Construct_UClass_UCVarChangeListenerManager_Statics; \
public: \
	DECLARE_CLASS(UCVarChangeListenerManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UCVarChangeListenerManager)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCVarChangeListenerManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCVarChangeListenerManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCVarChangeListenerManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCVarChangeListenerManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCVarChangeListenerManager(UCVarChangeListenerManager&&); \
	NO_API UCVarChangeListenerManager(const UCVarChangeListenerManager&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCVarChangeListenerManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCVarChangeListenerManager(UCVarChangeListenerManager&&); \
	NO_API UCVarChangeListenerManager(const UCVarChangeListenerManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCVarChangeListenerManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCVarChangeListenerManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCVarChangeListenerManager)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Listeners() { return STRUCT_OFFSET(UCVarChangeListenerManager, Listeners); }


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_18_PROLOG
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class UCVarChangeListenerManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_CVarChangeListenerManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
