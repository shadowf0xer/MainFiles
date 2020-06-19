// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelWorldGenerators/VoxelWorldGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelWorldGenerator() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldGenerator_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldGenerator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableWorldGenerator_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableWorldGenerator();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds();
// End Cross Module References
	void UVoxelWorldGenerator::StaticRegisterNativesUVoxelWorldGenerator()
	{
	}
	UClass* Z_Construct_UClass_UVoxelWorldGenerator_NoRegister()
	{
		return UVoxelWorldGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelWorldGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelWorldGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelWorldGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A UVoxelWorldGenerator is used to create a FVoxelWorldGeneratorInstance\n */" },
		{ "IncludePath", "VoxelWorldGenerators/VoxelWorldGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelWorldGenerators/VoxelWorldGenerator.h" },
		{ "ToolTip", "A UVoxelWorldGenerator is used to create a FVoxelWorldGeneratorInstance" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelWorldGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelWorldGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelWorldGenerator_Statics::ClassParams = {
		&UVoxelWorldGenerator::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelWorldGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelWorldGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelWorldGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelWorldGenerator, 946434986);
	template<> VOXEL_API UClass* StaticClass<UVoxelWorldGenerator>()
	{
		return UVoxelWorldGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelWorldGenerator(Z_Construct_UClass_UVoxelWorldGenerator, &UVoxelWorldGenerator::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelWorldGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelWorldGenerator);
	void UVoxelTransformableWorldGenerator::StaticRegisterNativesUVoxelTransformableWorldGenerator()
	{
	}
	UClass* Z_Construct_UClass_UVoxelTransformableWorldGenerator_NoRegister()
	{
		return UVoxelTransformableWorldGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelTransformableWorldGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelTransformableWorldGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelWorldGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTransformableWorldGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// World generator that can be moved around\n" },
		{ "IncludePath", "VoxelWorldGenerators/VoxelWorldGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelWorldGenerators/VoxelWorldGenerator.h" },
		{ "ToolTip", "World generator that can be moved around" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelTransformableWorldGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTransformableWorldGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTransformableWorldGenerator_Statics::ClassParams = {
		&UVoxelTransformableWorldGenerator::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelTransformableWorldGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTransformableWorldGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelTransformableWorldGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelTransformableWorldGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelTransformableWorldGenerator, 1767843436);
	template<> VOXEL_API UClass* StaticClass<UVoxelTransformableWorldGenerator>()
	{
		return UVoxelTransformableWorldGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelTransformableWorldGenerator(Z_Construct_UClass_UVoxelTransformableWorldGenerator, &UVoxelTransformableWorldGenerator::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelTransformableWorldGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTransformableWorldGenerator);
	void UVoxelTransformableWorldGeneratorWithBounds::StaticRegisterNativesUVoxelTransformableWorldGeneratorWithBounds()
	{
	}
	UClass* Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds_NoRegister()
	{
		return UVoxelTransformableWorldGeneratorWithBounds::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelTransformableWorldGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelWorldGenerators/VoxelWorldGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelWorldGenerators/VoxelWorldGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTransformableWorldGeneratorWithBounds>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds_Statics::ClassParams = {
		&UVoxelTransformableWorldGeneratorWithBounds::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelTransformableWorldGeneratorWithBounds, 2339088552);
	template<> VOXEL_API UClass* StaticClass<UVoxelTransformableWorldGeneratorWithBounds>()
	{
		return UVoxelTransformableWorldGeneratorWithBounds::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelTransformableWorldGeneratorWithBounds(Z_Construct_UClass_UVoxelTransformableWorldGeneratorWithBounds, &UVoxelTransformableWorldGeneratorWithBounds::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelTransformableWorldGeneratorWithBounds"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTransformableWorldGeneratorWithBounds);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
