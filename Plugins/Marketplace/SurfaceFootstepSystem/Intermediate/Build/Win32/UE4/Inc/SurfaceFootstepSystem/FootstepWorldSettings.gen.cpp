// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurfaceFootstepSystem/Public/FootstepWorldSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootstepWorldSettings() {}
// Cross Module References
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_AFootstepWorldSettings_NoRegister();
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_AFootstepWorldSettings();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings();
	UPackage* Z_Construct_UPackage__Script_SurfaceFootstepSystem();
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_UFoostepPoolingManager_NoRegister();
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_UFootstepInterface_NoRegister();
// End Cross Module References
	void AFootstepWorldSettings::StaticRegisterNativesAFootstepWorldSettings()
	{
	}
	UClass* Z_Construct_UClass_AFootstepWorldSettings_NoRegister()
	{
		return AFootstepWorldSettings::StaticClass();
	}
	struct Z_Construct_UClass_AFootstepWorldSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolingManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PoolingManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFootstepWorldSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWorldSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_SurfaceFootstepSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootstepWorldSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A World Settings class from the Surface Footstep System plugin. Use it if possible. If not, override the same interface methods in your C++ World Settings class.\n */" },
		{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication Input Movement Collision Utilities|Transformation" },
		{ "IncludePath", "FootstepWorldSettings.h" },
		{ "ModuleRelativePath", "Public/FootstepWorldSettings.h" },
		{ "NotBlueprintType", "true" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A World Settings class from the Surface Footstep System plugin. Use it if possible. If not, override the same interface methods in your C++ World Settings class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootstepWorldSettings_Statics::NewProp_PoolingManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/FootstepWorldSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFootstepWorldSettings_Statics::NewProp_PoolingManager = { "PoolingManager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootstepWorldSettings, PoolingManager), Z_Construct_UClass_UFoostepPoolingManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFootstepWorldSettings_Statics::NewProp_PoolingManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepWorldSettings_Statics::NewProp_PoolingManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFootstepWorldSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootstepWorldSettings_Statics::NewProp_PoolingManager,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFootstepWorldSettings_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFootstepInterface_NoRegister, (int32)VTABLE_OFFSET(AFootstepWorldSettings, IFootstepInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFootstepWorldSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFootstepWorldSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFootstepWorldSettings_Statics::ClassParams = {
		&AFootstepWorldSettings::StaticClass,
		"game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFootstepWorldSettings_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepWorldSettings_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFootstepWorldSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepWorldSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFootstepWorldSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFootstepWorldSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFootstepWorldSettings, 1610171836);
	template<> SURFACEFOOTSTEPSYSTEM_API UClass* StaticClass<AFootstepWorldSettings>()
	{
		return AFootstepWorldSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFootstepWorldSettings(Z_Construct_UClass_AFootstepWorldSettings, &AFootstepWorldSettings::StaticClass, TEXT("/Script/SurfaceFootstepSystem"), TEXT("AFootstepWorldSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFootstepWorldSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
