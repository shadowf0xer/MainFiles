// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelPlaceableItems/VoxelDisableEditsBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDisableEditsBox() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_AVoxelDisableEditsBox_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelDisableEditsBox();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelPlaceableItemActor();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AVoxelDisableEditsBox::StaticRegisterNativesAVoxelDisableEditsBox()
	{
	}
	UClass* Z_Construct_UClass_AVoxelDisableEditsBox_NoRegister()
	{
		return AVoxelDisableEditsBox::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelDisableEditsBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Box;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelDisableEditsBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVoxelPlaceableItemActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelDisableEditsBox_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Tick Replication Input Actor Rendering HOLD LOD Cooking Collision" },
		{ "IncludePath", "VoxelPlaceableItems/VoxelDisableEditsBox.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelDisableEditsBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelDisableEditsBox_Statics::NewProp_Box_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelDisableEditsBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelDisableEditsBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelDisableEditsBox, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelDisableEditsBox_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelDisableEditsBox_Statics::NewProp_Box_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelDisableEditsBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelDisableEditsBox_Statics::NewProp_Box,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelDisableEditsBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelDisableEditsBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoxelDisableEditsBox_Statics::ClassParams = {
		&AVoxelDisableEditsBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxelDisableEditsBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelDisableEditsBox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelDisableEditsBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelDisableEditsBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelDisableEditsBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoxelDisableEditsBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelDisableEditsBox, 3214005219);
	template<> VOXEL_API UClass* StaticClass<AVoxelDisableEditsBox>()
	{
		return AVoxelDisableEditsBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelDisableEditsBox(Z_Construct_UClass_AVoxelDisableEditsBox, &AVoxelDisableEditsBox::StaticClass, TEXT("/Script/Voxel"), TEXT("AVoxelDisableEditsBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelDisableEditsBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
