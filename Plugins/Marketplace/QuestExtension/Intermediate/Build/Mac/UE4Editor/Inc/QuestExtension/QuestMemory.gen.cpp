// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QuestMemory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestMemory() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestMemory_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestMemory();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
// End Cross Module References
	void UQuestMemory::StaticRegisterNativesUQuestMemory()
	{
	}
	UClass* Z_Construct_UClass_UQuestMemory_NoRegister()
	{
		return UQuestMemory::StaticClass();
	}
	struct Z_Construct_UClass_UQuestMemory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestMemory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestMemory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Quest Memory\n * A Memory is a persistent, optionally accumulable registry\n * of an event or action that has happened in the game\n */" },
		{ "IncludePath", "Quests/QuestMemory.h" },
		{ "ModuleRelativePath", "Public/Quests/QuestMemory.h" },
		{ "ToolTip", "Quest Memory\nA Memory is a persistent, optionally accumulable registry\nof an event or action that has happened in the game" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestMemory_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Public/Quests/QuestMemory.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestMemory_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestMemory, Description), METADATA_PARAMS(Z_Construct_UClass_UQuestMemory_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestMemory_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestMemory_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Public/Quests/QuestMemory.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestMemory_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestMemory, Name), METADATA_PARAMS(Z_Construct_UClass_UQuestMemory_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestMemory_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestMemory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestMemory_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestMemory_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestMemory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestMemory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestMemory_Statics::ClassParams = {
		&UQuestMemory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestMemory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestMemory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestMemory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestMemory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestMemory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestMemory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestMemory, 3800155125);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQuestMemory>()
	{
		return UQuestMemory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestMemory(Z_Construct_UClass_UQuestMemory, &UQuestMemory::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQuestMemory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestMemory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
