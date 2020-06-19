// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaFogOfWar/Public/VaFogController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaFogController() {}
// Cross Module References
	VAFOGOFWAR_API UClass* Z_Construct_UClass_UVaFogController_NoRegister();
	VAFOGOFWAR_API UClass* Z_Construct_UClass_UVaFogController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VaFogOfWar();
// End Cross Module References
	void UVaFogController::StaticRegisterNativesUVaFogController()
	{
	}
	UClass* Z_Construct_UClass_UVaFogController_NoRegister()
	{
		return UVaFogController::StaticClass();
	}
	struct Z_Construct_UClass_UVaFogController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaFogController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VaFogOfWar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaFogController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VaFogController.h" },
		{ "ModuleRelativePath", "Public/VaFogController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaFogController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaFogController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVaFogController_Statics::ClassParams = {
		&UVaFogController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVaFogController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVaFogController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVaFogController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVaFogController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaFogController, 4032397715);
	template<> VAFOGOFWAR_API UClass* StaticClass<UVaFogController>()
	{
		return UVaFogController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaFogController(Z_Construct_UClass_UVaFogController, &UVaFogController::StaticClass, TEXT("/Script/VaFogOfWar"), TEXT("UVaFogController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaFogController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
