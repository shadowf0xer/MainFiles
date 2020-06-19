// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QGNodes/Flow/QGNode_CountBranch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQGNode_CountBranch() {}
// Cross Module References
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EBranchCountMode();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_CountBranch_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_CountBranch();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Branch();
// End Cross Module References
	static UEnum* EBranchCountMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_QuestExtension_EBranchCountMode, Z_Construct_UPackage__Script_QuestExtension(), TEXT("EBranchCountMode"));
		}
		return Singleton;
	}
	template<> QUESTEXTENSION_API UEnum* StaticEnum<EBranchCountMode>()
	{
		return EBranchCountMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBranchCountMode(EBranchCountMode_StaticEnum, TEXT("/Script/QuestExtension"), TEXT("EBranchCountMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_QuestExtension_EBranchCountMode_Hash() { return 3928526333U; }
	UEnum* Z_Construct_UEnum_QuestExtension_EBranchCountMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBranchCountMode"), 0, Get_Z_Construct_UEnum_QuestExtension_EBranchCountMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBranchCountMode::ExecuteOnceWhenCount", (int64)EBranchCountMode::ExecuteOnceWhenCount },
				{ "EBranchCountMode::ExecuteEveryTimeUntilCount", (int64)EBranchCountMode::ExecuteEveryTimeUntilCount },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * Defines how a Count node will execute\n */" },
				{ "ExecuteEveryTimeUntilCount.Name", "EBranchCountMode::ExecuteEveryTimeUntilCount" },
				{ "ExecuteOnceWhenCount.Name", "EBranchCountMode::ExecuteOnceWhenCount" },
				{ "ModuleRelativePath", "Public/Quests/QGNodes/Flow/QGNode_CountBranch.h" },
				{ "ToolTip", "Defines how a Count node will execute" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_QuestExtension,
				nullptr,
				"EBranchCountMode",
				"EBranchCountMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UQGNode_CountBranch::StaticRegisterNativesUQGNode_CountBranch()
	{
	}
	UClass* Z_Construct_UClass_UQGNode_CountBranch_NoRegister()
	{
		return UQGNode_CountBranch::StaticClass();
	}
	struct Z_Construct_UClass_UQGNode_CountBranch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQGNode_CountBranch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQGNode_Branch,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_CountBranch_Statics::Class_MetaDataParams[] = {
		{ "Category", "Flow" },
		{ "DisplayName", "Count" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Quests/QGNodes/Flow/QGNode_CountBranch.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Flow/QGNode_CountBranch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_CountBranch_Statics::NewProp_CurrentCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Flow/QGNode_CountBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQGNode_CountBranch_Statics::NewProp_CurrentCount = { "CurrentCount", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQGNode_CountBranch, CurrentCount), METADATA_PARAMS(Z_Construct_UClass_UQGNode_CountBranch_Statics::NewProp_CurrentCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_CountBranch_Statics::NewProp_CurrentCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_CountBranch_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Count Branch" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Flow/QGNode_CountBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQGNode_CountBranch_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQGNode_CountBranch, Count), METADATA_PARAMS(Z_Construct_UClass_UQGNode_CountBranch_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_CountBranch_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_CountBranch_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Count Branch" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Flow/QGNode_CountBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQGNode_CountBranch_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQGNode_CountBranch, Mode), Z_Construct_UEnum_QuestExtension_EBranchCountMode, METADATA_PARAMS(Z_Construct_UClass_UQGNode_CountBranch_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_CountBranch_Statics::NewProp_Mode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQGNode_CountBranch_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQGNode_CountBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_CountBranch_Statics::NewProp_CurrentCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_CountBranch_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_CountBranch_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_CountBranch_Statics::NewProp_Mode_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQGNode_CountBranch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQGNode_CountBranch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQGNode_CountBranch_Statics::ClassParams = {
		&UQGNode_CountBranch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQGNode_CountBranch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_CountBranch_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQGNode_CountBranch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_CountBranch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQGNode_CountBranch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQGNode_CountBranch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQGNode_CountBranch, 3641963979);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQGNode_CountBranch>()
	{
		return UQGNode_CountBranch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQGNode_CountBranch(Z_Construct_UClass_UQGNode_CountBranch, &UQGNode_CountBranch::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQGNode_CountBranch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQGNode_CountBranch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
