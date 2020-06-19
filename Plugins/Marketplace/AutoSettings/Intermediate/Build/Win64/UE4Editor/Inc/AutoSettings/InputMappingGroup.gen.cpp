// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/InputMapping/InputMappingGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputMappingGroup() {}
// Cross Module References
	AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingGroup();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FConfigAxisKeyMapping();
	AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FConfigActionKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
// End Cross Module References
class UScriptStruct* FInputMappingGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FInputMappingGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMappingGroup, Z_Construct_UPackage__Script_AutoSettings(), TEXT("InputMappingGroup"), sizeof(FInputMappingGroup), Get_Z_Construct_UScriptStruct_FInputMappingGroup_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGS_API UScriptStruct* StaticStruct<FInputMappingGroup>()
{
	return FInputMappingGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputMappingGroup(FInputMappingGroup::StaticStruct, TEXT("/Script/AutoSettings"), TEXT("InputMappingGroup"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettings_StaticRegisterNativesFInputMappingGroup
{
	FScriptStruct_AutoSettings_StaticRegisterNativesFInputMappingGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputMappingGroup")),new UScriptStruct::TCppStructOps<FInputMappingGroup>);
	}
} ScriptStruct_AutoSettings_StaticRegisterNativesFInputMappingGroup;
	struct Z_Construct_UScriptStruct_FInputMappingGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnboundAxisMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnboundAxisMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnboundAxisMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnboundActionMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnboundActionMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnboundActionMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AxisMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionMappings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingGroup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// An input mapping group represents a set of mappings for which each action or axis has a single binding\n// Each action should have a unique name and each axis should have a unique name + scale combination, however axis keys count as all scales\n// It's valid to have axis mappings for (Name: MoveForward, Scale: 1, Key: W) and (Name: MoveForward, Scale: -1, Key: S) at the same time\n// It's not valid to have (Name: MoveForward, Scale: 1, Key: GamepadLeftStickY) and (Name: MoveForward, Scale: -1, Key: S)\n" },
		{ "ModuleRelativePath", "Public/InputMapping/InputMappingGroup.h" },
		{ "ToolTip", "An input mapping group represents a set of mappings for which each action or axis has a single binding\nEach action should have a unique name and each axis should have a unique name + scale combination, however axis keys count as all scales\nIt's valid to have axis mappings for (Name: MoveForward, Scale: 1, Key: W) and (Name: MoveForward, Scale: -1, Key: S) at the same time\nIt's not valid to have (Name: MoveForward, Scale: 1, Key: GamepadLeftStickY) and (Name: MoveForward, Scale: -1, Key: S)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMappingGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundAxisMappings_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputMapping/InputMappingGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundAxisMappings = { "UnboundAxisMappings", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMappingGroup, UnboundAxisMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundAxisMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundAxisMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundAxisMappings_Inner = { "UnboundAxisMappings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConfigAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundActionMappings_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputMapping/InputMappingGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundActionMappings = { "UnboundActionMappings", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMappingGroup, UnboundActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundActionMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundActionMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundActionMappings_Inner = { "UnboundActionMappings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConfigActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_AxisMappings_MetaData[] = {
		{ "Category", "Input Mapping Group" },
		{ "Comment", "// Axis mappings in this group\n" },
		{ "ModuleRelativePath", "Public/InputMapping/InputMappingGroup.h" },
		{ "TitleProperty", "AxisName" },
		{ "ToolTip", "Axis mappings in this group" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_AxisMappings = { "AxisMappings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMappingGroup, AxisMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_AxisMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_AxisMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_AxisMappings_Inner = { "AxisMappings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConfigAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_ActionMappings_MetaData[] = {
		{ "Category", "Input Mapping Group" },
		{ "Comment", "// Action mappings in this group\n" },
		{ "ModuleRelativePath", "Public/InputMapping/InputMappingGroup.h" },
		{ "TitleProperty", "ActionName" },
		{ "ToolTip", "Action mappings in this group" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_ActionMappings = { "ActionMappings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMappingGroup, ActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_ActionMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_ActionMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_ActionMappings_Inner = { "ActionMappings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConfigActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputMappingGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundAxisMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundAxisMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundActionMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundActionMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_AxisMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_AxisMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_ActionMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_ActionMappings_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
		nullptr,
		&NewStructOps,
		"InputMappingGroup",
		sizeof(FInputMappingGroup),
		alignof(FInputMappingGroup),
		Z_Construct_UScriptStruct_FInputMappingGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputMappingGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputMappingGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputMappingGroup"), sizeof(FInputMappingGroup), Get_Z_Construct_UScriptStruct_FInputMappingGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputMappingGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputMappingGroup_Hash() { return 2695755264U; }
class UScriptStruct* FConfigAxisKeyMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConfigAxisKeyMapping, Z_Construct_UPackage__Script_AutoSettings(), TEXT("ConfigAxisKeyMapping"), sizeof(FConfigAxisKeyMapping), Get_Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGS_API UScriptStruct* StaticStruct<FConfigAxisKeyMapping>()
{
	return FConfigAxisKeyMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConfigAxisKeyMapping(FConfigAxisKeyMapping::StaticStruct, TEXT("/Script/AutoSettings"), TEXT("ConfigAxisKeyMapping"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettings_StaticRegisterNativesFConfigAxisKeyMapping
{
	FScriptStruct_AutoSettings_StaticRegisterNativesFConfigAxisKeyMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConfigAxisKeyMapping")),new UScriptStruct::TCppStructOps<FConfigAxisKeyMapping>);
	}
} ScriptStruct_AutoSettings_StaticRegisterNativesFConfigAxisKeyMapping;
	struct Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Config editable axis mapping\n" },
		{ "ModuleRelativePath", "Public/InputMapping/InputMappingGroup.h" },
		{ "ToolTip", "Config editable axis mapping" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConfigAxisKeyMapping>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
		Z_Construct_UScriptStruct_FInputAxisKeyMapping,
		&NewStructOps,
		"ConfigAxisKeyMapping",
		sizeof(FConfigAxisKeyMapping),
		alignof(FConfigAxisKeyMapping),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConfigAxisKeyMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConfigAxisKeyMapping"), sizeof(FConfigAxisKeyMapping), Get_Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Hash() { return 3781662662U; }
class UScriptStruct* FConfigActionKeyMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FConfigActionKeyMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConfigActionKeyMapping, Z_Construct_UPackage__Script_AutoSettings(), TEXT("ConfigActionKeyMapping"), sizeof(FConfigActionKeyMapping), Get_Z_Construct_UScriptStruct_FConfigActionKeyMapping_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGS_API UScriptStruct* StaticStruct<FConfigActionKeyMapping>()
{
	return FConfigActionKeyMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConfigActionKeyMapping(FConfigActionKeyMapping::StaticStruct, TEXT("/Script/AutoSettings"), TEXT("ConfigActionKeyMapping"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettings_StaticRegisterNativesFConfigActionKeyMapping
{
	FScriptStruct_AutoSettings_StaticRegisterNativesFConfigActionKeyMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConfigActionKeyMapping")),new UScriptStruct::TCppStructOps<FConfigActionKeyMapping>);
	}
} ScriptStruct_AutoSettings_StaticRegisterNativesFConfigActionKeyMapping;
	struct Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Sadly the mapping names aren't editable in config unless using these child classes\n// Config editable action mapping\n" },
		{ "ModuleRelativePath", "Public/InputMapping/InputMappingGroup.h" },
		{ "ToolTip", "Sadly the mapping names aren't editable in config unless using these child classes\nConfig editable action mapping" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConfigActionKeyMapping>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
		Z_Construct_UScriptStruct_FInputActionKeyMapping,
		&NewStructOps,
		"ConfigActionKeyMapping",
		sizeof(FConfigActionKeyMapping),
		alignof(FConfigActionKeyMapping),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConfigActionKeyMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConfigActionKeyMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConfigActionKeyMapping"), sizeof(FConfigActionKeyMapping), Get_Z_Construct_UScriptStruct_FConfigActionKeyMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConfigActionKeyMapping_Hash() { return 2028426351U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
