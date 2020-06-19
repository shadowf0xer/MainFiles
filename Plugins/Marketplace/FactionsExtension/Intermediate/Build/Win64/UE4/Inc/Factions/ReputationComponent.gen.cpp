// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factions/Public/Reputation/ReputationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReputationComponent() {}
// Cross Module References
	FACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FReputationItem();
	UPackage* Z_Construct_UPackage__Script_Factions();
	FACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFaction();
	FACTIONS_API UClass* Z_Construct_UClass_UReputationComponent_NoRegister();
	FACTIONS_API UClass* Z_Construct_UClass_UReputationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
class UScriptStruct* FReputationItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTIONS_API uint32 Get_Z_Construct_UScriptStruct_FReputationItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReputationItem, Z_Construct_UPackage__Script_Factions(), TEXT("ReputationItem"), sizeof(FReputationItem), Get_Z_Construct_UScriptStruct_FReputationItem_Hash());
	}
	return Singleton;
}
template<> FACTIONS_API UScriptStruct* StaticStruct<FReputationItem>()
{
	return FReputationItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReputationItem(FReputationItem::StaticStruct, TEXT("/Script/Factions"), TEXT("ReputationItem"), false, nullptr, nullptr);
static struct FScriptStruct_Factions_StaticRegisterNativesFReputationItem
{
	FScriptStruct_Factions_StaticRegisterNativesFReputationItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReputationItem")),new UScriptStruct::TCppStructOps<FReputationItem>);
	}
} ScriptStruct_Factions_StaticRegisterNativesFReputationItem;
	struct Z_Construct_UScriptStruct_FReputationItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Faction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Faction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReputationItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Reputation/ReputationComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReputationItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReputationItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReputationItem_Statics::NewProp_MaxValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Reputation/ReputationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReputationItem_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReputationItem, MaxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FReputationItem_Statics::NewProp_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReputationItem_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReputationItem_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Reputation/ReputationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReputationItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReputationItem, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FReputationItem_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReputationItem_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReputationItem_Statics::NewProp_Faction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Reputation/ReputationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReputationItem_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReputationItem, Faction), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UScriptStruct_FReputationItem_Statics::NewProp_Faction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReputationItem_Statics::NewProp_Faction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReputationItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReputationItem_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReputationItem_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReputationItem_Statics::NewProp_Faction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReputationItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Factions,
		nullptr,
		&NewStructOps,
		"ReputationItem",
		sizeof(FReputationItem),
		alignof(FReputationItem),
		Z_Construct_UScriptStruct_FReputationItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReputationItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReputationItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReputationItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReputationItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReputationItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Factions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReputationItem"), sizeof(FReputationItem), Get_Z_Construct_UScriptStruct_FReputationItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReputationItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReputationItem_Hash() { return 4222449367U; }
	DEFINE_FUNCTION(UReputationComponent::execAddReputation)
	{
		P_GET_STRUCT(FFaction,Z_Param_Faction);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddReputation(Z_Param_Faction,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReputationComponent::execSetReputationToStep)
	{
		P_GET_STRUCT(FFaction,Z_Param_Faction);
		P_GET_PROPERTY(FNameProperty,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReputationToStep(Z_Param_Faction,Z_Param_Step);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReputationComponent::execSetReputation)
	{
		P_GET_STRUCT(FFaction,Z_Param_Faction);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReputation(Z_Param_Faction,Z_Param_Amount);
		P_NATIVE_END;
	}
	void UReputationComponent::StaticRegisterNativesUReputationComponent()
	{
		UClass* Class = UReputationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddReputation", &UReputationComponent::execAddReputation },
			{ "SetReputation", &UReputationComponent::execSetReputation },
			{ "SetReputationToStep", &UReputationComponent::execSetReputationToStep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReputationComponent_AddReputation_Statics
	{
		struct ReputationComponent_eventAddReputation_Parms
		{
			FFaction Faction;
			int32 Amount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Faction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReputationComponent_AddReputation_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReputationComponent_eventAddReputation_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReputationComponent_AddReputation_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReputationComponent_eventAddReputation_Parms, Faction), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReputationComponent_AddReputation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReputationComponent_AddReputation_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReputationComponent_AddReputation_Statics::NewProp_Faction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReputationComponent_AddReputation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reputation|Modification" },
		{ "ModuleRelativePath", "Public/Reputation/ReputationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReputationComponent_AddReputation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReputationComponent, nullptr, "AddReputation", nullptr, nullptr, sizeof(ReputationComponent_eventAddReputation_Parms), Z_Construct_UFunction_UReputationComponent_AddReputation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReputationComponent_AddReputation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReputationComponent_AddReputation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReputationComponent_AddReputation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReputationComponent_AddReputation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReputationComponent_AddReputation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReputationComponent_SetReputation_Statics
	{
		struct ReputationComponent_eventSetReputation_Parms
		{
			FFaction Faction;
			int32 Amount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Faction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReputationComponent_SetReputation_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReputationComponent_eventSetReputation_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReputationComponent_SetReputation_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReputationComponent_eventSetReputation_Parms, Faction), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReputationComponent_SetReputation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReputationComponent_SetReputation_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReputationComponent_SetReputation_Statics::NewProp_Faction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReputationComponent_SetReputation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reputation|Modification" },
		{ "ModuleRelativePath", "Public/Reputation/ReputationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReputationComponent_SetReputation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReputationComponent, nullptr, "SetReputation", nullptr, nullptr, sizeof(ReputationComponent_eventSetReputation_Parms), Z_Construct_UFunction_UReputationComponent_SetReputation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReputationComponent_SetReputation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReputationComponent_SetReputation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReputationComponent_SetReputation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReputationComponent_SetReputation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReputationComponent_SetReputation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReputationComponent_SetReputationToStep_Statics
	{
		struct ReputationComponent_eventSetReputationToStep_Parms
		{
			FFaction Faction;
			FName Step;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Step;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Faction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UReputationComponent_SetReputationToStep_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReputationComponent_eventSetReputationToStep_Parms, Step), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReputationComponent_SetReputationToStep_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReputationComponent_eventSetReputationToStep_Parms, Faction), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReputationComponent_SetReputationToStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReputationComponent_SetReputationToStep_Statics::NewProp_Step,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReputationComponent_SetReputationToStep_Statics::NewProp_Faction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReputationComponent_SetReputationToStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reputation|Modification" },
		{ "ModuleRelativePath", "Public/Reputation/ReputationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReputationComponent_SetReputationToStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReputationComponent, nullptr, "SetReputationToStep", nullptr, nullptr, sizeof(ReputationComponent_eventSetReputationToStep_Parms), Z_Construct_UFunction_UReputationComponent_SetReputationToStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReputationComponent_SetReputationToStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReputationComponent_SetReputationToStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReputationComponent_SetReputationToStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReputationComponent_SetReputationToStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReputationComponent_SetReputationToStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReputationComponent_NoRegister()
	{
		return UReputationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReputationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReputationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Factions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReputationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReputationComponent_AddReputation, "AddReputation" }, // 3870474201
		{ &Z_Construct_UFunction_UReputationComponent_SetReputation, "SetReputation" }, // 1663417138
		{ &Z_Construct_UFunction_UReputationComponent_SetReputationToStep, "SetReputationToStep" }, // 3635902828
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReputationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Factions" },
		{ "IncludePath", "Reputation/ReputationComponent.h" },
		{ "ModuleRelativePath", "Public/Reputation/ReputationComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReputationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReputationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReputationComponent_Statics::ClassParams = {
		&UReputationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UReputationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReputationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReputationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReputationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReputationComponent, 4216159418);
	template<> FACTIONS_API UClass* StaticClass<UReputationComponent>()
	{
		return UReputationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReputationComponent(Z_Construct_UClass_UReputationComponent, &UReputationComponent::StaticClass, TEXT("/Script/Factions"), TEXT("UReputationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReputationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
