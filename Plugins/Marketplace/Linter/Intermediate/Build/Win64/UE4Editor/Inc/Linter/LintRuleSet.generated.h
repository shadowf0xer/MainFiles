// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULinterNamingConvention;
#ifdef LINTER_LintRuleSet_generated_h
#error "LintRuleSet.generated.h already included, missing '#pragma once' in LintRuleSet.h"
#endif
#define LINTER_LintRuleSet_generated_h

#define HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLintRuleList_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LINTER_API UScriptStruct* StaticStruct<struct FLintRuleList>();

#define HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_SPARSE_DATA
#define HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNamingConvention);


#define HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNamingConvention);


#define HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULintRuleSet(); \
	friend struct Z_Construct_UClass_ULintRuleSet_Statics; \
public: \
	DECLARE_CLASS(ULintRuleSet, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Linter"), NO_API) \
	DECLARE_SERIALIZER(ULintRuleSet)


#define HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_INCLASS \
private: \
	static void StaticRegisterNativesULintRuleSet(); \
	friend struct Z_Construct_UClass_ULintRuleSet_Statics; \
public: \
	DECLARE_CLASS(ULintRuleSet, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Linter"), NO_API) \
	DECLARE_SERIALIZER(ULintRuleSet)


#define HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULintRuleSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULintRuleSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULintRuleSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULintRuleSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULintRuleSet(ULintRuleSet&&); \
	NO_API ULintRuleSet(const ULintRuleSet&); \
public:


#define HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULintRuleSet(ULintRuleSet&&); \
	NO_API ULintRuleSet(const ULintRuleSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULintRuleSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULintRuleSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULintRuleSet)


#define HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NamingConvention() { return STRUCT_OFFSET(ULintRuleSet, NamingConvention); } \
	FORCEINLINE static uint32 __PPO__ClassLintRulesMap() { return STRUCT_OFFSET(ULintRuleSet, ClassLintRulesMap); }


#define HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_30_PROLOG
#define HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_SPARSE_DATA \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_RPC_WRAPPERS \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_INCLASS \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_SPARSE_DATA \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LINTER_API UClass* StaticClass<class ULintRuleSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Linter_Source_Linter_Public_LintRuleSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
