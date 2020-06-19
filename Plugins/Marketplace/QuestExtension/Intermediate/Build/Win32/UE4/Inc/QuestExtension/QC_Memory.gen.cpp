// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/Conditions/QC_Memory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQC_Memory() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQC_Memory_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQC_Memory();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestCondition();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestMemory_NoRegister();
// End Cross Module References
	void UQC_Memory::StaticRegisterNativesUQC_Memory()
	{
	}
	UClass* Z_Construct_UClass_UQC_Memory_NoRegister()
	{
		return UQC_Memory::StaticClass();
	}
	struct Z_Construct_UClass_UQC_Memory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequiredAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Memory_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Memory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQC_Memory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_Memory_Statics::Class_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "DisplayName", "Compare Memory" },
		{ "IncludePath", "Quests/Conditions/QC_Memory.h" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_Memory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_Memory_Statics::NewProp_RequiredAmount_MetaData[] = {
		{ "Category", "Condition" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Amount of Memories required for this condition to complete\n\x09 *  E.g: A quest that can be started when you \"Sit down 5000 times\"\n\x09 */" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_Memory.h" },
		{ "ToolTip", "Amount of Memories required for this condition to complete\nE.g: A quest that can be started when you \"Sit down 5000 times\"" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQC_Memory_Statics::NewProp_RequiredAmount = { "RequiredAmount", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQC_Memory, RequiredAmount), METADATA_PARAMS(Z_Construct_UClass_UQC_Memory_Statics::NewProp_RequiredAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_Memory_Statics::NewProp_RequiredAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_Memory_Statics::NewProp_Memory_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** Required Memory for Condition success */" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_Memory.h" },
		{ "ToolTip", "Required Memory for Condition success" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UQC_Memory_Statics::NewProp_Memory = { "Memory", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQC_Memory, Memory), Z_Construct_UClass_UQuestMemory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQC_Memory_Statics::NewProp_Memory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_Memory_Statics::NewProp_Memory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQC_Memory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQC_Memory_Statics::NewProp_RequiredAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQC_Memory_Statics::NewProp_Memory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQC_Memory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQC_Memory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQC_Memory_Statics::ClassParams = {
		&UQC_Memory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQC_Memory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQC_Memory_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQC_Memory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_Memory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQC_Memory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQC_Memory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQC_Memory, 4242659061);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQC_Memory>()
	{
		return UQC_Memory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQC_Memory(Z_Construct_UClass_UQC_Memory, &UQC_Memory::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQC_Memory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQC_Memory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
