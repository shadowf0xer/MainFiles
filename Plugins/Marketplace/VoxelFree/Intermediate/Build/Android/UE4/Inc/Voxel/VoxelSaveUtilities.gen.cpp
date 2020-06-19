// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelData/VoxelSaveUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSaveUtilities() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSaveUtilities_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSaveUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelCompressedWorldSave();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelSaveUtilities::execDecompressVoxelSave)
	{
		P_GET_STRUCT_REF(FVoxelCompressedWorldSave,Z_Param_Out_CompressedSave);
		P_GET_STRUCT_REF(FVoxelUncompressedWorldSave,Z_Param_Out_OutUncompressedSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelSaveUtilities::DecompressVoxelSave(Z_Param_Out_CompressedSave,Z_Param_Out_OutUncompressedSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSaveUtilities::execCompressVoxelSave)
	{
		P_GET_STRUCT_REF(FVoxelUncompressedWorldSave,Z_Param_Out_UncompressedSave);
		P_GET_STRUCT_REF(FVoxelCompressedWorldSave,Z_Param_Out_OutCompressedSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSaveUtilities::CompressVoxelSave(Z_Param_Out_UncompressedSave,Z_Param_Out_OutCompressedSave);
		P_NATIVE_END;
	}
	void UVoxelSaveUtilities::StaticRegisterNativesUVoxelSaveUtilities()
	{
		UClass* Class = UVoxelSaveUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompressVoxelSave", &UVoxelSaveUtilities::execCompressVoxelSave },
			{ "DecompressVoxelSave", &UVoxelSaveUtilities::execDecompressVoxelSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics
	{
		struct VoxelSaveUtilities_eventCompressVoxelSave_Parms
		{
			FVoxelUncompressedWorldSave UncompressedSave;
			FVoxelCompressedWorldSave OutCompressedSave;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutCompressedSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncompressedSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UncompressedSave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::NewProp_OutCompressedSave = { "OutCompressedSave", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSaveUtilities_eventCompressVoxelSave_Parms, OutCompressedSave), Z_Construct_UScriptStruct_FVoxelCompressedWorldSave, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::NewProp_UncompressedSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::NewProp_UncompressedSave = { "UncompressedSave", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSaveUtilities_eventCompressVoxelSave_Parms, UncompressedSave), Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::NewProp_UncompressedSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::NewProp_UncompressedSave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::NewProp_OutCompressedSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::NewProp_UncompressedSave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data|Save" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSaveUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSaveUtilities, nullptr, "CompressVoxelSave", nullptr, nullptr, sizeof(VoxelSaveUtilities_eventCompressVoxelSave_Parms), Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics
	{
		struct VoxelSaveUtilities_eventDecompressVoxelSave_Parms
		{
			FVoxelCompressedWorldSave CompressedSave;
			FVoxelUncompressedWorldSave OutUncompressedSave;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutUncompressedSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressedSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompressedSave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelSaveUtilities_eventDecompressVoxelSave_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSaveUtilities_eventDecompressVoxelSave_Parms), &Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_OutUncompressedSave = { "OutUncompressedSave", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSaveUtilities_eventDecompressVoxelSave_Parms, OutUncompressedSave), Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_CompressedSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_CompressedSave = { "CompressedSave", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSaveUtilities_eventDecompressVoxelSave_Parms, CompressedSave), Z_Construct_UScriptStruct_FVoxelCompressedWorldSave, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_CompressedSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_CompressedSave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_OutUncompressedSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_CompressedSave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data|Save" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSaveUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSaveUtilities, nullptr, "DecompressVoxelSave", nullptr, nullptr, sizeof(VoxelSaveUtilities_eventDecompressVoxelSave_Parms), Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelSaveUtilities_NoRegister()
	{
		return UVoxelSaveUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSaveUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSaveUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelSaveUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave, "CompressVoxelSave" }, // 1953995463
		{ &Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave, "DecompressVoxelSave" }, // 1343883137
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSaveUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelData/VoxelSaveUtilities.h" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSaveUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSaveUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSaveUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSaveUtilities_Statics::ClassParams = {
		&UVoxelSaveUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSaveUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSaveUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSaveUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelSaveUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelSaveUtilities, 2373205970);
	template<> VOXEL_API UClass* StaticClass<UVoxelSaveUtilities>()
	{
		return UVoxelSaveUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelSaveUtilities(Z_Construct_UClass_UVoxelSaveUtilities, &UVoxelSaveUtilities::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelSaveUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSaveUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
