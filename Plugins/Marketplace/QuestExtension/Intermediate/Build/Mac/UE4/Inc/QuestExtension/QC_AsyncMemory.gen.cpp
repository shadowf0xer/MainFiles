// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/Conditions/QC_AsyncMemory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQC_AsyncMemory() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQC_AsyncMemory_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQC_AsyncMemory();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestCondition();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestMemory_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQC_AsyncMemory::execOnMemoryRegistered)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestMemory>,Z_Param_NewMemory);
		P_GET_PROPERTY(FIntProperty,Z_Param_AddedAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMemoryRegistered(Z_Param_NewMemory,Z_Param_AddedAmount);
		P_NATIVE_END;
	}
	void UQC_AsyncMemory::StaticRegisterNativesUQC_AsyncMemory()
	{
		UClass* Class = UQC_AsyncMemory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMemoryRegistered", &UQC_AsyncMemory::execOnMemoryRegistered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQC_AsyncMemory_OnMemoryRegistered_Statics
	{
		struct QC_AsyncMemory_eventOnMemoryRegistered_Parms
		{
			TSoftObjectPtr<UQuestMemory> NewMemory;
			int32 AddedAmount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddedAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMemory_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_NewMemory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQC_AsyncMemory_OnMemoryRegistered_Statics::NewProp_AddedAmount = { "AddedAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QC_AsyncMemory_eventOnMemoryRegistered_Parms, AddedAmount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQC_AsyncMemory_OnMemoryRegistered_Statics::NewProp_NewMemory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQC_AsyncMemory_OnMemoryRegistered_Statics::NewProp_NewMemory = { "NewMemory", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QC_AsyncMemory_eventOnMemoryRegistered_Parms, NewMemory), Z_Construct_UClass_UQuestMemory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQC_AsyncMemory_OnMemoryRegistered_Statics::NewProp_NewMemory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQC_AsyncMemory_OnMemoryRegistered_Statics::NewProp_NewMemory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQC_AsyncMemory_OnMemoryRegistered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQC_AsyncMemory_OnMemoryRegistered_Statics::NewProp_AddedAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQC_AsyncMemory_OnMemoryRegistered_Statics::NewProp_NewMemory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQC_AsyncMemory_OnMemoryRegistered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_AsyncMemory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQC_AsyncMemory_OnMemoryRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQC_AsyncMemory, nullptr, "OnMemoryRegistered", nullptr, nullptr, sizeof(QC_AsyncMemory_eventOnMemoryRegistered_Parms), Z_Construct_UFunction_UQC_AsyncMemory_OnMemoryRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQC_AsyncMemory_OnMemoryRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQC_AsyncMemory_OnMemoryRegistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQC_AsyncMemory_OnMemoryRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQC_AsyncMemory_OnMemoryRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQC_AsyncMemory_OnMemoryRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQC_AsyncMemory_NoRegister()
	{
		return UQC_AsyncMemory::StaticClass();
	}
	struct Z_Construct_UClass_UQC_AsyncMemory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTotalAmount_MetaData[];
#endif
		static void NewProp_bUseTotalAmount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTotalAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Memory_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Memory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQC_AsyncMemory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQC_AsyncMemory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQC_AsyncMemory_OnMemoryRegistered, "OnMemoryRegistered" }, // 231310573
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_AsyncMemory_Statics::Class_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "DisplayName", "Compare Memory (Latent)" },
		{ "IncludePath", "Quests/Conditions/QC_AsyncMemory.h" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_AsyncMemory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_CurrentAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_AsyncMemory.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_CurrentAmount = { "CurrentAmount", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQC_AsyncMemory, CurrentAmount), METADATA_PARAMS(Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_CurrentAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_CurrentAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_TotalAmount_MetaData[] = {
		{ "Category", "Condition" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Amount of Memories required in total\n\x09 *  E.g: Achievement: \"Sit down 5000 times\"\n\x09 */" },
		{ "EditCondition", "bUseTotalAmount" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_AsyncMemory.h" },
		{ "ToolTip", "Amount of Memories required in total\nE.g: Achievement: \"Sit down 5000 times\"" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_TotalAmount = { "TotalAmount", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQC_AsyncMemory, TotalAmount), METADATA_PARAMS(Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_TotalAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_TotalAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "Condition" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Amount of Memories required from Condition start\n\x09 *  E.g: \"Kill 5 trolls\"\n\x09 */" },
		{ "EditCondition", "!bUseTotalAmount" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_AsyncMemory.h" },
		{ "ToolTip", "Amount of Memories required from Condition start\nE.g: \"Kill 5 trolls\"" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQC_AsyncMemory, Amount), METADATA_PARAMS(Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_bUseTotalAmount_MetaData[] = {
		{ "Category", "Condition" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_AsyncMemory.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_bUseTotalAmount_SetBit(void* Obj)
	{
		((UQC_AsyncMemory*)Obj)->bUseTotalAmount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_bUseTotalAmount = { "bUseTotalAmount", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UQC_AsyncMemory), &Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_bUseTotalAmount_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_bUseTotalAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_bUseTotalAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_Memory_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** Required Memory for Condition success */" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_AsyncMemory.h" },
		{ "ToolTip", "Required Memory for Condition success" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_Memory = { "Memory", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQC_AsyncMemory, Memory), Z_Construct_UClass_UQuestMemory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_Memory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_Memory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQC_AsyncMemory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_CurrentAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_TotalAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_bUseTotalAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQC_AsyncMemory_Statics::NewProp_Memory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQC_AsyncMemory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQC_AsyncMemory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQC_AsyncMemory_Statics::ClassParams = {
		&UQC_AsyncMemory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQC_AsyncMemory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQC_AsyncMemory_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQC_AsyncMemory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_AsyncMemory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQC_AsyncMemory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQC_AsyncMemory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQC_AsyncMemory, 4076919319);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQC_AsyncMemory>()
	{
		return UQC_AsyncMemory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQC_AsyncMemory(Z_Construct_UClass_UQC_AsyncMemory, &UQC_AsyncMemory::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQC_AsyncMemory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQC_AsyncMemory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
