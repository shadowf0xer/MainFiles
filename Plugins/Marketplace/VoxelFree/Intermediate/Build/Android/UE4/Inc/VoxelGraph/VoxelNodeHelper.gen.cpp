// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelNodeHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelNodeHelper() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelSetterNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelSetterNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelPureNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelPureNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithDependencies_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithDependencies();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
// End Cross Module References
	void UVoxelNodeHelper::StaticRegisterNativesUVoxelNodeHelper()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNodeHelper_NoRegister()
	{
		return UVoxelNodeHelper::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNodeHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNodeHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNodeHelper_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNodeHelper.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNodeHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNodeHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNodeHelper_Statics::ClassParams = {
		&UVoxelNodeHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNodeHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNodeHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNodeHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNodeHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNodeHelper, 502796371);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNodeHelper>()
	{
		return UVoxelNodeHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNodeHelper(Z_Construct_UClass_UVoxelNodeHelper, &UVoxelNodeHelper::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNodeHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNodeHelper);
	void UVoxelSetterNode::StaticRegisterNativesUVoxelSetterNode()
	{
	}
	UClass* Z_Construct_UClass_UVoxelSetterNode_NoRegister()
	{
		return UVoxelSetterNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSetterNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSetterNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSetterNode_Statics::Class_MetaDataParams[] = {
		{ "Category", "Setter nodes" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNodeHelper.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSetterNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSetterNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSetterNode_Statics::ClassParams = {
		&UVoxelSetterNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSetterNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSetterNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSetterNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelSetterNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelSetterNode, 643982425);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelSetterNode>()
	{
		return UVoxelSetterNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelSetterNode(Z_Construct_UClass_UVoxelSetterNode, &UVoxelSetterNode::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelSetterNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSetterNode);
	void UVoxelPureNode::StaticRegisterNativesUVoxelPureNode()
	{
	}
	UClass* Z_Construct_UClass_UVoxelPureNode_NoRegister()
	{
		return UVoxelPureNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelPureNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelPureNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPureNode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNodeHelper.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelPureNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPureNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPureNode_Statics::ClassParams = {
		&UVoxelPureNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelPureNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPureNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelPureNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelPureNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelPureNode, 3952848634);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelPureNode>()
	{
		return UVoxelPureNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelPureNode(Z_Construct_UClass_UVoxelPureNode, &UVoxelPureNode::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelPureNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPureNode);
	void UVoxelNodeWithDependencies::StaticRegisterNativesUVoxelNodeWithDependencies()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNodeWithDependencies_NoRegister()
	{
		return UVoxelNodeWithDependencies::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNodeWithDependencies_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNodeHelper.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNodeWithDependencies>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::ClassParams = {
		&UVoxelNodeWithDependencies::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNodeWithDependencies()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNodeWithDependencies, 1643754541);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNodeWithDependencies>()
	{
		return UVoxelNodeWithDependencies::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNodeWithDependencies(Z_Construct_UClass_UVoxelNodeWithDependencies, &UVoxelNodeWithDependencies::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNodeWithDependencies"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNodeWithDependencies);
	void UVoxelNodeWithContext::StaticRegisterNativesUVoxelNodeWithContext()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNodeWithContext_NoRegister()
	{
		return UVoxelNodeWithContext::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNodeWithContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNodeWithContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithDependencies,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNodeWithContext_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNodeHelper.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNodeWithContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNodeWithContext>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNodeWithContext_Statics::ClassParams = {
		&UVoxelNodeWithContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNodeWithContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNodeWithContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNodeWithContext()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNodeWithContext_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNodeWithContext, 4018360038);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNodeWithContext>()
	{
		return UVoxelNodeWithContext::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNodeWithContext(Z_Construct_UClass_UVoxelNodeWithContext, &UVoxelNodeWithContext::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNodeWithContext"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNodeWithContext);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
