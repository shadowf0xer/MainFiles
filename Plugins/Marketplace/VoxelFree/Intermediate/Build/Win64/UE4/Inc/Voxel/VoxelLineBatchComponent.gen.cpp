// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelDebug/VoxelLineBatchComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelLineBatchComponent() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelLineBatchComponent_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelLineBatchComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelLineBatchComponent::StaticRegisterNativesUVoxelLineBatchComponent()
	{
	}
	UClass* Z_Construct_UClass_UVoxelLineBatchComponent_NoRegister()
	{
		return UVoxelLineBatchComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelLineBatchComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCalculateAccurateBounds_MetaData[];
#endif
		static void NewProp_bCalculateAccurateBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCalculateAccurateBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultLifeTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelLineBatchComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLineBatchComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "VoxelDebug/VoxelLineBatchComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelDebug/VoxelLineBatchComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLineBatchComponent_Statics::NewProp_bCalculateAccurateBounds_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Whether to calculate a tight accurate bounds (encompassing all points), or use a giant bounds that is fast to compute\n" },
		{ "ModuleRelativePath", "Public/VoxelDebug/VoxelLineBatchComponent.h" },
		{ "ToolTip", "Whether to calculate a tight accurate bounds (encompassing all points), or use a giant bounds that is fast to compute" },
	};
#endif
	void Z_Construct_UClass_UVoxelLineBatchComponent_Statics::NewProp_bCalculateAccurateBounds_SetBit(void* Obj)
	{
		((UVoxelLineBatchComponent*)Obj)->bCalculateAccurateBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelLineBatchComponent_Statics::NewProp_bCalculateAccurateBounds = { "bCalculateAccurateBounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelLineBatchComponent), &Z_Construct_UClass_UVoxelLineBatchComponent_Statics::NewProp_bCalculateAccurateBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelLineBatchComponent_Statics::NewProp_bCalculateAccurateBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLineBatchComponent_Statics::NewProp_bCalculateAccurateBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLineBatchComponent_Statics::NewProp_DefaultLifeTime_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Default time that lines/points will draw for\n" },
		{ "ModuleRelativePath", "Public/VoxelDebug/VoxelLineBatchComponent.h" },
		{ "ToolTip", "Default time that lines/points will draw for" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelLineBatchComponent_Statics::NewProp_DefaultLifeTime = { "DefaultLifeTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLineBatchComponent, DefaultLifeTime), METADATA_PARAMS(Z_Construct_UClass_UVoxelLineBatchComponent_Statics::NewProp_DefaultLifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLineBatchComponent_Statics::NewProp_DefaultLifeTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelLineBatchComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLineBatchComponent_Statics::NewProp_bCalculateAccurateBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLineBatchComponent_Statics::NewProp_DefaultLifeTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelLineBatchComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLineBatchComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLineBatchComponent_Statics::ClassParams = {
		&UVoxelLineBatchComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelLineBatchComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLineBatchComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelLineBatchComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLineBatchComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelLineBatchComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelLineBatchComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelLineBatchComponent, 3660555450);
	template<> VOXEL_API UClass* StaticClass<UVoxelLineBatchComponent>()
	{
		return UVoxelLineBatchComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelLineBatchComponent(Z_Construct_UClass_UVoxelLineBatchComponent, &UVoxelLineBatchComponent::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelLineBatchComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLineBatchComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
