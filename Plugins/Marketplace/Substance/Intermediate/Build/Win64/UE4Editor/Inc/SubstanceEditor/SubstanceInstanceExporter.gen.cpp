// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceEditor/Classes/SubstanceInstanceExporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceInstanceExporter() {}
// Cross Module References
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceInstanceExporter_NoRegister();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceInstanceExporter();
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// End Cross Module References
	void USubstanceInstanceExporter::StaticRegisterNativesUSubstanceInstanceExporter()
	{
	}
	UClass* Z_Construct_UClass_USubstanceInstanceExporter_NoRegister()
	{
		return USubstanceInstanceExporter::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceInstanceExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceInstanceExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceInstanceExporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SubstanceInstanceExporter.h" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceExporter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceInstanceExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceInstanceExporter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubstanceInstanceExporter_Statics::ClassParams = {
		&USubstanceInstanceExporter::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceInstanceExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceInstanceExporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubstanceInstanceExporter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubstanceInstanceExporter, 703567750);
	template<> SUBSTANCEEDITOR_API UClass* StaticClass<USubstanceInstanceExporter>()
	{
		return USubstanceInstanceExporter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceInstanceExporter(Z_Construct_UClass_USubstanceInstanceExporter, &USubstanceInstanceExporter::StaticClass, TEXT("/Script/SubstanceEditor"), TEXT("USubstanceInstanceExporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceInstanceExporter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
