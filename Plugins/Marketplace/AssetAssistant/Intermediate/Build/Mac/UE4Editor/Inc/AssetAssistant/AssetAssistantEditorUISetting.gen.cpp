// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetAssistant/Public/AssetAssistantEditorUISetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetAssistantEditorUISetting() {}
// Cross Module References
	ASSETASSISTANT_API UEnum* Z_Construct_UEnum_AssetAssistant_EModifyFromActorOption();
	UPackage* Z_Construct_UPackage__Script_AssetAssistant();
	ASSETASSISTANT_API UEnum* Z_Construct_UEnum_AssetAssistant_EFindFrom();
	ASSETASSISTANT_API UEnum* Z_Construct_UEnum_AssetAssistant_ESetType();
	ASSETASSISTANT_API UEnum* Z_Construct_UEnum_AssetAssistant_EAutosaveRecoverType();
	ASSETASSISTANT_API UScriptStruct* Z_Construct_UScriptStruct_FComboDirectories();
	ASSETASSISTANT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetFile();
	ASSETASSISTANT_API UClass* Z_Construct_UClass_UAssetAssistantEditorUISetting_NoRegister();
	ASSETASSISTANT_API UClass* Z_Construct_UClass_UAssetAssistantEditorUISetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* EModifyFromActorOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AssetAssistant_EModifyFromActorOption, Z_Construct_UPackage__Script_AssetAssistant(), TEXT("EModifyFromActorOption"));
		}
		return Singleton;
	}
	template<> ASSETASSISTANT_API UEnum* StaticEnum<EModifyFromActorOption>()
	{
		return EModifyFromActorOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModifyFromActorOption(EModifyFromActorOption_StaticEnum, TEXT("/Script/AssetAssistant"), TEXT("EModifyFromActorOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AssetAssistant_EModifyFromActorOption_Hash() { return 2592980898U; }
	UEnum* Z_Construct_UEnum_AssetAssistant_EModifyFromActorOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AssetAssistant();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModifyFromActorOption"), 0, Get_Z_Construct_UEnum_AssetAssistant_EModifyFromActorOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModifyFromActorOption::InstancedStaticMeshActor", (int64)EModifyFromActorOption::InstancedStaticMeshActor },
				{ "EModifyFromActorOption::HierarchicalInstancedStaticMeshActor", (int64)EModifyFromActorOption::HierarchicalInstancedStaticMeshActor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HierarchicalInstancedStaticMeshActor.Name", "EModifyFromActorOption::HierarchicalInstancedStaticMeshActor" },
				{ "InstancedStaticMeshActor.Name", "EModifyFromActorOption::InstancedStaticMeshActor" },
				{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AssetAssistant,
				nullptr,
				"EModifyFromActorOption",
				"EModifyFromActorOption",
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
	static UEnum* EFindFrom_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AssetAssistant_EFindFrom, Z_Construct_UPackage__Script_AssetAssistant(), TEXT("EFindFrom"));
		}
		return Singleton;
	}
	template<> ASSETASSISTANT_API UEnum* StaticEnum<EFindFrom>()
	{
		return EFindFrom_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFindFrom(EFindFrom_StaticEnum, TEXT("/Script/AssetAssistant"), TEXT("EFindFrom"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AssetAssistant_EFindFrom_Hash() { return 2812604299U; }
	UEnum* Z_Construct_UEnum_AssetAssistant_EFindFrom()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AssetAssistant();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFindFrom"), 0, Get_Z_Construct_UEnum_AssetAssistant_EFindFrom_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFindFrom::AllFiles", (int64)EFindFrom::AllFiles },
				{ "EFindFrom::SelectedInContentBrowser", (int64)EFindFrom::SelectedInContentBrowser },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllFiles.Name", "EFindFrom::AllFiles" },
				{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
				{ "SelectedInContentBrowser.Name", "EFindFrom::SelectedInContentBrowser" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AssetAssistant,
				nullptr,
				"EFindFrom",
				"EFindFrom",
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
	static UEnum* ESetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AssetAssistant_ESetType, Z_Construct_UPackage__Script_AssetAssistant(), TEXT("ESetType"));
		}
		return Singleton;
	}
	template<> ASSETASSISTANT_API UEnum* StaticEnum<ESetType>()
	{
		return ESetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESetType(ESetType_StaticEnum, TEXT("/Script/AssetAssistant"), TEXT("ESetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AssetAssistant_ESetType_Hash() { return 2683242782U; }
	UEnum* Z_Construct_UEnum_AssetAssistant_ESetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AssetAssistant();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESetType"), 0, Get_Z_Construct_UEnum_AssetAssistant_ESetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESetType::AssetSets", (int64)ESetType::AssetSets },
				{ "ESetType::AssetAutosaves", (int64)ESetType::AssetAutosaves },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AssetAutosaves.Name", "ESetType::AssetAutosaves" },
				{ "AssetSets.Name", "ESetType::AssetSets" },
				{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AssetAssistant,
				nullptr,
				"ESetType",
				"ESetType",
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
	static UEnum* EAutosaveRecoverType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AssetAssistant_EAutosaveRecoverType, Z_Construct_UPackage__Script_AssetAssistant(), TEXT("EAutosaveRecoverType"));
		}
		return Singleton;
	}
	template<> ASSETASSISTANT_API UEnum* StaticEnum<EAutosaveRecoverType>()
	{
		return EAutosaveRecoverType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAutosaveRecoverType(EAutosaveRecoverType_StaticEnum, TEXT("/Script/AssetAssistant"), TEXT("EAutosaveRecoverType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AssetAssistant_EAutosaveRecoverType_Hash() { return 1170621845U; }
	UEnum* Z_Construct_UEnum_AssetAssistant_EAutosaveRecoverType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AssetAssistant();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAutosaveRecoverType"), 0, Get_Z_Construct_UEnum_AssetAssistant_EAutosaveRecoverType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAutosaveRecoverType::NONE", (int64)EAutosaveRecoverType::NONE },
				{ "EAutosaveRecoverType::LastAutosave", (int64)EAutosaveRecoverType::LastAutosave },
				{ "EAutosaveRecoverType::SelectedAssetSet", (int64)EAutosaveRecoverType::SelectedAssetSet },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LastAutosave.Name", "EAutosaveRecoverType::LastAutosave" },
				{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
				{ "NONE.Name", "EAutosaveRecoverType::NONE" },
				{ "SelectedAssetSet.Name", "EAutosaveRecoverType::SelectedAssetSet" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AssetAssistant,
				nullptr,
				"EAutosaveRecoverType",
				"EAutosaveRecoverType",
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
class UScriptStruct* FComboDirectories::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETASSISTANT_API uint32 Get_Z_Construct_UScriptStruct_FComboDirectories_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboDirectories, Z_Construct_UPackage__Script_AssetAssistant(), TEXT("ComboDirectories"), sizeof(FComboDirectories), Get_Z_Construct_UScriptStruct_FComboDirectories_Hash());
	}
	return Singleton;
}
template<> ASSETASSISTANT_API UScriptStruct* StaticStruct<FComboDirectories>()
{
	return FComboDirectories::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComboDirectories(FComboDirectories::StaticStruct, TEXT("/Script/AssetAssistant"), TEXT("ComboDirectories"), false, nullptr, nullptr);
static struct FScriptStruct_AssetAssistant_StaticRegisterNativesFComboDirectories
{
	FScriptStruct_AssetAssistant_StaticRegisterNativesFComboDirectories()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComboDirectories")),new UScriptStruct::TCppStructOps<FComboDirectories>);
	}
} ScriptStruct_AssetAssistant_StaticRegisterNativesFComboDirectories;
	struct Z_Construct_UScriptStruct_FComboDirectories_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Directories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Directories;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Directories_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboDirectories_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboDirectories_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboDirectories>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboDirectories_Statics::NewProp_Names_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComboDirectories_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboDirectories, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboDirectories_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboDirectories_Statics::NewProp_Names_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComboDirectories_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboDirectories_Statics::NewProp_Directories_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComboDirectories_Statics::NewProp_Directories = { "Directories", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboDirectories, Directories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboDirectories_Statics::NewProp_Directories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboDirectories_Statics::NewProp_Directories_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComboDirectories_Statics::NewProp_Directories_Inner = { "Directories", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboDirectories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboDirectories_Statics::NewProp_Names,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboDirectories_Statics::NewProp_Names_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboDirectories_Statics::NewProp_Directories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboDirectories_Statics::NewProp_Directories_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboDirectories_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetAssistant,
		nullptr,
		&NewStructOps,
		"ComboDirectories",
		sizeof(FComboDirectories),
		alignof(FComboDirectories),
		Z_Construct_UScriptStruct_FComboDirectories_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboDirectories_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComboDirectories_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboDirectories_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComboDirectories()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComboDirectories_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetAssistant();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComboDirectories"), sizeof(FComboDirectories), Get_Z_Construct_UScriptStruct_FComboDirectories_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComboDirectories_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComboDirectories_Hash() { return 3931007625U; }
class UScriptStruct* FAssetFile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETASSISTANT_API uint32 Get_Z_Construct_UScriptStruct_FAssetFile_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetFile, Z_Construct_UPackage__Script_AssetAssistant(), TEXT("AssetFile"), sizeof(FAssetFile), Get_Z_Construct_UScriptStruct_FAssetFile_Hash());
	}
	return Singleton;
}
template<> ASSETASSISTANT_API UScriptStruct* StaticStruct<FAssetFile>()
{
	return FAssetFile::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetFile(FAssetFile::StaticStruct, TEXT("/Script/AssetAssistant"), TEXT("AssetFile"), false, nullptr, nullptr);
static struct FScriptStruct_AssetAssistant_StaticRegisterNativesFAssetFile
{
	FScriptStruct_AssetAssistant_StaticRegisterNativesFAssetFile()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetFile")),new UScriptStruct::TCppStructOps<FAssetFile>);
	}
} ScriptStruct_AssetAssistant_StaticRegisterNativesFAssetFile;
	struct Z_Construct_UScriptStruct_FAssetFile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetFile_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetFile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetFile>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_AssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetFile, AssetPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_AssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_AssetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetFile, AssetClass), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_AssetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_AssetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_AssetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetFile, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_ItemID_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetFile, ItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_ItemID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_AssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_AssetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_AssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetFile_Statics::NewProp_ItemID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetFile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetAssistant,
		nullptr,
		&NewStructOps,
		"AssetFile",
		sizeof(FAssetFile),
		alignof(FAssetFile),
		Z_Construct_UScriptStruct_FAssetFile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetFile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetFile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetFile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetFile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetFile_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetAssistant();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetFile"), sizeof(FAssetFile), Get_Z_Construct_UScriptStruct_FAssetFile_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetFile_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetFile_Hash() { return 409146909U; }
	void UAssetAssistantEditorUISetting::StaticRegisterNativesUAssetAssistantEditorUISetting()
	{
	}
	UClass* Z_Construct_UClass_UAssetAssistantEditorUISetting_NoRegister()
	{
		return UAssetAssistantEditorUISetting::StaticClass();
	}
	struct Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginHotkey_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PluginHotkey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutosaveRepeatRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutosaveRepeatRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutosaveRecoverType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutosaveRecoverType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutosaveRecoverType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SetText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arr2_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Arr2;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Arr2_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arr1_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Arr1;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Arr1_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultipleActionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MultipleActionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FragmentToReplace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FragmentToReplace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatternText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PatternText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FindFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FindFrom;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FindFrom_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextToFind_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextToFind;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetAssistant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetAssistantEditorUISetting.h" },
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Extra" },
		{ "Comment", "// Preview of available classes\n" },
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
		{ "ToolTip", "Preview of available classes" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetAssistantEditorUISetting, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_PluginHotkey_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "Comment", "// Plugin hotkey, applied when UE4 project opens\n" },
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
		{ "ToolTip", "Plugin hotkey, applied when UE4 project opens" },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_PluginHotkey = { "PluginHotkey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetAssistantEditorUISetting, PluginHotkey), METADATA_PARAMS(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_PluginHotkey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_PluginHotkey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_AutosaveRepeatRate_MetaData[] = {
		{ "Category", "Macro" },
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_AutosaveRepeatRate = { "AutosaveRepeatRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetAssistantEditorUISetting, AutosaveRepeatRate), METADATA_PARAMS(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_AutosaveRepeatRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_AutosaveRepeatRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_AutosaveRecoverType_MetaData[] = {
		{ "Category", "Macro" },
		{ "DisplayName", "Autosave Recover Type" },
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_AutosaveRecoverType = { "AutosaveRecoverType", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetAssistantEditorUISetting, AutosaveRecoverType), Z_Construct_UEnum_AssetAssistant_EAutosaveRecoverType, METADATA_PARAMS(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_AutosaveRecoverType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_AutosaveRecoverType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_AutosaveRecoverType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_SetText_MetaData[] = {
		{ "Category", "Macro" },
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n// Macro\n" },
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
		{ "ToolTip", "Macro" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_SetText = { "SetText", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetAssistantEditorUISetting, SetText), METADATA_PARAMS(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_SetText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_SetText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Arr2_MetaData[] = {
		{ "Category", "Pattern" },
		{ "DisplayName", "Arr2" },
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Arr2 = { "Arr2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetAssistantEditorUISetting, Arr2), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Arr2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Arr2_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Arr2_Inner = { "Arr2", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Arr1_MetaData[] = {
		{ "Category", "Pattern" },
		{ "DisplayName", "Arr1" },
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Arr1 = { "Arr1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetAssistantEditorUISetting, Arr1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Arr1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Arr1_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Arr1_Inner = { "Arr1", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_MultipleActionCount_MetaData[] = {
		{ "Category", "Pattern" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Number of copies for Duplicate action" },
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_MultipleActionCount = { "MultipleActionCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetAssistantEditorUISetting, MultipleActionCount), METADATA_PARAMS(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_MultipleActionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_MultipleActionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_FragmentToReplace_MetaData[] = {
		{ "Category", "Pattern" },
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_FragmentToReplace = { "FragmentToReplace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetAssistantEditorUISetting, FragmentToReplace), METADATA_PARAMS(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_FragmentToReplace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_FragmentToReplace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_PatternText_MetaData[] = {
		{ "Category", "Pattern" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////\n// Modify\n" },
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
		{ "ToolTip", "Modify" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_PatternText = { "PatternText", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetAssistantEditorUISetting, PatternText), METADATA_PARAMS(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_PatternText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_PatternText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_FindFrom_MetaData[] = {
		{ "Category", "Find" },
		{ "DisplayName", "Find From" },
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_FindFrom = { "FindFrom", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetAssistantEditorUISetting, FindFrom), Z_Construct_UEnum_AssetAssistant_EFindFrom, METADATA_PARAMS(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_FindFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_FindFrom_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_FindFrom_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_TextToFind_MetaData[] = {
		{ "Category", "Find" },
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n// Find\n" },
		{ "ModuleRelativePath", "Public/AssetAssistantEditorUISetting.h" },
		{ "ToolTip", "Find" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_TextToFind = { "TextToFind", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetAssistantEditorUISetting, TextToFind), METADATA_PARAMS(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_TextToFind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_TextToFind_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_PluginHotkey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_AutosaveRepeatRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_AutosaveRecoverType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_AutosaveRecoverType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_SetText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Arr2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Arr2_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Arr1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_Arr1_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_MultipleActionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_FragmentToReplace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_PatternText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_FindFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_FindFrom_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::NewProp_TextToFind,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetAssistantEditorUISetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::ClassParams = {
		&UAssetAssistantEditorUISetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetAssistantEditorUISetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetAssistantEditorUISetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetAssistantEditorUISetting, 1582897205);
	template<> ASSETASSISTANT_API UClass* StaticClass<UAssetAssistantEditorUISetting>()
	{
		return UAssetAssistantEditorUISetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetAssistantEditorUISetting(Z_Construct_UClass_UAssetAssistantEditorUISetting, &UAssetAssistantEditorUISetting::StaticClass, TEXT("/Script/AssetAssistant"), TEXT("UAssetAssistantEditorUISetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetAssistantEditorUISetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
