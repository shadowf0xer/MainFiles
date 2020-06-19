// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicNodeRuntime/Public/MagicNodeDataTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicNodeDataTypes() {}
// Cross Module References
	MAGICNODERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMGC_SourceCode();
	UPackage* Z_Construct_UPackage__Script_MagicNodeRuntime();
// End Cross Module References
class UScriptStruct* FMGC_SourceCode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICNODERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FMGC_SourceCode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMGC_SourceCode, Z_Construct_UPackage__Script_MagicNodeRuntime(), TEXT("MGC_SourceCode"), sizeof(FMGC_SourceCode), Get_Z_Construct_UScriptStruct_FMGC_SourceCode_Hash());
	}
	return Singleton;
}
template<> MAGICNODERUNTIME_API UScriptStruct* StaticStruct<FMGC_SourceCode>()
{
	return FMGC_SourceCode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMGC_SourceCode(FMGC_SourceCode::StaticStruct, TEXT("/Script/MagicNodeRuntime"), TEXT("MGC_SourceCode"), false, nullptr, nullptr);
static struct FScriptStruct_MagicNodeRuntime_StaticRegisterNativesFMGC_SourceCode
{
	FScriptStruct_MagicNodeRuntime_StaticRegisterNativesFMGC_SourceCode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MGC_SourceCode")),new UScriptStruct::TCppStructOps<FMGC_SourceCode>);
	}
} ScriptStruct_MagicNodeRuntime_StaticRegisterNativesFMGC_SourceCode;
	struct Z_Construct_UScriptStruct_FMGC_SourceCode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Macros_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Macros;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Macros_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Includes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Includes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Includes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Types_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Types;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Script_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Script;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Header;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n/// MGC Script Data Types (Editor-Only):\n" },
		{ "ModuleRelativePath", "Public/MagicNodeDataTypes.h" },
		{ "ToolTip", "MGC Script Data Types (Editor-Only):" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMGC_SourceCode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Macros_MetaData[] = {
		{ "Category", "Magic Node" },
		{ "ModuleRelativePath", "Public/MagicNodeDataTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Macros = { "Macros", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGC_SourceCode, Macros), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Macros_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Macros_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Macros_Inner = { "Macros", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Includes_MetaData[] = {
		{ "Category", "Magic Node" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MagicNodeDataTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Includes = { "Includes", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGC_SourceCode, Includes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Includes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Includes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Includes_Inner = { "Includes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Types_MetaData[] = {
		{ "ModuleRelativePath", "Public/MagicNodeDataTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Types = { "Types", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGC_SourceCode, Types), METADATA_PARAMS(Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Types_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Types_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Script_MetaData[] = {
		{ "ModuleRelativePath", "Public/MagicNodeDataTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGC_SourceCode, Script), METADATA_PARAMS(Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Script_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Script_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Header_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MagicNodeDataTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMGC_SourceCode, Header), METADATA_PARAMS(Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Header_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Macros,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Macros_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Includes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Includes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Types,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Script,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::NewProp_Header,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeRuntime,
		nullptr,
		&NewStructOps,
		"MGC_SourceCode",
		sizeof(FMGC_SourceCode),
		alignof(FMGC_SourceCode),
		Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMGC_SourceCode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMGC_SourceCode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicNodeRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MGC_SourceCode"), sizeof(FMGC_SourceCode), Get_Z_Construct_UScriptStruct_FMGC_SourceCode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMGC_SourceCode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMGC_SourceCode_Hash() { return 1347639860U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
