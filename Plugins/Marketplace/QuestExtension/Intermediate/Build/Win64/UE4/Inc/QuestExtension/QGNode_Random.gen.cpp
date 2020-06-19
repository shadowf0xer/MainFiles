// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QGNodes/Flow/QGNode_Random.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQGNode_Random() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Random_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Random();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Logic();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
// End Cross Module References
	void UQGNode_Random::StaticRegisterNativesUQGNode_Random()
	{
	}
	UClass* Z_Construct_UClass_UQGNode_Random_NoRegister()
	{
		return UQGNode_Random::StaticClass();
	}
	struct Z_Construct_UClass_UQGNode_Random_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Outputs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQGNode_Random_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQGNode_Logic,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Random_Statics::Class_MetaDataParams[] = {
		{ "Category", "Flow" },
		{ "DisplayName", "Random" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Quests/QGNodes/Flow/QGNode_Random.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Flow/QGNode_Random.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Random_Statics::NewProp_Outputs_MetaData[] = {
		{ "Category", "Random" },
		{ "ClampMax", "64" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Flow/QGNode_Random.h" },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQGNode_Random_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQGNode_Random, Outputs), METADATA_PARAMS(Z_Construct_UClass_UQGNode_Random_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Random_Statics::NewProp_Outputs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQGNode_Random_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_Random_Statics::NewProp_Outputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQGNode_Random_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQGNode_Random>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQGNode_Random_Statics::ClassParams = {
		&UQGNode_Random::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQGNode_Random_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Random_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQGNode_Random_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Random_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQGNode_Random()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQGNode_Random_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQGNode_Random, 2609154892);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQGNode_Random>()
	{
		return UQGNode_Random::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQGNode_Random(Z_Construct_UClass_UQGNode_Random, &UQGNode_Random::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQGNode_Random"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQGNode_Random);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
