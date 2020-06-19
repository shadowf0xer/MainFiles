// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/Conditions/QC_Wait.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQC_Wait() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQC_Wait_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQC_Wait();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestCondition();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
// End Cross Module References
	void UQC_Wait::StaticRegisterNativesUQC_Wait()
	{
	}
	UClass* Z_Construct_UClass_UQC_Wait_NoRegister()
	{
		return UQC_Wait::StaticClass();
	}
	struct Z_Construct_UClass_UQC_Wait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQC_Wait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_Wait_Statics::Class_MetaDataParams[] = {
		{ "Category", "Flow" },
		{ "DisplayName", "Wait" },
		{ "IncludePath", "Quests/Conditions/QC_Wait.h" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_Wait.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_Wait_Statics::NewProp_Delay_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** Seconds to wait for this condition to complete */" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_Wait.h" },
		{ "ToolTip", "Seconds to wait for this condition to complete" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQC_Wait_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQC_Wait, Delay), METADATA_PARAMS(Z_Construct_UClass_UQC_Wait_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_Wait_Statics::NewProp_Delay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQC_Wait_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQC_Wait_Statics::NewProp_Delay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQC_Wait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQC_Wait>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQC_Wait_Statics::ClassParams = {
		&UQC_Wait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQC_Wait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQC_Wait_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQC_Wait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_Wait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQC_Wait()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQC_Wait_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQC_Wait, 3172293014);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQC_Wait>()
	{
		return UQC_Wait::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQC_Wait(Z_Construct_UClass_UQC_Wait, &UQC_Wait::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQC_Wait"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQC_Wait);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
