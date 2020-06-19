// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSpawners/VoxelAssetSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelAssetSpawner() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelAssetSpawner_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelAssetSpawner();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelBasicSpawner();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker();
// End Cross Module References
	void UVoxelAssetSpawner::StaticRegisterNativesUVoxelAssetSpawner()
	{
	}
	UClass* Z_Construct_UClass_UVoxelAssetSpawner_NoRegister()
	{
		return UVoxelAssetSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelAssetSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRoundAssetPosition_MetaData[];
#endif
		static void NewProp_bRoundAssetPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRoundAssetPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfDifferentSeedsToUse_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfDifferentSeedsToUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Seeds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Seeds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratorLocalBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneratorLocalBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelAssetSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelBasicSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelAssetSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelAssetSpawner.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_bRoundAssetPosition_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_bRoundAssetPosition_SetBit(void* Obj)
	{
		((UVoxelAssetSpawner*)Obj)->bRoundAssetPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_bRoundAssetPosition = { "bRoundAssetPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelAssetSpawner), &Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_bRoundAssetPosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_bRoundAssetPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_bRoundAssetPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "// Priority of the spawned assets\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
		{ "ToolTip", "Priority of the spawned assets" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelAssetSpawner, Priority), METADATA_PARAMS(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_NumberOfDifferentSeedsToUse_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "// All generators are created at begin play\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
		{ "ToolTip", "All generators are created at begin play" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_NumberOfDifferentSeedsToUse = { "NumberOfDifferentSeedsToUse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelAssetSpawner, NumberOfDifferentSeedsToUse), METADATA_PARAMS(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_NumberOfDifferentSeedsToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_NumberOfDifferentSeedsToUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Seeds_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "// The voxel world seeds will be sent to the generator.\n// Add the names of the seeds you want to be randomized here\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
		{ "ToolTip", "The voxel world seeds will be sent to the generator.\nAdd the names of the seeds you want to be randomized here" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelAssetSpawner, Seeds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Seeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Seeds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Seeds_Inner = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_GeneratorLocalBounds_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_GeneratorLocalBounds = { "GeneratorLocalBounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelAssetSpawner, GeneratorLocalBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_GeneratorLocalBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_GeneratorLocalBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelAssetSpawner, Generator), Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker, METADATA_PARAMS(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Generator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelAssetSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_bRoundAssetPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_NumberOfDifferentSeedsToUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Seeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Seeds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_GeneratorLocalBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Generator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelAssetSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelAssetSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::ClassParams = {
		&UVoxelAssetSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelAssetSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelAssetSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelAssetSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelAssetSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelAssetSpawner, 2747054874);
	template<> VOXEL_API UClass* StaticClass<UVoxelAssetSpawner>()
	{
		return UVoxelAssetSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelAssetSpawner(Z_Construct_UClass_UVoxelAssetSpawner, &UVoxelAssetSpawner::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelAssetSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelAssetSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
