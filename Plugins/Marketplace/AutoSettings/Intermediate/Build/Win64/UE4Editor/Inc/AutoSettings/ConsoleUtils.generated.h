// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSETTINGS_ConsoleUtils_generated_h
#error "ConsoleUtils.generated.h already included, missing '#pragma once' in ConsoleUtils.h"
#endif
#define AUTOSETTINGS_ConsoleUtils_generated_h

#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_SPARSE_DATA
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetStringCVar); \
	DECLARE_FUNCTION(execSetFloatCVar); \
	DECLARE_FUNCTION(execSetBoolCVar); \
	DECLARE_FUNCTION(execSetIntCVar); \
	DECLARE_FUNCTION(execGetStringCVar); \
	DECLARE_FUNCTION(execGetFloatCVar); \
	DECLARE_FUNCTION(execGetBoolCVar); \
	DECLARE_FUNCTION(execGetIntCVar); \
	DECLARE_FUNCTION(execIsCVarRegistered);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetStringCVar); \
	DECLARE_FUNCTION(execSetFloatCVar); \
	DECLARE_FUNCTION(execSetBoolCVar); \
	DECLARE_FUNCTION(execSetIntCVar); \
	DECLARE_FUNCTION(execGetStringCVar); \
	DECLARE_FUNCTION(execGetFloatCVar); \
	DECLARE_FUNCTION(execGetBoolCVar); \
	DECLARE_FUNCTION(execGetIntCVar); \
	DECLARE_FUNCTION(execIsCVarRegistered);


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConsoleUtils(); \
	friend struct Z_Construct_UClass_UConsoleUtils_Statics; \
public: \
	DECLARE_CLASS(UConsoleUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UConsoleUtils)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUConsoleUtils(); \
	friend struct Z_Construct_UClass_UConsoleUtils_Statics; \
public: \
	DECLARE_CLASS(UConsoleUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(UConsoleUtils)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsoleUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsoleUtils); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConsoleUtils(UConsoleUtils&&); \
	NO_API UConsoleUtils(const UConsoleUtils&); \
public:


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsoleUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConsoleUtils(UConsoleUtils&&); \
	NO_API UConsoleUtils(const UConsoleUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsoleUtils); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleUtils)


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_12_PROLOG
#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_RPC_WRAPPERS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_INCLASS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_SPARSE_DATA \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class UConsoleUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AutoSettings_Source_AutoSettings_Public_Console_ConsoleUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
