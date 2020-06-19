// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditorDefault/Public/ActorFactoryVoxelMeshImporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryVoxelMeshImporter() {}
// Cross Module References
	VOXELEDITORDEFAULT_API UClass* Z_Construct_UClass_UActorFactoryVoxelMeshImporter_NoRegister();
	VOXELEDITORDEFAULT_API UClass* Z_Construct_UClass_UActorFactoryVoxelMeshImporter();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_VoxelEditorDefault();
// End Cross Module References
	void UActorFactoryVoxelMeshImporter::StaticRegisterNativesUActorFactoryVoxelMeshImporter()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryVoxelMeshImporter_NoRegister()
	{
		return UActorFactoryVoxelMeshImporter::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryVoxelMeshImporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryVoxelMeshImporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditorDefault,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryVoxelMeshImporter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactoryVoxelMeshImporter.h" },
		{ "ModuleRelativePath", "Public/ActorFactoryVoxelMeshImporter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryVoxelMeshImporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryVoxelMeshImporter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryVoxelMeshImporter_Statics::ClassParams = {
		&UActorFactoryVoxelMeshImporter::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001030ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryVoxelMeshImporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryVoxelMeshImporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryVoxelMeshImporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryVoxelMeshImporter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryVoxelMeshImporter, 1262242188);
	template<> VOXELEDITORDEFAULT_API UClass* StaticClass<UActorFactoryVoxelMeshImporter>()
	{
		return UActorFactoryVoxelMeshImporter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryVoxelMeshImporter(Z_Construct_UClass_UActorFactoryVoxelMeshImporter, &UActorFactoryVoxelMeshImporter::StaticClass, TEXT("/Script/VoxelEditorDefault"), TEXT("UActorFactoryVoxelMeshImporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryVoxelMeshImporter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
