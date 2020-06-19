// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class ULintRuleSet;
struct FLintRuleViolation;
#ifdef LINTER_LintRule_generated_h
#error "LintRule.generated.h already included, missing '#pragma once' in LintRule.h"
#endif
#define LINTER_LintRule_generated_h

#define HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLintRuleViolation_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LINTER_API UScriptStruct* StaticStruct<struct FLintRuleViolation>();

#define HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_SPARSE_DATA
#define HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_RPC_WRAPPERS \
	virtual bool PassesRule_Internal_Implementation(UObject* ObjectToLint, const ULintRuleSet* ParentRuleSet, TArray<FLintRuleViolation>& OutRuleViolations) const; \
	virtual FName GetRuleBasedObjectVariantName_Implementation(UObject* ObjectToLint) const; \
 \
	DECLARE_FUNCTION(execPassesRule_Internal); \
	DECLARE_FUNCTION(execGetRuleBasedObjectVariantName); \
	DECLARE_FUNCTION(execIsRuleSuppressed); \
	DECLARE_FUNCTION(execPassesRule);


#define HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool PassesRule_Internal_Implementation(UObject* ObjectToLint, const ULintRuleSet* ParentRuleSet, TArray<FLintRuleViolation>& OutRuleViolations) const; \
	virtual FName GetRuleBasedObjectVariantName_Implementation(UObject* ObjectToLint) const; \
 \
	DECLARE_FUNCTION(execPassesRule_Internal); \
	DECLARE_FUNCTION(execGetRuleBasedObjectVariantName); \
	DECLARE_FUNCTION(execIsRuleSuppressed); \
	DECLARE_FUNCTION(execPassesRule);


#define HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_EVENT_PARMS \
	struct LintRule_eventGetRuleBasedObjectVariantName_Parms \
	{ \
		UObject* ObjectToLint; \
		FName ReturnValue; \
	}; \
	struct LintRule_eventPassesRule_Internal_Parms \
	{ \
		UObject* ObjectToLint; \
		const ULintRuleSet* ParentRuleSet; \
		TArray<FLintRuleViolation> OutRuleViolations; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		LintRule_eventPassesRule_Internal_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_CALLBACK_WRAPPERS
#define HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULintRule(); \
	friend struct Z_Construct_UClass_ULintRule_Statics; \
public: \
	DECLARE_CLASS(ULintRule, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Linter"), NO_API) \
	DECLARE_SERIALIZER(ULintRule)


#define HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_INCLASS \
private: \
	static void StaticRegisterNativesULintRule(); \
	friend struct Z_Construct_UClass_ULintRule_Statics; \
public: \
	DECLARE_CLASS(ULintRule, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Linter"), NO_API) \
	DECLARE_SERIALIZER(ULintRule)


#define HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULintRule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULintRule) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULintRule); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULintRule); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULintRule(ULintRule&&); \
	NO_API ULintRule(const ULintRule&); \
public:


#define HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULintRule(ULintRule&&); \
	NO_API ULintRule(const ULintRule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULintRule); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULintRule); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULintRule)


#define HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_66_PROLOG \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_EVENT_PARMS


#define HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_SPARSE_DATA \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_RPC_WRAPPERS \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_CALLBACK_WRAPPERS \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_INCLASS \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_SPARSE_DATA \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_CALLBACK_WRAPPERS \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LINTER_API UClass* StaticClass<class ULintRule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Linter_Source_Linter_Public_LintRule_h


#define FOREACH_ENUM_ELINTRULESEVERITY(op) \
	op(ELintRuleSeverity::Error) \
	op(ELintRuleSeverity::Warning) \
	op(ELintRuleSeverity::Info) 

enum class ELintRuleSeverity : uint8;
template<> LINTER_API UEnum* StaticEnum<ELintRuleSeverity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
