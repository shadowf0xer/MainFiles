// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelCharacter() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_AVoxelCharacter_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void AVoxelCharacter::StaticRegisterNativesAVoxelCharacter()
	{
	}
	UClass* Z_Construct_UClass_AVoxelCharacter_NoRegister()
	{
		return AVoxelCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VoxelCharacter.h" },
		{ "ModuleRelativePath", "Public/VoxelCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoxelCharacter_Statics::ClassParams = {
		&AVoxelCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoxelCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelCharacter, 61490747);
	template<> VOXEL_API UClass* StaticClass<AVoxelCharacter>()
	{
		return AVoxelCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelCharacter(Z_Construct_UClass_AVoxelCharacter, &AVoxelCharacter::StaticClass, TEXT("/Script/Voxel"), TEXT("AVoxelCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
