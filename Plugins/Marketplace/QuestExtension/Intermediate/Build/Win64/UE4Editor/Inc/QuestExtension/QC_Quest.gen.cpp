// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/Conditions/QC_Quest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQC_Quest() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQC_Quest_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQC_Quest();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestCondition();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EQuestCompletionState();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestBase_NoRegister();
// End Cross Module References
	void UQC_Quest::StaticRegisterNativesUQC_Quest()
	{
	}
	UClass* Z_Construct_UClass_UQC_Quest_NoRegister()
	{
		return UQC_Quest::StaticClass();
	}
	struct Z_Construct_UClass_UQC_Quest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInverseCondition_MetaData[];
#endif
		static void NewProp_bInverseCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInverseCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExpectedState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExpectedState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQC_Quest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_Quest_Statics::Class_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "DisplayName", "Compare Quest" },
		{ "IncludePath", "Quests/Conditions/QC_Quest.h" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_Quest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_Quest_Statics::NewProp_bInverseCondition_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** Whether or not should negate the condition */" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_Quest.h" },
		{ "ToolTip", "Whether or not should negate the condition" },
	};
#endif
	void Z_Construct_UClass_UQC_Quest_Statics::NewProp_bInverseCondition_SetBit(void* Obj)
	{
		((UQC_Quest*)Obj)->bInverseCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQC_Quest_Statics::NewProp_bInverseCondition = { "bInverseCondition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UQC_Quest), &Z_Construct_UClass_UQC_Quest_Statics::NewProp_bInverseCondition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQC_Quest_Statics::NewProp_bInverseCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_Quest_Statics::NewProp_bInverseCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_Quest_Statics::NewProp_ExpectedState_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** Expected quest state to succeed */" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_Quest.h" },
		{ "ToolTip", "Expected quest state to succeed" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQC_Quest_Statics::NewProp_ExpectedState = { "ExpectedState", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQC_Quest, ExpectedState), Z_Construct_UEnum_QuestExtension_EQuestCompletionState, METADATA_PARAMS(Z_Construct_UClass_UQC_Quest_Statics::NewProp_ExpectedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_Quest_Statics::NewProp_ExpectedState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQC_Quest_Statics::NewProp_ExpectedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_Quest_Statics::NewProp_Quest_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** Quest that will be compared */" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_Quest.h" },
		{ "ToolTip", "Quest that will be compared" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UQC_Quest_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQC_Quest, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQC_Quest_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_Quest_Statics::NewProp_Quest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQC_Quest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQC_Quest_Statics::NewProp_bInverseCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQC_Quest_Statics::NewProp_ExpectedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQC_Quest_Statics::NewProp_ExpectedState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQC_Quest_Statics::NewProp_Quest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQC_Quest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQC_Quest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQC_Quest_Statics::ClassParams = {
		&UQC_Quest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQC_Quest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQC_Quest_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQC_Quest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_Quest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQC_Quest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQC_Quest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQC_Quest, 1187426220);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQC_Quest>()
	{
		return UQC_Quest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQC_Quest(Z_Construct_UClass_UQC_Quest, &UQC_Quest::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQC_Quest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQC_Quest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
