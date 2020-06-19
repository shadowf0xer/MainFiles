// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdddisonPlugin/Private/Actors/EdddisonActorCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdddisonActorCameraComponent() {}
// Cross Module References
	EDDDISONPLUGIN_API UClass* Z_Construct_UClass_UEdddisonActorCameraComponent_NoRegister();
	EDDDISONPLUGIN_API UClass* Z_Construct_UClass_UEdddisonActorCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_EdddisonPlugin();
// End Cross Module References
	void UEdddisonActorCameraComponent::StaticRegisterNativesUEdddisonActorCameraComponent()
	{
	}
	UClass* Z_Construct_UClass_UEdddisonActorCameraComponent_NoRegister()
	{
		return UEdddisonActorCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEdddisonActorCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdddisonActorCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EdddisonPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdddisonActorCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Actors/EdddisonActorCameraComponent.h" },
		{ "ModuleRelativePath", "Private/Actors/EdddisonActorCameraComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdddisonActorCameraComponent_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "edddison" },
		{ "ModuleRelativePath", "Private/Actors/EdddisonActorCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdddisonActorCameraComponent_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdddisonActorCameraComponent, ID), METADATA_PARAMS(Z_Construct_UClass_UEdddisonActorCameraComponent_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdddisonActorCameraComponent_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdddisonActorCameraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdddisonActorCameraComponent_Statics::NewProp_ID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdddisonActorCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdddisonActorCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdddisonActorCameraComponent_Statics::ClassParams = {
		&UEdddisonActorCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdddisonActorCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdddisonActorCameraComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEdddisonActorCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdddisonActorCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdddisonActorCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdddisonActorCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdddisonActorCameraComponent, 240236971);
	template<> EDDDISONPLUGIN_API UClass* StaticClass<UEdddisonActorCameraComponent>()
	{
		return UEdddisonActorCameraComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdddisonActorCameraComponent(Z_Construct_UClass_UEdddisonActorCameraComponent, &UEdddisonActorCameraComponent::StaticClass, TEXT("/Script/EdddisonPlugin"), TEXT("UEdddisonActorCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdddisonActorCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
