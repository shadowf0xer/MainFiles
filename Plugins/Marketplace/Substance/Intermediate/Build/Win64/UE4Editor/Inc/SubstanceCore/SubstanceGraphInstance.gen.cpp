// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Classes/SubstanceGraphInstance.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceGraphInstance() {}
// Cross Module References
	SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceInputType();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
	SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInstanceDesc();
	SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInputDesc();
	SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceFloatInputDesc();
	SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceIntInputDesc();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceOutputData_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceInstanceFactory_NoRegister();
// End Cross Module References
	static UEnum* ESubstanceInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubstanceInputType, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubstanceInputType"));
		}
		return Singleton;
	}
	template<> SUBSTANCECORE_API UEnum* StaticEnum<ESubstanceInputType>()
	{
		return ESubstanceInputType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubstanceInputType(ESubstanceInputType_StaticEnum, TEXT("/Script/SubstanceCore"), TEXT("ESubstanceInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_Hash() { return 732921144U; }
	UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubstanceInputType"), 0, Get_Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SIT_Float", (int64)SIT_Float },
				{ "SIT_Float2", (int64)SIT_Float2 },
				{ "SIT_Float3", (int64)SIT_Float3 },
				{ "SIT_Float4", (int64)SIT_Float4 },
				{ "SIT_Integer", (int64)SIT_Integer },
				{ "SIT_Image", (int64)SIT_Image },
				{ "SIT_Unused_6", (int64)SIT_Unused_6 },
				{ "SIT_Unused_7", (int64)SIT_Unused_7 },
				{ "SIT_Integer2", (int64)SIT_Integer2 },
				{ "SIT_Integer3", (int64)SIT_Integer3 },
				{ "SIT_Integer4", (int64)SIT_Integer4 },
				{ "SIT_MAX", (int64)SIT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
				{ "SIT_Float.Name", "SIT_Float" },
				{ "SIT_Float2.Name", "SIT_Float2" },
				{ "SIT_Float3.Name", "SIT_Float3" },
				{ "SIT_Float4.Name", "SIT_Float4" },
				{ "SIT_Image.Name", "SIT_Image" },
				{ "SIT_Integer.Name", "SIT_Integer" },
				{ "SIT_Integer2.Name", "SIT_Integer2" },
				{ "SIT_Integer3.Name", "SIT_Integer3" },
				{ "SIT_Integer4.Name", "SIT_Integer4" },
				{ "SIT_MAX.Name", "SIT_MAX" },
				{ "SIT_Unused_6.Name", "SIT_Unused_6" },
				{ "SIT_Unused_7.Name", "SIT_Unused_7" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
				nullptr,
				"ESubstanceInputType",
				"ESubstanceInputType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSubstanceInstanceDesc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SUBSTANCECORE_API uint32 Get_Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceInstanceDesc, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceInstanceDesc"), sizeof(FSubstanceInstanceDesc), Get_Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Hash());
	}
	return Singleton;
}
template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<FSubstanceInstanceDesc>()
{
	return FSubstanceInstanceDesc::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubstanceInstanceDesc(FSubstanceInstanceDesc::StaticStruct, TEXT("/Script/SubstanceCore"), TEXT("SubstanceInstanceDesc"), false, nullptr, nullptr);
static struct FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceInstanceDesc
{
	FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceInstanceDesc()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubstanceInstanceDesc")),new UScriptStruct::TCppStructOps<FSubstanceInstanceDesc>);
	}
} ScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceInstanceDesc;
	struct Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceInstanceDesc>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubstanceInstanceDesc, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Inputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSubstanceInputDesc, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubstanceInstanceDesc, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Inputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Inputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
		nullptr,
		&NewStructOps,
		"SubstanceInstanceDesc",
		sizeof(FSubstanceInstanceDesc),
		alignof(FSubstanceInstanceDesc),
		Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInstanceDesc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubstanceInstanceDesc"), sizeof(FSubstanceInstanceDesc), Get_Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Hash() { return 1416419160U; }
