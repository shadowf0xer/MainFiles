// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelMultiplayer/VoxelMultiplayerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMultiplayerInterface() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMultiplayerInterface_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMultiplayerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelMultiplayerInterface::StaticRegisterNativesUVoxelMultiplayerInterface()
	{
	}
	UClass* Z_Construct_UClass_UVoxelMultiplayerInterface_NoRegister()
	{
		return UVoxelMultiplayerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMultiplayerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelMultiplayer/VoxelMultiplayerInterface.h" },
		{ "ModuleRelativePath", "Public/VoxelMultiplayer/VoxelMultiplayerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMultiplayerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::ClassParams = {
		&UVoxelMultiplayerInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMultiplayerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelMultiplayerInterface, 1143571829);
	template<> VOXEL_API UClass* StaticClass<UVoxelMultiplayerInterface>()
	{
		return UVoxelMultiplayerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelMultiplayerInterface(Z_Construct_UClass_UVoxelMultiplayerInterface, &UVoxelMultiplayerInterface::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelMultiplayerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMultiplayerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
