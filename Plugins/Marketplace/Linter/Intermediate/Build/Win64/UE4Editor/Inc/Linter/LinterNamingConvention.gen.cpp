// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/LinterNamingConvention.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinterNamingConvention() {}
// Cross Module References
	LINTER_API UScriptStruct* Z_Construct_UScriptStruct_FLinterNamingConventionInfo();
	UPackage* Z_Construct_UPackage__Script_Linter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULinterNamingConvention_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULinterNamingConvention();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
class UScriptStruct* FLinterNamingConventionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LINTER_API uint32 Get_Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLinterNamingConventionInfo, Z_Construct_UPackage__Script_Linter(), TEXT("LinterNamingConventionInfo"), sizeof(FLinterNamingConventionInfo), Get_Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Hash());
	}
	return Singleton;
}
template<> LINTER_API UScriptStruct* StaticStruct<FLinterNamingConventionInfo>()
{
	return FLinterNamingConventionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLinterNamingConventionInfo(FLinterNamingConventionInfo::StaticStruct, TEXT("/Script/Linter"), TEXT("LinterNamingConventionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Linter_StaticRegisterNativesFLinterNamingConventionInfo
{
	FScriptStruct_Linter_StaticRegisterNativesFLinterNamingConventionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LinterNamingConventionInfo")),new UScriptStruct::TCppStructOps<FLinterNamingConventionInfo>);
	}
} ScriptStruct_Linter_StaticRegisterNativesFLinterNamingConventionInfo;
	struct Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variant_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Variant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftClassPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SoftClassPtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class/Prefix/Suffix settings for Linter\n */" },
		{ "ModuleRelativePath", "Public/LinterNamingConvention.h" },
		{ "ToolTip", "Class/Prefix/Suffix settings for Linter" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLinterNamingConventionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_Variant_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/LinterNamingConvention.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLinterNamingConventionInfo, Variant), METADATA_PARAMS(Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_Variant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_Variant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_Suffix_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/LinterNamingConvention.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLinterNamingConventionInfo, Suffix), METADATA_PARAMS(Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_Prefix_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/LinterNamingConvention.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLinterNamingConventionInfo, Prefix), METADATA_PARAMS(Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_Prefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_SoftClassPtr_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/LinterNamingConvention.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_SoftClassPtr = { "SoftClassPtr", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLinterNamingConventionInfo, SoftClassPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_SoftClassPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_SoftClassPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_Variant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::NewProp_SoftClassPtr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
		nullptr,
		&NewStructOps,
		"LinterNamingConventionInfo",
		sizeof(FLinterNamingConventionInfo),
		alignof(FLinterNamingConventionInfo),
		Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLinterNamingConventionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Linter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LinterNamingConventionInfo"), sizeof(FLinterNamingConventionInfo), Get_Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLinterNamingConventionInfo_Hash() { return 2312608466U; }
	DEFINE_FUNCTION(ULinterNamingConvention::execSortConventions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortConventions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULinterNamingConvention::execGetNamingConventionsForClassVariant)
	{
		P_GET_SOFTCLASS(TSoftClassPtr<UObject> ,Z_Param_Class);
		P_GET_PROPERTY(FNameProperty,Z_Param_Variant);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLinterNamingConventionInfo>*)Z_Param__Result=P_THIS->GetNamingConventionsForClassVariant(Z_Param_Class,Z_Param_Variant);
		P_NATIVE_END;
	}
	void ULinterNamingConvention::StaticRegisterNativesULinterNamingConvention()
	{
		UClass* Class = ULinterNamingConvention::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNamingConventionsForClassVariant", &ULinterNamingConvention::execGetNamingConventionsForClassVariant },
			{ "SortConventions", &ULinterNamingConvention::execSortConventions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant_Statics
	{
		struct LinterNamingConvention_eventGetNamingConventionsForClassVariant_Parms
		{
			TSoftClassPtr<UObject>  Class;
			FName Variant;
			TArray<FLinterNamingConventionInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Variant;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LinterNamingConvention_eventGetNamingConventionsForClassVariant_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinterNamingConventionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LinterNamingConvention_eventGetNamingConventionsForClassVariant_Parms, Variant), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LinterNamingConvention_eventGetNamingConventionsForClassVariant_Parms, Class), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant_Statics::NewProp_Variant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conventions" },
		{ "CPP_Default_Variant", "None" },
		{ "ModuleRelativePath", "Public/LinterNamingConvention.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULinterNamingConvention, nullptr, "GetNamingConventionsForClassVariant", nullptr, nullptr, sizeof(LinterNamingConvention_eventGetNamingConventionsForClassVariant_Parms), Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULinterNamingConvention_SortConventions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinterNamingConvention_SortConventions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conventions" },
		{ "ModuleRelativePath", "Public/LinterNamingConvention.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULinterNamingConvention_SortConventions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULinterNamingConvention, nullptr, "SortConventions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULinterNamingConvention_SortConventions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinterNamingConvention_SortConventions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULinterNamingConvention_SortConventions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULinterNamingConvention_SortConventions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULinterNamingConvention_NoRegister()
	{
		return ULinterNamingConvention::StaticClass();
	}
	struct Z_Construct_UClass_ULinterNamingConvention_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassNamingConventions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClassNamingConventions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClassNamingConventions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULinterNamingConvention_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULinterNamingConvention_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULinterNamingConvention_GetNamingConventionsForClassVariant, "GetNamingConventionsForClassVariant" }, // 1880863731
		{ &Z_Construct_UFunction_ULinterNamingConvention_SortConventions, "SortConventions" }, // 4195018146
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinterNamingConvention_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Contains a naming convention to be used by LinterManagers/LinterRules\n*/" },
		{ "IncludePath", "LinterNamingConvention.h" },
		{ "ModuleRelativePath", "Public/LinterNamingConvention.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Contains a naming convention to be used by LinterManagers/LinterRules" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinterNamingConvention_Statics::NewProp_ClassNamingConventions_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "Conventions" },
		{ "ModuleRelativePath", "Public/LinterNamingConvention.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULinterNamingConvention_Statics::NewProp_ClassNamingConventions = { "ClassNamingConventions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULinterNamingConvention, ClassNamingConventions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULinterNamingConvention_Statics::NewProp_ClassNamingConventions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinterNamingConvention_Statics::NewProp_ClassNamingConventions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULinterNamingConvention_Statics::NewProp_ClassNamingConventions_Inner = { "ClassNamingConventions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinterNamingConventionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULinterNamingConvention_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinterNamingConvention_Statics::NewProp_ClassNamingConventions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinterNamingConvention_Statics::NewProp_ClassNamingConventions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULinterNamingConvention_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULinterNamingConvention>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULinterNamingConvention_Statics::ClassParams = {
		&ULinterNamingConvention::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULinterNamingConvention_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULinterNamingConvention_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULinterNamingConvention_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULinterNamingConvention_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULinterNamingConvention()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULinterNamingConvention_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULinterNamingConvention, 2205515005);
	template<> LINTER_API UClass* StaticClass<ULinterNamingConvention>()
	{
		return ULinterNamingConvention::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULinterNamingConvention(Z_Construct_UClass_ULinterNamingConvention, &ULinterNamingConvention::StaticClass, TEXT("/Script/Linter"), TEXT("ULinterNamingConvention"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULinterNamingConvention);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
