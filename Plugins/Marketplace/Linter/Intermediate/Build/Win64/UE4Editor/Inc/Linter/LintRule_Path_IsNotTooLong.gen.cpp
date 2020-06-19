// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/LintRules/LintRule_Path_IsNotTooLong.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLintRule_Path_IsNotTooLong() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Path_IsNotTooLong_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Path_IsNotTooLong();
	LINTER_API UClass* Z_Construct_UClass_ULintRule();
	UPackage* Z_Construct_UPackage__Script_Linter();
// End Cross Module References
	void ULintRule_Path_IsNotTooLong::StaticRegisterNativesULintRule_Path_IsNotTooLong()
	{
	}
	UClass* Z_Construct_UClass_ULintRule_Path_IsNotTooLong_NoRegister()
	{
		return ULintRule_Path_IsNotTooLong::StaticClass();
	}
	struct Z_Construct_UClass_ULintRule_Path_IsNotTooLong_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPathLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPathLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULintRule_Path_IsNotTooLong_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULintRule,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Path_IsNotTooLong_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LintRules/LintRule_Path_IsNotTooLong.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Path_IsNotTooLong.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Path_IsNotTooLong_Statics::NewProp_MaxPathLimit_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Path_IsNotTooLong.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULintRule_Path_IsNotTooLong_Statics::NewProp_MaxPathLimit = { "MaxPathLimit", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_Path_IsNotTooLong, MaxPathLimit), METADATA_PARAMS(Z_Construct_UClass_ULintRule_Path_IsNotTooLong_Statics::NewProp_MaxPathLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Path_IsNotTooLong_Statics::NewProp_MaxPathLimit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULintRule_Path_IsNotTooLong_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Path_IsNotTooLong_Statics::NewProp_MaxPathLimit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULintRule_Path_IsNotTooLong_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULintRule_Path_IsNotTooLong>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULintRule_Path_IsNotTooLong_Statics::ClassParams = {
		&ULintRule_Path_IsNotTooLong::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULintRule_Path_IsNotTooLong_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Path_IsNotTooLong_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULintRule_Path_IsNotTooLong_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Path_IsNotTooLong_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULintRule_Path_IsNotTooLong()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULintRule_Path_IsNotTooLong_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULintRule_Path_IsNotTooLong, 1171440244);
	template<> LINTER_API UClass* StaticClass<ULintRule_Path_IsNotTooLong>()
	{
		return ULintRule_Path_IsNotTooLong::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULintRule_Path_IsNotTooLong(Z_Construct_UClass_ULintRule_Path_IsNotTooLong, &ULintRule_Path_IsNotTooLong::StaticClass, TEXT("/Script/Linter"), TEXT("ULintRule_Path_IsNotTooLong"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULintRule_Path_IsNotTooLong);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
