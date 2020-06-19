// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurfaceFootstepSystem/Public/SurfaceFootstepSystemSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurfaceFootstepSystemSettings() {}
// Cross Module References
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_USurfaceFootstepSystemSettings_NoRegister();
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_USurfaceFootstepSystemSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SurfaceFootstepSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void USurfaceFootstepSystemSettings::StaticRegisterNativesUSurfaceFootstepSystemSettings()
	{
	}
	UClass* Z_Construct_UClass_USurfaceFootstepSystemSettings_NoRegister()
	{
		return USurfaceFootstepSystemSettings::StaticClass();
	}
	struct Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultConcurrencyOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultConcurrencyOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAttenuationOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultAttenuationOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlaySound2D_ForLocalPlayer_MetaData[];
#endif
		static void NewProp_bPlaySound2D_ForLocalPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaySound2D_ForLocalPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFootstepActorLifeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultFootstepActorLifeSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTraceComplex_MetaData[];
#endif
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTraceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultTraceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FootstepObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FootstepObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FootstepCategories;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootstepCategories_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SurfaceFootstepSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Editor settings for the Surface Footstep System plugin.\n */" },
		{ "IncludePath", "SurfaceFootstepSystemSettings.h" },
		{ "ModuleRelativePath", "Public/SurfaceFootstepSystemSettings.h" },
		{ "ToolTip", "Editor settings for the Surface Footstep System plugin." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultConcurrencyOverride_MetaData[] = {
		{ "AllowedClasses", "SoundConcurrency" },
		{ "Category", "Sound" },
		{ "Comment", "/** Used as a default asset in Footstep Data Assets. */" },
		{ "ModuleRelativePath", "Public/SurfaceFootstepSystemSettings.h" },
		{ "ToolTip", "Used as a default asset in Footstep Data Assets." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultConcurrencyOverride = { "DefaultConcurrencyOverride", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurfaceFootstepSystemSettings, DefaultConcurrencyOverride), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultConcurrencyOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultConcurrencyOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultAttenuationOverride_MetaData[] = {
		{ "AllowedClasses", "SoundAttenuation" },
		{ "Category", "Sound" },
		{ "Comment", "/** Used as a default asset in Footstep Data Assets. */" },
		{ "ModuleRelativePath", "Public/SurfaceFootstepSystemSettings.h" },
		{ "ToolTip", "Used as a default asset in Footstep Data Assets." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultAttenuationOverride = { "DefaultAttenuationOverride", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurfaceFootstepSystemSettings, DefaultAttenuationOverride), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultAttenuationOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultAttenuationOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_bPlaySound2D_ForLocalPlayer_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Whether footstep SFX should be a 2D sound for a Local Player. If the footstep causer doesn't inherit from a Pawn class, 2D sound won't be spawned. */" },
		{ "ModuleRelativePath", "Public/SurfaceFootstepSystemSettings.h" },
		{ "ToolTip", "Whether footstep SFX should be a 2D sound for a Local Player. If the footstep causer doesn't inherit from a Pawn class, 2D sound won't be spawned." },
	};
#endif
	void Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_bPlaySound2D_ForLocalPlayer_SetBit(void* Obj)
	{
		((USurfaceFootstepSystemSettings*)Obj)->bPlaySound2D_ForLocalPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_bPlaySound2D_ForLocalPlayer = { "bPlaySound2D_ForLocalPlayer", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurfaceFootstepSystemSettings), &Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_bPlaySound2D_ForLocalPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_bPlaySound2D_ForLocalPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_bPlaySound2D_ForLocalPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultFootstepActorLifeSpan_MetaData[] = {
		{ "Category", "Pooling" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The default visibility time of spawned Footstep Actors. */" },
		{ "ModuleRelativePath", "Public/SurfaceFootstepSystemSettings.h" },
		{ "ToolTip", "The default visibility time of spawned Footstep Actors." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultFootstepActorLifeSpan = { "DefaultFootstepActorLifeSpan", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurfaceFootstepSystemSettings, DefaultFootstepActorLifeSpan), METADATA_PARAMS(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultFootstepActorLifeSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultFootstepActorLifeSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_MaxPoolSize_MetaData[] = {
		{ "Category", "Pooling" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum amount of spawned Footstep Actors. */" },
		{ "ModuleRelativePath", "Public/SurfaceFootstepSystemSettings.h" },
		{ "ToolTip", "Maximum amount of spawned Footstep Actors." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_MaxPoolSize = { "MaxPoolSize", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurfaceFootstepSystemSettings, MaxPoolSize), METADATA_PARAMS(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_MaxPoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_MaxPoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_bTraceComplex_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** Whether complex or simple collision should be used in trace. */" },
		{ "ModuleRelativePath", "Public/SurfaceFootstepSystemSettings.h" },
		{ "ToolTip", "Whether complex or simple collision should be used in trace." },
	};
#endif
	void Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((USurfaceFootstepSystemSettings*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x00200c0000014001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USurfaceFootstepSystemSettings), &Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_bTraceComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_bTraceComplex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultTraceLength_MetaData[] = {
		{ "Category", "Trace" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Used as a default value in Footstep Component. */" },
		{ "ModuleRelativePath", "Public/SurfaceFootstepSystemSettings.h" },
		{ "ToolTip", "Used as a default value in Footstep Component." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultTraceLength = { "DefaultTraceLength", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurfaceFootstepSystemSettings, DefaultTraceLength), METADATA_PARAMS(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultTraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultTraceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_FootstepObjectTypes_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** On which objects types footstep should be spawned. If this array is empty, footstep will be spawned on every object type. */" },
		{ "ModuleRelativePath", "Public/SurfaceFootstepSystemSettings.h" },
		{ "ToolTip", "On which objects types footstep should be spawned. If this array is empty, footstep will be spawned on every object type." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_FootstepObjectTypes = { "FootstepObjectTypes", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurfaceFootstepSystemSettings, FootstepObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_FootstepObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_FootstepObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_FootstepObjectTypes_Inner = { "FootstepObjectTypes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_FootstepCategories_MetaData[] = {
		{ "Categories", "Footstep" },
		{ "Category", "General" },
		{ "Comment", "/** Put your footstep categories (for example: Footstep.Run, Footstep.Walk, Footstep.Crouch, etc.) here. */" },
		{ "ModuleRelativePath", "Public/SurfaceFootstepSystemSettings.h" },
		{ "ToolTip", "Put your footstep categories (for example: Footstep.Run, Footstep.Walk, Footstep.Crouch, etc.) here." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_FootstepCategories = { "FootstepCategories", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurfaceFootstepSystemSettings, FootstepCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_FootstepCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_FootstepCategories_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_FootstepCategories_Inner = { "FootstepCategories", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultConcurrencyOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultAttenuationOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_bPlaySound2D_ForLocalPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultFootstepActorLifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_MaxPoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_DefaultTraceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_FootstepObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_FootstepObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_FootstepCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::NewProp_FootstepCategories_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurfaceFootstepSystemSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::ClassParams = {
		&USurfaceFootstepSystemSettings::StaticClass,
		"Plugins",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurfaceFootstepSystemSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurfaceFootstepSystemSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurfaceFootstepSystemSettings, 2484071275);
	template<> SURFACEFOOTSTEPSYSTEM_API UClass* StaticClass<USurfaceFootstepSystemSettings>()
	{
		return USurfaceFootstepSystemSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurfaceFootstepSystemSettings(Z_Construct_UClass_USurfaceFootstepSystemSettings, &USurfaceFootstepSystemSettings::StaticClass, TEXT("/Script/SurfaceFootstepSystem"), TEXT("USurfaceFootstepSystemSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurfaceFootstepSystemSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
