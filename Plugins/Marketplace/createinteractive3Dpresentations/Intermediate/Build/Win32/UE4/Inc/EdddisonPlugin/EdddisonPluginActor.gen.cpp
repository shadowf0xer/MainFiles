// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdddisonPlugin/Private/EdddisonPluginActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdddisonPluginActor() {}
// Cross Module References
	EDDDISONPLUGIN_API UClass* Z_Construct_UClass_AEdddisonPluginActor_NoRegister();
	EDDDISONPLUGIN_API UClass* Z_Construct_UClass_AEdddisonPluginActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_EdddisonPlugin();
// End Cross Module References
	void AEdddisonPluginActor::StaticRegisterNativesAEdddisonPluginActor()
	{
	}
	UClass* Z_Construct_UClass_AEdddisonPluginActor_NoRegister()
	{
		return AEdddisonPluginActor::StaticClass();
	}
	struct Z_Construct_UClass_AEdddisonPluginActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEdddisonPluginActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EdddisonPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEdddisonPluginActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/************************************************************************/" },
		{ "IncludePath", "EdddisonPluginActor.h" },
		{ "ModuleRelativePath", "Private/EdddisonPluginActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEdddisonPluginActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEdddisonPluginActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEdddisonPluginActor_Statics::ClassParams = {
		&AEdddisonPluginActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEdddisonPluginActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEdddisonPluginActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEdddisonPluginActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEdddisonPluginActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEdddisonPluginActor, 3924969439);
	template<> EDDDISONPLUGIN_API UClass* StaticClass<AEdddisonPluginActor>()
	{
		return AEdddisonPluginActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEdddisonPluginActor(Z_Construct_UClass_AEdddisonPluginActor, &AEdddisonPluginActor::StaticClass, TEXT("/Script/EdddisonPlugin"), TEXT("AEdddisonPluginActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEdddisonPluginActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
