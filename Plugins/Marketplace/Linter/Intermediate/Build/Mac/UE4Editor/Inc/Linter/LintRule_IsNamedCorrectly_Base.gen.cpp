// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/LintRules/LintRule_IsNamedCorrectly_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLintRule_IsNamedCorrectly_Base() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_ULintRule_IsNamedCorrectly_Base_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_IsNamedCorrectly_Base();
	LINTER_API UClass* Z_Construct_UClass_ULintRule();
	UPackage* Z_Construct_UPackage__Script_Linter();
// End Cross Module References
	DEFINE_FUNCTION(ULintRule_IsNamedCorrectly_Base::execBuildSuggestedName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CurrentName);
		P_GET_PROPERTY(FStrProperty,Z_Param_DesiredPrefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_DesiredSuffix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=ULintRule_IsNamedCorrectly_Base::BuildSuggestedName(Z_Param_CurrentName,Z_Param_DesiredPrefix,Z_Param_DesiredSuffix);
		P_NATIVE_END;
	}
	void ULintRule_IsNamedCorrectly_Base::StaticRegisterNativesULintRule_IsNamedCorrectly_Base()
	{
		UClass* Class = ULintRule_IsNamedCorrectly_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildSuggestedName", &ULintRule_IsNamedCorrectly_Base::execBuildSuggestedName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName_Statics
	{
		struct LintRule_IsNamedCorrectly_Base_eventBuildSuggestedName_Parms
		{
			FString CurrentName;
			FString DesiredPrefix;
			FString DesiredSuffix;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DesiredSuffix;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DesiredPrefix;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LintRule_IsNamedCorrectly_Base_eventBuildSuggestedName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName_Statics::NewProp_DesiredSuffix = { "DesiredSuffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LintRule_IsNamedCorrectly_Base_eventBuildSuggestedName_Parms, DesiredSuffix), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName_Statics::NewProp_DesiredPrefix = { "DesiredPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LintRule_IsNamedCorrectly_Base_eventBuildSuggestedName_Parms, DesiredPrefix), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName_Statics::NewProp_CurrentName = { "CurrentName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LintRule_IsNamedCorrectly_Base_eventBuildSuggestedName_Parms, CurrentName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName_Statics::NewProp_DesiredSuffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName_Statics::NewProp_DesiredPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName_Statics::NewProp_CurrentName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lint" },
		{ "CPP_Default_DesiredSuffix", "" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_IsNamedCorrectly_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULintRule_IsNamedCorrectly_Base, nullptr, "BuildSuggestedName", nullptr, nullptr, sizeof(LintRule_IsNamedCorrectly_Base_eventBuildSuggestedName_Parms), Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULintRule_IsNamedCorrectly_Base_NoRegister()
	{
		return ULintRule_IsNamedCorrectly_Base::StaticClass();
	}
	struct Z_Construct_UClass_ULintRule_IsNamedCorrectly_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULintRule_IsNamedCorrectly_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULintRule,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULintRule_IsNamedCorrectly_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULintRule_IsNamedCorrectly_Base_BuildSuggestedName, "BuildSuggestedName" }, // 3352056817
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_IsNamedCorrectly_Base_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LintRules/LintRule_IsNamedCorrectly_Base.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_IsNamedCorrectly_Base.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULintRule_IsNamedCorrectly_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULintRule_IsNamedCorrectly_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULintRule_IsNamedCorrectly_Base_Statics::ClassParams = {
		&ULintRule_IsNamedCorrectly_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULintRule_IsNamedCorrectly_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_IsNamedCorrectly_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULintRule_IsNamedCorrectly_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULintRule_IsNamedCorrectly_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULintRule_IsNamedCorrectly_Base, 2516969176);
	template<> LINTER_API UClass* StaticClass<ULintRule_IsNamedCorrectly_Base>()
	{
		return ULintRule_IsNamedCorrectly_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULintRule_IsNamedCorrectly_Base(Z_Construct_UClass_ULintRule_IsNamedCorrectly_Base, &ULintRule_IsNamedCorrectly_Base::StaticClass, TEXT("/Script/Linter"), TEXT("ULintRule_IsNamedCorrectly_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULintRule_IsNamedCorrectly_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
