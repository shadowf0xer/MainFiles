// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelBiomeMapNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelBiomeMapNode() {}
// Cross Module References
	VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FBiomeMapElement();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_BiomeMapSampler_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_BiomeMapSampler();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FBiomeMapElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXELGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FBiomeMapElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBiomeMapElement, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("BiomeMapElement"), sizeof(FBiomeMapElement), Get_Z_Construct_UScriptStruct_FBiomeMapElement_Hash());
	}
	return Singleton;
}
template<> VOXELGRAPH_API UScriptStruct* StaticStruct<FBiomeMapElement>()
{
	return FBiomeMapElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBiomeMapElement(FBiomeMapElement::StaticStruct, TEXT("/Script/VoxelGraph"), TEXT("BiomeMapElement"), false, nullptr, nullptr);
static struct FScriptStruct_VoxelGraph_StaticRegisterNativesFBiomeMapElement
{
	FScriptStruct_VoxelGraph_StaticRegisterNativesFBiomeMapElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BiomeMapElement")),new UScriptStruct::TCppStructOps<FBiomeMapElement>);
	}
} ScriptStruct_VoxelGraph_StaticRegisterNativesFBiomeMapElement;
	struct Z_Construct_UScriptStruct_FBiomeMapElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBiomeMapElement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBiomeMapElement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBiomeMapElement, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBiomeMapElement, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBiomeMapElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Color,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBiomeMapElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
		nullptr,
		&NewStructOps,
		"BiomeMapElement",
		sizeof(FBiomeMapElement),
		alignof(FBiomeMapElement),
		Z_Construct_UScriptStruct_FBiomeMapElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBiomeMapElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBiomeMapElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBiomeMapElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBiomeMapElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBiomeMapElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BiomeMapElement"), sizeof(FBiomeMapElement), Get_Z_Construct_UScriptStruct_FBiomeMapElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBiomeMapElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBiomeMapElement_Hash() { return 1026638169U; }
	void UVoxelNode_BiomeMapSampler::StaticRegisterNativesUVoxelNode_BiomeMapSampler()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_BiomeMapSampler_NoRegister()
	{
		return UVoxelNode_BiomeMapSampler::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Biomes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Biomes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Biomes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Threshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::Class_MetaDataParams[] = {
		{ "Category", "Biomes" },
		{ "Comment", "// Find the strength of biomes from a biome map. Note: Alpha is ignored when computing the color distance\n" },
		{ "DisplayName", "Biome Map Sampler" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelBiomeMapNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
		{ "ToolTip", "Find the strength of biomes from a biome map. Note: Alpha is ignored when computing the color distance" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Biomes_MetaData[] = {
		{ "Category", "Biomes" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Biomes = { "Biomes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_BiomeMapSampler, Biomes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Biomes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Biomes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Biomes_Inner = { "Biomes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBiomeMapElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "Biomes" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
		{ "Comment", "// Distance = Max(Abs(ColorA - ColorB)). Values with a distance below or equal to this will be set to 1, value strictly above to 0\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
		{ "ToolTip", "Distance = Max(Abs(ColorA - ColorB)). Values with a distance below or equal to this will be set to 1, value strictly above to 0" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_BiomeMapSampler, Threshold), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Threshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Biomes" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_BiomeMapSampler, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Biomes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Biomes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Threshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Texture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_BiomeMapSampler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::ClassParams = {
		&UVoxelNode_BiomeMapSampler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_BiomeMapSampler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_BiomeMapSampler, 3448921261);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_BiomeMapSampler>()
	{
		return UVoxelNode_BiomeMapSampler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_BiomeMapSampler(Z_Construct_UClass_UVoxelNode_BiomeMapSampler, &UVoxelNode_BiomeMapSampler::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_BiomeMapSampler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_BiomeMapSampler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
