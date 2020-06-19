// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelGraphGeneratorHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraphGeneratorHelpers() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableWorldGenerator();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVoxelGraphGeneratorHelper::StaticRegisterNativesUVoxelGraphGeneratorHelper()
	{
	}
	UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper_NoRegister()
	{
		return UVoxelGraphGeneratorHelper::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRangeAnalysis_MetaData[];
#endif
		static void NewProp_bEnableRangeAnalysis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRangeAnalysis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelTransformableWorldGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphGeneratorHelpers.h" },
		{ "ModuleRelativePath", "Public/VoxelGraphGeneratorHelpers.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::NewProp_bEnableRangeAnalysis_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "// Range analysis gives a pretty significant speed-up. You should not disable it\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphGeneratorHelpers.h" },
		{ "ToolTip", "Range analysis gives a pretty significant speed-up. You should not disable it" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::NewProp_bEnableRangeAnalysis_SetBit(void* Obj)
	{
		((UVoxelGraphGeneratorHelper*)Obj)->bEnableRangeAnalysis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::NewProp_bEnableRangeAnalysis = { "bEnableRangeAnalysis", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGeneratorHelper), &Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::NewProp_bEnableRangeAnalysis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::NewProp_bEnableRangeAnalysis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::NewProp_bEnableRangeAnalysis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::NewProp_bEnableRangeAnalysis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphGeneratorHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::ClassParams = {
		&UVoxelGraphGeneratorHelper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGraphGeneratorHelper, 3329152731);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphGeneratorHelper>()
	{
		return UVoxelGraphGeneratorHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGraphGeneratorHelper(Z_Construct_UClass_UVoxelGraphGeneratorHelper, &UVoxelGraphGeneratorHelper::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelGraphGeneratorHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphGeneratorHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
