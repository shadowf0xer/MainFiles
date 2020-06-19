// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RichTextBlockInlineDecorator/Public/RichTextBlockInlineDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextBlockInlineDecorator() {}
// Cross Module References
	RICHTEXTBLOCKINLINEDECORATOR_API UClass* Z_Construct_UClass_URichTextBlockInlineDecorator_NoRegister();
	RICHTEXTBLOCKINLINEDECORATOR_API UClass* Z_Construct_UClass_URichTextBlockInlineDecorator();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
	UPackage* Z_Construct_UPackage__Script_RichTextBlockInlineDecorator();
// End Cross Module References
	void URichTextBlockInlineDecorator::StaticRegisterNativesURichTextBlockInlineDecorator()
	{
	}
	UClass* Z_Construct_UClass_URichTextBlockInlineDecorator_NoRegister()
	{
		return URichTextBlockInlineDecorator::StaticClass();
	}
	struct Z_Construct_UClass_URichTextBlockInlineDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URichTextBlockInlineDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlockDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_RichTextBlockInlineDecorator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlockInlineDecorator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows inline styling of text using <span> tags, supporting functionality that used to exist in the engine pre-4.20\n */" },
		{ "IncludePath", "RichTextBlockInlineDecorator.h" },
		{ "ModuleRelativePath", "Public/RichTextBlockInlineDecorator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Allows inline styling of text using <span> tags, supporting functionality that used to exist in the engine pre-4.20" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URichTextBlockInlineDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URichTextBlockInlineDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URichTextBlockInlineDecorator_Statics::ClassParams = {
		&URichTextBlockInlineDecorator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URichTextBlockInlineDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlockInlineDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URichTextBlockInlineDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URichTextBlockInlineDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URichTextBlockInlineDecorator, 1485469075);
	template<> RICHTEXTBLOCKINLINEDECORATOR_API UClass* StaticClass<URichTextBlockInlineDecorator>()
	{
		return URichTextBlockInlineDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URichTextBlockInlineDecorator(Z_Construct_UClass_URichTextBlockInlineDecorator, &URichTextBlockInlineDecorator::StaticClass, TEXT("/Script/RichTextBlockInlineDecorator"), TEXT("URichTextBlockInlineDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URichTextBlockInlineDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
