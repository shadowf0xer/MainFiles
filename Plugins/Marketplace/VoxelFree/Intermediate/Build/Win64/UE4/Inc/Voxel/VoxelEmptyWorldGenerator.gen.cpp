// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelWorldGenerators/VoxelEmptyWorldGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelEmptyWorldGenerator() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelEmptyWorldGenerator_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelEmptyWorldGenerator();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableWorldGenerator();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelEmptyWorldGenerator::StaticRegisterNativesUVoxelEmptyWorldGenerator()
	{
	}
	UClass* Z_Construct_UClass_UVoxelEmptyWorldGenerator_NoRegister()
	{
		return UVoxelEmptyWorldGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelEmptyWorldGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelEmptyWorldGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelTransformableWorldGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelEmptyWorldGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Empty world, can be used to remove\n */" },
		{ "IncludePath", "VoxelWorldGenerators/VoxelEmptyWorldGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelWorldGenerators/VoxelEmptyWorldGenerator.h" },
		{ "ToolTip", "Empty world, can be used to remove" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelEmptyWorldGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelEmptyWorldGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelEmptyWorldGenerator_Statics::ClassParams = {
		&UVoxelEmptyWorldGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelEmptyWorldGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelEmptyWorldGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelEmptyWorldGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelEmptyWorldGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelEmptyWorldGenerator, 3518944112);
	template<> VOXEL_API UClass* StaticClass<UVoxelEmptyWorldGenerator>()
	{
		return UVoxelEmptyWorldGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelEmptyWorldGenerator(Z_Construct_UClass_UVoxelEmptyWorldGenerator, &UVoxelEmptyWorldGenerator::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelEmptyWorldGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelEmptyWorldGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
