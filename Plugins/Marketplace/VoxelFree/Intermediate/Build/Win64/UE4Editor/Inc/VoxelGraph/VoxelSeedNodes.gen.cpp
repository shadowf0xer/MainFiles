// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelSeedNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSeedNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelSeedNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelSeedNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_Seed_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_Seed();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_AddSeeds_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_AddSeeds();
// End Cross Module References
	void UVoxelSeedNode::StaticRegisterNativesUVoxelSeedNode()
	{
	}
	UClass* Z_Construct_UClass_UVoxelSeedNode_NoRegister()
	{
		return UVoxelSeedNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSeedNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSeedNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSeedNode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelSeedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSeedNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSeedNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSeedNode_Statics::ClassParams = {
		&UVoxelSeedNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSeedNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSeedNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSeedNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelSeedNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelSeedNode, 2823799203);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelSeedNode>()
	{
		return UVoxelSeedNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelSeedNode(Z_Construct_UClass_UVoxelSeedNode, &UVoxelSeedNode::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelSeedNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSeedNode);
	void UVoxelNode_Seed::StaticRegisterNativesUVoxelNode_Seed()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_Seed_NoRegister()
	{
		return UVoxelNode_Seed::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_Seed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_Seed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelSeedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Seed_Statics::Class_MetaDataParams[] = {
		{ "Category", "Seed" },
		{ "Comment", "// Seed parameter\n" },
		{ "DisplayName", "Seed" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelSeedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
		{ "ToolTip", "Seed parameter" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_Seed, Name), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_Seed, DefaultValue), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_DefaultValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_Seed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_DefaultValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_Seed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_Seed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_Seed_Statics::ClassParams = {
		&UVoxelNode_Seed::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_Seed_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Seed_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_Seed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Seed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_Seed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_Seed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_Seed, 2730563262);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_Seed>()
	{
		return UVoxelNode_Seed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_Seed(Z_Construct_UClass_UVoxelNode_Seed, &UVoxelNode_Seed::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_Seed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_Seed);
	void UVoxelNode_AddSeeds::StaticRegisterNativesUVoxelNode_AddSeeds()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_AddSeeds_NoRegister()
	{
		return UVoxelNode_AddSeeds::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_AddSeeds_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelSeedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::Class_MetaDataParams[] = {
		{ "Category", "Seed" },
		{ "Comment", "// Combine seeds by hashing them\n" },
		{ "DisplayName", "Hash Seeds" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelSeedNodes.h" },
		{ "Keywords", "combine add seed" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
		{ "ToolTip", "Combine seeds by hashing them" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_AddSeeds>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::ClassParams = {
		&UVoxelNode_AddSeeds::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_AddSeeds()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_AddSeeds, 898872476);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_AddSeeds>()
	{
		return UVoxelNode_AddSeeds::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_AddSeeds(Z_Construct_UClass_UVoxelNode_AddSeeds, &UVoxelNode_AddSeeds::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_AddSeeds"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_AddSeeds);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
