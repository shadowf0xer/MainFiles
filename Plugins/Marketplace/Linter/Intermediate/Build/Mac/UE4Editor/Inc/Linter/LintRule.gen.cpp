// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/LintRule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLintRule() {}
// Cross Module References
	LINTER_API UEnum* Z_Construct_UEnum_Linter_ELintRuleSeverity();
	UPackage* Z_Construct_UPackage__Script_Linter();
	LINTER_API UScriptStruct* Z_Construct_UScriptStruct_FLintRuleViolation();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULintRule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LINTER_API UClass* Z_Construct_UClass_ULintRuleSet_NoRegister();
// End Cross Module References
	static UEnum* ELintRuleSeverity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Linter_ELintRuleSeverity, Z_Construct_UPackage__Script_Linter(), TEXT("ELintRuleSeverity"));
		}
		return Singleton;
	}
	template<> LINTER_API UEnum* StaticEnum<ELintRuleSeverity>()
	{
		return ELintRuleSeverity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELintRuleSeverity(ELintRuleSeverity_StaticEnum, TEXT("/Script/Linter"), TEXT("ELintRuleSeverity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Linter_ELintRuleSeverity_Hash() { return 3788370098U; }
	UEnum* Z_Construct_UEnum_Linter_ELintRuleSeverity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Linter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELintRuleSeverity"), 0, Get_Z_Construct_UEnum_Linter_ELintRuleSeverity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELintRuleSeverity::Error", (int64)ELintRuleSeverity::Error },
				{ "ELintRuleSeverity::Warning", (int64)ELintRuleSeverity::Warning },
				{ "ELintRuleSeverity::Info", (int64)ELintRuleSeverity::Info },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Error.Name", "ELintRuleSeverity::Error" },
				{ "Info.Name", "ELintRuleSeverity::Info" },
				{ "ModuleRelativePath", "Public/LintRule.h" },
				{ "Warning.Name", "ELintRuleSeverity::Warning" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Linter,
				nullptr,
				"ELintRuleSeverity",
				"ELintRuleSeverity",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FLintRuleViolation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LINTER_API uint32 Get_Z_Construct_UScriptStruct_FLintRuleViolation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLintRuleViolation, Z_Construct_UPackage__Script_Linter(), TEXT("LintRuleViolation"), sizeof(FLintRuleViolation), Get_Z_Construct_UScriptStruct_FLintRuleViolation_Hash());
	}
	return Singleton;
}
template<> LINTER_API UScriptStruct* StaticStruct<FLintRuleViolation>()
{
	return FLintRuleViolation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLintRuleViolation(FLintRuleViolation::StaticStruct, TEXT("/Script/Linter"), TEXT("LintRuleViolation"), false, nullptr, nullptr);
static struct FScriptStruct_Linter_StaticRegisterNativesFLintRuleViolation
{
	FScriptStruct_Linter_StaticRegisterNativesFLintRuleViolation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LintRuleViolation")),new UScriptStruct::TCppStructOps<FLintRuleViolation>);
	}
} ScriptStruct_Linter_StaticRegisterNativesFLintRuleViolation;
	struct Z_Construct_UScriptStruct_FLintRuleViolation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecommendedAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_RecommendedAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViolatedRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ViolatedRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Violator_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Violator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLintRuleViolation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LintRule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLintRuleViolation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLintRuleViolation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLintRuleViolation_Statics::NewProp_RecommendedAction_MetaData[] = {
		{ "Category", "Lint" },
		{ "ModuleRelativePath", "Public/LintRule.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLintRuleViolation_Statics::NewProp_RecommendedAction = { "RecommendedAction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLintRuleViolation, RecommendedAction), METADATA_PARAMS(Z_Construct_UScriptStruct_FLintRuleViolation_Statics::NewProp_RecommendedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLintRuleViolation_Statics::NewProp_RecommendedAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLintRuleViolation_Statics::NewProp_ViolatedRule_MetaData[] = {
		{ "Category", "Lint" },
		{ "ModuleRelativePath", "Public/LintRule.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLintRuleViolation_Statics::NewProp_ViolatedRule = { "ViolatedRule", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLintRuleViolation, ViolatedRule), Z_Construct_UClass_ULintRule_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FLintRuleViolation_Statics::NewProp_ViolatedRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLintRuleViolation_Statics::NewProp_ViolatedRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLintRuleViolation_Statics::NewProp_Violator_MetaData[] = {
		{ "Category", "Lint" },
		{ "ModuleRelativePath", "Public/LintRule.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FLintRuleViolation_Statics::NewProp_Violator = { "Violator", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLintRuleViolation, Violator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLintRuleViolation_Statics::NewProp_Violator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLintRuleViolation_Statics::NewProp_Violator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLintRuleViolation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLintRuleViolation_Statics::NewProp_RecommendedAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLintRuleViolation_Statics::NewProp_ViolatedRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLintRuleViolation_Statics::NewProp_Violator,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLintRuleViolation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
		nullptr,
		&NewStructOps,
		"LintRuleViolation",
		sizeof(FLintRuleViolation),
		alignof(FLintRuleViolation),
		Z_Construct_UScriptStruct_FLintRuleViolation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLintRuleViolation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLintRuleViolation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLintRuleViolation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLintRuleViolation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLintRuleViolation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Linter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LintRuleViolation"), sizeof(FLintRuleViolation), Get_Z_Construct_UScriptStruct_FLintRuleViolation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLintRuleViolation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLintRuleViolation_Hash() { return 1152696752U; }
	DEFINE_FUNCTION(ULintRule::execPassesRule_Internal)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectToLint);
		P_GET_OBJECT(ULintRuleSet,Z_Param_ParentRuleSet);
		P_GET_TARRAY_REF(FLintRuleViolation,Z_Param_Out_OutRuleViolations);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PassesRule_Internal_Implementation(Z_Param_ObjectToLint,Z_Param_ParentRuleSet,Z_Param_Out_OutRuleViolations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULintRule::execGetRuleBasedObjectVariantName)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectToLint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetRuleBasedObjectVariantName_Implementation(Z_Param_ObjectToLint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULintRule::execIsRuleSuppressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRuleSuppressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULintRule::execPassesRule)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectToLint);
		P_GET_OBJECT(ULintRuleSet,Z_Param_ParentRuleSet);
		P_GET_TARRAY_REF(FLintRuleViolation,Z_Param_Out_OutRuleViolations);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PassesRule(Z_Param_ObjectToLint,Z_Param_ParentRuleSet,Z_Param_Out_OutRuleViolations);
		P_NATIVE_END;
	}
	static FName NAME_ULintRule_GetRuleBasedObjectVariantName = FName(TEXT("GetRuleBasedObjectVariantName"));
	FName ULintRule::GetRuleBasedObjectVariantName(UObject* ObjectToLint) const
	{
		LintRule_eventGetRuleBasedObjectVariantName_Parms Parms;
		Parms.ObjectToLint=ObjectToLint;
		const_cast<ULintRule*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULintRule_GetRuleBasedObjectVariantName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ULintRule_PassesRule_Internal = FName(TEXT("PassesRule_Internal"));
	bool ULintRule::PassesRule_Internal(UObject* ObjectToLint, const ULintRuleSet* ParentRuleSet, TArray<FLintRuleViolation>& OutRuleViolations) const
	{
		LintRule_eventPassesRule_Internal_Parms Parms;
		Parms.ObjectToLint=ObjectToLint;
		Parms.ParentRuleSet=ParentRuleSet;
		Parms.OutRuleViolations=OutRuleViolations;
		const_cast<ULintRule*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULintRule_PassesRule_Internal),&Parms);
		OutRuleViolations=Parms.OutRuleViolations;
		return !!Parms.ReturnValue;
	}
	void ULintRule::StaticRegisterNativesULintRule()
	{
		UClass* Class = ULintRule::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRuleBasedObjectVariantName", &ULintRule::execGetRuleBasedObjectVariantName },
			{ "IsRuleSuppressed", &ULintRule::execIsRuleSuppressed },
			{ "PassesRule", &ULintRule::execPassesRule },
			{ "PassesRule_Internal", &ULintRule::execPassesRule_Internal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULintRule_GetRuleBasedObjectVariantName_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToLint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULintRule_GetRuleBasedObjectVariantName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LintRule_eventGetRuleBasedObjectVariantName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULintRule_GetRuleBasedObjectVariantName_Statics::NewProp_ObjectToLint = { "ObjectToLint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LintRule_eventGetRuleBasedObjectVariantName_Parms, ObjectToLint), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULintRule_GetRuleBasedObjectVariantName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULintRule_GetRuleBasedObjectVariantName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULintRule_GetRuleBasedObjectVariantName_Statics::NewProp_ObjectToLint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULintRule_GetRuleBasedObjectVariantName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/LintRule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULintRule_GetRuleBasedObjectVariantName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULintRule, nullptr, "GetRuleBasedObjectVariantName", nullptr, nullptr, sizeof(LintRule_eventGetRuleBasedObjectVariantName_Parms), Z_Construct_UFunction_ULintRule_GetRuleBasedObjectVariantName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULintRule_GetRuleBasedObjectVariantName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULintRule_GetRuleBasedObjectVariantName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULintRule_GetRuleBasedObjectVariantName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULintRule_GetRuleBasedObjectVariantName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULintRule_GetRuleBasedObjectVariantName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULintRule_IsRuleSuppressed_Statics
	{
		struct LintRule_eventIsRuleSuppressed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULintRule_IsRuleSuppressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LintRule_eventIsRuleSuppressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULintRule_IsRuleSuppressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LintRule_eventIsRuleSuppressed_Parms), &Z_Construct_UFunction_ULintRule_IsRuleSuppressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULintRule_IsRuleSuppressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULintRule_IsRuleSuppressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULintRule_IsRuleSuppressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/LintRule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULintRule_IsRuleSuppressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULintRule, nullptr, "IsRuleSuppressed", nullptr, nullptr, sizeof(LintRule_eventIsRuleSuppressed_Parms), Z_Construct_UFunction_ULintRule_IsRuleSuppressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULintRule_IsRuleSuppressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULintRule_IsRuleSuppressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULintRule_IsRuleSuppressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULintRule_IsRuleSuppressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULintRule_IsRuleSuppressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULintRule_PassesRule_Statics
	{
		struct LintRule_eventPassesRule_Parms
		{
			UObject* ObjectToLint;
			const ULintRuleSet* ParentRuleSet;
			TArray<FLintRuleViolation> OutRuleViolations;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutRuleViolations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRuleViolations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentRuleSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentRuleSet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToLint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULintRule_PassesRule_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LintRule_eventPassesRule_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULintRule_PassesRule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LintRule_eventPassesRule_Parms), &Z_Construct_UFunction_ULintRule_PassesRule_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULintRule_PassesRule_Statics::NewProp_OutRuleViolations = { "OutRuleViolations", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LintRule_eventPassesRule_Parms, OutRuleViolations), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULintRule_PassesRule_Statics::NewProp_OutRuleViolations_Inner = { "OutRuleViolations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLintRuleViolation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULintRule_PassesRule_Statics::NewProp_ParentRuleSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULintRule_PassesRule_Statics::NewProp_ParentRuleSet = { "ParentRuleSet", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LintRule_eventPassesRule_Parms, ParentRuleSet), Z_Construct_UClass_ULintRuleSet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULintRule_PassesRule_Statics::NewProp_ParentRuleSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULintRule_PassesRule_Statics::NewProp_ParentRuleSet_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULintRule_PassesRule_Statics::NewProp_ObjectToLint = { "ObjectToLint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LintRule_eventPassesRule_Parms, ObjectToLint), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULintRule_PassesRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULintRule_PassesRule_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULintRule_PassesRule_Statics::NewProp_OutRuleViolations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULintRule_PassesRule_Statics::NewProp_OutRuleViolations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULintRule_PassesRule_Statics::NewProp_ParentRuleSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULintRule_PassesRule_Statics::NewProp_ObjectToLint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULintRule_PassesRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lint" },
		{ "ModuleRelativePath", "Public/LintRule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULintRule_PassesRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULintRule, nullptr, "PassesRule", nullptr, nullptr, sizeof(LintRule_eventPassesRule_Parms), Z_Construct_UFunction_ULintRule_PassesRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULintRule_PassesRule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULintRule_PassesRule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULintRule_PassesRule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULintRule_PassesRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULintRule_PassesRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutRuleViolations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRuleViolations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentRuleSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentRuleSet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToLint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LintRule_eventPassesRule_Internal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LintRule_eventPassesRule_Internal_Parms), &Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::NewProp_OutRuleViolations = { "OutRuleViolations", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LintRule_eventPassesRule_Internal_Parms, OutRuleViolations), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::NewProp_OutRuleViolations_Inner = { "OutRuleViolations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLintRuleViolation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::NewProp_ParentRuleSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::NewProp_ParentRuleSet = { "ParentRuleSet", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LintRule_eventPassesRule_Internal_Parms, ParentRuleSet), Z_Construct_UClass_ULintRuleSet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::NewProp_ParentRuleSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::NewProp_ParentRuleSet_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::NewProp_ObjectToLint = { "ObjectToLint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LintRule_eventPassesRule_Internal_Parms, ObjectToLint), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::NewProp_OutRuleViolations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::NewProp_OutRuleViolations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::NewProp_ParentRuleSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::NewProp_ObjectToLint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lint" },
		{ "Comment", "/* This is the function that child lint rules should override to perform the meat of the rule check\n\x09 * You do not call this directly. Always call PassesRule. PassesRule forwards to the PassesRule_Internal ONLY IF\n\x09 * data is valid and the rule is not suppressed, therefore it is worth checking.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LintRule.h" },
		{ "ToolTip", "This is the function that child lint rules should override to perform the meat of the rule check\n       * You do not call this directly. Always call PassesRule. PassesRule forwards to the PassesRule_Internal ONLY IF\n       * data is valid and the rule is not suppressed, therefore it is worth checking." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULintRule, nullptr, "PassesRule_Internal", nullptr, nullptr, sizeof(LintRule_eventPassesRule_Internal_Parms), Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULintRule_PassesRule_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULintRule_PassesRule_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULintRule_NoRegister()
	{
		return ULintRule::StaticClass();
	}
	struct Z_Construct_UClass_ULintRule_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresGameThread_MetaData[];
#endif
		static void NewProp_bRequiresGameThread_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresGameThread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuleSeverity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RuleSeverity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RuleSeverity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuleURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RuleURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuleDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_RuleDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuleTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_RuleTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuleGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RuleGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULintRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULintRule_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULintRule_GetRuleBasedObjectVariantName, "GetRuleBasedObjectVariantName" }, // 2388463515
		{ &Z_Construct_UFunction_ULintRule_IsRuleSuppressed, "IsRuleSuppressed" }, // 2167355476
		{ &Z_Construct_UFunction_ULintRule_PassesRule, "PassesRule" }, // 2712207352
		{ &Z_Construct_UFunction_ULintRule_PassesRule_Internal, "PassesRule_Internal" }, // 999634637
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *Comment\n */" },
		{ "IncludePath", "LintRule.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LintRule.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Comment" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Statics::NewProp_bRequiresGameThread_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRule.h" },
	};
#endif
	void Z_Construct_UClass_ULintRule_Statics::NewProp_bRequiresGameThread_SetBit(void* Obj)
	{
		((ULintRule*)Obj)->bRequiresGameThread = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULintRule_Statics::NewProp_bRequiresGameThread = { "bRequiresGameThread", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULintRule), &Z_Construct_UClass_ULintRule_Statics::NewProp_bRequiresGameThread_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULintRule_Statics::NewProp_bRequiresGameThread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Statics::NewProp_bRequiresGameThread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Statics::NewProp_RuleSeverity_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/LintRule.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULintRule_Statics::NewProp_RuleSeverity = { "RuleSeverity", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule, RuleSeverity), Z_Construct_UEnum_Linter_ELintRuleSeverity, METADATA_PARAMS(Z_Construct_UClass_ULintRule_Statics::NewProp_RuleSeverity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Statics::NewProp_RuleSeverity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULintRule_Statics::NewProp_RuleSeverity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Statics::NewProp_RuleURL_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/LintRule.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULintRule_Statics::NewProp_RuleURL = { "RuleURL", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule, RuleURL), METADATA_PARAMS(Z_Construct_UClass_ULintRule_Statics::NewProp_RuleURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Statics::NewProp_RuleURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Statics::NewProp_RuleDescription_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/LintRule.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULintRule_Statics::NewProp_RuleDescription = { "RuleDescription", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule, RuleDescription), METADATA_PARAMS(Z_Construct_UClass_ULintRule_Statics::NewProp_RuleDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Statics::NewProp_RuleDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Statics::NewProp_RuleTitle_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/LintRule.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULintRule_Statics::NewProp_RuleTitle = { "RuleTitle", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule, RuleTitle), METADATA_PARAMS(Z_Construct_UClass_ULintRule_Statics::NewProp_RuleTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Statics::NewProp_RuleTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Statics::NewProp_RuleGroup_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/LintRule.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULintRule_Statics::NewProp_RuleGroup = { "RuleGroup", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule, RuleGroup), METADATA_PARAMS(Z_Construct_UClass_ULintRule_Statics::NewProp_RuleGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Statics::NewProp_RuleGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULintRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Statics::NewProp_bRequiresGameThread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Statics::NewProp_RuleSeverity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Statics::NewProp_RuleSeverity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Statics::NewProp_RuleURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Statics::NewProp_RuleDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Statics::NewProp_RuleTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Statics::NewProp_RuleGroup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULintRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULintRule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULintRule_Statics::ClassParams = {
		&ULintRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULintRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULintRule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULintRule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULintRule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULintRule, 1184399462);
	template<> LINTER_API UClass* StaticClass<ULintRule>()
	{
		return ULintRule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULintRule(Z_Construct_UClass_ULintRule, &ULintRule::StaticClass, TEXT("/Script/Linter"), TEXT("ULintRule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULintRule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
