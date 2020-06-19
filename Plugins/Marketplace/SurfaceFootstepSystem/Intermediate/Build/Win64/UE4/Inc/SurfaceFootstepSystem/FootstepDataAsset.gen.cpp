// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurfaceFootstepSystem/Public/FootstepDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootstepDataAsset() {}
// Cross Module References
	SURFACEFOOTSTEPSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FFootstepData();
	UPackage* Z_Construct_UPackage__Script_SurfaceFootstepSystem();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_UFootstepDataAsset_NoRegister();
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_UFootstepDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_USurfaceFootstepSystemSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FFootstepData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SURFACEFOOTSTEPSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FFootstepData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootstepData, Z_Construct_UPackage__Script_SurfaceFootstepSystem(), TEXT("FootstepData"), sizeof(FFootstepData), Get_Z_Construct_UScriptStruct_FFootstepData_Hash());
	}
	return Singleton;
}
template<> SURFACEFOOTSTEPSYSTEM_API UScriptStruct* StaticStruct<FFootstepData>()
{
	return FFootstepData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFootstepData(FFootstepData::StaticStruct, TEXT("/Script/SurfaceFootstepSystem"), TEXT("FootstepData"), false, nullptr, nullptr);
static struct FScriptStruct_SurfaceFootstepSystem_StaticRegisterNativesFFootstepData
{
	FScriptStruct_SurfaceFootstepSystem_StaticRegisterNativesFFootstepData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FootstepData")),new UScriptStruct::TCppStructOps<FFootstepData>);
	}
} ScriptStruct_SurfaceFootstepSystem_StaticRegisterNativesFFootstepData;
	struct Z_Construct_UScriptStruct_FFootstepData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NiagaraParticles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraParticles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Particles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sounds_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FootstepDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFootstepData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootstepData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_NiagaraParticles_MetaData[] = {
		{ "Category", "Footstep|Particle" },
		{ "Comment", "/** A particle will be taken randomly from both Particles and Niagara Particles arrays. */" },
		{ "ModuleRelativePath", "Public/FootstepDataAsset.h" },
		{ "ToolTip", "A particle will be taken randomly from both Particles and Niagara Particles arrays." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_NiagaraParticles = { "NiagaraParticles", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootstepData, NiagaraParticles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_NiagaraParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_NiagaraParticles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_NiagaraParticles_Inner = { "NiagaraParticles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_Particles_MetaData[] = {
		{ "Category", "Footstep|Particle" },
		{ "Comment", "/** A particle will be taken randomly from both Particles and Niagara Particles arrays. */" },
		{ "ModuleRelativePath", "Public/FootstepDataAsset.h" },
		{ "ToolTip", "A particle will be taken randomly from both Particles and Niagara Particles arrays." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_Particles = { "Particles", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootstepData, Particles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_Particles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_Particles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_Particles_Inner = { "Particles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_Sounds_MetaData[] = {
		{ "Category", "Footstep|Sound" },
		{ "Comment", "/** Sound will be played randomly. */" },
		{ "ModuleRelativePath", "Public/FootstepDataAsset.h" },
		{ "ToolTip", "Sound will be played randomly." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_Sounds = { "Sounds", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootstepData, Sounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_Sounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_Sounds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_Sounds_Inner = { "Sounds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootstepData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_NiagaraParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_NiagaraParticles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_Particles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_Particles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_Sounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepData_Statics::NewProp_Sounds_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootstepData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SurfaceFootstepSystem,
		nullptr,
		&NewStructOps,
		"FootstepData",
		sizeof(FFootstepData),
		alignof(FFootstepData),
		Z_Construct_UScriptStruct_FFootstepData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFootstepData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFootstepData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SurfaceFootstepSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FootstepData"), sizeof(FFootstepData), Get_Z_Construct_UScriptStruct_FFootstepData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFootstepData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFootstepData_Hash() { return 327844703U; }
	void UFootstepDataAsset::StaticRegisterNativesUFootstepDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UFootstepDataAsset_NoRegister()
	{
		return UFootstepDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UFootstepDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FootstepSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepLifeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootstepLifeSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxParticleScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxParticleScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinParticleScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinParticleScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConcurrencySettingsOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettingsOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettingsOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettingsOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FootstepData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootstepData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootstepData_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFootstepDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SurfaceFootstepSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepDataAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Data asset which stores footstep audio-visual data from the Surface Footstep System plugin.\n */" },
		{ "IncludePath", "FootstepDataAsset.h" },
		{ "ModuleRelativePath", "Public/FootstepDataAsset.h" },
		{ "ToolTip", "Data asset which stores footstep audio-visual data from the Surface Footstep System plugin." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/FootstepDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepSettings = { "FootstepSettings", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepDataAsset, FootstepSettings), Z_Construct_UClass_USurfaceFootstepSystemSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepLifeSpan_MetaData[] = {
		{ "Category", "Footstep|Pooling" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The visibility time of a spawned Footstep Actor. */" },
		{ "ModuleRelativePath", "Public/FootstepDataAsset.h" },
		{ "ToolTip", "The visibility time of a spawned Footstep Actor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepLifeSpan = { "FootstepLifeSpan", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepDataAsset, FootstepLifeSpan), METADATA_PARAMS(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepLifeSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepLifeSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MaxParticleScale_MetaData[] = {
		{ "Category", "Footstep|Particle" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Maximum scale of the Particle. */" },
		{ "ModuleRelativePath", "Public/FootstepDataAsset.h" },
		{ "ToolTip", "Maximum scale of the Particle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MaxParticleScale = { "MaxParticleScale", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepDataAsset, MaxParticleScale), METADATA_PARAMS(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MaxParticleScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MaxParticleScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MinParticleScale_MetaData[] = {
		{ "Category", "Footstep|Particle" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Minimum scale of the Particle. */" },
		{ "ModuleRelativePath", "Public/FootstepDataAsset.h" },
		{ "ToolTip", "Minimum scale of the Particle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MinParticleScale = { "MinParticleScale", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepDataAsset, MinParticleScale), METADATA_PARAMS(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MinParticleScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MinParticleScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_ConcurrencySettingsOverride_MetaData[] = {
		{ "Category", "Footstep|Sound" },
		{ "Comment", "/** If none, Concurrency Settings from the Sound Base will be applied. */" },
		{ "ModuleRelativePath", "Public/FootstepDataAsset.h" },
		{ "ToolTip", "If none, Concurrency Settings from the Sound Base will be applied." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_ConcurrencySettingsOverride = { "ConcurrencySettingsOverride", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepDataAsset, ConcurrencySettingsOverride), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_ConcurrencySettingsOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_ConcurrencySettingsOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_AttenuationSettingsOverride_MetaData[] = {
		{ "Category", "Footstep|Sound" },
		{ "Comment", "/** If none, Attenuation Settings from the Sound Base will be applied. */" },
		{ "ModuleRelativePath", "Public/FootstepDataAsset.h" },
		{ "ToolTip", "If none, Attenuation Settings from the Sound Base will be applied." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_AttenuationSettingsOverride = { "AttenuationSettingsOverride", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepDataAsset, AttenuationSettingsOverride), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_AttenuationSettingsOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_AttenuationSettingsOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MaxPitch_MetaData[] = {
		{ "Category", "Footstep|Sound" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Maximum pitch multiplier. */" },
		{ "ModuleRelativePath", "Public/FootstepDataAsset.h" },
		{ "ToolTip", "Maximum pitch multiplier." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MaxPitch = { "MaxPitch", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepDataAsset, MaxPitch), METADATA_PARAMS(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MaxPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MaxPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MinPitch_MetaData[] = {
		{ "Category", "Footstep|Sound" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Minimum pitch multiplier. */" },
		{ "ModuleRelativePath", "Public/FootstepDataAsset.h" },
		{ "ToolTip", "Minimum pitch multiplier." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MinPitch = { "MinPitch", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepDataAsset, MinPitch), METADATA_PARAMS(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MinPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MinPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MaxVolume_MetaData[] = {
		{ "Category", "Footstep|Sound" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Maximum volume multiplier. */" },
		{ "ModuleRelativePath", "Public/FootstepDataAsset.h" },
		{ "ToolTip", "Maximum volume multiplier." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MaxVolume = { "MaxVolume", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepDataAsset, MaxVolume), METADATA_PARAMS(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MaxVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MaxVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MinVolume_MetaData[] = {
		{ "Category", "Footstep|Sound" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Minimum volume multiplier. */" },
		{ "ModuleRelativePath", "Public/FootstepDataAsset.h" },
		{ "ToolTip", "Minimum volume multiplier." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MinVolume = { "MinVolume", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepDataAsset, MinVolume), METADATA_PARAMS(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MinVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MinVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepData_MetaData[] = {
		{ "Categories", "Footstep" },
		{ "Category", "Footstep" },
		{ "Comment", "/** FX assets. Categories have to be the same as the ones from the Surface Footstep System Settings in the Project Settings. */" },
		{ "ModuleRelativePath", "Public/FootstepDataAsset.h" },
		{ "ToolTip", "FX assets. Categories have to be the same as the ones from the Surface Footstep System Settings in the Project Settings." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepData = { "FootstepData", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepDataAsset, FootstepData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepData_Key_KeyProp = { "FootstepData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepData_ValueProp = { "FootstepData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFootstepData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFootstepDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepLifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MaxParticleScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MinParticleScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_ConcurrencySettingsOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_AttenuationSettingsOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MaxPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MinPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MaxVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_MinVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepDataAsset_Statics::NewProp_FootstepData_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFootstepDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFootstepDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFootstepDataAsset_Statics::ClassParams = {
		&UFootstepDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFootstepDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFootstepDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFootstepDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFootstepDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFootstepDataAsset, 2107545903);
	template<> SURFACEFOOTSTEPSYSTEM_API UClass* StaticClass<UFootstepDataAsset>()
	{
		return UFootstepDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFootstepDataAsset(Z_Construct_UClass_UFootstepDataAsset, &UFootstepDataAsset::StaticClass, TEXT("/Script/SurfaceFootstepSystem"), TEXT("UFootstepDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFootstepDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
