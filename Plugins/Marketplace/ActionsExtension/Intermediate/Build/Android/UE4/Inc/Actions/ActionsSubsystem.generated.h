// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef ACTIONS_ActionsSubsystem_generated_h
#error "ActionsSubsystem.generated.h already included, missing '#pragma once' in ActionsSubsystem.h"
#endif
#define ACTIONS_ActionsSubsystem_generated_h

#define HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootAction_Statics; \
	ACTIONS_API static class UScriptStruct* StaticStruct();


template<> ACTIONS_API UScriptStruct* StaticStruct<struct FRootAction>();

#define HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActionsTickGroup_Statics; \
	ACTIONS_API static class UScriptStruct* StaticStruct();


template<> ACTIONS_API UScriptStruct* StaticStruct<struct FActionsTickGroup>();

#define HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_SPARSE_DATA
#define HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancelAllByOwner);


#define HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancelAllByOwner);


#define HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActionsSubsystem(); \
	friend struct Z_Construct_UClass_UActionsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UActionsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Actions"), NO_API) \
	DECLARE_SERIALIZER(UActionsSubsystem)


#define HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUActionsSubsystem(); \
	friend struct Z_Construct_UClass_UActionsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UActionsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Actions"), NO_API) \
	DECLARE_SERIALIZER(UActionsSubsystem)


#define HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActionsSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActionsSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActionsSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionsSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActionsSubsystem(UActionsSubsystem&&); \
	NO_API UActionsSubsystem(const UActionsSubsystem&); \
public:


#define HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActionsSubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActionsSubsystem(UActionsSubsystem&&); \
	NO_API UActionsSubsystem(const UActionsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActionsSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActionsSubsystem)


#define HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RootActions() { return STRUCT_OFFSET(UActionsSubsystem, RootActions); } \
	FORCEINLINE static uint32 __PPO__TickGroups() { return STRUCT_OFFSET(UActionsSubsystem, TickGroups); }


#define HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_86_PROLOG
#define HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_SPARSE_DATA \
	HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_RPC_WRAPPERS \
	HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_INCLASS \
	HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_SPARSE_DATA \
	HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONS_API UClass* StaticClass<class UActionsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ActionsExtension_Source_Actions_Public_ActionsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
