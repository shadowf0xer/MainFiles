// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actions/Public/ActionsSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionsSubsystem() {}
// Cross Module References
	ACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FRootAction();
	UPackage* Z_Construct_UPackage__Script_Actions();
	ACTIONS_API UClass* Z_Construct_UClass_UAction_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FActionsTickGroup();
	ACTIONS_API UClass* Z_Construct_UClass_UActionsSubsystem_NoRegister();
	ACTIONS_API UClass* Z_Construct_UClass_UActionsSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
// End Cross Module References
class UScriptStruct* FRootAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONS_API uint32 Get_Z_Construct_UScriptStruct_FRootAction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootAction, Z_Construct_UPackage__Script_Actions(), TEXT("RootAction"), sizeof(FRootAction), Get_Z_Construct_UScriptStruct_FRootAction_Hash());
	}
	return Singleton;
}
template<> ACTIONS_API UScriptStruct* StaticStruct<FRootAction>()
{
	return FRootAction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootAction(FRootAction::StaticStruct, TEXT("/Script/Actions"), TEXT("RootAction"), false, nullptr, nullptr);
static struct FScriptStruct_Actions_StaticRegisterNativesFRootAction
{
	FScriptStruct_Actions_StaticRegisterNativesFRootAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootAction")),new UScriptStruct::TCppStructOps<FRootAction>);
	}
} ScriptStruct_Actions_StaticRegisterNativesFRootAction;
	struct Z_Construct_UScriptStruct_FRootAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootAction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a dependency of an objects with all its actions\n * Used to cancel actions whose owner is destroyed\n */" },
		{ "ModuleRelativePath", "Public/ActionsSubsystem.h" },
		{ "ToolTip", "Represents a dependency of an objects with all its actions\nUsed to cancel actions whose owner is destroyed" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootAction_Statics::NewProp_Actions_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRootAction_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootAction, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootAction_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootAction_Statics::NewProp_Actions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootAction_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootAction_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRootAction_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootAction, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootAction_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootAction_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootAction_Statics::NewProp_Actions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootAction_Statics::NewProp_Actions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootAction_Statics::NewProp_Owner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Actions,
		nullptr,
		&NewStructOps,
		"RootAction",
		sizeof(FRootAction),
		alignof(FRootAction),
		Z_Construct_UScriptStruct_FRootAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootAction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Actions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootAction"), sizeof(FRootAction), Get_Z_Construct_UScriptStruct_FRootAction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootAction_Hash() { return 974232939U; }
class UScriptStruct* FActionsTickGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONS_API uint32 Get_Z_Construct_UScriptStruct_FActionsTickGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionsTickGroup, Z_Construct_UPackage__Script_Actions(), TEXT("ActionsTickGroup"), sizeof(FActionsTickGroup), Get_Z_Construct_UScriptStruct_FActionsTickGroup_Hash());
	}
	return Singleton;
}
template<> ACTIONS_API UScriptStruct* StaticStruct<FActionsTickGroup>()
{
	return FActionsTickGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActionsTickGroup(FActionsTickGroup::StaticStruct, TEXT("/Script/Actions"), TEXT("ActionsTickGroup"), false, nullptr, nullptr);
static struct FScriptStruct_Actions_StaticRegisterNativesFActionsTickGroup
{
	FScriptStruct_Actions_StaticRegisterNativesFActionsTickGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActionsTickGroup")),new UScriptStruct::TCppStructOps<FActionsTickGroup>);
	}
} ScriptStruct_Actions_StaticRegisterNativesFActionsTickGroup;
	struct Z_Construct_UScriptStruct_FActionsTickGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickTimeElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickTimeElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionsTickGroup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains a list of actions with the same TickRate\n */" },
		{ "ModuleRelativePath", "Public/ActionsSubsystem.h" },
		{ "ToolTip", "Contains a list of actions with the same TickRate" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActionsTickGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionsTickGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionsTickGroup_Statics::NewProp_Actions_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActionsTickGroup_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActionsTickGroup, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActionsTickGroup_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionsTickGroup_Statics::NewProp_Actions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActionsTickGroup_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionsTickGroup_Statics::NewProp_TickTimeElapsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActionsTickGroup_Statics::NewProp_TickTimeElapsed = { "TickTimeElapsed", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActionsTickGroup, TickTimeElapsed), METADATA_PARAMS(Z_Construct_UScriptStruct_FActionsTickGroup_Statics::NewProp_TickTimeElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionsTickGroup_Statics::NewProp_TickTimeElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionsTickGroup_Statics::NewProp_TickRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActionsTickGroup_Statics::NewProp_TickRate = { "TickRate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActionsTickGroup, TickRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FActionsTickGroup_Statics::NewProp_TickRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionsTickGroup_Statics::NewProp_TickRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionsTickGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionsTickGroup_Statics::NewProp_Actions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionsTickGroup_Statics::NewProp_Actions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionsTickGroup_Statics::NewProp_TickTimeElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionsTickGroup_Statics::NewProp_TickRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionsTickGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Actions,
		nullptr,
		&NewStructOps,
		"ActionsTickGroup",
		sizeof(FActionsTickGroup),
		alignof(FActionsTickGroup),
		Z_Construct_UScriptStruct_FActionsTickGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionsTickGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActionsTickGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionsTickGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActionsTickGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActionsTickGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Actions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActionsTickGroup"), sizeof(FActionsTickGroup), Get_Z_Construct_UScriptStruct_FActionsTickGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActionsTickGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActionsTickGroup_Hash() { return 1082375441U; }
	DEFINE_FUNCTION(UActionsSubsystem::execCancelAllByOwner)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAllByOwner(Z_Param_Object);
		P_NATIVE_END;
	}
	void UActionsSubsystem::StaticRegisterNativesUActionsSubsystem()
	{
		UClass* Class = UActionsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelAllByOwner", &UActionsSubsystem::execCancelAllByOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActionsSubsystem_CancelAllByOwner_Statics
	{
		struct ActionsSubsystem_eventCancelAllByOwner_Parms
		{
			UObject* Object;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActionsSubsystem_CancelAllByOwner_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActionsSubsystem_eventCancelAllByOwner_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActionsSubsystem_CancelAllByOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActionsSubsystem_CancelAllByOwner_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActionsSubsystem_CancelAllByOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActionSubsystem" },
		{ "Comment", "/** Cancel all actions executing inside an object\n\x09 * @param Owner of the actions to cancel\n\x09 */" },
		{ "ModuleRelativePath", "Public/ActionsSubsystem.h" },
		{ "ToolTip", "Cancel all actions executing inside an object\n@param Owner of the actions to cancel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActionsSubsystem_CancelAllByOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActionsSubsystem, nullptr, "CancelAllByOwner", nullptr, nullptr, sizeof(ActionsSubsystem_eventCancelAllByOwner_Parms), Z_Construct_UFunction_UActionsSubsystem_CancelAllByOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionsSubsystem_CancelAllByOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActionsSubsystem_CancelAllByOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActionsSubsystem_CancelAllByOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActionsSubsystem_CancelAllByOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActionsSubsystem_CancelAllByOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActionsSubsystem_NoRegister()
	{
		return UActionsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UActionsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TickGroups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_RootActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootActions_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Actions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActionsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActionsSubsystem_CancelAllByOwner, "CancelAllByOwner" }, // 409964860
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actions Subsystem\n * Keeps track of all running actions and their lifetime.\n * It also does a global tick based on tick rate for all actions.\n */" },
		{ "IncludePath", "ActionsSubsystem.h" },
		{ "ModuleRelativePath", "Public/ActionsSubsystem.h" },
		{ "ToolTip", "Actions Subsystem\nKeeps track of all running actions and their lifetime.\nIt also does a global tick based on tick rate for all actions." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionsSubsystem_Statics::NewProp_TickGroups_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActionsSubsystem_Statics::NewProp_TickGroups = { "TickGroups", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionsSubsystem, TickGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActionsSubsystem_Statics::NewProp_TickGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionsSubsystem_Statics::NewProp_TickGroups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActionsSubsystem_Statics::NewProp_TickGroups_Inner = { "TickGroups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActionsTickGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionsSubsystem_Statics::NewProp_RootActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UActionsSubsystem_Statics::NewProp_RootActions = { "RootActions", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionsSubsystem, RootActions), METADATA_PARAMS(Z_Construct_UClass_UActionsSubsystem_Statics::NewProp_RootActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionsSubsystem_Statics::NewProp_RootActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActionsSubsystem_Statics::NewProp_RootActions_ElementProp = { "RootActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRootAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionsSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionsSubsystem_Statics::NewProp_TickGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionsSubsystem_Statics::NewProp_TickGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionsSubsystem_Statics::NewProp_RootActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionsSubsystem_Statics::NewProp_RootActions_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionsSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActionsSubsystem_Statics::ClassParams = {
		&UActionsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActionsSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActionsSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActionsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActionsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActionsSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActionsSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActionsSubsystem, 2423840417);
	template<> ACTIONS_API UClass* StaticClass<UActionsSubsystem>()
	{
		return UActionsSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActionsSubsystem(Z_Construct_UClass_UActionsSubsystem, &UActionsSubsystem::StaticClass, TEXT("/Script/Actions"), TEXT("UActionsSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionsSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
