// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelDeprecatedNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDeprecatedNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelMaterialNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetDoubleIndex_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetDoubleIndex();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetDoubleIndex_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetDoubleIndex();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MaterialSetter();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_XI_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_XI();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_YI_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_YI();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ZI_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ZI();
// End Cross Module References
	void UVoxelNode_MakeMaterialFromSingleIndex::StaticRegisterNativesUVoxelNode_MakeMaterialFromSingleIndex()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_NoRegister()
	{
		return UVoxelNode_MakeMaterialFromSingleIndex::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Make Material From Single Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_MakeMaterialFromSingleIndex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::ClassParams = {
		&UVoxelNode_MakeMaterialFromSingleIndex::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_MakeMaterialFromSingleIndex, 4119976053);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_MakeMaterialFromSingleIndex>()
	{
		return UVoxelNode_MakeMaterialFromSingleIndex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_MakeMaterialFromSingleIndex(Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex, &UVoxelNode_MakeMaterialFromSingleIndex::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_MakeMaterialFromSingleIndex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_MakeMaterialFromSingleIndex);
	void UVoxelNode_GetDoubleIndex::StaticRegisterNativesUVoxelNode_GetDoubleIndex()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GetDoubleIndex_NoRegister()
	{
		return UVoxelNode_GetDoubleIndex::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Get Double Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetDoubleIndex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::ClassParams = {
		&UVoxelNode_GetDoubleIndex::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetDoubleIndex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GetDoubleIndex, 2858819060);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetDoubleIndex>()
	{
		return UVoxelNode_GetDoubleIndex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GetDoubleIndex(Z_Construct_UClass_UVoxelNode_GetDoubleIndex, &UVoxelNode_GetDoubleIndex::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GetDoubleIndex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetDoubleIndex);
	void UVoxelNode_MakeMaterialFromColor::StaticRegisterNativesUVoxelNode_MakeMaterialFromColor()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_NoRegister()
	{
		return UVoxelNode_MakeMaterialFromColor::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Make Material From Color" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_MakeMaterialFromColor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::ClassParams = {
		&UVoxelNode_MakeMaterialFromColor::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_MakeMaterialFromColor, 1333785309);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_MakeMaterialFromColor>()
	{
		return UVoxelNode_MakeMaterialFromColor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_MakeMaterialFromColor(Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor, &UVoxelNode_MakeMaterialFromColor::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_MakeMaterialFromColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_MakeMaterialFromColor);
	void UVoxelNode_MakeMaterialFromDoubleIndex::StaticRegisterNativesUVoxelNode_MakeMaterialFromDoubleIndex()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_NoRegister()
	{
		return UVoxelNode_MakeMaterialFromDoubleIndex::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Make Material From Double Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_MakeMaterialFromDoubleIndex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::ClassParams = {
		&UVoxelNode_MakeMaterialFromDoubleIndex::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_MakeMaterialFromDoubleIndex, 2242936091);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_MakeMaterialFromDoubleIndex>()
	{
		return UVoxelNode_MakeMaterialFromDoubleIndex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_MakeMaterialFromDoubleIndex(Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex, &UVoxelNode_MakeMaterialFromDoubleIndex::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_MakeMaterialFromDoubleIndex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_MakeMaterialFromDoubleIndex);
	void UVoxelNode_CreateDoubleIndexMaterial::StaticRegisterNativesUVoxelNode_CreateDoubleIndexMaterial()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_NoRegister()
	{
		return UVoxelNode_CreateDoubleIndexMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Create Double Index Material" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_CreateDoubleIndexMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::ClassParams = {
		&UVoxelNode_CreateDoubleIndexMaterial::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_CreateDoubleIndexMaterial, 3515427589);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_CreateDoubleIndexMaterial>()
	{
		return UVoxelNode_CreateDoubleIndexMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_CreateDoubleIndexMaterial(Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial, &UVoxelNode_CreateDoubleIndexMaterial::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_CreateDoubleIndexMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_CreateDoubleIndexMaterial);
	void UVoxelNode_SetDoubleIndex::StaticRegisterNativesUVoxelNode_SetDoubleIndex()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_SetDoubleIndex_NoRegister()
	{
		return UVoxelNode_SetDoubleIndex::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_MaterialSetter,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "DisplayName", "Set Double Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SetDoubleIndex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::ClassParams = {
		&UVoxelNode_SetDoubleIndex::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_SetDoubleIndex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_SetDoubleIndex, 1568384513);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_SetDoubleIndex>()
	{
		return UVoxelNode_SetDoubleIndex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_SetDoubleIndex(Z_Construct_UClass_UVoxelNode_SetDoubleIndex, &UVoxelNode_SetDoubleIndex::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_SetDoubleIndex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SetDoubleIndex);
	void UVoxelNode_WorldGeneratorSampler::StaticRegisterNativesUVoxelNode_WorldGeneratorSampler()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_NoRegister()
	{
		return UVoxelNode_WorldGeneratorSampler::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "DisplayName", "World Generator Sampler" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_Seeds_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_WorldGeneratorSampler, Seeds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_Seeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_Seeds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_Seeds_Inner = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_WorldGenerator_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_WorldGenerator = { "WorldGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_WorldGeneratorSampler, WorldGenerator), Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_WorldGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_WorldGenerator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_Seeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_Seeds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_WorldGenerator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_WorldGeneratorSampler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::ClassParams = {
		&UVoxelNode_WorldGeneratorSampler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::PropPointers),
		0,
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_WorldGeneratorSampler, 40478899);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_WorldGeneratorSampler>()
	{
		return UVoxelNode_WorldGeneratorSampler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_WorldGeneratorSampler(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler, &UVoxelNode_WorldGeneratorSampler::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_WorldGeneratorSampler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_WorldGeneratorSampler);
	void UVoxelNode_XI::StaticRegisterNativesUVoxelNode_XI()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_XI_NoRegister()
	{
		return UVoxelNode_XI::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_XI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_XI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_XI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "DisplayName", "X (int)" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_XI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_XI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_XI_Statics::ClassParams = {
		&UVoxelNode_XI::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_XI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_XI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_XI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_XI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_XI, 1264032094);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_XI>()
	{
		return UVoxelNode_XI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_XI(Z_Construct_UClass_UVoxelNode_XI, &UVoxelNode_XI::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_XI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_XI);
	void UVoxelNode_YI::StaticRegisterNativesUVoxelNode_YI()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_YI_NoRegister()
	{
		return UVoxelNode_YI::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_YI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_YI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_YI_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Y (int)" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_YI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_YI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_YI_Statics::ClassParams = {
		&UVoxelNode_YI::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_YI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_YI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_YI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_YI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_YI, 2983451101);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_YI>()
	{
		return UVoxelNode_YI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_YI(Z_Construct_UClass_UVoxelNode_YI, &UVoxelNode_YI::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_YI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_YI);
	void UVoxelNode_ZI::StaticRegisterNativesUVoxelNode_ZI()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_ZI_NoRegister()
	{
		return UVoxelNode_ZI::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_ZI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_ZI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_ZI_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Z (int)" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_ZI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_ZI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_ZI_Statics::ClassParams = {
		&UVoxelNode_ZI::StaticClass,
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
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_ZI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ZI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_ZI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_ZI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_ZI, 1343250805);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_ZI>()
	{
		return UVoxelNode_ZI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_ZI(Z_Construct_UClass_UVoxelNode_ZI, &UVoxelNode_ZI::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_ZI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_ZI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
