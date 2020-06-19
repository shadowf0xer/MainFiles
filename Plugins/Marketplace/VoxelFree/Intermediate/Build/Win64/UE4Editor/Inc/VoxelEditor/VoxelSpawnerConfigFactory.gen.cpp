// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/Factories/VoxelSpawnerConfigFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSpawnerConfigFactory() {}
// Cross Module References
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelSpawnerConfigFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelSpawnerConfigFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
// End Cross Module References
	void UVoxelSpawnerConfigFactory::StaticRegisterNativesUVoxelSpawnerConfigFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelSpawnerConfigFactory_NoRegister()
	{
		return UVoxelSpawnerConfigFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSpawnerConfigFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSpawnerConfigFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawnerConfigFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelSpawnerConfigFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelSpawnerConfigFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSpawnerConfigFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSpawnerConfigFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSpawnerConfigFactory_Statics::ClassParams = {
		&UVoxelSpawnerConfigFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawnerConfigFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerConfigFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSpawnerConfigFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelSpawnerConfigFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelSpawnerConfigFactory, 3149376332);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelSpawnerConfigFactory>()
	{
		return UVoxelSpawnerConfigFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelSpawnerConfigFactory(Z_Construct_UClass_UVoxelSpawnerConfigFactory, &UVoxelSpawnerConfigFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelSpawnerConfigFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSpawnerConfigFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
