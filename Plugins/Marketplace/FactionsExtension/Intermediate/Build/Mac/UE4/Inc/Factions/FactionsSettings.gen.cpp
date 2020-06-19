// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factions/Public/Database/FactionsSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactionsSettings() {}
// Cross Module References
	FACTIONS_API UClass* Z_Construct_UClass_UFactionsSettings_NoRegister();
	FACTIONS_API UClass* Z_Construct_UClass_UFactionsSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Factions();
	FACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FRelationTable();
	FACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionTable();
// End Cross Module References
	void UFactionsSettings::StaticRegisterNativesUFactionsSettings()
	{
	}
	UClass* Z_Construct_UClass_UFactionsSettings_NoRegister()
	{
		return UFactionsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFactionsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Relations_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Relations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactionList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FactionList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFactionsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Factions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactionsSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Find Custom Config documentation here: wiki.unrealengine.com/CustomSettings\n */" },
		{ "IncludePath", "Database/FactionsSettings.h" },
		{ "ModuleRelativePath", "Public/Database/FactionsSettings.h" },
		{ "ToolTip", "Find Custom Config documentation here: wiki.unrealengine.com/CustomSettings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactionsSettings_Statics::NewProp_Relations_MetaData[] = {
		{ "Category", "Factions" },
		{ "ModuleRelativePath", "Public/Database/FactionsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFactionsSettings_Statics::NewProp_Relations = { "Relations", nullptr, (EPropertyFlags)0x0010000001004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFactionsSettings, Relations), Z_Construct_UScriptStruct_FRelationTable, METADATA_PARAMS(Z_Construct_UClass_UFactionsSettings_Statics::NewProp_Relations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFactionsSettings_Statics::NewProp_Relations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactionsSettings_Statics::NewProp_FactionList_MetaData[] = {
		{ "Category", "Factions" },
		{ "Comment", "/** Faction used when an Actor doesn't implement a FactionAgentInterface *///UPROPERTY(config, EditAnywhere, Category = Custom)\n//FFaction DefaultFaction;\n" },
		{ "ModuleRelativePath", "Public/Database/FactionsSettings.h" },
		{ "ToolTip", "Faction used when an Actor doesn't implement a FactionAgentInterface //UPROPERTY(config, EditAnywhere, Category = Custom)\n//FFaction DefaultFaction;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFactionsSettings_Statics::NewProp_FactionList = { "FactionList", nullptr, (EPropertyFlags)0x0020080001004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFactionsSettings, FactionList), Z_Construct_UScriptStruct_FFactionTable, METADATA_PARAMS(Z_Construct_UClass_UFactionsSettings_Statics::NewProp_FactionList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFactionsSettings_Statics::NewProp_FactionList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFactionsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactionsSettings_Statics::NewProp_Relations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactionsSettings_Statics::NewProp_FactionList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFactionsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactionsSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFactionsSettings_Statics::ClassParams = {
		&UFactionsSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFactionsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFactionsSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UFactionsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFactionsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFactionsSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFactionsSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFactionsSettings, 135179467);
	template<> FACTIONS_API UClass* StaticClass<UFactionsSettings>()
	{
		return UFactionsSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFactionsSettings(Z_Construct_UClass_UFactionsSettings, &UFactionsSettings::StaticClass, TEXT("/Script/Factions"), TEXT("UFactionsSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFactionsSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
