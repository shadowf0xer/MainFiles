// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/AnyObject_LinterDummyClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnyObject_LinterDummyClass() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_UAnyObject_LinterDummyClass_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_UAnyObject_LinterDummyClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Linter();
// End Cross Module References
	void UAnyObject_LinterDummyClass::StaticRegisterNativesUAnyObject_LinterDummyClass()
	{
	}
	UClass* Z_Construct_UClass_UAnyObject_LinterDummyClass_NoRegister()
	{
		return UAnyObject_LinterDummyClass::StaticClass();
	}
	struct Z_Construct_UClass_UAnyObject_LinterDummyClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnyObject_LinterDummyClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnyObject_LinterDummyClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnyObject_LinterDummyClass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnyObject_LinterDummyClass.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnyObject_LinterDummyClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnyObject_LinterDummyClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnyObject_LinterDummyClass_Statics::ClassParams = {
		&UAnyObject_LinterDummyClass::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnyObject_LinterDummyClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnyObject_LinterDummyClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnyObject_LinterDummyClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnyObject_LinterDummyClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnyObject_LinterDummyClass, 777237321);
	template<> LINTER_API UClass* StaticClass<UAnyObject_LinterDummyClass>()
	{
		return UAnyObject_LinterDummyClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnyObject_LinterDummyClass(Z_Construct_UClass_UAnyObject_LinterDummyClass, &UAnyObject_LinterDummyClass::StaticClass, TEXT("/Script/Linter"), TEXT("UAnyObject_LinterDummyClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnyObject_LinterDummyClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
