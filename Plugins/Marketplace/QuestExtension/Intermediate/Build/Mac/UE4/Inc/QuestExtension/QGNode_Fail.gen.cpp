// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QGNodes/Execution/QGNode_Fail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQGNode_Fail() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Fail_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Fail();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Finish();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
// End Cross Module References
	void UQGNode_Fail::StaticRegisterNativesUQGNode_Fail()
	{
	}
	UClass* Z_Construct_UClass_UQGNode_Fail_NoRegister()
	{
		return UQGNode_Fail::StaticClass();
	}
	struct Z_Construct_UClass_UQGNode_Fail_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQGNode_Fail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQGNode_Finish,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Fail_Statics::Class_MetaDataParams[] = {
		{ "Category", "Execution" },
		{ "DisplayName", "Fail" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Quests/QGNodes/Execution/QGNode_Fail.h" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Execution/QGNode_Fail.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQGNode_Fail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQGNode_Fail>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQGNode_Fail_Statics::ClassParams = {
		&UQGNode_Fail::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQGNode_Fail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Fail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQGNode_Fail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQGNode_Fail_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQGNode_Fail, 2585920392);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQGNode_Fail>()
	{
		return UQGNode_Fail::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQGNode_Fail(Z_Construct_UClass_UQGNode_Fail, &UQGNode_Fail::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQGNode_Fail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQGNode_Fail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
