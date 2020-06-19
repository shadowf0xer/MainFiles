// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QGNodes/Execution/QGNode_Finish.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQGNode_Finish() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Finish_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Finish();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
// End Cross Module References
	void UQGNode_Finish::StaticRegisterNativesUQGNode_Finish()
	{
	}
	UClass* Z_Construct_UClass_UQGNode_Finish_NoRegister()
	{
		return UQGNode_Finish::StaticClass();
	}
	struct Z_Construct_UClass_UQGNode_Finish_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQGNode_Finish_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQGNode,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Finish_Statics::Class_MetaDataParams[] = {
		{ "Category", "Execution" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Quests/QGNodes/Execution/QGNode_Finish.h" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Execution/QGNode_Finish.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQGNode_Finish_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQGNode_Finish>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQGNode_Finish_Statics::ClassParams = {
		&UQGNode_Finish::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UQGNode_Finish_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Finish_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQGNode_Finish()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQGNode_Finish_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQGNode_Finish, 2867941511);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQGNode_Finish>()
	{
		return UQGNode_Finish::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQGNode_Finish(Z_Construct_UClass_UQGNode_Finish, &UQGNode_Finish::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQGNode_Finish"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQGNode_Finish);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
