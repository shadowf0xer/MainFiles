// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelGraphAssetNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraphAssetNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphAssetNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphAssetNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetValue_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetValue();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetMaterial_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetMaterial();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetCustomOutput();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetHardness_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetHardness();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
// End Cross Module References
	void UVoxelGraphAssetNode::StaticRegisterNativesUVoxelGraphAssetNode()
	{
	}
	UClass* Z_Construct_UClass_UVoxelGraphAssetNode_NoRegister()
	{
		return UVoxelGraphAssetNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphAssetNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultWorldGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultWorldGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphAssetNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphAssetNode_Statics::Class_MetaDataParams[] = {
		{ "Category", "Graph Asset" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_DefaultWorldGenerator_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "// World generator to sample from when not used as an asset. Useful to preview. Not used when compiled to C++\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ToolTip", "World generator to sample from when not used as an asset. Useful to preview. Not used when compiled to C++" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_DefaultWorldGenerator = { "DefaultWorldGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphAssetNode, DefaultWorldGenerator), Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_DefaultWorldGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_DefaultWorldGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_CustomData_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// Can be recovered in the generators with the GetCustomData node\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ToolTip", "Can be recovered in the generators with the GetCustomData node" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphAssetNode, CustomData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_CustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_CustomData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_CustomData_Inner = { "CustomData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphAssetNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_DefaultWorldGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_CustomData_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphAssetNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphAssetNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphAssetNode_Statics::ClassParams = {
		&UVoxelGraphAssetNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGraphAssetNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphAssetNode_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphAssetNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphAssetNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphAssetNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGraphAssetNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGraphAssetNode, 1428498590);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphAssetNode>()
	{
		return UVoxelGraphAssetNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGraphAssetNode(Z_Construct_UClass_UVoxelGraphAssetNode, &UVoxelGraphAssetNode::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelGraphAssetNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphAssetNode);
	void UVoxelNode_EditGetValue::StaticRegisterNativesUVoxelNode_EditGetValue()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_EditGetValue_NoRegister()
	{
		return UVoxelNode_EditGetValue::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_EditGetValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphAssetNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Get the previous generator value. Only for graph assets\n" },
		{ "DisplayName", "Get Previous Generator Value" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ToolTip", "Get the previous generator value. Only for graph assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_EditGetValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::ClassParams = {
		&UVoxelNode_EditGetValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_EditGetValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_EditGetValue, 3759761946);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_EditGetValue>()
	{
		return UVoxelNode_EditGetValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_EditGetValue(Z_Construct_UClass_UVoxelNode_EditGetValue, &UVoxelNode_EditGetValue::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_EditGetValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_EditGetValue);
	void UVoxelNode_EditGetMaterial::StaticRegisterNativesUVoxelNode_EditGetMaterial()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_EditGetMaterial_NoRegister()
	{
		return UVoxelNode_EditGetMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphAssetNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Get the previous generator material. Only for graph assets\n" },
		{ "DisplayName", "Get Previous Generator Material" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ToolTip", "Get the previous generator material. Only for graph assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_EditGetMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::ClassParams = {
		&UVoxelNode_EditGetMaterial::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_EditGetMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_EditGetMaterial, 120578339);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_EditGetMaterial>()
	{
		return UVoxelNode_EditGetMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_EditGetMaterial(Z_Construct_UClass_UVoxelNode_EditGetMaterial, &UVoxelNode_EditGetMaterial::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_EditGetMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_EditGetMaterial);
	void UVoxelNode_EditGetCustomOutput::StaticRegisterNativesUVoxelNode_EditGetCustomOutput()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_NoRegister()
	{
		return UVoxelNode_EditGetCustomOutput::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutputName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelGraphAssetNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Get the previous generator custom output. Only for graph assets\n" },
		{ "DisplayName", "Get Previous Generator Custom Output" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ToolTip", "Get the previous generator custom output. Only for graph assets" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::NewProp_OutputName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_EditGetCustomOutput, OutputName), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::NewProp_OutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::NewProp_OutputName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::NewProp_OutputName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_EditGetCustomOutput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::ClassParams = {
		&UVoxelNode_EditGetCustomOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_EditGetCustomOutput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_EditGetCustomOutput, 2386945954);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_EditGetCustomOutput>()
	{
		return UVoxelNode_EditGetCustomOutput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_EditGetCustomOutput(Z_Construct_UClass_UVoxelNode_EditGetCustomOutput, &UVoxelNode_EditGetCustomOutput::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_EditGetCustomOutput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_EditGetCustomOutput);
	void UVoxelNode_EditGetHardness::StaticRegisterNativesUVoxelNode_EditGetHardness()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_EditGetHardness_NoRegister()
	{
		return UVoxelNode_EditGetHardness::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::Class_MetaDataParams[] = {
		{ "Category", "Material" },
		{ "Comment", "// Get the material hardness\n" },
		{ "DisplayName", "Get Hardness" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ToolTip", "Get the material hardness" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_EditGetHardness>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::ClassParams = {
		&UVoxelNode_EditGetHardness::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_EditGetHardness()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_EditGetHardness, 3088573081);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_EditGetHardness>()
	{
		return UVoxelNode_EditGetHardness::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_EditGetHardness(Z_Construct_UClass_UVoxelNode_EditGetHardness, &UVoxelNode_EditGetHardness::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_EditGetHardness"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_EditGetHardness);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