class UScriptStruct* FSubstanceFloatInputDesc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SUBSTANCECORE_API uint32 Get_Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceFloatInputDesc"), sizeof(FSubstanceFloatInputDesc), Get_Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Hash());
	}
	return Singleton;
}
template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<FSubstanceFloatInputDesc>()
{
	return FSubstanceFloatInputDesc::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubstanceFloatInputDesc(FSubstanceFloatInputDesc::StaticStruct, TEXT("/Script/SubstanceCore"), TEXT("SubstanceFloatInputDesc"), false, nullptr, nullptr);
static struct FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceFloatInputDesc
{
	FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceFloatInputDesc()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubstanceFloatInputDesc")),new UScriptStruct::TCppStructOps<FSubstanceFloatInputDesc>);
	}
} ScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceFloatInputDesc;
	struct Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Default;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Default_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceFloatInputDesc>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubstanceFloatInputDesc, Default), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Default_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Default_Inner = { "Default", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubstanceFloatInputDesc, Max), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Max_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Max_Inner = { "Max", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubstanceFloatInputDesc, Min), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Min_Inner = { "Min", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Default,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Default_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Max_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Min_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
		Z_Construct_UScriptStruct_FSubstanceInputDesc,
		&NewStructOps,
		"SubstanceFloatInputDesc",
		sizeof(FSubstanceFloatInputDesc),
		alignof(FSubstanceFloatInputDesc),
		Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubstanceFloatInputDesc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubstanceFloatInputDesc"), sizeof(FSubstanceFloatInputDesc), Get_Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Hash() { return 530988449U; }
class UScriptStruct* FSubstanceIntInputDesc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SUBSTANCECORE_API uint32 Get_Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceIntInputDesc, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceIntInputDesc"), sizeof(FSubstanceIntInputDesc), Get_Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Hash());
	}
	return Singleton;
}
template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<FSubstanceIntInputDesc>()
{
	return FSubstanceIntInputDesc::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubstanceIntInputDesc(FSubstanceIntInputDesc::StaticStruct, TEXT("/Script/SubstanceCore"), TEXT("SubstanceIntInputDesc"), false, nullptr, nullptr);
static struct FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceIntInputDesc
{
	FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceIntInputDesc()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubstanceIntInputDesc")),new UScriptStruct::TCppStructOps<FSubstanceIntInputDesc>);
	}
} ScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceIntInputDesc;
	struct Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Default;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Default_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Max_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Min_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceIntInputDesc>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubstanceIntInputDesc, Default), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Default_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Default_Inner = { "Default", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubstanceIntInputDesc, Max), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Max_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Max_Inner = { "Max", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubstanceIntInputDesc, Min), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Min_Inner = { "Min", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Default,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Default_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Max_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Min_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
		Z_Construct_UScriptStruct_FSubstanceInputDesc,
		&NewStructOps,
		"SubstanceIntInputDesc",
		sizeof(FSubstanceIntInputDesc),
		alignof(FSubstanceIntInputDesc),
		Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubstanceIntInputDesc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubstanceIntInputDesc"), sizeof(FSubstanceIntInputDesc), Get_Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Hash() { return 849201324U; }
class UScriptStruct* FSubstanceInputDesc::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SUBSTANCECORE_API uint32 Get_Z_Construct_UScriptStruct_FSubstanceInputDesc_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceInputDesc, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceInputDesc"), sizeof(FSubstanceInputDesc), Get_Z_Construct_UScriptStruct_FSubstanceInputDesc_Hash());
	}
	return Singleton;
}
template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<FSubstanceInputDesc>()
{
	return FSubstanceInputDesc::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubstanceInputDesc(FSubstanceInputDesc::StaticStruct, TEXT("/Script/SubstanceCore"), TEXT("SubstanceInputDesc"), false, nullptr, nullptr);
static struct FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceInputDesc
{
	FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceInputDesc()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubstanceInputDesc")),new UScriptStruct::TCppStructOps<FSubstanceInputDesc>);
	}
} ScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceInputDesc;
	struct Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceInputDesc>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubstanceInputDesc, Type), Z_Construct_UEnum_SubstanceCore_ESubstanceInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubstanceInputDesc, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
		nullptr,
		&NewStructOps,
		"SubstanceInputDesc",
		sizeof(FSubstanceInputDesc),
		alignof(FSubstanceInputDesc),
		Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInputDesc()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubstanceInputDesc_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubstanceInputDesc"), sizeof(FSubstanceInputDesc), Get_Z_Construct_UScriptStruct_FSubstanceInputDesc_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubstanceInputDesc_Hash() { return 3773342185U; }
	DEFINE_FUNCTION(USubstanceGraphInstance::execSetInputImg)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_GET_OBJECT(UObject,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInputImg(Z_Param_InputName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetInstanceDesc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSubstanceInstanceDesc*)Z_Param__Result=P_THIS->GetInstanceDesc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetFloatInputDesc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSubstanceFloatInputDesc*)Z_Param__Result=P_THIS->GetFloatInputDesc(Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetIntInputDesc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSubstanceIntInputDesc*)Z_Param__Result=P_THIS->GetIntInputDesc(Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInputBool(Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputColor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetInputColor(Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetInputString(Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetInputFloat(Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetInputInt(Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execSetInputBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_UBOOL(Z_Param_Bool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputBool(Z_Param_Identifier,Z_Param_Bool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execSetInputColor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputColor(Z_Param_Identifier,Z_Param_Out_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execSetInputString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputString(Z_Param_Identifier,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execSetInputFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_TARRAY_REF(float,Z_Param_Out_InputValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputFloat(Z_Param_Identifier,Z_Param_Out_InputValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execSetInputInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_TARRAY_REF(int32,Z_Param_Out_InputValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputInt(Z_Param_Identifier,Z_Param_Out_InputValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ESubstanceInputType>*)Z_Param__Result=P_THIS->GetInputType(Z_Param_InputName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetInputNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetDynamicMaterialInstance)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_OBJECT(UMaterial,Z_Param_InParentMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicMaterialInstance(Z_Param_Name,Z_Param_InParentMaterial);
		P_NATIVE_END;
	}
	void USubstanceGraphInstance::StaticRegisterNativesUSubstanceGraphInstance()
	{
		UClass* Class = USubstanceGraphInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDynamicMaterialInstance", &USubstanceGraphInstance::execGetDynamicMaterialInstance },
			{ "GetFloatInputDesc", &USubstanceGraphInstance::execGetFloatInputDesc },
			{ "GetInputBool", &USubstanceGraphInstance::execGetInputBool },
			{ "GetInputColor", &USubstanceGraphInstance::execGetInputColor },
			{ "GetInputFloat", &USubstanceGraphInstance::execGetInputFloat },
			{ "GetInputInt", &USubstanceGraphInstance::execGetInputInt },
			{ "GetInputNames", &USubstanceGraphInstance::execGetInputNames },
			{ "GetInputString", &USubstanceGraphInstance::execGetInputString },
			{ "GetInputType", &USubstanceGraphInstance::execGetInputType },
			{ "GetInstanceDesc", &USubstanceGraphInstance::execGetInstanceDesc },
			{ "GetIntInputDesc", &USubstanceGraphInstance::execGetIntInputDesc },
			{ "SetInputBool", &USubstanceGraphInstance::execSetInputBool },
			{ "SetInputColor", &USubstanceGraphInstance::execSetInputColor },
			{ "SetInputFloat", &USubstanceGraphInstance::execSetInputFloat },
			{ "SetInputImg", &USubstanceGraphInstance::execSetInputImg },
			{ "SetInputInt", &USubstanceGraphInstance::execSetInputInt },
			{ "SetInputString", &USubstanceGraphInstance::execSetInputString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics
	{
		struct SubstanceGraphInstance_eventGetDynamicMaterialInstance_Parms
		{
			FName Name;
			UMaterial* InParentMaterial;
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InParentMaterial;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetDynamicMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::NewProp_InParentMaterial = { "InParentMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetDynamicMaterialInstance_Parms, InParentMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetDynamicMaterialInstance_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::NewProp_InParentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Create a MaterialDynamicInstance using the passed in Material\n\x09  Name - the name to use for the created material instance\n\x09  InParentMaterial - the material to inherit from, will use the graphs CreatedMaterial if null\n\x09*/" },
		{ "CPP_Default_InParentMaterial", "None" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Create a MaterialDynamicInstance using the passed in Material\n        Name - the name to use for the created material instance\n        InParentMaterial - the material to inherit from, will use the graphs CreatedMaterial if null" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetDynamicMaterialInstance", nullptr, nullptr, sizeof(SubstanceGraphInstance_eventGetDynamicMaterialInstance_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics
	{
		struct SubstanceGraphInstance_eventGetFloatInputDesc_Parms
		{
			FString Identifier;
			FSubstanceFloatInputDesc ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetFloatInputDesc_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubstanceFloatInputDesc, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetFloatInputDesc_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::NewProp_Identifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Get a float input description converted to a UE wrapper */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Get a float input description converted to a UE wrapper" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetFloatInputDesc", nullptr, nullptr, sizeof(SubstanceGraphInstance_eventGetFloatInputDesc_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics
	{
		struct SubstanceGraphInstance_eventGetInputBool_Parms
		{
			FString Identifier;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubstanceGraphInstance_eventGetInputBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SubstanceGraphInstance_eventGetInputBool_Parms), &Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputBool_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::NewProp_Identifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Get input values of a boolean input */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Get input values of a boolean input" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputBool", nullptr, nullptr, sizeof(SubstanceGraphInstance_eventGetInputBool_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics
	{
		struct SubstanceGraphInstance_eventGetInputColor_Parms
		{
			FString Identifier;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputColor_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::NewProp_Identifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Get input values of a color input */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Get input values of a color input" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputColor", nullptr, nullptr, sizeof(SubstanceGraphInstance_eventGetInputColor_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics
	{
		struct SubstanceGraphInstance_eventGetInputFloat_Parms
		{
			FString Identifier;
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputFloat_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputFloat_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::NewProp_Identifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Get input values in a float value type array */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Get input values in a float value type array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputFloat", nullptr, nullptr, sizeof(SubstanceGraphInstance_eventGetInputFloat_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics
	{
		struct SubstanceGraphInstance_eventGetInputInt_Parms
		{
			FString Identifier;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputInt_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputInt_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::NewProp_Identifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Get input values in an int value type array */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Get input values in an int value type array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputInt", nullptr, nullptr, sizeof(SubstanceGraphInstance_eventGetInputInt_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics
	{
		struct SubstanceGraphInstance_eventGetInputNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Returns a list of all of the input identifiers */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Returns a list of all of the input identifiers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputNames", nullptr, nullptr, sizeof(SubstanceGraphInstance_eventGetInputNames_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics
	{
		struct SubstanceGraphInstance_eventGetInputString_Parms
		{
			FString Identifier;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputString_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::NewProp_Identifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Get input values of a string input */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Get input values of a string input" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputString", nullptr, nullptr, sizeof(SubstanceGraphInstance_eventGetInputString_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics
	{
		struct SubstanceGraphInstance_eventGetInputType_Parms
		{
			FString InputName;
			TEnumAsByte<ESubstanceInputType> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputType_Parms, ReturnValue), Z_Construct_UEnum_SubstanceCore_ESubstanceInputType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputType_Parms, InputName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::NewProp_InputName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Gets the type of an input */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Gets the type of an input" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputType", nullptr, nullptr, sizeof(SubstanceGraphInstance_eventGetInputType_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics
	{
		struct SubstanceGraphInstance_eventGetInstanceDesc_Parms
		{
			FSubstanceInstanceDesc ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInstanceDesc_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubstanceInstanceDesc, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Get a graph instance description converted to a UE wrapper */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Get a graph instance description converted to a UE wrapper" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInstanceDesc", nullptr, nullptr, sizeof(SubstanceGraphInstance_eventGetInstanceDesc_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics
	{
		struct SubstanceGraphInstance_eventGetIntInputDesc_Parms
		{
			FString Identifier;
			FSubstanceIntInputDesc ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetIntInputDesc_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubstanceIntInputDesc, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventGetIntInputDesc_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::NewProp_Identifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Get an Int input description converted to a UE wrapper */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Get an Int input description converted to a UE wrapper" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetIntInputDesc", nullptr, nullptr, sizeof(SubstanceGraphInstance_eventGetIntInputDesc_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics
	{
		struct SubstanceGraphInstance_eventSetInputBool_Parms
		{
			FString Identifier;
			bool Bool;
		};
		static void NewProp_Bool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bool;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::NewProp_Bool_SetBit(void* Obj)
	{
		((SubstanceGraphInstance_eventSetInputBool_Parms*)Obj)->Bool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SubstanceGraphInstance_eventSetInputBool_Parms), &Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputBool_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::NewProp_Bool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::NewProp_Identifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Set an input with a bool value type */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Set an input with a bool value type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SetInputBool", nullptr, nullptr, sizeof(SubstanceGraphInstance_eventSetInputBool_Parms), Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics
	{
		struct SubstanceGraphInstance_eventSetInputColor_Parms
		{
			FString Identifier;
			FLinearColor Color;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputColor_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::NewProp_Identifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Set an input with a color value type */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Set an input with a color value type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SetInputColor", nullptr, nullptr, sizeof(SubstanceGraphInstance_eventSetInputColor_Parms), Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics
	{
		struct SubstanceGraphInstance_eventSetInputFloat_Parms
		{
			FString Identifier;
			TArray<float> InputValues;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputValues;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputValues_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_InputValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_InputValues = { "InputValues", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputFloat_Parms, InputValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_InputValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_InputValues_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_InputValues_Inner = { "InputValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputFloat_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_InputValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_InputValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_Identifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Set an input with a float value type */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Set an input with a float value type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SetInputFloat", nullptr, nullptr, sizeof(SubstanceGraphInstance_eventSetInputFloat_Parms), Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics
	{
		struct SubstanceGraphInstance_eventSetInputImg_Parms
		{
			FString InputName;
			UObject* Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubstanceGraphInstance_eventSetInputImg_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SubstanceGraphInstance_eventSetInputImg_Parms), &Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputImg_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputImg_Parms, InputName), METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_InputName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_InputName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Sets the input image with the given name */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Sets the input image with the given name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SetInputImg", nullptr, nullptr, sizeof(SubstanceGraphInstance_eventSetInputImg_Parms), Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics
	{
		struct SubstanceGraphInstance_eventSetInputInt_Parms
		{
			FString Identifier;
			TArray<int32> InputValues;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputValues;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputValues_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_InputValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_InputValues = { "InputValues", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputInt_Parms, InputValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_InputValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_InputValues_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_InputValues_Inner = { "InputValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputInt_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_InputValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_InputValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_Identifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Set an input with an int value type */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Set an input with an int value type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SetInputInt", nullptr, nullptr, sizeof(SubstanceGraphInstance_eventSetInputInt_Parms), Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics
	{
		struct SubstanceGraphInstance_eventSetInputString_Parms
		{
			FString Identifier;
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputString_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputString_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::NewProp_Identifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Set an input with a string value type */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Set an input with a string value type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SetInputString", nullptr, nullptr, sizeof(SubstanceGraphInstance_eventSetInputString_Parms), Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister()
	{
		return USubstanceGraphInstance::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceGraphInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFrozen_MetaData[];
#endif
		static void NewProp_bIsFrozen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFrozen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OutputInstances;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutputInstances_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputInstances_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputTextureLinkData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OutputTextureLinkData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputTextureLinkData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputTextureLinkData_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicCreatedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicCreatedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantCreatedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstantCreatedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CreatedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ImageSources;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ImageSources_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageSources_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackageURL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceGraphInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubstanceGraphInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance, "GetDynamicMaterialInstance" }, // 2734251271
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc, "GetFloatInputDesc" }, // 1092487969
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool, "GetInputBool" }, // 3919400928
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor, "GetInputColor" }, // 272432738
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat, "GetInputFloat" }, // 3880210527
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt, "GetInputInt" }, // 2499486889
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames, "GetInputNames" }, // 9343639
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputString, "GetInputString" }, // 2376944789
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputType, "GetInputType" }, // 368374539
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc, "GetInstanceDesc" }, // 2265838778
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc, "GetIntInputDesc" }, // 2765007752
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool, "SetInputBool" }, // 1235390908
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor, "SetInputColor" }, // 2798738440
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat, "SetInputFloat" }, // 3426114822
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg, "SetInputImg" }, // 3505581722
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt, "SetInputInt" }, // 2814745319
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputString, "SetInputString" }, // 1818640791
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubstanceGraphInstance.h" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_bIsFrozen_MetaData[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Flag to determine if this is a graph that has been update disabled through the editor */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Flag to determine if this is a graph that has been update disabled through the editor" },
	};
#endif
	void Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_bIsFrozen_SetBit(void* Obj)
	{
		((USubstanceGraphInstance*)Obj)->bIsFrozen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_bIsFrozen = { "bIsFrozen", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USubstanceGraphInstance), &Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_bIsFrozen_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_bIsFrozen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_bIsFrozen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances_MetaData[] = {
		{ "Comment", "/** Used to store all of the output instance data variables */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Used to store all of the output instance data variables" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances = { "OutputInstances", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceGraphInstance, OutputInstances), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances_Key_KeyProp = { "OutputInstances_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances_ValueProp = { "OutputInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USubstanceOutputData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData_MetaData[] = {
		{ "Comment", "/** Used to store all of the UID/Guid conversions to link legacy textures and output instances */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Used to store all of the UID/Guid conversions to link legacy textures and output instances" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData = { "OutputTextureLinkData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceGraphInstance, OutputTextureLinkData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData_Key_KeyProp = { "OutputTextureLinkData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData_ValueProp = { "OutputTextureLinkData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_DynamicCreatedMaterial_MetaData[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Dynamic Material Instance generated by user at runtime to allow numeric output updates */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Dynamic Material Instance generated by user at runtime to allow numeric output updates" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_DynamicCreatedMaterial = { "DynamicCreatedMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceGraphInstance, DynamicCreatedMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_DynamicCreatedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_DynamicCreatedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ConstantCreatedMaterial_MetaData[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Constant Material Instance created by the factory */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Constant Material Instance created by the factory" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ConstantCreatedMaterial = { "ConstantCreatedMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceGraphInstance, ConstantCreatedMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ConstantCreatedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ConstantCreatedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_CreatedMaterial_MetaData[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Material parent for instancing by the factory */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Material parent for instancing by the factory" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_CreatedMaterial = { "CreatedMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceGraphInstance, CreatedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_CreatedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_CreatedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources_MetaData[] = {
		{ "Comment", "/** Container for linking all of the input images this class uses */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Container for linking all of the input images this class uses" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources = { "ImageSources", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceGraphInstance, ImageSources), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources_Key_KeyProp = { "ImageSources_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources_ValueProp = { "ImageSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ParentFactory_MetaData[] = {
		{ "Comment", "/** The Factory containing the package which created this Instance */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "The Factory containing the package which created this Instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ParentFactory = { "ParentFactory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceGraphInstance, ParentFactory), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ParentFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ParentFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_PackageURL_MetaData[] = {
		{ "Comment", "/** Use for finding and linking the graph instance with other substance objects */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Use for finding and linking the graph instance with other substance objects" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_PackageURL = { "PackageURL", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceGraphInstance, PackageURL), METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_PackageURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_PackageURL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceGraphInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_bIsFrozen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_DynamicCreatedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ConstantCreatedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_CreatedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ParentFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_PackageURL,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceGraphInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceGraphInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubstanceGraphInstance_Statics::ClassParams = {
		&USubstanceGraphInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubstanceGraphInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceGraphInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubstanceGraphInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubstanceGraphInstance, 3233356352);
	template<> SUBSTANCECORE_API UClass* StaticClass<USubstanceGraphInstance>()
	{
		return USubstanceGraphInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceGraphInstance(Z_Construct_UClass_USubstanceGraphInstance, &USubstanceGraphInstance::StaticClass, TEXT("/Script/SubstanceCore"), TEXT("USubstanceGraphInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceGraphInstance);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USubstanceGraphInstance)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
