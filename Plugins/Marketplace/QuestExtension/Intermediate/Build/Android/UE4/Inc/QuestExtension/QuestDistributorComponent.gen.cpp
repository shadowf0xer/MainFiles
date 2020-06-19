// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QuestDistributorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestDistributorComponent() {}
// Cross Module References
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FQuestDistribution();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestDistributorComponent_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestDistributorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestBase_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestManagerComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FQuestDistribution::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FQuestDistribution_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestDistribution, Z_Construct_UPackage__Script_QuestExtension(), TEXT("QuestDistribution"), sizeof(FQuestDistribution), Get_Z_Construct_UScriptStruct_FQuestDistribution_Hash());
	}
	return Singleton;
}
template<> QUESTEXTENSION_API UScriptStruct* StaticStruct<FQuestDistribution>()
{
	return FQuestDistribution::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestDistribution(FQuestDistribution::StaticStruct, TEXT("/Script/QuestExtension"), TEXT("QuestDistribution"), false, nullptr, nullptr);
static struct FScriptStruct_QuestExtension_StaticRegisterNativesFQuestDistribution
{
	FScriptStruct_QuestExtension_StaticRegisterNativesFQuestDistribution()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestDistribution")),new UScriptStruct::TCppStructOps<FQuestDistribution>);
	}
} ScriptStruct_QuestExtension_StaticRegisterNativesFQuestDistribution;
	struct Z_Construct_UScriptStruct_FQuestDistribution_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestDistribution_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains information about a quest and it's finished state\n */" },
		{ "ModuleRelativePath", "Public/Quests/QuestDistributorComponent.h" },
		{ "ToolTip", "Contains information about a quest and it's finished state" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestDistribution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestDistribution>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestDistribution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
		nullptr,
		&NewStructOps,
		"QuestDistribution",
		sizeof(FQuestDistribution),
		alignof(FQuestDistribution),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestDistribution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestDistribution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestDistribution()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestDistribution_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestDistribution"), sizeof(FQuestDistribution), Get_Z_Construct_UScriptStruct_FQuestDistribution_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestDistribution_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestDistribution_Hash() { return 3682594254U; }
	DEFINE_FUNCTION(UQuestDistributorComponent::execCanStartQuest)
	{
		P_GET_OBJECT(UQuestManagerComponent,Z_Param_Manager);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestBase>,Z_Param_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStartQuest(Z_Param_Manager,Z_Param_Quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestDistributorComponent::execStartAllDistributableQuests)
	{
		P_GET_OBJECT(UQuestManagerComponent,Z_Param_Manager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAllDistributableQuests(Z_Param_Manager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestDistributorComponent::execStartQuest)
	{
		P_GET_OBJECT(UQuestManagerComponent,Z_Param_Manager);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestBase>,Z_Param_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartQuest(Z_Param_Manager,Z_Param_Quest);
		P_NATIVE_END;
	}
	void UQuestDistributorComponent::StaticRegisterNativesUQuestDistributorComponent()
	{
		UClass* Class = UQuestDistributorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanStartQuest", &UQuestDistributorComponent::execCanStartQuest },
			{ "StartAllDistributableQuests", &UQuestDistributorComponent::execStartAllDistributableQuests },
			{ "StartQuest", &UQuestDistributorComponent::execStartQuest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics
	{
		struct QuestDistributorComponent_eventCanStartQuest_Parms
		{
			UQuestManagerComponent* Manager;
			TSoftObjectPtr<UQuestBase> Quest;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestDistributorComponent_eventCanStartQuest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestDistributorComponent_eventCanStartQuest_Parms), &Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestDistributorComponent_eventCanStartQuest_Parms, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::NewProp_Manager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestDistributorComponent_eventCanStartQuest_Parms, Manager), Z_Construct_UClass_UQuestManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::NewProp_Manager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::NewProp_Quest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::NewProp_Manager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Distributor" },
		{ "Comment", "/** Returns true if a quest can be started by this Distributor */" },
		{ "ModuleRelativePath", "Public/Quests/QuestDistributorComponent.h" },
		{ "ToolTip", "Returns true if a quest can be started by this Distributor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestDistributorComponent, nullptr, "CanStartQuest", nullptr, nullptr, sizeof(QuestDistributorComponent_eventCanStartQuest_Parms), Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestDistributorComponent_StartAllDistributableQuests_Statics
	{
		struct QuestDistributorComponent_eventStartAllDistributableQuests_Parms
		{
			UQuestManagerComponent* Manager;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestDistributorComponent_StartAllDistributableQuests_Statics::NewProp_Manager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestDistributorComponent_StartAllDistributableQuests_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestDistributorComponent_eventStartAllDistributableQuests_Parms, Manager), Z_Construct_UClass_UQuestManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestDistributorComponent_StartAllDistributableQuests_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDistributorComponent_StartAllDistributableQuests_Statics::NewProp_Manager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestDistributorComponent_StartAllDistributableQuests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestDistributorComponent_StartAllDistributableQuests_Statics::NewProp_Manager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestDistributorComponent_StartAllDistributableQuests_Statics::Function_MetaDataParams[] = {
		{ "Category", "Distributor" },
		{ "Comment", "/** Will start all distributable quests inside this Distributor */" },
		{ "ModuleRelativePath", "Public/Quests/QuestDistributorComponent.h" },
		{ "ToolTip", "Will start all distributable quests inside this Distributor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestDistributorComponent_StartAllDistributableQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestDistributorComponent, nullptr, "StartAllDistributableQuests", nullptr, nullptr, sizeof(QuestDistributorComponent_eventStartAllDistributableQuests_Parms), Z_Construct_UFunction_UQuestDistributorComponent_StartAllDistributableQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDistributorComponent_StartAllDistributableQuests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestDistributorComponent_StartAllDistributableQuests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDistributorComponent_StartAllDistributableQuests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestDistributorComponent_StartAllDistributableQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestDistributorComponent_StartAllDistributableQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics
	{
		struct QuestDistributorComponent_eventStartQuest_Parms
		{
			UQuestManagerComponent* Manager;
			TSoftObjectPtr<UQuestBase> Quest;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestDistributorComponent_eventStartQuest_Parms, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics::NewProp_Manager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestDistributorComponent_eventStartQuest_Parms, Manager), Z_Construct_UClass_UQuestManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics::NewProp_Manager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics::NewProp_Quest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics::NewProp_Manager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Distributor" },
		{ "Comment", "/** Will start a quest if its one of the Distributable Quests */" },
		{ "ModuleRelativePath", "Public/Quests/QuestDistributorComponent.h" },
		{ "ToolTip", "Will start a quest if its one of the Distributable Quests" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestDistributorComponent, nullptr, "StartQuest", nullptr, nullptr, sizeof(QuestDistributorComponent_eventStartQuest_Parms), Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestDistributorComponent_StartQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestDistributorComponent_StartQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestDistributorComponent_NoRegister()
	{
		return UQuestDistributorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UQuestDistributorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistributableQuests_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_DistributableQuests;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DistributableQuests_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestDistributorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestDistributorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestDistributorComponent_CanStartQuest, "CanStartQuest" }, // 2459400315
		{ &Z_Construct_UFunction_UQuestDistributorComponent_StartAllDistributableQuests, "StartAllDistributableQuests" }, // 3148121087
		{ &Z_Construct_UFunction_UQuestDistributorComponent_StartQuest, "StartQuest" }, // 2272025546
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestDistributorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**\n * Quest Distributor Component\n * In charge of distributing quests to Quest managers under certain conditions\n */" },
		{ "IncludePath", "Quests/QuestDistributorComponent.h" },
		{ "ModuleRelativePath", "Public/Quests/QuestDistributorComponent.h" },
		{ "ToolTip", "Quest Distributor Component\nIn charge of distributing quests to Quest managers under certain conditions" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestDistributorComponent_Statics::NewProp_DistributableQuests_MetaData[] = {
		{ "Category", "Narrative" },
		{ "ModuleRelativePath", "Public/Quests/QuestDistributorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UQuestDistributorComponent_Statics::NewProp_DistributableQuests = { "DistributableQuests", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestDistributorComponent, DistributableQuests), METADATA_PARAMS(Z_Construct_UClass_UQuestDistributorComponent_Statics::NewProp_DistributableQuests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDistributorComponent_Statics::NewProp_DistributableQuests_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UQuestDistributorComponent_Statics::NewProp_DistributableQuests_ElementProp = { "DistributableQuests", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestDistributorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestDistributorComponent_Statics::NewProp_DistributableQuests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestDistributorComponent_Statics::NewProp_DistributableQuests_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestDistributorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestDistributorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestDistributorComponent_Statics::ClassParams = {
		&UQuestDistributorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestDistributorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDistributorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestDistributorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDistributorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestDistributorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestDistributorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestDistributorComponent, 3643247078);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQuestDistributorComponent>()
	{
		return UQuestDistributorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestDistributorComponent(Z_Construct_UClass_UQuestDistributorComponent, &UQuestDistributorComponent::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQuestDistributorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestDistributorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
