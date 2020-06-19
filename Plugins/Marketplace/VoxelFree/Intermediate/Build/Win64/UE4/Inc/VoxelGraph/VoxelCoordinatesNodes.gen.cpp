// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelCoordinatesNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelCoordinatesNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelCoordinateNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelCoordinateNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithDependencies();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_XF_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_XF();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_YF_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_YF();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ZF_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ZF();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalX_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalX();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalY_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalY();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalZ_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalZ();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_LocalToGlobal_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_LocalToGlobal();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalToLocal_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalToLocal();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_TransformVector_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_TransformVector();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_InverseTransformVector_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_InverseTransformVector();
// End Cross Module References
	void UVoxelCoordinateNode::StaticRegisterNativesUVoxelCoordinateNode()
	{
	}
	UClass* Z_Construct_UClass_UVoxelCoordinateNode_NoRegister()
	{
		return UVoxelCoordinateNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelCoordinateNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelCoordinateNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithDependencies,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelCoordinateNode_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelCoordinateNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelCoordinateNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelCoordinateNode_Statics::ClassParams = {
		&UVoxelCoordinateNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelCoordinateNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCoordinateNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelCoordinateNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelCoordinateNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelCoordinateNode, 2876045784);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelCoordinateNode>()
	{
		return UVoxelCoordinateNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelCoordinateNode(Z_Construct_UClass_UVoxelCoordinateNode, &UVoxelCoordinateNode::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelCoordinateNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelCoordinateNode);
	void UVoxelNode_XF::StaticRegisterNativesUVoxelNode_XF()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_XF_NoRegister()
	{
		return UVoxelNode_XF::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_XF_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_XF_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelCoordinateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_XF_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Return the current X\n" },
		{ "DisplayName", "X" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Return the current X" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_XF_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_XF>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_XF_Statics::ClassParams = {
		&UVoxelNode_XF::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_XF_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_XF_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_XF()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_XF_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_XF, 1617734821);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_XF>()
	{
		return UVoxelNode_XF::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_XF(Z_Construct_UClass_UVoxelNode_XF, &UVoxelNode_XF::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_XF"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_XF);
	void UVoxelNode_YF::StaticRegisterNativesUVoxelNode_YF()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_YF_NoRegister()
	{
		return UVoxelNode_YF::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_YF_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_YF_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelCoordinateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_YF_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Return the current Y\n" },
		{ "DisplayName", "Y" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Return the current Y" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_YF_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_YF>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_YF_Statics::ClassParams = {
		&UVoxelNode_YF::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_YF_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_YF_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_YF()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_YF_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_YF, 3290594519);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_YF>()
	{
		return UVoxelNode_YF::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_YF(Z_Construct_UClass_UVoxelNode_YF, &UVoxelNode_YF::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_YF"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_YF);
	void UVoxelNode_ZF::StaticRegisterNativesUVoxelNode_ZF()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_ZF_NoRegister()
	{
		return UVoxelNode_ZF::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_ZF_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_ZF_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelCoordinateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_ZF_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Return the current Z\n" },
		{ "DisplayName", "Z" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Return the current Z" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_ZF_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_ZF>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_ZF_Statics::ClassParams = {
		&UVoxelNode_ZF::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_ZF_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ZF_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_ZF()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_ZF_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_ZF, 4014932132);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_ZF>()
	{
		return UVoxelNode_ZF::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_ZF(Z_Construct_UClass_UVoxelNode_ZF, &UVoxelNode_ZF::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_ZF"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_ZF);
	void UVoxelNode_GlobalX::StaticRegisterNativesUVoxelNode_GlobalX()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GlobalX_NoRegister()
	{
		return UVoxelNode_GlobalX::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GlobalX_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GlobalX_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelCoordinateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GlobalX_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Return the current X in global space, before the transform is applied to it. Same as X if not a graph asset\n" },
		{ "DisplayName", "Global X" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Return the current X in global space, before the transform is applied to it. Same as X if not a graph asset" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GlobalX_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GlobalX>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GlobalX_Statics::ClassParams = {
		&UVoxelNode_GlobalX::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GlobalX_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GlobalX_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GlobalX()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GlobalX_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GlobalX, 1309721944);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GlobalX>()
	{
		return UVoxelNode_GlobalX::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GlobalX(Z_Construct_UClass_UVoxelNode_GlobalX, &UVoxelNode_GlobalX::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GlobalX"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GlobalX);
	void UVoxelNode_GlobalY::StaticRegisterNativesUVoxelNode_GlobalY()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GlobalY_NoRegister()
	{
		return UVoxelNode_GlobalY::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GlobalY_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GlobalY_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelCoordinateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GlobalY_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Return the current Y in global space, before the transform is applied to it. Same as Y if not a graph asset\n" },
		{ "DisplayName", "Global Y" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Return the current Y in global space, before the transform is applied to it. Same as Y if not a graph asset" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GlobalY_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GlobalY>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GlobalY_Statics::ClassParams = {
		&UVoxelNode_GlobalY::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GlobalY_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GlobalY_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GlobalY()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GlobalY_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GlobalY, 678734762);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GlobalY>()
	{
		return UVoxelNode_GlobalY::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GlobalY(Z_Construct_UClass_UVoxelNode_GlobalY, &UVoxelNode_GlobalY::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GlobalY"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GlobalY);
	void UVoxelNode_GlobalZ::StaticRegisterNativesUVoxelNode_GlobalZ()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GlobalZ_NoRegister()
	{
		return UVoxelNode_GlobalZ::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GlobalZ_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelCoordinateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Return the current Z in global space, before the transform is applied to it. Same as Z if not a graph asset\n" },
		{ "DisplayName", "Global Z" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Return the current Z in global space, before the transform is applied to it. Same as Z if not a graph asset" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GlobalZ>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::ClassParams = {
		&UVoxelNode_GlobalZ::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GlobalZ()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GlobalZ, 3607916016);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GlobalZ>()
	{
		return UVoxelNode_GlobalZ::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GlobalZ(Z_Construct_UClass_UVoxelNode_GlobalZ, &UVoxelNode_GlobalZ::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GlobalZ"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GlobalZ);
	void UVoxelNode_LocalToGlobal::StaticRegisterNativesUVoxelNode_LocalToGlobal()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_LocalToGlobal_NoRegister()
	{
		return UVoxelNode_LocalToGlobal::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Transform coordinates from local voxel space to global voxel space. Used for graph assets\n" },
		{ "DisplayName", "Local To Global" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Transform coordinates from local voxel space to global voxel space. Used for graph assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_LocalToGlobal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::ClassParams = {
		&UVoxelNode_LocalToGlobal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_LocalToGlobal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_LocalToGlobal, 1238576381);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_LocalToGlobal>()
	{
		return UVoxelNode_LocalToGlobal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_LocalToGlobal(Z_Construct_UClass_UVoxelNode_LocalToGlobal, &UVoxelNode_LocalToGlobal::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_LocalToGlobal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_LocalToGlobal);
	void UVoxelNode_GlobalToLocal::StaticRegisterNativesUVoxelNode_GlobalToLocal()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_GlobalToLocal_NoRegister()
	{
		return UVoxelNode_GlobalToLocal::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Transform coordinates from global voxel space to local voxel space. Used for graph assets\n" },
		{ "DisplayName", "Global To Local" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Transform coordinates from global voxel space to local voxel space. Used for graph assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GlobalToLocal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::ClassParams = {
		&UVoxelNode_GlobalToLocal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_GlobalToLocal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_GlobalToLocal, 1636817877);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_GlobalToLocal>()
	{
		return UVoxelNode_GlobalToLocal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_GlobalToLocal(Z_Construct_UClass_UVoxelNode_GlobalToLocal, &UVoxelNode_GlobalToLocal::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_GlobalToLocal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GlobalToLocal);
	void UVoxelNode_TransformVector::StaticRegisterNativesUVoxelNode_TransformVector()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_TransformVector_NoRegister()
	{
		return UVoxelNode_TransformVector::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_TransformVector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_TransformVector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_TransformVector_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Transform vector from local voxel space to global voxel space. Used for graph assets\n" },
		{ "DisplayName", "Transform Vector" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Transform vector from local voxel space to global voxel space. Used for graph assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_TransformVector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_TransformVector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_TransformVector_Statics::ClassParams = {
		&UVoxelNode_TransformVector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_TransformVector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_TransformVector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_TransformVector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_TransformVector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_TransformVector, 2647982356);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_TransformVector>()
	{
		return UVoxelNode_TransformVector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_TransformVector(Z_Construct_UClass_UVoxelNode_TransformVector, &UVoxelNode_TransformVector::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_TransformVector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_TransformVector);
	void UVoxelNode_InverseTransformVector::StaticRegisterNativesUVoxelNode_InverseTransformVector()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_InverseTransformVector_NoRegister()
	{
		return UVoxelNode_InverseTransformVector::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// Transform vector from global voxel space to local voxel space. Used for graph assets\n" },
		{ "DisplayName", "Inverse Transform Vector" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ToolTip", "Transform vector from global voxel space to local voxel space. Used for graph assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_InverseTransformVector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::ClassParams = {
		&UVoxelNode_InverseTransformVector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_InverseTransformVector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_InverseTransformVector, 2180891498);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_InverseTransformVector>()
	{
		return UVoxelNode_InverseTransformVector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_InverseTransformVector(Z_Construct_UClass_UVoxelNode_InverseTransformVector, &UVoxelNode_InverseTransformVector::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_InverseTransformVector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_InverseTransformVector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
