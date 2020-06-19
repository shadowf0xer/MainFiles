// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditorDefault/Public/ActorFactoryVoxelWorld.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryVoxelWorld() {}
// Cross Module References
	VOXELEDITORDEFAULT_API UClass* Z_Construct_UClass_UActorFactoryVoxelWorld_NoRegister();
	VOXELEDITORDEFAULT_API UClass* Z_Construct_UClass_UActorFactoryVoxelWorld();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_VoxelEditorDefault();
// End Cross Module References
	void UActorFactoryVoxelWorld::StaticRegisterNativesUActorFactoryVoxelWorld()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryVoxelWorld_NoRegister()
	{
		return UActorFactoryVoxelWorld::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryVoxelWorld_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditorDefault,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactoryVoxelWorld.h" },
		{ "ModuleRelativePath", "Public/ActorFactoryVoxelWorld.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryVoxelWorld>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::ClassParams = {
		&UActorFactoryVoxelWorld::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryVoxelWorld()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryVoxelWorld, 1099741489);
	template<> VOXELEDITORDEFAULT_API UClass* StaticClass<UActorFactoryVoxelWorld>()
	{
		return UActorFactoryVoxelWorld::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryVoxelWorld(Z_Construct_UClass_UActorFactoryVoxelWorld, &UActorFactoryVoxelWorld::StaticClass, TEXT("/Script/VoxelEditorDefault"), TEXT("UActorFactoryVoxelWorld"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryVoxelWorld);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
