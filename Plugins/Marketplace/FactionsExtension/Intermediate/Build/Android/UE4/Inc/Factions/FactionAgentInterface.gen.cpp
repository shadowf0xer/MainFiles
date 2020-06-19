// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factions/Public/Factions/FactionAgentInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactionAgentInterface() {}
// Cross Module References
	FACTIONS_API UClass* Z_Construct_UClass_UFactionAgentInterface_NoRegister();
	FACTIONS_API UClass* Z_Construct_UClass_UFactionAgentInterface();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface();
	UPackage* Z_Construct_UPackage__Script_Factions();
	FACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFaction();
// End Cross Module References
	DEFINE_FUNCTION(IFactionAgentInterface::execEventSetFaction)
	{
		P_GET_STRUCT_REF(FFaction,Z_Param_Out_Faction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EventSetFaction_Implementation(Z_Param_Out_Faction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFactionAgentInterface::execEventGetFaction)
	{
		P_GET_STRUCT_REF(FFaction,Z_Param_Out_OutFaction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EventGetFaction_Implementation(Z_Param_Out_OutFaction);
		P_NATIVE_END;
	}
	void IFactionAgentInterface::EventGetFaction(FFaction& OutFaction) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EventGetFaction instead.");
	}
	void IFactionAgentInterface::EventSetFaction(FFaction const& Faction)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EventSetFaction instead.");
	}
	void UFactionAgentInterface::StaticRegisterNativesUFactionAgentInterface()
	{
		UClass* Class = UFactionAgentInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EventGetFaction", &IFactionAgentInterface::execEventGetFaction },
			{ "EventSetFaction", &IFactionAgentInterface::execEventSetFaction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFactionAgentInterface_EventGetFaction_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFaction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionAgentInterface_EventGetFaction_Statics::NewProp_OutFaction = { "OutFaction", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionAgentInterface_eventEventGetFaction_Parms, OutFaction), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionAgentInterface_EventGetFaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionAgentInterface_EventGetFaction_Statics::NewProp_OutFaction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionAgentInterface_EventGetFaction_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Faction" },
		{ "Comment", "/** @return the current faction */" },
		{ "DisplayName", "Get Faction" },
		{ "ModuleRelativePath", "Public/Factions/FactionAgentInterface.h" },
		{ "ToolTip", "@return the current faction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionAgentInterface_EventGetFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionAgentInterface, nullptr, "EventGetFaction", nullptr, nullptr, sizeof(FactionAgentInterface_eventEventGetFaction_Parms), Z_Construct_UFunction_UFactionAgentInterface_EventGetFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionAgentInterface_EventGetFaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionAgentInterface_EventGetFaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionAgentInterface_EventGetFaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionAgentInterface_EventGetFaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionAgentInterface_EventGetFaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionAgentInterface_EventSetFaction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Faction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Faction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionAgentInterface_EventSetFaction_Statics::NewProp_Faction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionAgentInterface_EventSetFaction_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionAgentInterface_eventEventSetFaction_Parms, Faction), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionAgentInterface_EventSetFaction_Statics::NewProp_Faction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionAgentInterface_EventSetFaction_Statics::NewProp_Faction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionAgentInterface_EventSetFaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionAgentInterface_EventSetFaction_Statics::NewProp_Faction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionAgentInterface_EventSetFaction_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Faction" },
		{ "Comment", "/** @param Faction that will be assigned */" },
		{ "DisplayName", "Set Faction" },
		{ "ModuleRelativePath", "Public/Factions/FactionAgentInterface.h" },
		{ "ToolTip", "@param Faction that will be assigned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionAgentInterface_EventSetFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionAgentInterface, nullptr, "EventSetFaction", nullptr, nullptr, sizeof(FactionAgentInterface_eventEventSetFaction_Parms), Z_Construct_UFunction_UFactionAgentInterface_EventSetFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionAgentInterface_EventSetFaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionAgentInterface_EventSetFaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionAgentInterface_EventSetFaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionAgentInterface_EventSetFaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionAgentInterface_EventSetFaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFactionAgentInterface_NoRegister()
	{
		return UFactionAgentInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFactionAgentInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFactionAgentInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericTeamAgentInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Factions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFactionAgentInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFactionAgentInterface_EventGetFaction, "EventGetFaction" }, // 3259592384
		{ &Z_Construct_UFunction_UFactionAgentInterface_EventSetFaction, "EventSetFaction" }, // 4222693696
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactionAgentInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Factions/FactionAgentInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFactionAgentInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFactionAgentInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFactionAgentInterface_Statics::ClassParams = {
		&UFactionAgentInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFactionAgentInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFactionAgentInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFactionAgentInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFactionAgentInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFactionAgentInterface, 848606571);
	template<> FACTIONS_API UClass* StaticClass<UFactionAgentInterface>()
	{
		return UFactionAgentInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFactionAgentInterface(Z_Construct_UClass_UFactionAgentInterface, &UFactionAgentInterface::StaticClass, TEXT("/Script/Factions"), TEXT("UFactionAgentInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFactionAgentInterface);
	static FName NAME_UFactionAgentInterface_EventGetFaction = FName(TEXT("EventGetFaction"));
	void IFactionAgentInterface::Execute_EventGetFaction(const UObject* O, FFaction& OutFaction)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFactionAgentInterface::StaticClass()));
		FactionAgentInterface_eventEventGetFaction_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFactionAgentInterface_EventGetFaction);
		if (Func)
		{
			Parms.OutFaction=OutFaction;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			OutFaction=Parms.OutFaction;
		}
		else if (auto I = (const IFactionAgentInterface*)(O->GetNativeInterfaceAddress(UFactionAgentInterface::StaticClass())))
		{
			I->EventGetFaction_Implementation(OutFaction);
		}
	}
	static FName NAME_UFactionAgentInterface_EventSetFaction = FName(TEXT("EventSetFaction"));
	void IFactionAgentInterface::Execute_EventSetFaction(UObject* O, FFaction const& Faction)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFactionAgentInterface::StaticClass()));
		FactionAgentInterface_eventEventSetFaction_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFactionAgentInterface_EventSetFaction);
		if (Func)
		{
			Parms.Faction=Faction;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFactionAgentInterface*)(O->GetNativeInterfaceAddress(UFactionAgentInterface::StaticClass())))
		{
			I->EventSetFaction_Implementation(Faction);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
