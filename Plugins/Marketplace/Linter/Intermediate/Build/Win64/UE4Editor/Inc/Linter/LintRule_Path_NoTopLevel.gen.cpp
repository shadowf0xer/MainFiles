// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/LintRules/LintRule_Path_NoTopLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLintRule_Path_NoTopLevel() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Path_NoTopLevel_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULintRule_Path_NoTopLevel();
	LINTER_API UClass* Z_Construct_UClass_ULintRule();
	UPackage* Z_Construct_UPackage__Script_Linter();
// End Cross Module References
	void ULintRule_Path_NoTopLevel::StaticRegisterNativesULintRule_Path_NoTopLevel()
	{
	}
	UClass* Z_Construct_UClass_ULintRule_Path_NoTopLevel_NoRegister()
	{
		return ULintRule_Path_NoTopLevel::StaticClass();
	}
	struct Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PleaseUseThisFolderRecommendedAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PleaseUseThisFolderRecommendedAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZeroTopLevelFoldersRecommendedAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ZeroTopLevelFoldersRecommendedAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULintRule,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LintRules/LintRule_Path_NoTopLevel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Path_NoTopLevel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::NewProp_PleaseUseThisFolderRecommendedAction_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Path_NoTopLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::NewProp_PleaseUseThisFolderRecommendedAction = { "PleaseUseThisFolderRecommendedAction", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_Path_NoTopLevel, PleaseUseThisFolderRecommendedAction), METADATA_PARAMS(Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::NewProp_PleaseUseThisFolderRecommendedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::NewProp_PleaseUseThisFolderRecommendedAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::NewProp_ZeroTopLevelFoldersRecommendedAction_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/LintRules/LintRule_Path_NoTopLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::NewProp_ZeroTopLevelFoldersRecommendedAction = { "ZeroTopLevelFoldersRecommendedAction", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULintRule_Path_NoTopLevel, ZeroTopLevelFoldersRecommendedAction), METADATA_PARAMS(Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::NewProp_ZeroTopLevelFoldersRecommendedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::NewProp_ZeroTopLevelFoldersRecommendedAction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::NewProp_PleaseUseThisFolderRecommendedAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::NewProp_ZeroTopLevelFoldersRecommendedAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULintRule_Path_NoTopLevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::ClassParams = {
		&ULintRule_Path_NoTopLevel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULintRule_Path_NoTopLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULintRule_Path_NoTopLevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULintRule_Path_NoTopLevel, 2370819226);
	template<> LINTER_API UClass* StaticClass<ULintRule_Path_NoTopLevel>()
	{
		return ULintRule_Path_NoTopLevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULintRule_Path_NoTopLevel(Z_Construct_UClass_ULintRule_Path_NoTopLevel, &ULintRule_Path_NoTopLevel::StaticClass, TEXT("/Script/Linter"), TEXT("ULintRule_Path_NoTopLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULintRule_Path_NoTopLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
