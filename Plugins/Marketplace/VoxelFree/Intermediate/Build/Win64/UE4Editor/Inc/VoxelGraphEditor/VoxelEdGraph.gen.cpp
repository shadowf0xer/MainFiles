// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphEditor/Private/VoxelEdGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelEdGraph() {}
// Cross Module References
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelEdGraph_NoRegister();
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelEdGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
// End Cross Module References
	void UVoxelEdGraph::StaticRegisterNativesUVoxelEdGraph()
	{
	}
	UClass* Z_Construct_UClass_UVoxelEdGraph_NoRegister()
	{
		return UVoxelEdGraph::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelEdGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelEdGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelEdGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelEdGraph.h" },
		{ "ModuleRelativePath", "Private/VoxelEdGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelEdGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelEdGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelEdGraph_Statics::ClassParams = {
		&UVoxelEdGraph::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelEdGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelEdGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelEdGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelEdGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelEdGraph, 3693424028);
	template<> VOXELGRAPHEDITOR_API UClass* StaticClass<UVoxelEdGraph>()
	{
		return UVoxelEdGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelEdGraph(Z_Construct_UClass_UVoxelEdGraph, &UVoxelEdGraph::StaticClass, TEXT("/Script/VoxelGraphEditor"), TEXT("UVoxelEdGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelEdGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
