// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Private/Examples/VoxelExample_HollowPlanet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelExample_HollowPlanet() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_HollowPlanet_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_HollowPlanet();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	void UVoxelExample_HollowPlanet::StaticRegisterNativesUVoxelExample_HollowPlanet()
	{
	}
	UClass* Z_Construct_UClass_UVoxelExample_HollowPlanet_NoRegister()
	{
		return UVoxelExample_HollowPlanet::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Noise_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Noise_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Noise_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Noise_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intersection_Smoothness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intersection_Smoothness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Noise_Bias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Noise_Bias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Use_IQ_Noise_MetaData[];
#endif
		static void NewProp_Use_IQ_Noise_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Use_IQ_Noise;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_HollowPlanet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "No Category" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_HollowPlanet, Radius), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Scale_MetaData[] = {
		{ "Category", "No Category" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Scale = { "Noise_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_HollowPlanet, Noise_Scale), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Frequency_MetaData[] = {
		{ "Category", "No Category" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Frequency = { "Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_HollowPlanet, Noise_Frequency), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Intersection_Smoothness_MetaData[] = {
		{ "Category", "No Category" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Intersection_Smoothness = { "Intersection_Smoothness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_HollowPlanet, Intersection_Smoothness), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Intersection_Smoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Intersection_Smoothness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Bias_MetaData[] = {
		{ "Category", "No Category" },
		{ "Comment", "// Above 0: More ground. Below zero: less ground\n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
		{ "ToolTip", "Above 0: More ground. Below zero: less ground" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Bias = { "Noise_Bias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelExample_HollowPlanet, Noise_Bias), METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Bias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Bias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Use_IQ_Noise_MetaData[] = {
		{ "Category", "No Category" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Use_IQ_Noise_SetBit(void* Obj)
	{
		((UVoxelExample_HollowPlanet*)Obj)->Use_IQ_Noise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Use_IQ_Noise = { "Use_IQ_Noise", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelExample_HollowPlanet), &Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Use_IQ_Noise_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Use_IQ_Noise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Use_IQ_Noise_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Intersection_Smoothness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Bias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Use_IQ_Noise,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_HollowPlanet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::ClassParams = {
		&UVoxelExample_HollowPlanet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelExample_HollowPlanet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelExample_HollowPlanet, 4021429289);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelExample_HollowPlanet>()
	{
		return UVoxelExample_HollowPlanet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelExample_HollowPlanet(Z_Construct_UClass_UVoxelExample_HollowPlanet, &UVoxelExample_HollowPlanet::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelExample_HollowPlanet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_HollowPlanet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
