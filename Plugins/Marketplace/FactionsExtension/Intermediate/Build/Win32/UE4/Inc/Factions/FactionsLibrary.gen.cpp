// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factions/Public/FactionsLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactionsLibrary() {}
// Cross Module References
	FACTIONS_API UEnum* Z_Construct_UEnum_Factions_EFactionTestMode();
	UPackage* Z_Construct_UPackage__Script_Factions();
	FACTIONS_API UClass* Z_Construct_UClass_UFactionsLibrary_NoRegister();
	FACTIONS_API UClass* Z_Construct_UClass_UFactionsLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFaction();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
	FACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionInfo();
	FACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionRelation();
// End Cross Module References
	static UEnum* EFactionTestMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Factions_EFactionTestMode, Z_Construct_UPackage__Script_Factions(), TEXT("EFactionTestMode"));
		}
		return Singleton;
	}
	template<> FACTIONS_API UEnum* StaticEnum<EFactionTestMode>()
	{
		return EFactionTestMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFactionTestMode(EFactionTestMode_StaticEnum, TEXT("/Script/Factions"), TEXT("EFactionTestMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Factions_EFactionTestMode_Hash() { return 2327021407U; }
	UEnum* Z_Construct_UEnum_Factions_EFactionTestMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Factions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFactionTestMode"), 0, Get_Z_Construct_UEnum_Factions_EFactionTestMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFactionTestMode::IsTheSame", (int64)EFactionTestMode::IsTheSame },
				{ "EFactionTestMode::IsFriendly", (int64)EFactionTestMode::IsFriendly },
				{ "EFactionTestMode::IsNeutral", (int64)EFactionTestMode::IsNeutral },
				{ "EFactionTestMode::IsHostile", (int64)EFactionTestMode::IsHostile },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "IsFriendly.Name", "EFactionTestMode::IsFriendly" },
				{ "IsHostile.Name", "EFactionTestMode::IsHostile" },
				{ "IsNeutral.Name", "EFactionTestMode::IsNeutral" },
				{ "IsTheSame.Name", "EFactionTestMode::IsTheSame" },
				{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Factions,
				nullptr,
				"EFactionTestMode",
				"EFactionTestMode",
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
	DEFINE_FUNCTION(UFactionsLibrary::execGetAllActorsWithFaction)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_STRUCT(FFaction,Z_Param_Faction);
		P_GET_ENUM(EFactionTestMode,Z_Param_Comparison);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFactionsLibrary::GetAllActorsWithFaction(Z_Param_ContextObject,Z_Param_Faction,EFactionTestMode(Z_Param_Comparison),Z_Param_ActorClass,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execUnregistryRelation)
	{
		P_GET_STRUCT_REF(FFactionRelation,Z_Param_Out_Relation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFactionsLibrary::UnregistryRelation(Z_Param_Out_Relation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execRegistryRelation)
	{
		P_GET_STRUCT_REF(FFactionRelation,Z_Param_Out_NewRelation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFactionsLibrary::RegistryRelation(Z_Param_Out_NewRelation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execGetAllFactions)
	{
		P_GET_TARRAY_REF(FFaction,Z_Param_Out_Factions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFactionsLibrary::GetAllFactions(Z_Param_Out_Factions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execUnregistryFaction)
	{
		P_GET_STRUCT(FFaction,Z_Param_Faction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFactionsLibrary::UnregistryFaction(Z_Param_Faction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execRegistryFaction)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_GET_STRUCT_REF(FFactionInfo,Z_Param_Out_FactionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFaction*)Z_Param__Result=UFactionsLibrary::RegistryFaction(Z_Param_Out_Name,Z_Param_Out_FactionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execGetDisplayName)
	{
		P_GET_STRUCT(FFaction,Z_Param_Faction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFactionsLibrary::GetDisplayName(Z_Param_Faction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execIsNeutralFaction)
	{
		P_GET_STRUCT(FFaction,Z_Param_One);
		P_GET_STRUCT(FFaction,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFactionsLibrary::IsNeutralFaction(Z_Param_One,Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execIsFriendlyFaction)
	{
		P_GET_STRUCT(FFaction,Z_Param_One);
		P_GET_STRUCT(FFaction,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFactionsLibrary::IsFriendlyFaction(Z_Param_One,Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execIsHostileFaction)
	{
		P_GET_STRUCT(FFaction,Z_Param_One);
		P_GET_STRUCT(FFaction,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFactionsLibrary::IsHostileFaction(Z_Param_One,Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execGetAttitudeToFaction)
	{
		P_GET_STRUCT(FFaction,Z_Param_One);
		P_GET_STRUCT(FFaction,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ETeamAttitude::Type>*)Z_Param__Result=UFactionsLibrary::GetAttitudeToFaction(Z_Param_One,Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execIsNeutral)
	{
		P_GET_OBJECT(AActor,Z_Param_One);
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFactionsLibrary::IsNeutral(Z_Param_One,Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execIsFriendly)
	{
		P_GET_OBJECT(AActor,Z_Param_One);
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFactionsLibrary::IsFriendly(Z_Param_One,Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execIsHostile)
	{
		P_GET_OBJECT(AActor,Z_Param_One);
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFactionsLibrary::IsHostile(Z_Param_One,Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execSharesFaction)
	{
		P_GET_OBJECT(AActor,Z_Param_One);
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFactionsLibrary::SharesFaction(Z_Param_One,Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execGetAttitudeTowards)
	{
		P_GET_OBJECT(AActor,Z_Param_One);
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ETeamAttitude::Type>*)Z_Param__Result=UFactionsLibrary::GetAttitudeTowards(Z_Param_One,Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execSetFactionInfo)
	{
		P_GET_STRUCT(FFaction,Z_Param_Faction);
		P_GET_STRUCT_REF(FFactionInfo,Z_Param_Out_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFactionsLibrary::SetFactionInfo(Z_Param_Faction,Z_Param_Out_Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execGetFactionInfo)
	{
		P_GET_STRUCT(FFaction,Z_Param_Faction);
		P_GET_STRUCT_REF(FFactionInfo,Z_Param_Out_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFactionsLibrary::GetFactionInfo(Z_Param_Faction,Z_Param_Out_Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execFactionIsNone)
	{
		P_GET_STRUCT(FFaction,Z_Param_Faction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFactionsLibrary::FactionIsNone(Z_Param_Faction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execSetFaction)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_GET_STRUCT(FFaction,Z_Param_NewFaction);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFactionsLibrary::SetFaction(Z_Param_Target,Z_Param_NewFaction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execGetFaction)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFaction*)Z_Param__Result=UFactionsLibrary::GetFaction(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execNotEqual)
	{
		P_GET_STRUCT(FFaction,Z_Param_A);
		P_GET_STRUCT(FFaction,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFactionsLibrary::NotEqual(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFactionsLibrary::execEquals)
	{
		P_GET_STRUCT(FFaction,Z_Param_A);
		P_GET_STRUCT(FFaction,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFactionsLibrary::Equals(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	void UFactionsLibrary::StaticRegisterNativesUFactionsLibrary()
	{
		UClass* Class = UFactionsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Equals", &UFactionsLibrary::execEquals },
			{ "FactionIsNone", &UFactionsLibrary::execFactionIsNone },
			{ "GetAllActorsWithFaction", &UFactionsLibrary::execGetAllActorsWithFaction },
			{ "GetAllFactions", &UFactionsLibrary::execGetAllFactions },
			{ "GetAttitudeToFaction", &UFactionsLibrary::execGetAttitudeToFaction },
			{ "GetAttitudeTowards", &UFactionsLibrary::execGetAttitudeTowards },
			{ "GetDisplayName", &UFactionsLibrary::execGetDisplayName },
			{ "GetFaction", &UFactionsLibrary::execGetFaction },
			{ "GetFactionInfo", &UFactionsLibrary::execGetFactionInfo },
			{ "IsFriendly", &UFactionsLibrary::execIsFriendly },
			{ "IsFriendlyFaction", &UFactionsLibrary::execIsFriendlyFaction },
			{ "IsHostile", &UFactionsLibrary::execIsHostile },
			{ "IsHostileFaction", &UFactionsLibrary::execIsHostileFaction },
			{ "IsNeutral", &UFactionsLibrary::execIsNeutral },
			{ "IsNeutralFaction", &UFactionsLibrary::execIsNeutralFaction },
			{ "NotEqual", &UFactionsLibrary::execNotEqual },
			{ "RegistryFaction", &UFactionsLibrary::execRegistryFaction },
			{ "RegistryRelation", &UFactionsLibrary::execRegistryRelation },
			{ "SetFaction", &UFactionsLibrary::execSetFaction },
			{ "SetFactionInfo", &UFactionsLibrary::execSetFactionInfo },
			{ "SharesFaction", &UFactionsLibrary::execSharesFaction },
			{ "UnregistryFaction", &UFactionsLibrary::execUnregistryFaction },
			{ "UnregistryRelation", &UFactionsLibrary::execUnregistryRelation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFactionsLibrary_Equals_Statics
	{
		struct FactionsLibrary_eventEquals_Parms
		{
			FFaction A;
			FFaction B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FactionsLibrary_eventEquals_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FactionsLibrary_eventEquals_Parms), &Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventEquals_Parms, B), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventEquals_Parms, A), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/** @return true if two factions are the same */" },
		{ "CompactNodeTitle", "==" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "@return true if two factions are the same" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "Equals", nullptr, nullptr, sizeof(FactionsLibrary_eventEquals_Parms), Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_FactionIsNone_Statics
	{
		struct FactionsLibrary_eventFactionIsNone_Parms
		{
			FFaction Faction;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
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
	void Z_Construct_UFunction_UFactionsLibrary_FactionIsNone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FactionsLibrary_eventFactionIsNone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactionsLibrary_FactionIsNone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FactionsLibrary_eventFactionIsNone_Parms), &Z_Construct_UFunction_UFactionsLibrary_FactionIsNone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_FactionIsNone_Statics::NewProp_Faction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_FactionIsNone_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventFactionIsNone_Parms, Faction), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_FactionIsNone_Statics::NewProp_Faction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_FactionIsNone_Statics::NewProp_Faction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_FactionIsNone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_FactionIsNone_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_FactionIsNone_Statics::NewProp_Faction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_FactionIsNone_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Factions" },
		{ "Comment", "/** @return true if this faction is none */" },
		{ "DisplayName", "Is None" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "@return true if this faction is none" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_FactionIsNone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "FactionIsNone", nullptr, nullptr, sizeof(FactionsLibrary_eventFactionIsNone_Parms), Z_Construct_UFunction_UFactionsLibrary_FactionIsNone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_FactionIsNone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_FactionIsNone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_FactionIsNone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_FactionIsNone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_FactionIsNone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics
	{
		struct FactionsLibrary_eventGetAllActorsWithFaction_Parms
		{
			const UObject* ContextObject;
			FFaction Faction;
			EFactionTestMode Comparison;
			TSubclassOf<AActor>  ActorClass;
			TArray<AActor*> OutActors;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Comparison;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Faction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Faction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FactionsLibrary_eventGetAllActorsWithFaction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FactionsLibrary_eventGetAllActorsWithFaction_Parms), &Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventGetAllActorsWithFaction_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014040000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventGetAllActorsWithFaction_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventGetAllActorsWithFaction_Parms, Comparison), Z_Construct_UEnum_Factions_EFactionTestMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_Faction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventGetAllActorsWithFaction_Parms, Faction), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_Faction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_Faction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventGetAllActorsWithFaction_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_ContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_ContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_OutActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_OutActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_Comparison,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_Comparison_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_Faction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::NewProp_ContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "ActorClass" },
		{ "Category", "Factions" },
		{ "Comment", "/**\n\x09 * Get all actors in the world with a certain faction\n\x09 * @param Faction to check actors for\n\x09 * @param Comparison relation between the actor and the faction\n\x09 * @param ActorClass limits the actors to be found by that class\n\x09 * @return true if operation was successful and the array of actors\n\x09 */" },
		{ "DeterminesOutputType", "ActorClass" },
		{ "DynamicOutputParam", "OutActors" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "Get all actors in the world with a certain faction\n@param Faction to check actors for\n@param Comparison relation between the actor and the faction\n@param ActorClass limits the actors to be found by that class\n@return true if operation was successful and the array of actors" },
		{ "WorldContext", "ContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "GetAllActorsWithFaction", nullptr, nullptr, sizeof(FactionsLibrary_eventGetAllActorsWithFaction_Parms), Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_GetAllFactions_Statics
	{
		struct FactionsLibrary_eventGetAllFactions_Parms
		{
			TArray<FFaction> Factions;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Factions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Factions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetAllFactions_Statics::NewProp_Factions = { "Factions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventGetAllFactions_Parms, Factions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetAllFactions_Statics::NewProp_Factions_Inner = { "Factions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_GetAllFactions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetAllFactions_Statics::NewProp_Factions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetAllFactions_Statics::NewProp_Factions_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_GetAllFactions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/**\n\x09 * @return all currently registered factions\n\x09 */" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "@return all currently registered factions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_GetAllFactions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "GetAllFactions", nullptr, nullptr, sizeof(FactionsLibrary_eventGetAllFactions_Parms), Z_Construct_UFunction_UFactionsLibrary_GetAllFactions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetAllFactions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_GetAllFactions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetAllFactions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_GetAllFactions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_GetAllFactions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics
	{
		struct FactionsLibrary_eventGetAttitudeToFaction_Parms
		{
			FFaction One;
			FFaction Other;
			TEnumAsByte<ETeamAttitude::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_One_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_One;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventGetAttitudeToFaction_Parms, ReturnValue), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventGetAttitudeToFaction_Parms, Other), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::NewProp_Other_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::NewProp_Other_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::NewProp_One_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::NewProp_One = { "One", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventGetAttitudeToFaction_Parms, One), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::NewProp_One_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::NewProp_One_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::NewProp_One,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/** @return One's attitude towards Other faction */" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "@return One's attitude towards Other faction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "GetAttitudeToFaction", nullptr, nullptr, sizeof(FactionsLibrary_eventGetAttitudeToFaction_Parms), Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics
	{
		struct FactionsLibrary_eventGetAttitudeTowards_Parms
		{
			const AActor* One;
			const AActor* Other;
			TEnumAsByte<ETeamAttitude::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_One_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_One;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventGetAttitudeTowards_Parms, ReturnValue), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventGetAttitudeTowards_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::NewProp_Other_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::NewProp_Other_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::NewProp_One_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::NewProp_One = { "One", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventGetAttitudeTowards_Parms, One), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::NewProp_One_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::NewProp_One_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::NewProp_One,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/** @return One's attitude towards Other actor */" },
		{ "DefaultToSelf", "One" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "@return One's attitude towards Other actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "GetAttitudeTowards", nullptr, nullptr, sizeof(FactionsLibrary_eventGetAttitudeTowards_Parms), Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_GetDisplayName_Statics
	{
		struct FactionsLibrary_eventGetDisplayName_Parms
		{
			FFaction Faction;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_GetDisplayName_Statics::NewProp_Faction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetDisplayName_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventGetDisplayName_Parms, Faction), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_GetDisplayName_Statics::NewProp_Faction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetDisplayName_Statics::NewProp_Faction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_GetDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetDisplayName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetDisplayName_Statics::NewProp_Faction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/**\n\x09* Find the information of a faction\n\x09* @param Faction to search for\n\x09* @param Info associated to the faction, if found\n\x09* @return true if the faction was valid and information was found\n\x09*/" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "Find the information of a faction\n@param Faction to search for\n@param Info associated to the faction, if found\n@return true if the faction was valid and information was found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(FactionsLibrary_eventGetDisplayName_Parms), Z_Construct_UFunction_UFactionsLibrary_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_GetFaction_Statics
	{
		struct FactionsLibrary_eventGetFaction_Parms
		{
			const AActor* Target;
			FFaction ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetFaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventGetFaction_Parms, ReturnValue), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_GetFaction_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetFaction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventGetFaction_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_GetFaction_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetFaction_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_GetFaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetFaction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetFaction_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_GetFaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/** @return the faction of an actor. None if the actor doesn't implement FactionAgentInterface */" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "@return the faction of an actor. None if the actor doesn't implement FactionAgentInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_GetFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "GetFaction", nullptr, nullptr, sizeof(FactionsLibrary_eventGetFaction_Parms), Z_Construct_UFunction_UFactionsLibrary_GetFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetFaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_GetFaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetFaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_GetFaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_GetFaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics
	{
		struct FactionsLibrary_eventGetFactionInfo_Parms
		{
			FFaction Faction;
			FFactionInfo Info;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Info;
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
	void Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FactionsLibrary_eventGetFactionInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FactionsLibrary_eventGetFactionInfo_Parms), &Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventGetFactionInfo_Parms, Info), Z_Construct_UScriptStruct_FFactionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::NewProp_Faction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventGetFactionInfo_Parms, Faction), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::NewProp_Faction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::NewProp_Faction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::NewProp_Faction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/**\n\x09 * Find the information of a faction\n\x09 * @param Faction to search for\n\x09 * @param Info associated to the faction, if found\n\x09 * @return true if the faction was valid and information was found\n\x09 */" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "Find the information of a faction\n@param Faction to search for\n@param Info associated to the faction, if found\n@return true if the faction was valid and information was found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "GetFactionInfo", nullptr, nullptr, sizeof(FactionsLibrary_eventGetFactionInfo_Parms), Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics
	{
		struct FactionsLibrary_eventIsFriendly_Parms
		{
			const AActor* One;
			const AActor* Other;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_One_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_One;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FactionsLibrary_eventIsFriendly_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FactionsLibrary_eventIsFriendly_Parms), &Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventIsFriendly_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::NewProp_Other_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::NewProp_Other_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::NewProp_One_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::NewProp_One = { "One", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventIsFriendly_Parms, One), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::NewProp_One_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::NewProp_One_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::NewProp_One,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/** @return true if One is Friendly to Other (or otherwise) */" },
		{ "DefaultToSelf", "One" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "@return true if One is Friendly to Other (or otherwise)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "IsFriendly", nullptr, nullptr, sizeof(FactionsLibrary_eventIsFriendly_Parms), Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_IsFriendly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_IsFriendly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics
	{
		struct FactionsLibrary_eventIsFriendlyFaction_Parms
		{
			FFaction One;
			FFaction Other;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_One_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_One;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FactionsLibrary_eventIsFriendlyFaction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FactionsLibrary_eventIsFriendlyFaction_Parms), &Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventIsFriendlyFaction_Parms, Other), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::NewProp_Other_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::NewProp_Other_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::NewProp_One_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::NewProp_One = { "One", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventIsFriendlyFaction_Parms, One), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::NewProp_One_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::NewProp_One_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::NewProp_One,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/** @return true if A is Friendly to B (or otherwise) */" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "@return true if A is Friendly to B (or otherwise)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "IsFriendlyFaction", nullptr, nullptr, sizeof(FactionsLibrary_eventIsFriendlyFaction_Parms), Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics
	{
		struct FactionsLibrary_eventIsHostile_Parms
		{
			const AActor* One;
			const AActor* Other;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_One_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_One;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FactionsLibrary_eventIsHostile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FactionsLibrary_eventIsHostile_Parms), &Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventIsHostile_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::NewProp_Other_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::NewProp_Other_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::NewProp_One_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::NewProp_One = { "One", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventIsHostile_Parms, One), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::NewProp_One_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::NewProp_One_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::NewProp_One,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/** @return true if One is Hostile to Other (or otherwise) */" },
		{ "DefaultToSelf", "One" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "@return true if One is Hostile to Other (or otherwise)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "IsHostile", nullptr, nullptr, sizeof(FactionsLibrary_eventIsHostile_Parms), Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_IsHostile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_IsHostile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics
	{
		struct FactionsLibrary_eventIsHostileFaction_Parms
		{
			FFaction One;
			FFaction Other;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_One_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_One;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FactionsLibrary_eventIsHostileFaction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FactionsLibrary_eventIsHostileFaction_Parms), &Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventIsHostileFaction_Parms, Other), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::NewProp_Other_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::NewProp_Other_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::NewProp_One_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::NewProp_One = { "One", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventIsHostileFaction_Parms, One), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::NewProp_One_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::NewProp_One_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::NewProp_One,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/** @return true if A is Hostile to B (or otherwise) */" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "@return true if A is Hostile to B (or otherwise)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "IsHostileFaction", nullptr, nullptr, sizeof(FactionsLibrary_eventIsHostileFaction_Parms), Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics
	{
		struct FactionsLibrary_eventIsNeutral_Parms
		{
			const AActor* One;
			const AActor* Other;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_One_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_One;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FactionsLibrary_eventIsNeutral_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FactionsLibrary_eventIsNeutral_Parms), &Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventIsNeutral_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::NewProp_Other_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::NewProp_Other_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::NewProp_One_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::NewProp_One = { "One", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventIsNeutral_Parms, One), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::NewProp_One_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::NewProp_One_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::NewProp_One,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/** @return true if One is Neutral to Other (or otherwise) */" },
		{ "DefaultToSelf", "One" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "@return true if One is Neutral to Other (or otherwise)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "IsNeutral", nullptr, nullptr, sizeof(FactionsLibrary_eventIsNeutral_Parms), Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_IsNeutral()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_IsNeutral_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics
	{
		struct FactionsLibrary_eventIsNeutralFaction_Parms
		{
			FFaction One;
			FFaction Other;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_One_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_One;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FactionsLibrary_eventIsNeutralFaction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FactionsLibrary_eventIsNeutralFaction_Parms), &Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventIsNeutralFaction_Parms, Other), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::NewProp_Other_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::NewProp_Other_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::NewProp_One_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::NewProp_One = { "One", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventIsNeutralFaction_Parms, One), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::NewProp_One_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::NewProp_One_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::NewProp_One,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/** @return true if One is Neutral to Other (or otherwise) */" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "@return true if One is Neutral to Other (or otherwise)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "IsNeutralFaction", nullptr, nullptr, sizeof(FactionsLibrary_eventIsNeutralFaction_Parms), Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics
	{
		struct FactionsLibrary_eventNotEqual_Parms
		{
			FFaction A;
			FFaction B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FactionsLibrary_eventNotEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FactionsLibrary_eventNotEqual_Parms), &Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventNotEqual_Parms, B), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventNotEqual_Parms, A), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/** @return true if two factions are not the same */" },
		{ "CompactNodeTitle", "!=" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "@return true if two factions are not the same" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "NotEqual", nullptr, nullptr, sizeof(FactionsLibrary_eventNotEqual_Parms), Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_NotEqual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_NotEqual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics
	{
		struct FactionsLibrary_eventRegistryFaction_Parms
		{
			FName Name;
			FFactionInfo FactionInfo;
			FFaction ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FactionInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventRegistryFaction_Parms, ReturnValue), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::NewProp_FactionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::NewProp_FactionInfo = { "FactionInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventRegistryFaction_Parms, FactionInfo), Z_Construct_UScriptStruct_FFactionInfo, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::NewProp_FactionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::NewProp_FactionInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventRegistryFaction_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::NewProp_FactionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/**\n\x09 * Registry a new faction.\n\x09 * This will not check if another faction of the same name exists. Use FindFactionByName for that.\n\x09 * @param FactionInfo that the new faction will have. For things like name, color or default attitudes.\n\x09 * @return the created faction\n\x09 */" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "Registry a new faction.\nThis will not check if another faction of the same name exists. Use FindFactionByName for that.\n@param FactionInfo that the new faction will have. For things like name, color or default attitudes.\n@return the created faction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "RegistryFaction", nullptr, nullptr, sizeof(FactionsLibrary_eventRegistryFaction_Parms), Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_RegistryFaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_RegistryFaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_RegistryRelation_Statics
	{
		struct FactionsLibrary_eventRegistryRelation_Parms
		{
			FFactionRelation NewRelation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRelation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRelation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFactionsLibrary_RegistryRelation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FactionsLibrary_eventRegistryRelation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactionsLibrary_RegistryRelation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FactionsLibrary_eventRegistryRelation_Parms), &Z_Construct_UFunction_UFactionsLibrary_RegistryRelation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_RegistryRelation_Statics::NewProp_NewRelation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_RegistryRelation_Statics::NewProp_NewRelation = { "NewRelation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventRegistryRelation_Parms, NewRelation), Z_Construct_UScriptStruct_FFactionRelation, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_RegistryRelation_Statics::NewProp_NewRelation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_RegistryRelation_Statics::NewProp_NewRelation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_RegistryRelation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_RegistryRelation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_RegistryRelation_Statics::NewProp_NewRelation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_RegistryRelation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/**\n\x09* Registry a new relation between two factions into the database\n\x09* @param NewRelation to be registered.\n\x09* @return true if the relation was registered, false if the two factions were the same or invalid.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "Registry a new relation between two factions into the database\n@param NewRelation to be registered.\n@return true if the relation was registered, false if the two factions were the same or invalid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_RegistryRelation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "RegistryRelation", nullptr, nullptr, sizeof(FactionsLibrary_eventRegistryRelation_Parms), Z_Construct_UFunction_UFactionsLibrary_RegistryRelation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_RegistryRelation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_RegistryRelation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_RegistryRelation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_RegistryRelation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_RegistryRelation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_SetFaction_Statics
	{
		struct FactionsLibrary_eventSetFaction_Parms
		{
			AActor* Target;
			FFaction NewFaction;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewFaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewFaction;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_SetFaction_Statics::NewProp_NewFaction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_SetFaction_Statics::NewProp_NewFaction = { "NewFaction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventSetFaction_Parms, NewFaction), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_SetFaction_Statics::NewProp_NewFaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_SetFaction_Statics::NewProp_NewFaction_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionsLibrary_SetFaction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventSetFaction_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_SetFaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_SetFaction_Statics::NewProp_NewFaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_SetFaction_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_SetFaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/** Sets the faction of an actor. Won't apply if the actor doesn't implement FactionAgentInterface.\n\x09 * @param Target actor that will receive the new faction\n\x09 * @param newFaction that will be set\n\x09 */" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "Sets the faction of an actor. Won't apply if the actor doesn't implement FactionAgentInterface.\n@param Target actor that will receive the new faction\n@param newFaction that will be set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_SetFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "SetFaction", nullptr, nullptr, sizeof(FactionsLibrary_eventSetFaction_Parms), Z_Construct_UFunction_UFactionsLibrary_SetFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_SetFaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_SetFaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_SetFaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_SetFaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_SetFaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics
	{
		struct FactionsLibrary_eventSetFactionInfo_Parms
		{
			FFaction Faction;
			FFactionInfo Info;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Info;
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
	void Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FactionsLibrary_eventSetFactionInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FactionsLibrary_eventSetFactionInfo_Parms), &Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventSetFactionInfo_Parms, Info), Z_Construct_UScriptStruct_FFactionInfo, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::NewProp_Info_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::NewProp_Faction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventSetFactionInfo_Parms, Faction), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::NewProp_Faction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::NewProp_Faction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::NewProp_Faction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/**\n\x09 * Replace the information of an existing faction\n\x09 * @param Faction to change\n\x09 * @param Info to replace the previous one\n\x09 * @return true if the faction was found and modified\n\x09 */" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "Replace the information of an existing faction\n@param Faction to change\n@param Info to replace the previous one\n@return true if the faction was found and modified" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "SetFactionInfo", nullptr, nullptr, sizeof(FactionsLibrary_eventSetFactionInfo_Parms), Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics
	{
		struct FactionsLibrary_eventSharesFaction_Parms
		{
			const AActor* One;
			const AActor* Other;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_One_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_One;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FactionsLibrary_eventSharesFaction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FactionsLibrary_eventSharesFaction_Parms), &Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventSharesFaction_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::NewProp_Other_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::NewProp_Other_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::NewProp_One_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::NewProp_One = { "One", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventSharesFaction_Parms, One), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::NewProp_One_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::NewProp_One_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::NewProp_One,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/** @return true if One and Other have the same faction */" },
		{ "DefaultToSelf", "One" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "@return true if One and Other have the same faction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "SharesFaction", nullptr, nullptr, sizeof(FactionsLibrary_eventSharesFaction_Parms), Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_SharesFaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_SharesFaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_UnregistryFaction_Statics
	{
		struct FactionsLibrary_eventUnregistryFaction_Parms
		{
			FFaction Faction;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Faction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFactionsLibrary_UnregistryFaction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FactionsLibrary_eventUnregistryFaction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactionsLibrary_UnregistryFaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FactionsLibrary_eventUnregistryFaction_Parms), &Z_Construct_UFunction_UFactionsLibrary_UnregistryFaction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_UnregistryFaction_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventUnregistryFaction_Parms, Faction), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_UnregistryFaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_UnregistryFaction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_UnregistryFaction_Statics::NewProp_Faction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_UnregistryFaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/**\n\x09* Remove a faction from the database\n\x09* @param Faction to remove.\n\x09* @return true if the faction was removed\n\x09*/" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "Remove a faction from the database\n@param Faction to remove.\n@return true if the faction was removed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_UnregistryFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "UnregistryFaction", nullptr, nullptr, sizeof(FactionsLibrary_eventUnregistryFaction_Parms), Z_Construct_UFunction_UFactionsLibrary_UnregistryFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_UnregistryFaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_UnregistryFaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_UnregistryFaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_UnregistryFaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_UnregistryFaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation_Statics
	{
		struct FactionsLibrary_eventUnregistryRelation_Parms
		{
			FFactionRelation Relation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Relation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Relation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FactionsLibrary_eventUnregistryRelation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FactionsLibrary_eventUnregistryRelation_Parms), &Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation_Statics::NewProp_Relation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation_Statics::NewProp_Relation = { "Relation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FactionsLibrary_eventUnregistryRelation_Parms, Relation), Z_Construct_UScriptStruct_FFactionRelation, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation_Statics::NewProp_Relation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation_Statics::NewProp_Relation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation_Statics::NewProp_Relation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/**\n\x09* Remove a relation from the database\n\x09* @param Relation to be unregistered\n\x09* @return true if the relation was unregistered\n\x09*/" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
		{ "ToolTip", "Remove a relation from the database\n@param Relation to be unregistered\n@return true if the relation was unregistered" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactionsLibrary, nullptr, "UnregistryRelation", nullptr, nullptr, sizeof(FactionsLibrary_eventUnregistryRelation_Parms), Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFactionsLibrary_NoRegister()
	{
		return UFactionsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFactionsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFactionsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Factions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFactionsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFactionsLibrary_Equals, "Equals" }, // 453903667
		{ &Z_Construct_UFunction_UFactionsLibrary_FactionIsNone, "FactionIsNone" }, // 3149915291
		{ &Z_Construct_UFunction_UFactionsLibrary_GetAllActorsWithFaction, "GetAllActorsWithFaction" }, // 1862473576
		{ &Z_Construct_UFunction_UFactionsLibrary_GetAllFactions, "GetAllFactions" }, // 4087307405
		{ &Z_Construct_UFunction_UFactionsLibrary_GetAttitudeToFaction, "GetAttitudeToFaction" }, // 2802692542
		{ &Z_Construct_UFunction_UFactionsLibrary_GetAttitudeTowards, "GetAttitudeTowards" }, // 2616078509
		{ &Z_Construct_UFunction_UFactionsLibrary_GetDisplayName, "GetDisplayName" }, // 3798927305
		{ &Z_Construct_UFunction_UFactionsLibrary_GetFaction, "GetFaction" }, // 4084256172
		{ &Z_Construct_UFunction_UFactionsLibrary_GetFactionInfo, "GetFactionInfo" }, // 3134526112
		{ &Z_Construct_UFunction_UFactionsLibrary_IsFriendly, "IsFriendly" }, // 1247661891
		{ &Z_Construct_UFunction_UFactionsLibrary_IsFriendlyFaction, "IsFriendlyFaction" }, // 1182796182
		{ &Z_Construct_UFunction_UFactionsLibrary_IsHostile, "IsHostile" }, // 765346265
		{ &Z_Construct_UFunction_UFactionsLibrary_IsHostileFaction, "IsHostileFaction" }, // 3978066695
		{ &Z_Construct_UFunction_UFactionsLibrary_IsNeutral, "IsNeutral" }, // 437295891
		{ &Z_Construct_UFunction_UFactionsLibrary_IsNeutralFaction, "IsNeutralFaction" }, // 3640446726
		{ &Z_Construct_UFunction_UFactionsLibrary_NotEqual, "NotEqual" }, // 291581326
		{ &Z_Construct_UFunction_UFactionsLibrary_RegistryFaction, "RegistryFaction" }, // 3408492920
		{ &Z_Construct_UFunction_UFactionsLibrary_RegistryRelation, "RegistryRelation" }, // 2084216729
		{ &Z_Construct_UFunction_UFactionsLibrary_SetFaction, "SetFaction" }, // 2476219301
		{ &Z_Construct_UFunction_UFactionsLibrary_SetFactionInfo, "SetFactionInfo" }, // 3685249643
		{ &Z_Construct_UFunction_UFactionsLibrary_SharesFaction, "SharesFaction" }, // 1085331633
		{ &Z_Construct_UFunction_UFactionsLibrary_UnregistryFaction, "UnregistryFaction" }, // 3122032310
		{ &Z_Construct_UFunction_UFactionsLibrary_UnregistryRelation, "UnregistryRelation" }, // 2472103676
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactionsLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "FactionsLibrary.h" },
		{ "ModuleRelativePath", "Public/FactionsLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFactionsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactionsLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFactionsLibrary_Statics::ClassParams = {
		&UFactionsLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFactionsLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFactionsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFactionsLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFactionsLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFactionsLibrary, 4214595541);
	template<> FACTIONS_API UClass* StaticClass<UFactionsLibrary>()
	{
		return UFactionsLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFactionsLibrary(Z_Construct_UClass_UFactionsLibrary, &UFactionsLibrary::StaticClass, TEXT("/Script/Factions"), TEXT("UFactionsLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFactionsLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
