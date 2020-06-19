// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelHelpers/Public/MaterialExpressionPack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPack() {}
// Cross Module References
	VOXELHELPERS_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialPackInput();
	UPackage* Z_Construct_UPackage__Script_VoxelHelpers();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	VOXELHELPERS_API UClass* Z_Construct_UClass_UMaterialExpressionPack_NoRegister();
	VOXELHELPERS_API UClass* Z_Construct_UClass_UMaterialExpressionPack();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	VOXELHELPERS_API UClass* Z_Construct_UClass_UMaterialExpressionUnpack_NoRegister();
	VOXELHELPERS_API UClass* Z_Construct_UClass_UMaterialExpressionUnpack();
// End Cross Module References
class UScriptStruct* FMaterialPackInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXELHELPERS_API uint32 Get_Z_Construct_UScriptStruct_FMaterialPackInput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialPackInput, Z_Construct_UPackage__Script_VoxelHelpers(), TEXT("MaterialPackInput"), sizeof(FMaterialPackInput), Get_Z_Construct_UScriptStruct_FMaterialPackInput_Hash());
	}
	return Singleton;
}
template<> VOXELHELPERS_API UScriptStruct* StaticStruct<FMaterialPackInput>()
{
	return FMaterialPackInput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialPackInput(FMaterialPackInput::StaticStruct, TEXT("/Script/VoxelHelpers"), TEXT("MaterialPackInput"), false, nullptr, nullptr);
static struct FScriptStruct_VoxelHelpers_StaticRegisterNativesFMaterialPackInput
{
	FScriptStruct_VoxelHelpers_StaticRegisterNativesFMaterialPackInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialPackInput")),new UScriptStruct::TCppStructOps<FMaterialPackInput>);
	}
} ScriptStruct_VoxelHelpers_StaticRegisterNativesFMaterialPackInput;
	struct Z_Construct_UScriptStruct_FMaterialPackInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialPackInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialPackInput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_Input_MetaData[] = {
		{ "Comment", "// Assign a default value to bypass copy paste bug when items are equal to default\n" },
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
		{ "ToolTip", "Assign a default value to bypass copy paste bug when items are equal to default" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialPackInput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_InputName_MetaData[] = {
		{ "Category", "PackInput" },
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialPackInput, InputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_InputName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialPackInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_InputName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialPackInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelHelpers,
		nullptr,
		&NewStructOps,
		"MaterialPackInput",
		sizeof(FMaterialPackInput),
		alignof(FMaterialPackInput),
		Z_Construct_UScriptStruct_FMaterialPackInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialPackInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialPackInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialPackInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialPackInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialPackInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelHelpers();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialPackInput"), sizeof(FMaterialPackInput), Get_Z_Construct_UScriptStruct_FMaterialPackInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialPackInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialPackInput_Hash() { return 139744897U; }
	void UMaterialExpressionPack::StaticRegisterNativesUMaterialExpressionPack()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionPack_NoRegister()
	{
		return UMaterialExpressionPack::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelHelpers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPack_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialExpressionPack.h" },
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPack_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "MaterialExpressionPack" },
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionPack_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionPack, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPack_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPack_Statics::NewProp_Inputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPack_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialPackInput, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPack_Statics::NewProp_Inputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPack_Statics::NewProp_Inputs_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPack_Statics::ClassParams = {
		&UMaterialExpressionPack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionPack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPack_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionPack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionPack, 503909086);
	template<> VOXELHELPERS_API UClass* StaticClass<UMaterialExpressionPack>()
	{
		return UMaterialExpressionPack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionPack(Z_Construct_UClass_UMaterialExpressionPack, &UMaterialExpressionPack::StaticClass, TEXT("/Script/VoxelHelpers"), TEXT("UMaterialExpressionPack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPack);
	void UMaterialExpressionUnpack::StaticRegisterNativesUMaterialExpressionUnpack()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionUnpack_NoRegister()
	{
		return UMaterialExpressionUnpack::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionUnpack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRefresh_MetaData[];
#endif
		static void NewProp_bRefresh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRefresh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionUnpack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelHelpers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionUnpack_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialExpressionPack.h" },
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_bRefresh_MetaData[] = {
		{ "Category", "MaterialExpressionUnpack" },
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_bRefresh_SetBit(void* Obj)
	{
		((UMaterialExpressionUnpack*)Obj)->bRefresh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_bRefresh = { "bRefresh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMaterialExpressionUnpack), &Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_bRefresh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_bRefresh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_bRefresh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionUnpack, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionUnpack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_bRefresh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_Input,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionUnpack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionUnpack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionUnpack_Statics::ClassParams = {
		&UMaterialExpressionUnpack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionUnpack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUnpack_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionUnpack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUnpack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionUnpack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionUnpack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionUnpack, 3774955844);
	template<> VOXELHELPERS_API UClass* StaticClass<UMaterialExpressionUnpack>()
	{
		return UMaterialExpressionUnpack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionUnpack(Z_Construct_UClass_UMaterialExpressionUnpack, &UMaterialExpressionUnpack::StaticClass, TEXT("/Script/VoxelHelpers"), TEXT("UMaterialExpressionUnpack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionUnpack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
