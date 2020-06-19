// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdddisonPlugin/Private/Actors/EdddisonActorBBoxComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdddisonActorBBoxComponent() {}
// Cross Module References
	EDDDISONPLUGIN_API UClass* Z_Construct_UClass_UEdddisonActorBBoxComponent_NoRegister();
	EDDDISONPLUGIN_API UClass* Z_Construct_UClass_UEdddisonActorBBoxComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_EdddisonPlugin();
// End Cross Module References
	void UEdddisonActorBBoxComponent::StaticRegisterNativesUEdddisonActorBBoxComponent()
	{
	}
	UClass* Z_Construct_UClass_UEdddisonActorBBoxComponent_NoRegister()
	{
		return UEdddisonActorBBoxComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEdddisonActorBBoxComponent_Statics
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
	UObject* (*const Z_Construct_UClass_UEdddisonActorBBoxComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EdddisonPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdddisonActorBBoxComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// use the PostEditChange delegate from AActor to react on all changes\n//#define USE_POST_EDIT_CHANGE 1\n" },
		{ "IncludePath", "Actors/EdddisonActorBBoxComponent.h" },
		{ "ModuleRelativePath", "Private/Actors/EdddisonActorBBoxComponent.h" },
		{ "ToolTip", "use the PostEditChange delegate from AActor to react on all changes\n#define USE_POST_EDIT_CHANGE 1" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdddisonActorBBoxComponent_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "edddison" },
		{ "ModuleRelativePath", "Private/Actors/EdddisonActorBBoxComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdddisonActorBBoxComponent_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdddisonActorBBoxComponent, ID), METADATA_PARAMS(Z_Construct_UClass_UEdddisonActorBBoxComponent_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdddisonActorBBoxComponent_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdddisonActorBBoxComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdddisonActorBBoxComponent_Statics::NewProp_ID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdddisonActorBBoxComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdddisonActorBBoxComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdddisonActorBBoxComponent_Statics::ClassParams = {
		&UEdddisonActorBBoxComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdddisonActorBBoxComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdddisonActorBBoxComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEdddisonActorBBoxComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdddisonActorBBoxComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdddisonActorBBoxComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdddisonActorBBoxComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdddisonActorBBoxComponent, 264812773);
	template<> EDDDISONPLUGIN_API UClass* StaticClass<UEdddisonActorBBoxComponent>()
	{
		return UEdddisonActorBBoxComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdddisonActorBBoxComponent(Z_Construct_UClass_UEdddisonActorBBoxComponent, &UEdddisonActorBBoxComponent::StaticClass, TEXT("/Script/EdddisonPlugin"), TEXT("UEdddisonActorBBoxComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdddisonActorBBoxComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
