// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DxyzLiveLinkPlugin/Private/DxyzAnimFrame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDxyzAnimFrame() {}
// Cross Module References
	DXYZLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UDxyzAnimFrame_NoRegister();
	DXYZLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UDxyzAnimFrame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
// End Cross Module References
	void UDxyzAnimFrame::StaticRegisterNativesUDxyzAnimFrame()
	{
	}
	UClass* Z_Construct_UClass_UDxyzAnimFrame_NoRegister()
	{
		return UDxyzAnimFrame::StaticClass();
	}
	struct Z_Construct_UClass_UDxyzAnimFrame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDxyzAnimFrame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzAnimFrame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "DxyzAnimFrame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/DxyzAnimFrame.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDxyzAnimFrame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDxyzAnimFrame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDxyzAnimFrame_Statics::ClassParams = {
		&UDxyzAnimFrame::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDxyzAnimFrame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzAnimFrame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDxyzAnimFrame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDxyzAnimFrame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDxyzAnimFrame, 37405385);
	template<> DXYZLIVELINKPLUGIN_API UClass* StaticClass<UDxyzAnimFrame>()
	{
		return UDxyzAnimFrame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDxyzAnimFrame(Z_Construct_UClass_UDxyzAnimFrame, &UDxyzAnimFrame::StaticClass, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("UDxyzAnimFrame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDxyzAnimFrame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
