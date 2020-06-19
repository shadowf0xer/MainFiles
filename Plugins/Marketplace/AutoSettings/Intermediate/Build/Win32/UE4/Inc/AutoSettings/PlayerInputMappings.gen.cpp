// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/InputMapping/PlayerInputMappings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInputMappings() {}
// Cross Module References
	AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerInputMappings();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingPreset();
	AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingLayout();
// End Cross Module References
class UScriptStruct* FPlayerInputMappings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FPlayerInputMappings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerInputMappings, Z_Construct_UPackage__Script_AutoSettings(), TEXT("PlayerInputMappings"), sizeof(FPlayerInputMappings), Get_Z_Construct_UScriptStruct_FPlayerInputMappings_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGS_API UScriptStruct* StaticStruct<FPlayerInputMappings>()
{
	return FPlayerInputMappings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerInputMappings(FPlayerInputMappings::StaticStruct, TEXT("/Script/AutoSettings"), TEXT("PlayerInputMappings"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettings_StaticRegisterNativesFPlayerInputMappings
{
	FScriptStruct_AutoSettings_StaticRegisterNativesFPlayerInputMappings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerInputMappings")),new UScriptStruct::TCppStructOps<FPlayerInputMappings>);
	}
} ScriptStruct_AutoSettings_StaticRegisterNativesFPlayerInputMappings;
	struct Z_Construct_UScriptStruct_FPlayerInputMappings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerKeyGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerKeyGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Preset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Custom_MetaData[];
#endif
		static void NewProp_Custom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Custom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappingOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MappingOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePresetTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePresetTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Holds saved input mappings for a specific player, as well as if they are custom or from a preset\n// Used to save and load input mapping information\n" },
		{ "ModuleRelativePath", "Public/InputMapping/PlayerInputMappings.h" },
		{ "ToolTip", "Holds saved input mappings for a specific player, as well as if they are custom or from a preset\nUsed to save and load input mapping information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerInputMappings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerKeyGroup_MetaData[] = {
		{ "Comment", "// Key group used to retrieve active mappings\n// Useful for globally switching prompts between key groups when for example input device is changed\n// See UInputMappingManager::SetPlayerKeyGroupStatic\n" },
		{ "ModuleRelativePath", "Public/InputMapping/PlayerInputMappings.h" },
		{ "ToolTip", "Key group used to retrieve active mappings\nUseful for globally switching prompts between key groups when for example input device is changed\nSee UInputMappingManager::SetPlayerKeyGroupStatic" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerKeyGroup = { "PlayerKeyGroup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInputMappings, PlayerKeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerKeyGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerKeyGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_Preset_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/InputMapping/PlayerInputMappings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInputMappings, Preset_DEPRECATED), Z_Construct_UScriptStruct_FInputMappingPreset, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_Preset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_Custom_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/InputMapping/PlayerInputMappings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_Custom_SetBit(void* Obj)
	{
		((FPlayerInputMappings*)Obj)->Custom_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_Custom = { "Custom", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerInputMappings), &Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_Custom_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_Custom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_Custom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_MappingOverrides_MetaData[] = {
		{ "Comment", "// Modifications that the player has made to the base preset\n" },
		{ "ModuleRelativePath", "Public/InputMapping/PlayerInputMappings.h" },
		{ "ToolTip", "Modifications that the player has made to the base preset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_MappingOverrides = { "MappingOverrides", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInputMappings, MappingOverrides), Z_Construct_UScriptStruct_FInputMappingLayout, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_MappingOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_MappingOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_BasePresetTag_MetaData[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Preset that this player's input is based off\n" },
		{ "ModuleRelativePath", "Public/InputMapping/PlayerInputMappings.h" },
		{ "ToolTip", "Preset that this player's input is based off" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_BasePresetTag = { "BasePresetTag", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInputMappings, BasePresetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_BasePresetTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_BasePresetTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/InputMapping/PlayerInputMappings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInputMappings, PlayerIndex_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerId_MetaData[] = {
		{ "Comment", "// String to identify the player that owns these mappings\n// Preferably the Unique Net ID of the player, but can fall back to a Controller ID\n" },
		{ "ModuleRelativePath", "Public/InputMapping/PlayerInputMappings.h" },
		{ "ToolTip", "String to identify the player that owns these mappings\nPreferably the Unique Net ID of the player, but can fall back to a Controller ID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInputMappings, PlayerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerKeyGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_Preset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_Custom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_MappingOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_BasePresetTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::NewProp_PlayerId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
		nullptr,
		&NewStructOps,
		"PlayerInputMappings",
		sizeof(FPlayerInputMappings),
		alignof(FPlayerInputMappings),
		Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerInputMappings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerInputMappings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerInputMappings"), sizeof(FPlayerInputMappings), Get_Z_Construct_UScriptStruct_FPlayerInputMappings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerInputMappings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerInputMappings_Hash() { return 3851254940U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
