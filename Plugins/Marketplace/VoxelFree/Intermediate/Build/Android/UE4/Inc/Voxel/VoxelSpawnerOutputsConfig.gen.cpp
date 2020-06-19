// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSpawners/VoxelSpawnerOutputsConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSpawnerOutputsConfig() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerOutputsConfig_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerOutputsConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelSpawnerOutputsConfig::StaticRegisterNativesUVoxelSpawnerOutputsConfig()
	{
	}
	UClass* Z_Construct_UClass_UVoxelSpawnerOutputsConfig_NoRegister()
	{
		return UVoxelSpawnerOutputsConfig::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelSpawnerOutputsConfig.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerOutputsConfig.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSpawnerOutputsConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::ClassParams = {
		&UVoxelSpawnerOutputsConfig::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSpawnerOutputsConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelSpawnerOutputsConfig, 3472142023);
	template<> VOXEL_API UClass* StaticClass<UVoxelSpawnerOutputsConfig>()
	{
		return UVoxelSpawnerOutputsConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelSpawnerOutputsConfig(Z_Construct_UClass_UVoxelSpawnerOutputsConfig, &UVoxelSpawnerOutputsConfig::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelSpawnerOutputsConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSpawnerOutputsConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
