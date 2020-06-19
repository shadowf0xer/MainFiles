// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VoxelExample_Cave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelExample_Cave() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Cave_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Cave();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVoxelExample_Cave::StaticRegisterNativesUVoxelExample_Cave()
	{
	}
	UClass* Z_Construct_UClass_UVoxelExample_Cave_NoRegister()
	{
		return UVoxelExample_Cave::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelExample_Cave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cave_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cave_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cave_Walls_Smoothness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cave_Walls_Smoothness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cave_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cave_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Global_Height_Noise_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Global_Height_Noise_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Global_Height_Noise_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Global_Height_Noise_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Global_Height_Merge_Smoothness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Global_Height_Merge_Smoothness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Global_Height_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Global_Height_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bottom_Top_Merge_Smoothness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bottom_Top_Merge_Smoothness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Top_Noise_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Top_Noise_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Top_Noise_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Top_Noise_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bottom_Noise_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bottom_Noise_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bottom_Noise_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bottom_Noise_Frequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelExample_Cave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_Cave.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Radius_MetaData[] = {
		{ "Category", "Cave Settings" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Radius = { "Cave_Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Cave_Radius), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Walls_Smoothness_MetaData[] = {
		{ "Category", "Cave Settings" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Walls_Smoothness = { "Cave_Walls_Smoothness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Cave_Walls_Smoothness), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Walls_Smoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Walls_Smoothness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Height_MetaData[] = {
		{ "Category", "Cave Settings" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Height = { "Cave_Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Cave_Height), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Scale_MetaData[] = {
		{ "Category", "Global Height" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Scale = { "Global_Height_Noise_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Global_Height_Noise_Scale), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Frequency_MetaData[] = {
		{ "Category", "Global Height" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Frequency = { "Global_Height_Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Global_Height_Noise_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Merge_Smoothness_MetaData[] = {
		{ "Category", "Global Height" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Merge_Smoothness = { "Global_Height_Merge_Smoothness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Global_Height_Merge_Smoothness), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Merge_Smoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Merge_Smoothness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Offset_MetaData[] = {
		{ "Category", "Global Height" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Offset = { "Global_Height_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Global_Height_Offset), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Top_Merge_Smoothness_MetaData[] = {
		{ "Category", "Bottom & Top Merge" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Top_Merge_Smoothness = { "Bottom_Top_Merge_Smoothness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Bottom_Top_Merge_Smoothness), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Top_Merge_Smoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Top_Merge_Smoothness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Scale_MetaData[] = {
		{ "Category", "Top Noise" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Scale = { "Top_Noise_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Top_Noise_Scale), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Frequency_MetaData[] = {
		{ "Category", "Top Noise" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Frequency = { "Top_Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Top_Noise_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Scale_MetaData[] = {
		{ "Category", "Bottom Noise" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Scale = { "Bottom_Noise_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Bottom_Noise_Scale), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Frequency_MetaData[] = {
		{ "Category", "Bottom Noise" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cave.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Frequency = { "Bottom_Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cave, Bottom_Noise_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Frequency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_Cave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Walls_Smoothness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Cave_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Noise_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Merge_Smoothness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Global_Height_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Top_Merge_Smoothness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Top_Noise_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cave_Statics::NewProp_Bottom_Noise_Frequency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelExample_Cave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_Cave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_Cave_Statics::ClassParams = {
		&UVoxelExample_Cave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelExample_Cave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelExample_Cave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelExample_Cave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelExample_Cave, 2479876873);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelExample_Cave>()
	{
		return UVoxelExample_Cave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelExample_Cave(Z_Construct_UClass_UVoxelExample_Cave, &UVoxelExample_Cave::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelExample_Cave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_Cave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
