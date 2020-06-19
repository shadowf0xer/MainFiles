// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicNodeEditor/Public/MagicNodeEditor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicNodeEditor() {}
// Cross Module References
	MAGICNODEEDITOR_API UClass* Z_Construct_UClass_UMGC_ScriptFactory_NoRegister();
	MAGICNODEEDITOR_API UClass* Z_Construct_UClass_UMGC_ScriptFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MagicNodeEditor();
// End Cross Module References
	void UMGC_ScriptFactory::StaticRegisterNativesUMGC_ScriptFactory()
	{
	}
	UClass* Z_Construct_UClass_UMGC_ScriptFactory_NoRegister()
	{
		return UMGC_ScriptFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMGC_ScriptFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGC_ScriptFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_ScriptFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "MagicNodeEditor.h" },
		{ "ModuleRelativePath", "Public/MagicNodeEditor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGC_ScriptFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGC_ScriptFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMGC_ScriptFactory_Statics::ClassParams = {
		&UMGC_ScriptFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMGC_ScriptFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_ScriptFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGC_ScriptFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMGC_ScriptFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMGC_ScriptFactory, 2121518654);
	template<> MAGICNODEEDITOR_API UClass* StaticClass<UMGC_ScriptFactory>()
	{
		return UMGC_ScriptFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMGC_ScriptFactory(Z_Construct_UClass_UMGC_ScriptFactory, &UMGC_ScriptFactory::StaticClass, TEXT("/Script/MagicNodeEditor"), TEXT("UMGC_ScriptFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGC_ScriptFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
