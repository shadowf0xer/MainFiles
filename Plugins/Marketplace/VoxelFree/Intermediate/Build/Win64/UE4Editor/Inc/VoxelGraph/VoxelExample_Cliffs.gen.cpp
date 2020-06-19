// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VoxelExample_Cliffs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelExample_Cliffs() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Cliffs_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Cliffs();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVoxelExample_Cliffs::StaticRegisterNativesUVoxelExample_Cliffs()
	{
	}
	UClass* Z_Construct_UClass_UVoxelExample_Cliffs_NoRegister()
	{
		return UVoxelExample_Cliffs::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelExample_Cliffs_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Top_Noise_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Top_Noise_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Top_Noise_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Top_Noise_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sides_Noise_Amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sides_Noise_Amplitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sides_Noise_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sides_Noise_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_Shape_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Base_Shape_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_Shape_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Base_Shape_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Overhangs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Overhangs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cliffs_Slope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cliffs_Slope;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelExample_Cliffs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_Cliffs.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Frequency_MetaData[] = {
		{ "Category", "Top Noise" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Frequency = { "Top_Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Top_Noise_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Scale_MetaData[] = {
		{ "Category", "Top Noise" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Scale = { "Top_Noise_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Top_Noise_Scale), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Amplitude_MetaData[] = {
		{ "Category", "Side Noise" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Amplitude = { "Sides_Noise_Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Sides_Noise_Amplitude), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Amplitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Frequency_MetaData[] = {
		{ "Category", "Side Noise" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Frequency = { "Sides_Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Sides_Noise_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Offset_MetaData[] = {
		{ "Category", "Base Shape" },
		{ "Comment", "// < 0 : more holes; > 0: less holes\n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
		{ "ToolTip", "< 0 : more holes; > 0: less holes" },
		{ "UIMax", "10" },
		{ "UIMin", "-10" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Offset = { "Base_Shape_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Base_Shape_Offset), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Frequency_MetaData[] = {
		{ "Category", "Base Shape" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Frequency = { "Base_Shape_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Base_Shape_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Overhangs_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Overhangs = { "Overhangs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Overhangs), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Overhangs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Overhangs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Height), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Cliffs_Slope_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Cliffs_Slope = { "Cliffs_Slope", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Cliffs_Slope), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Cliffs_Slope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Cliffs_Slope_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_Cliffs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Overhangs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Cliffs_Slope,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelExample_Cliffs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_Cliffs>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::ClassParams = {
		&UVoxelExample_Cliffs::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelExample_Cliffs_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelExample_Cliffs()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelExample_Cliffs_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelExample_Cliffs, 3405924324);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelExample_Cliffs>()
	{
		return UVoxelExample_Cliffs::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelExample_Cliffs(Z_Construct_UClass_UVoxelExample_Cliffs, &UVoxelExample_Cliffs::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelExample_Cliffs"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_Cliffs);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
