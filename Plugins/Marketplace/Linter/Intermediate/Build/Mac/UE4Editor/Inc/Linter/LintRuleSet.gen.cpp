// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/LintRuleSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLintRuleSet() {}
// Cross Module References
	LINTER_API UScriptStruct* Z_Construct_UScriptStruct_FLintRuleList();
	UPackage* Z_Construct_UPackage__Script_Linter();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LINTER_API UClass* Z_Construct_UClass_ULintRuleSet_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULintRuleSet();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	LINTER_API UClass* Z_Construct_UClass_ULinterNamingConvention_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FLintRuleList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LINTER_API uint32 Get_Z_Construct_UScriptStruct_FLintRuleList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLintRuleList, Z_Construct_UPackage__Script_Linter(), TEXT("LintRuleList"), sizeof(FLintRuleList), Get_Z_Construct_UScriptStruct_FLintRuleList_Hash());
	}
	return Singleton;
}
template<> LINTER_API UScriptStruct* StaticStruct<FLintRuleList>()
{
	return FLintRuleList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLintRuleList(FLintRuleList::StaticStruct, TEXT("/Script/Linter"), TEXT("LintRuleList"), false, nullptr, nullptr);
static struct FScriptStruct_Linter_StaticRegisterNativesFLintRuleList
{
	FScriptStruct_Linter_StaticRegisterNativesFLintRuleList()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LintRuleList")),new UScriptStruct::TCppStructOps<FLintRuleList>);
	}
} ScriptStruct_Linter_StaticRegisterNativesFLintRuleList;
	struct Z_Construct_UScriptStruct_FLintRuleList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LintRules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LintRules;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LintRules_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLintRuleList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LintRuleSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLintRuleList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLintRuleList>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLintRuleList_Statics::NewProp_LintRules_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/LintRuleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLintRuleList_Statics::NewProp_LintRules = { "LintRules", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLintRuleList, LintRules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLintRuleList_Statics::NewProp_LintRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLintRuleList_Statics::NewProp_LintRules_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLintRuleList_Statics::NewProp_LintRules_Inner = { "LintRules", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULintRule_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLintRuleList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLintRuleList_Statics::NewProp_LintRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLintRuleList_Statics::NewProp_LintRules_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLintRuleList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
		nullptr,
		&NewStructOps,
		"LintRuleList",
		sizeof(FLintRuleList),
		alignof(FLintRuleList),
		Z_Construct_UScriptStruct_FLintRuleList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLintRuleList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLintRuleList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLintRuleList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLintRuleList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLintRuleList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Linter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LintRuleList"), sizeof(FLintRuleList), Get_Z_Construct_UScriptStruct_FLintRuleList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLintRuleList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLintRuleList_Hash() { return 1202369656U; }
	DEFINE_FUNCTION(ULintRuleSet::execGetNamingConvention)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULinterNamingConvention**)Z_Param__Result=P_THIS->GetNamingConvention();
		P_NATIVE_END;
	}
	void ULintRuleSet::StaticRegisterNativesULintRuleSet()
	{
		UClass* Class = ULintRuleSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNamingConvention", &ULintRuleSet::execGetNamingConvention },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULintRuleSet_GetNamingConvention_Statics
	{
		struct LintRuleSet_eventGetNamingConvention_Parms
		{
			ULinterNamingConvention* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULintRuleSet_GetNamingConvention_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LintRuleSet_eventGetNamingConvention_Parms, ReturnValue), Z_Construct_UClass_ULinterNamingConvention_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULintRuleSet_GetNamingConvention_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULintRuleSet_GetNamingConvention_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULintRuleSet_GetNamingConvention_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conventions" },
		{ "ModuleRelativePath", "Public/LintRuleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULintRuleSet_GetNamingConvention_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULintRuleSet, nullptr, "GetNamingConvention", nullptr, nullptr, sizeof(LintRuleSet_eventGetNamingConvention_Parms), Z_Construct_UFunction_ULintRuleSet_GetNamingConvention_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULintRuleSet_GetNamingConvention_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULintRuleSet_GetNamingConvention_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULintRuleSet_GetNamingConvention_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULintRuleSet_GetNamingConvention()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULintRuleSet_GetNamingConvention_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULintRuleSet_NoRegister()
	{
		return ULintRuleSet::StaticClass();
	}
	struct Z_Construct_UClass_ULintRuleSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassLintRulesMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ClassLintRulesMap;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassLintRulesMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClassLintRulesMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NamingConvention_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_NamingConvention;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameForCommandlet_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameForCommandlet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuleSetDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_RuleSetDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowMarketplacePublishingInfoInLintWizard_MetaData[];
#endif
		static void NewProp_bShowMarketplacePublishingInfoInLintWizard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowMarketplacePublishingInfoInLintWizard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULintRuleSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULintRuleSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULintRuleSet_GetNamingConvention, "GetNamingConvention" }, // 2874748480
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRuleSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *Comment\n */" },
		{ "IncludePath", "LintRuleSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LintRuleSet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Comment" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRuleSet_Statics::NewProp_ClassLintRulesMap_MetaData[] = {
		{ "Category", "Rules" },
		{ "ModuleRelativePath", "Public/LintRuleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULintRuleSet_Statics::NewProp_ClassLintRulesMap = { "ClassLintRulesMap", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRuleSet, ClassLintRulesMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULintRuleSet_Statics::NewProp_ClassLintRulesMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRuleSet_Statics::NewProp_ClassLintRulesMap_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULintRuleSet_Statics::NewProp_ClassLintRulesMap_Key_KeyProp = { "ClassLintRulesMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULintRuleSet_Statics::NewProp_ClassLintRulesMap_ValueProp = { "ClassLintRulesMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLintRuleList, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRuleSet_Statics::NewProp_NamingConvention_MetaData[] = {
		{ "Category", "Rules" },
		{ "ModuleRelativePath", "Public/LintRuleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULintRuleSet_Statics::NewProp_NamingConvention = { "NamingConvention", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRuleSet, NamingConvention), Z_Construct_UClass_ULinterNamingConvention_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULintRuleSet_Statics::NewProp_NamingConvention_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRuleSet_Statics::NewProp_NamingConvention_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRuleSet_Statics::NewProp_NameForCommandlet_MetaData[] = {
		{ "Category", "Commandlet" },
		{ "ModuleRelativePath", "Public/LintRuleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULintRuleSet_Statics::NewProp_NameForCommandlet = { "NameForCommandlet", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRuleSet, NameForCommandlet), METADATA_PARAMS(Z_Construct_UClass_ULintRuleSet_Statics::NewProp_NameForCommandlet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRuleSet_Statics::NewProp_NameForCommandlet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRuleSet_Statics::NewProp_RuleSetDescription_MetaData[] = {
		{ "Category", "Rules" },
		{ "ModuleRelativePath", "Public/LintRuleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULintRuleSet_Statics::NewProp_RuleSetDescription = { "RuleSetDescription", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRuleSet, RuleSetDescription), METADATA_PARAMS(Z_Construct_UClass_ULintRuleSet_Statics::NewProp_RuleSetDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRuleSet_Statics::NewProp_RuleSetDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRuleSet_Statics::NewProp_bShowMarketplacePublishingInfoInLintWizard_MetaData[] = {
		{ "Category", "Marketplace" },
		{ "ModuleRelativePath", "Public/LintRuleSet.h" },
	};
#endif
	void Z_Construct_UClass_ULintRuleSet_Statics::NewProp_bShowMarketplacePublishingInfoInLintWizard_SetBit(void* Obj)
	{
		((ULintRuleSet*)Obj)->bShowMarketplacePublishingInfoInLintWizard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULintRuleSet_Statics::NewProp_bShowMarketplacePublishingInfoInLintWizard = { "bShowMarketplacePublishingInfoInLintWizard", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULintRuleSet), &Z_Construct_UClass_ULintRuleSet_Statics::NewProp_bShowMarketplacePublishingInfoInLintWizard_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULintRuleSet_Statics::NewProp_bShowMarketplacePublishingInfoInLintWizard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRuleSet_Statics::NewProp_bShowMarketplacePublishingInfoInLintWizard_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULintRuleSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRuleSet_Statics::NewProp_ClassLintRulesMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRuleSet_Statics::NewProp_ClassLintRulesMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRuleSet_Statics::NewProp_ClassLintRulesMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRuleSet_Statics::NewProp_NamingConvention,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRuleSet_Statics::NewProp_NameForCommandlet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRuleSet_Statics::NewProp_RuleSetDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRuleSet_Statics::NewProp_bShowMarketplacePublishingInfoInLintWizard,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULintRuleSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULintRuleSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULintRuleSet_Statics::ClassParams = {
		&ULintRuleSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULintRuleSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULintRuleSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULintRuleSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRuleSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULintRuleSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULintRuleSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULintRuleSet, 2440579298);
	template<> LINTER_API UClass* StaticClass<ULintRuleSet>()
	{
		return ULintRuleSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULintRuleSet(Z_Construct_UClass_ULintRuleSet, &ULintRuleSet::StaticClass, TEXT("/Script/Linter"), TEXT("ULintRuleSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULintRuleSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
