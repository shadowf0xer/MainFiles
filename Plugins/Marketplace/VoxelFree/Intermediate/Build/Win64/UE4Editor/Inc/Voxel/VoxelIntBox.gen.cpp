// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelIntBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelIntBox() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
// End Cross Module References
class UScriptStruct* FVoxelIntBoxWithValidity::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelIntBoxWithValidity"), sizeof(FVoxelIntBoxWithValidity), Get_Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelIntBoxWithValidity>()
{
	return FVoxelIntBoxWithValidity::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelIntBoxWithValidity(FVoxelIntBoxWithValidity::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelIntBoxWithValidity"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelIntBoxWithValidity
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelIntBoxWithValidity()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelIntBoxWithValidity")),new UScriptStruct::TCppStructOps<FVoxelIntBoxWithValidity>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelIntBoxWithValidity;
	struct Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[];
#endif
		static void NewProp_bValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelIntBox.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelIntBoxWithValidity>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_bValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelIntBox.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_bValid_SetBit(void* Obj)
	{
		((FVoxelIntBoxWithValidity*)Obj)->bValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelIntBoxWithValidity), &Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_bValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_bValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_Box_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelIntBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelIntBoxWithValidity, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_Box_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_bValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_Box,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelIntBoxWithValidity",
		sizeof(FVoxelIntBoxWithValidity),
		alignof(FVoxelIntBoxWithValidity),
		Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelIntBoxWithValidity"), sizeof(FVoxelIntBoxWithValidity), Get_Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Hash() { return 944515815U; }
class UScriptStruct* FVoxelIntBox::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelIntBox_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelIntBox, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelIntBox"), sizeof(FVoxelIntBox), Get_Z_Construct_UScriptStruct_FVoxelIntBox_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelIntBox>()
{
	return FVoxelIntBox::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelIntBox(FVoxelIntBox::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelIntBox"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelIntBox
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelIntBox()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelIntBox")),new UScriptStruct::TCppStructOps<FVoxelIntBox>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelIntBox;
	struct Z_Construct_UScriptStruct_FVoxelIntBox_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelIntBox_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A Box with int32 coordinates\n */" },
		{ "HasNativeBreak", "Voxel.VoxelIntBoxLibrary.BreakIntBox" },
		{ "HasNativeMake", "Voxel.VoxelIntBoxLibrary.MakeIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBox.h" },
		{ "ToolTip", "A Box with int32 coordinates" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelIntBox>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Max of the box. Exclusive\n" },
		{ "ModuleRelativePath", "Public/VoxelIntBox.h" },
		{ "ToolTip", "Max of the box. Exclusive" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelIntBox, Max), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Min of the box. Inclusive\n" },
		{ "ModuleRelativePath", "Public/VoxelIntBox.h" },
		{ "ToolTip", "Min of the box. Inclusive" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelIntBox, Min), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelIntBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Min,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelIntBox_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelIntBox",
		sizeof(FVoxelIntBox),
		alignof(FVoxelIntBox),
		Z_Construct_UScriptStruct_FVoxelIntBox_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBox_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelIntBox_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBox_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelIntBox_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelIntBox"), sizeof(FVoxelIntBox), Get_Z_Construct_UScriptStruct_FVoxelIntBox_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelIntBox_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelIntBox_Hash() { return 3613578633U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
