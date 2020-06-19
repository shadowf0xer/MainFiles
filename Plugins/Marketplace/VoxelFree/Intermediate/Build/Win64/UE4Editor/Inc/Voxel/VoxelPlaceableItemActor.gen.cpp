// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelPlaceableItems/VoxelPlaceableItemActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelPlaceableItemActor() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_AVoxelPlaceableItemActor_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelPlaceableItemActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
// End Cross Module References
	void AVoxelPlaceableItemActor::StaticRegisterNativesAVoxelPlaceableItemActor()
	{
	}
	UClass* Z_Construct_UClass_AVoxelPlaceableItemActor_NoRegister()
	{
		return AVoxelPlaceableItemActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelPlaceableItemActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyImportIntoPreviewWorld_MetaData[];
#endif
		static void NewProp_bOnlyImportIntoPreviewWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyImportIntoPreviewWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Tick Replication Input Actor Rendering HOLD LOD Cooking Collision" },
		{ "IncludePath", "VoxelPlaceableItems/VoxelPlaceableItemActor.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_bOnlyImportIntoPreviewWorld_MetaData[] = {
		{ "Category", "Placeable Item Actor Settings" },
		{ "Comment", "// If true, will only affect PreviewWorld. If false, will affect all the voxel worlds spawned into the scene\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemActor.h" },
		{ "ToolTip", "If true, will only affect PreviewWorld. If false, will affect all the voxel worlds spawned into the scene" },
	};
#endif
	void Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_bOnlyImportIntoPreviewWorld_SetBit(void* Obj)
	{
		((AVoxelPlaceableItemActor*)Obj)->bOnlyImportIntoPreviewWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_bOnlyImportIntoPreviewWorld = { "bOnlyImportIntoPreviewWorld", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelPlaceableItemActor), &Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_bOnlyImportIntoPreviewWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_bOnlyImportIntoPreviewWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_bOnlyImportIntoPreviewWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_PreviewWorld_MetaData[] = {
		{ "Category", "Placeable Item Actor Settings" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_PreviewWorld = { "PreviewWorld", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelPlaceableItemActor, PreviewWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_PreviewWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_PreviewWorld_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_bOnlyImportIntoPreviewWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_PreviewWorld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelPlaceableItemActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::ClassParams = {
		&AVoxelPlaceableItemActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelPlaceableItemActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelPlaceableItemActor, 819093939);
	template<> VOXEL_API UClass* StaticClass<AVoxelPlaceableItemActor>()
	{
		return AVoxelPlaceableItemActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelPlaceableItemActor(Z_Construct_UClass_AVoxelPlaceableItemActor, &AVoxelPlaceableItemActor::StaticClass, TEXT("/Script/Voxel"), TEXT("AVoxelPlaceableItemActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelPlaceableItemActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
