// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelWorldGeneratorSamplerNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelWorldGeneratorSamplerNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetWorldGeneratorValue_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetWorldGeneratorValue();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetWorldGeneratorMaterial_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetWorldGeneratorMaterial();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetCustomData_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetCustomData();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IsCustomDataSet_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IsCustomDataSet();
// End Cross Module References
	void UVoxelNode_WorldGeneratorSamplerBase::StaticRegisterNativesUVoxelNode_WorldGeneratorSamplerBase()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_NoRegister()
	{
		return UVoxelNode_WorldGeneratorSamplerBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Seeds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Seeds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::Class_MetaDataParams[] = {
		{ "Category", "World Generator" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::NewProp_Seeds_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// Seeds to send to the world generators\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
		{ "ToolTip", "Seeds to send to the world generators" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_WorldGeneratorSamplerBase, Seeds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::NewProp_Seeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::NewProp_Seeds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::NewProp_Seeds_Inner = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::NewProp_CustomData_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// Will be sent to world generators. Can be recovered in the generators with the GetCustomData node\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
		{ "ToolTip", "Will be sent to world generators. Can be recovered in the generators with the GetCustomData node" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_WorldGeneratorSamplerBase, CustomData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::NewProp_CustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::NewProp_CustomData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::NewProp_CustomData_Inner = { "CustomData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::NewProp_Seeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::NewProp_Seeds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::NewProp_CustomData_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_WorldGeneratorSamplerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::ClassParams = {
		&UVoxelNode_WorldGeneratorSamplerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_WorldGeneratorSamplerBase, 1654998192);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_WorldGeneratorSamplerBase>()
	{
		return UVoxelNode_WorldGeneratorSamplerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_WorldGeneratorSamplerBase(Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase, &UVoxelNode_WorldGeneratorSamplerBase::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_WorldGeneratorSamplerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_WorldGeneratorSamplerBase);
	void UVoxelNode_SingleWorldGeneratorSamplerBase::StaticRegisterNativesUVoxelNode_SingleWorldGeneratorSamplerBase()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase_NoRegister()
	{
		return UVoxelNode_SingleWorldGeneratorSamplerBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_WorldGeneratorSamplerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase_Statics::NewProp_WorldGenerator_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase_Statics::NewProp_WorldGenerator = { "WorldGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_SingleWorldGeneratorSamplerBase, WorldGenerator), Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase_Statics::NewProp_WorldGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase_Statics::NewProp_WorldGenerator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase_Statics::NewProp_WorldGenerator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SingleWorldGeneratorSamplerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase_Statics::ClassParams = {
		&UVoxelNode_SingleWorldGeneratorSamplerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_SingleWorldGeneratorSamplerBase, 82346131);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_SingleWorldGeneratorSamplerBase>()
	{
		return UVoxelNode_SingleWorldGeneratorSamplerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase(Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase, &UVoxelNode_SingleWorldGeneratorSamplerBase::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_SingleWorldGeneratorSamplerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SingleWorldGeneratorSamplerBase);
	void UVoxelNode_GetWorldGeneratorValue::StaticRegisterNativesUVoxelNode_GetWorldGeneratorValue()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GetWorldGeneratorValue_NoRegister()
	{
		return UVoxelNode_GetWorldGeneratorValue::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetWorldGeneratorValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetWorldGeneratorValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetWorldGeneratorValue_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Get World Generator Value" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetWorldGeneratorValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetWorldGeneratorValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetWorldGeneratorValue_Statics::ClassParams = {
		&UVoxelNode_GetWorldGeneratorValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetWorldGeneratorValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetWorldGeneratorValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetWorldGeneratorValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GetWorldGeneratorValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GetWorldGeneratorValue, 3294811480);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetWorldGeneratorValue>()
	{
		return UVoxelNode_GetWorldGeneratorValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GetWorldGeneratorValue(Z_Construct_UClass_UVoxelNode_GetWorldGeneratorValue, &UVoxelNode_GetWorldGeneratorValue::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GetWorldGeneratorValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetWorldGeneratorValue);
	void UVoxelNode_GetWorldGeneratorMaterial::StaticRegisterNativesUVoxelNode_GetWorldGeneratorMaterial()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GetWorldGeneratorMaterial_NoRegister()
	{
		return UVoxelNode_GetWorldGeneratorMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetWorldGeneratorMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetWorldGeneratorMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetWorldGeneratorMaterial_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Get World Generator Material" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetWorldGeneratorMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetWorldGeneratorMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetWorldGeneratorMaterial_Statics::ClassParams = {
		&UVoxelNode_GetWorldGeneratorMaterial::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetWorldGeneratorMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetWorldGeneratorMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetWorldGeneratorMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GetWorldGeneratorMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GetWorldGeneratorMaterial, 1107237217);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetWorldGeneratorMaterial>()
	{
		return UVoxelNode_GetWorldGeneratorMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GetWorldGeneratorMaterial(Z_Construct_UClass_UVoxelNode_GetWorldGeneratorMaterial, &UVoxelNode_GetWorldGeneratorMaterial::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GetWorldGeneratorMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetWorldGeneratorMaterial);
	void UVoxelNode_GetWorldGeneratorCustomOutput::StaticRegisterNativesUVoxelNode_GetWorldGeneratorCustomOutput()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput_NoRegister()
	{
		return UVoxelNode_GetWorldGeneratorCustomOutput::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput_Statics
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
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_SingleWorldGeneratorSamplerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Get World Generator Custom Output" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput_Statics::NewProp_OutputName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_GetWorldGeneratorCustomOutput, OutputName), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput_Statics::NewProp_OutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput_Statics::NewProp_OutputName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput_Statics::NewProp_OutputName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetWorldGeneratorCustomOutput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput_Statics::ClassParams = {
		&UVoxelNode_GetWorldGeneratorCustomOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GetWorldGeneratorCustomOutput, 1933259917);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetWorldGeneratorCustomOutput>()
	{
		return UVoxelNode_GetWorldGeneratorCustomOutput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GetWorldGeneratorCustomOutput(Z_Construct_UClass_UVoxelNode_GetWorldGeneratorCustomOutput, &UVoxelNode_GetWorldGeneratorCustomOutput::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GetWorldGeneratorCustomOutput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetWorldGeneratorCustomOutput);
	void UVoxelNode_GetCustomData::StaticRegisterNativesUVoxelNode_GetCustomData()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GetCustomData_NoRegister()
	{
		return UVoxelNode_GetCustomData::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetCustomData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetCustomData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetCustomData_Statics::Class_MetaDataParams[] = {
		{ "Category", "World Generator" },
		{ "Comment", "// Read data sent by a previous world generator\n" },
		{ "DisplayName", "Get Custom Data" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
		{ "ToolTip", "Read data sent by a previous world generator" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetCustomData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_GetCustomData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_GetCustomData, Name), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetCustomData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetCustomData_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_GetCustomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GetCustomData_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetCustomData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetCustomData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetCustomData_Statics::ClassParams = {
		&UVoxelNode_GetCustomData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_GetCustomData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetCustomData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetCustomData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetCustomData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetCustomData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GetCustomData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GetCustomData, 4229899380);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetCustomData>()
	{
		return UVoxelNode_GetCustomData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GetCustomData(Z_Construct_UClass_UVoxelNode_GetCustomData, &UVoxelNode_GetCustomData::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GetCustomData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetCustomData);
	void UVoxelNode_IsCustomDataSet::StaticRegisterNativesUVoxelNode_IsCustomDataSet()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_IsCustomDataSet_NoRegister()
	{
		return UVoxelNode_IsCustomDataSet::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_IsCustomDataSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_IsCustomDataSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_IsCustomDataSet_Statics::Class_MetaDataParams[] = {
		{ "Category", "World Generator" },
		{ "Comment", "// See if a previous generator set some custom data\n" },
		{ "DisplayName", "Is Custom Data Set" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
		{ "ToolTip", "See if a previous generator set some custom data" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_IsCustomDataSet_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWorldGeneratorSamplerNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_IsCustomDataSet_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_IsCustomDataSet, Name), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_IsCustomDataSet_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IsCustomDataSet_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_IsCustomDataSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_IsCustomDataSet_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_IsCustomDataSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_IsCustomDataSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_IsCustomDataSet_Statics::ClassParams = {
		&UVoxelNode_IsCustomDataSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_IsCustomDataSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IsCustomDataSet_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_IsCustomDataSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IsCustomDataSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_IsCustomDataSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_IsCustomDataSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_IsCustomDataSet, 1238035160);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_IsCustomDataSet>()
	{
		return UVoxelNode_IsCustomDataSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_IsCustomDataSet(Z_Construct_UClass_UVoxelNode_IsCustomDataSet, &UVoxelNode_IsCustomDataSet::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_IsCustomDataSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_IsCustomDataSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
