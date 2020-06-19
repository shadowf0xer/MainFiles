// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicNodeKismet/Classes/KMGC_MagicNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKMGC_MagicNode() {}
// Cross Module References
	MAGICNODEKISMET_API UClass* Z_Construct_UClass_UKMGC_MagicNode_NoRegister();
	MAGICNODEKISMET_API UClass* Z_Construct_UClass_UKMGC_MagicNode();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_MagicNodeKismet();
// End Cross Module References
	void UKMGC_MagicNode::StaticRegisterNativesUKMGC_MagicNode()
	{
	}
	UClass* Z_Construct_UClass_UKMGC_MagicNode_NoRegister()
	{
		return UKMGC_MagicNode::StaticClass();
	}
	struct Z_Construct_UClass_UKMGC_MagicNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKMGC_MagicNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKMGC_MagicNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "KMGC_MagicNode.h" },
		{ "ModuleRelativePath", "Classes/KMGC_MagicNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKMGC_MagicNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKMGC_MagicNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKMGC_MagicNode_Statics::ClassParams = {
		&UKMGC_MagicNode::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKMGC_MagicNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKMGC_MagicNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKMGC_MagicNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKMGC_MagicNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKMGC_MagicNode, 2758489461);
	template<> MAGICNODEKISMET_API UClass* StaticClass<UKMGC_MagicNode>()
	{
		return UKMGC_MagicNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKMGC_MagicNode(Z_Construct_UClass_UKMGC_MagicNode, &UKMGC_MagicNode::StaticClass, TEXT("/Script/MagicNodeKismet"), TEXT("UKMGC_MagicNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKMGC_MagicNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
