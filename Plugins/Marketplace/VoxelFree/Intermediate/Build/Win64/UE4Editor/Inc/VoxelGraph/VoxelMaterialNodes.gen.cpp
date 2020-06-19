// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelMaterialNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMaterialNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelMaterialNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelMaterialNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetColor_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetColor();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetIndex_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetIndex();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetUVChannel_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetUVChannel();
// End Cross Module References
	void UVoxelMaterialNode::StaticRegisterNativesUVoxelMaterialNode()
	{
	}
	UClass* Z_Construct_UClass_UVoxelMaterialNode_NoRegister()
	{
		return UVoxelMaterialNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMaterialNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMaterialNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMaterialNode_Statics::Class_MetaDataParams[] = {
		{ "Category", "Math|Material" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelMaterialNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelMaterialNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMaterialNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMaterialNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMaterialNode_Statics::ClassParams = {
		&UVoxelMaterialNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMaterialNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMaterialNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMaterialNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelMaterialNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelMaterialNode, 2513753352);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelMaterialNode>()
	{
		return UVoxelMaterialNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelMaterialNode(Z_Construct_UClass_UVoxelMaterialNode, &UVoxelMaterialNode::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelMaterialNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMaterialNode);
	void UVoxelNode_GetColor::StaticRegisterNativesUVoxelNode_GetColor()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GetColor_NoRegister()
	{
		return UVoxelNode_GetColor::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetColor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Get the material color. Outputs are between 0 and 1\n" },
		{ "DisplayName", "Get Color" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelMaterialNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelMaterialNodes.h" },
		{ "ToolTip", "Get the material color. Outputs are between 0 and 1" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetColor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetColor_Statics::ClassParams = {
		&UVoxelNode_GetColor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetColor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GetColor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GetColor, 3254974131);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetColor>()
	{
		return UVoxelNode_GetColor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GetColor(Z_Construct_UClass_UVoxelNode_GetColor, &UVoxelNode_GetColor::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GetColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetColor);
	void UVoxelNode_GetIndex::StaticRegisterNativesUVoxelNode_GetIndex()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GetIndex_NoRegister()
	{
		return UVoxelNode_GetIndex::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetIndex_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Get the index of the material. Output is between 0 and 255\n" },
		{ "DisplayName", "Get Single Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelMaterialNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelMaterialNodes.h" },
		{ "ToolTip", "Get the index of the material. Output is between 0 and 255" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetIndex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetIndex_Statics::ClassParams = {
		&UVoxelNode_GetIndex::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetIndex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GetIndex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GetIndex, 2744788099);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetIndex>()
	{
		return UVoxelNode_GetIndex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GetIndex(Z_Construct_UClass_UVoxelNode_GetIndex, &UVoxelNode_GetIndex::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GetIndex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetIndex);
	void UVoxelNode_GetUVChannel::StaticRegisterNativesUVoxelNode_GetUVChannel()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GetUVChannel_NoRegister()
	{
		return UVoxelNode_GetUVChannel::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Read a UV channel from a material.\n" },
		{ "DisplayName", "Get UV Channel" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelMaterialNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelMaterialNodes.h" },
		{ "ToolTip", "Read a UV channel from a material." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetUVChannel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::ClassParams = {
		&UVoxelNode_GetUVChannel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GetUVChannel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GetUVChannel, 1670003184);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GetUVChannel>()
	{
		return UVoxelNode_GetUVChannel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GetUVChannel(Z_Construct_UClass_UVoxelNode_GetUVChannel, &UVoxelNode_GetUVChannel::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GetUVChannel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetUVChannel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
