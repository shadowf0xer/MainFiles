// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factions/Public/Database/FactionInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactionInfo() {}
// Cross Module References
	FACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionInfo();
	UPackage* Z_Construct_UPackage__Script_Factions();
	FACTIONS_API UClass* Z_Construct_UClass_UFactionInfoAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FFactionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTIONS_API uint32 Get_Z_Construct_UScriptStruct_FFactionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFactionInfo, Z_Construct_UPackage__Script_Factions(), TEXT("FactionInfo"), sizeof(FFactionInfo), Get_Z_Construct_UScriptStruct_FFactionInfo_Hash());
	}
	return Singleton;
}
template<> FACTIONS_API UScriptStruct* StaticStruct<FFactionInfo>()
{
	return FFactionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFactionInfo(FFactionInfo::StaticStruct, TEXT("/Script/Factions"), TEXT("FactionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Factions_StaticRegisterNativesFFactionInfo
{
	FScriptStruct_Factions_StaticRegisterNativesFFactionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FactionInfo")),new UScriptStruct::TCppStructOps<FFactionInfo>);
	}
} ScriptStruct_Factions_StaticRegisterNativesFFactionInfo;
	struct Z_Construct_UScriptStruct_FFactionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_InfoAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAttitudeTowardsOthers_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultAttitudeTowardsOthers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttitudeTowardsItself_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttitudeTowardsItself;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct containing information about a faction. Static use.\n */" },
		{ "ModuleRelativePath", "Public/Database/FactionInfo.h" },
		{ "ToolTip", "Struct containing information about a faction. Static use." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFactionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_InfoAsset_MetaData[] = {
		{ "Category", "Faction" },
		{ "Comment", "/** Asset containing optional extra fields for a faction.\n\x09 * Create a class from UFactionInfoAsset to create your own fields (either in C++ or BPs)\n\x09 */" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Database/FactionInfo.h" },
		{ "ToolTip", "Asset containing optional extra fields for a faction.\nCreate a class from UFactionInfoAsset to create your own fields (either in C++ or BPs)" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_InfoAsset = { "InfoAsset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFactionInfo, InfoAsset), Z_Construct_UClass_UFactionInfoAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_InfoAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_InfoAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Faction" },
		{ "Comment", "/** Icon of the faction */" },
		{ "ModuleRelativePath", "Public/Database/FactionInfo.h" },
		{ "ToolTip", "Icon of the faction" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFactionInfo, Icon), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_DefaultAttitudeTowardsOthers_MetaData[] = {
		{ "Category", "Faction" },
		{ "Comment", "/** Attitude this faction will have against others. Relations will override it. */" },
		{ "ModuleRelativePath", "Public/Database/FactionInfo.h" },
		{ "ToolTip", "Attitude this faction will have against others. Relations will override it." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_DefaultAttitudeTowardsOthers = { "DefaultAttitudeTowardsOthers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFactionInfo, DefaultAttitudeTowardsOthers), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_DefaultAttitudeTowardsOthers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_DefaultAttitudeTowardsOthers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_AttitudeTowardsItself_MetaData[] = {
		{ "Category", "Faction" },
		{ "Comment", "/** Attitude this faction will have against itself. Relations will override it. */" },
		{ "ModuleRelativePath", "Public/Database/FactionInfo.h" },
		{ "ToolTip", "Attitude this faction will have against itself. Relations will override it." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_AttitudeTowardsItself = { "AttitudeTowardsItself", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFactionInfo, AttitudeTowardsItself), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_AttitudeTowardsItself_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_AttitudeTowardsItself_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Faction" },
		{ "Comment", "/** Color of the Faction. */" },
		{ "ModuleRelativePath", "Public/Database/FactionInfo.h" },
		{ "ToolTip", "Color of the Faction." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFactionInfo, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Faction" },
		{ "Comment", "/** Name of the faction */" },
		{ "ModuleRelativePath", "Public/Database/FactionInfo.h" },
		{ "ToolTip", "Name of the faction" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFactionInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFactionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_InfoAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_DefaultAttitudeTowardsOthers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_AttitudeTowardsItself,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionInfo_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFactionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Factions,
		nullptr,
		&NewStructOps,
		"FactionInfo",
		sizeof(FFactionInfo),
		alignof(FFactionInfo),
		Z_Construct_UScriptStruct_FFactionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFactionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFactionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFactionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Factions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FactionInfo"), sizeof(FFactionInfo), Get_Z_Construct_UScriptStruct_FFactionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFactionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFactionInfo_Hash() { return 3781124932U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
