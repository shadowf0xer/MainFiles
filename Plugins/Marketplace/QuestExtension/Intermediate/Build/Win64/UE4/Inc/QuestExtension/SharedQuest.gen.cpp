// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/SharedQuest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSharedQuest() {}
// Cross Module References
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EQuestShareCompleteMode();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSharedQuest();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestBase_NoRegister();
// End Cross Module References
	static UEnum* EQuestShareCompleteMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_QuestExtension_EQuestShareCompleteMode, Z_Construct_UPackage__Script_QuestExtension(), TEXT("EQuestShareCompleteMode"));
		}
		return Singleton;
	}
	template<> QUESTEXTENSION_API UEnum* StaticEnum<EQuestShareCompleteMode>()
	{
		return EQuestShareCompleteMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuestShareCompleteMode(EQuestShareCompleteMode_StaticEnum, TEXT("/Script/QuestExtension"), TEXT("EQuestShareCompleteMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_QuestExtension_EQuestShareCompleteMode_Hash() { return 2020051113U; }
	UEnum* Z_Construct_UEnum_QuestExtension_EQuestShareCompleteMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuestShareCompleteMode"), 0, Get_Z_Construct_UEnum_QuestExtension_EQuestShareCompleteMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuestShareCompleteMode::CompleteIndividually", (int64)EQuestShareCompleteMode::CompleteIndividually },
				{ "EQuestShareCompleteMode::CompleteWhenOriginal", (int64)EQuestShareCompleteMode::CompleteWhenOriginal },
				{ "EQuestShareCompleteMode::CompleteWhenAny", (int64)EQuestShareCompleteMode::CompleteWhenAny },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n* Define the complete behavior while sharing a Quest\n*/" },
				{ "CompleteIndividually.Name", "EQuestShareCompleteMode::CompleteIndividually" },
				{ "CompleteWhenAny.Comment", "/**< Complete when first/original quest does */" },
				{ "CompleteWhenAny.Name", "EQuestShareCompleteMode::CompleteWhenAny" },
				{ "CompleteWhenAny.ToolTip", "< Complete when first/original quest does" },
				{ "CompleteWhenOriginal.Comment", "/**< Complete every quest individually */" },
				{ "CompleteWhenOriginal.Name", "EQuestShareCompleteMode::CompleteWhenOriginal" },
				{ "CompleteWhenOriginal.ToolTip", "< Complete every quest individually" },
				{ "ModuleRelativePath", "Public/Quests/SharedQuest.h" },
				{ "ToolTip", "Define the complete behavior while sharing a Quest" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_QuestExtension,
				nullptr,
				"EQuestShareCompleteMode",
				"EQuestShareCompleteMode",
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
class UScriptStruct* FSharedQuest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FSharedQuest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSharedQuest, Z_Construct_UPackage__Script_QuestExtension(), TEXT("SharedQuest"), sizeof(FSharedQuest), Get_Z_Construct_UScriptStruct_FSharedQuest_Hash());
	}
	return Singleton;
}
template<> QUESTEXTENSION_API UScriptStruct* StaticStruct<FSharedQuest>()
{
	return FSharedQuest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSharedQuest(FSharedQuest::StaticStruct, TEXT("/Script/QuestExtension"), TEXT("SharedQuest"), false, nullptr, nullptr);
static struct FScriptStruct_QuestExtension_StaticRegisterNativesFSharedQuest
{
	FScriptStruct_QuestExtension_StaticRegisterNativesFSharedQuest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SharedQuest")),new UScriptStruct::TCppStructOps<FSharedQuest>);
	}
} ScriptStruct_QuestExtension_StaticRegisterNativesFSharedQuest;
	struct Z_Construct_UScriptStruct_FSharedQuest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedQuest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Represents a shared Quest\n*/" },
		{ "ModuleRelativePath", "Public/Quests/SharedQuest.h" },
		{ "ToolTip", "Represents a shared Quest" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSharedQuest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSharedQuest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedQuest_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Shared" },
		{ "ModuleRelativePath", "Public/Quests/SharedQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSharedQuest_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSharedQuest, Mode), Z_Construct_UEnum_QuestExtension_EQuestShareCompleteMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedQuest_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedQuest_Statics::NewProp_Mode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSharedQuest_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedQuest_Statics::NewProp_Quest_MetaData[] = {
		{ "Category", "Shared" },
		{ "ModuleRelativePath", "Public/Quests/SharedQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSharedQuest_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSharedQuest, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedQuest_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedQuest_Statics::NewProp_Quest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSharedQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedQuest_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedQuest_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedQuest_Statics::NewProp_Quest,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSharedQuest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
		nullptr,
		&NewStructOps,
		"SharedQuest",
		sizeof(FSharedQuest),
		alignof(FSharedQuest),
		Z_Construct_UScriptStruct_FSharedQuest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedQuest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedQuest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedQuest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSharedQuest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSharedQuest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SharedQuest"), sizeof(FSharedQuest), Get_Z_Construct_UScriptStruct_FSharedQuest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSharedQuest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSharedQuest_Hash() { return 3323022374U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
