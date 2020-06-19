// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FastNoiseGenerator/Public/FastNoiseWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFastNoiseWrapper() {}
// Cross Module References
	FASTNOISEGENERATOR_API UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType();
	UPackage* Z_Construct_UPackage__Script_FastNoiseGenerator();
	FASTNOISEGENERATOR_API UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction();
	FASTNOISEGENERATOR_API UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType();
	FASTNOISEGENERATOR_API UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp();
	FASTNOISEGENERATOR_API UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType();
	FASTNOISEGENERATOR_API UClass* Z_Construct_UClass_UFastNoiseWrapper_NoRegister();
	FASTNOISEGENERATOR_API UClass* Z_Construct_UClass_UFastNoiseWrapper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EFastNoise_CellularReturnType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType, Z_Construct_UPackage__Script_FastNoiseGenerator(), TEXT("EFastNoise_CellularReturnType"));
		}
		return Singleton;
	}
	template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_CellularReturnType>()
	{
		return EFastNoise_CellularReturnType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFastNoise_CellularReturnType(EFastNoise_CellularReturnType_StaticEnum, TEXT("/Script/FastNoiseGenerator"), TEXT("EFastNoise_CellularReturnType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType_Hash() { return 2069214319U; }
	UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FastNoiseGenerator();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFastNoise_CellularReturnType"), 0, Get_Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFastNoise_CellularReturnType::CellValue", (int64)EFastNoise_CellularReturnType::CellValue },
				{ "EFastNoise_CellularReturnType::Distance", (int64)EFastNoise_CellularReturnType::Distance },
				{ "EFastNoise_CellularReturnType::Distance2", (int64)EFastNoise_CellularReturnType::Distance2 },
				{ "EFastNoise_CellularReturnType::Distance2Add", (int64)EFastNoise_CellularReturnType::Distance2Add },
				{ "EFastNoise_CellularReturnType::Distance2Sub", (int64)EFastNoise_CellularReturnType::Distance2Sub },
				{ "EFastNoise_CellularReturnType::Distance2Mul", (int64)EFastNoise_CellularReturnType::Distance2Mul },
				{ "EFastNoise_CellularReturnType::Distance2Div", (int64)EFastNoise_CellularReturnType::Distance2Div },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CellValue.Name", "EFastNoise_CellularReturnType::CellValue" },
				{ "Distance.Comment", "/*NoiseLookup,*/" },
				{ "Distance.Name", "EFastNoise_CellularReturnType::Distance" },
				{ "Distance.ToolTip", "NoiseLookup," },
				{ "Distance2.Name", "EFastNoise_CellularReturnType::Distance2" },
				{ "Distance2Add.Name", "EFastNoise_CellularReturnType::Distance2Add" },
				{ "Distance2Div.Name", "EFastNoise_CellularReturnType::Distance2Div" },
				{ "Distance2Mul.Name", "EFastNoise_CellularReturnType::Distance2Mul" },
				{ "Distance2Sub.Name", "EFastNoise_CellularReturnType::Distance2Sub" },
				{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FastNoiseGenerator,
				nullptr,
				"EFastNoise_CellularReturnType",
				"EFastNoise_CellularReturnType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFastNoise_CellularDistanceFunction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction, Z_Construct_UPackage__Script_FastNoiseGenerator(), TEXT("EFastNoise_CellularDistanceFunction"));
		}
		return Singleton;
	}
	template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_CellularDistanceFunction>()
	{
		return EFastNoise_CellularDistanceFunction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFastNoise_CellularDistanceFunction(EFastNoise_CellularDistanceFunction_StaticEnum, TEXT("/Script/FastNoiseGenerator"), TEXT("EFastNoise_CellularDistanceFunction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction_Hash() { return 636813465U; }
	UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FastNoiseGenerator();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFastNoise_CellularDistanceFunction"), 0, Get_Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFastNoise_CellularDistanceFunction::Euclidean", (int64)EFastNoise_CellularDistanceFunction::Euclidean },
				{ "EFastNoise_CellularDistanceFunction::Manhattan", (int64)EFastNoise_CellularDistanceFunction::Manhattan },
				{ "EFastNoise_CellularDistanceFunction::Natural", (int64)EFastNoise_CellularDistanceFunction::Natural },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Euclidean.Name", "EFastNoise_CellularDistanceFunction::Euclidean" },
				{ "Manhattan.Name", "EFastNoise_CellularDistanceFunction::Manhattan" },
				{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
				{ "Natural.Name", "EFastNoise_CellularDistanceFunction::Natural" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FastNoiseGenerator,
				nullptr,
				"EFastNoise_CellularDistanceFunction",
				"EFastNoise_CellularDistanceFunction",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFastNoise_FractalType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType, Z_Construct_UPackage__Script_FastNoiseGenerator(), TEXT("EFastNoise_FractalType"));
		}
		return Singleton;
	}
	template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_FractalType>()
	{
		return EFastNoise_FractalType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFastNoise_FractalType(EFastNoise_FractalType_StaticEnum, TEXT("/Script/FastNoiseGenerator"), TEXT("EFastNoise_FractalType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType_Hash() { return 762945883U; }
	UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FastNoiseGenerator();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFastNoise_FractalType"), 0, Get_Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFastNoise_FractalType::FBM", (int64)EFastNoise_FractalType::FBM },
				{ "EFastNoise_FractalType::Billow", (int64)EFastNoise_FractalType::Billow },
				{ "EFastNoise_FractalType::RigidMulti", (int64)EFastNoise_FractalType::RigidMulti },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Billow.Name", "EFastNoise_FractalType::Billow" },
				{ "BlueprintType", "true" },
				{ "FBM.Name", "EFastNoise_FractalType::FBM" },
				{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
				{ "RigidMulti.Name", "EFastNoise_FractalType::RigidMulti" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FastNoiseGenerator,
				nullptr,
				"EFastNoise_FractalType",
				"EFastNoise_FractalType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFastNoise_Interp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp, Z_Construct_UPackage__Script_FastNoiseGenerator(), TEXT("EFastNoise_Interp"));
		}
		return Singleton;
	}
	template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_Interp>()
	{
		return EFastNoise_Interp_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFastNoise_Interp(EFastNoise_Interp_StaticEnum, TEXT("/Script/FastNoiseGenerator"), TEXT("EFastNoise_Interp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp_Hash() { return 1061822945U; }
	UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FastNoiseGenerator();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFastNoise_Interp"), 0, Get_Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFastNoise_Interp::Linear", (int64)EFastNoise_Interp::Linear },
				{ "EFastNoise_Interp::Hermite", (int64)EFastNoise_Interp::Hermite },
				{ "EFastNoise_Interp::Quintic", (int64)EFastNoise_Interp::Quintic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Hermite.Name", "EFastNoise_Interp::Hermite" },
				{ "Linear.Name", "EFastNoise_Interp::Linear" },
				{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
				{ "Quintic.Name", "EFastNoise_Interp::Quintic" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FastNoiseGenerator,
				nullptr,
				"EFastNoise_Interp",
				"EFastNoise_Interp",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFastNoise_NoiseType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType, Z_Construct_UPackage__Script_FastNoiseGenerator(), TEXT("EFastNoise_NoiseType"));
		}
		return Singleton;
	}
	template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_NoiseType>()
	{
		return EFastNoise_NoiseType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFastNoise_NoiseType(EFastNoise_NoiseType_StaticEnum, TEXT("/Script/FastNoiseGenerator"), TEXT("EFastNoise_NoiseType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType_Hash() { return 326774168U; }
	UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FastNoiseGenerator();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFastNoise_NoiseType"), 0, Get_Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFastNoise_NoiseType::Value", (int64)EFastNoise_NoiseType::Value },
				{ "EFastNoise_NoiseType::ValueFractal", (int64)EFastNoise_NoiseType::ValueFractal },
				{ "EFastNoise_NoiseType::Perlin", (int64)EFastNoise_NoiseType::Perlin },
				{ "EFastNoise_NoiseType::PerlinFractal", (int64)EFastNoise_NoiseType::PerlinFractal },
				{ "EFastNoise_NoiseType::Simplex", (int64)EFastNoise_NoiseType::Simplex },
				{ "EFastNoise_NoiseType::SimplexFractal", (int64)EFastNoise_NoiseType::SimplexFractal },
				{ "EFastNoise_NoiseType::Cellular", (int64)EFastNoise_NoiseType::Cellular },
				{ "EFastNoise_NoiseType::WhiteNoise", (int64)EFastNoise_NoiseType::WhiteNoise },
				{ "EFastNoise_NoiseType::Cubic", (int64)EFastNoise_NoiseType::Cubic },
				{ "EFastNoise_NoiseType::CubicFractal", (int64)EFastNoise_NoiseType::CubicFractal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cellular.Name", "EFastNoise_NoiseType::Cellular" },
				{ "Comment", "// Fast Noise UE4 enum wrappers\n" },
				{ "Cubic.Name", "EFastNoise_NoiseType::Cubic" },
				{ "CubicFractal.Name", "EFastNoise_NoiseType::CubicFractal" },
				{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
				{ "Perlin.Name", "EFastNoise_NoiseType::Perlin" },
				{ "PerlinFractal.Name", "EFastNoise_NoiseType::PerlinFractal" },
				{ "Simplex.Name", "EFastNoise_NoiseType::Simplex" },
				{ "SimplexFractal.Name", "EFastNoise_NoiseType::SimplexFractal" },
				{ "ToolTip", "Fast Noise UE4 enum wrappers" },
				{ "Value.Name", "EFastNoise_NoiseType::Value" },
				{ "ValueFractal.Name", "EFastNoise_NoiseType::ValueFractal" },
				{ "WhiteNoise.Name", "EFastNoise_NoiseType::WhiteNoise" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FastNoiseGenerator,
				nullptr,
				"EFastNoise_NoiseType",
				"EFastNoise_NoiseType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetReturnType)
	{
		P_GET_ENUM(EFastNoise_CellularReturnType,Z_Param_cellularReturnType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReturnType(EFastNoise_CellularReturnType(Z_Param_cellularReturnType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetDistanceFunction)
	{
		P_GET_ENUM(EFastNoise_CellularDistanceFunction,Z_Param_distanceFunction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDistanceFunction(EFastNoise_CellularDistanceFunction(Z_Param_distanceFunction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetCellularJitter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_cellularJitter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCellularJitter(Z_Param_cellularJitter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGain(Z_Param_gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetLacunarity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_lacunarity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLacunarity(Z_Param_lacunarity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetOctaves)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_octaves);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOctaves(Z_Param_octaves);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetFractalType)
	{
		P_GET_ENUM(EFastNoise_FractalType,Z_Param_fractalType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFractalType(EFastNoise_FractalType(Z_Param_fractalType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetInterpolation)
	{
		P_GET_ENUM(EFastNoise_Interp,Z_Param_interp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInterpolation(EFastNoise_Interp(Z_Param_interp));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_frequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrequency(Z_Param_frequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetSeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSeed(Z_Param_seed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetNoiseType)
	{
		P_GET_ENUM(EFastNoise_NoiseType,Z_Param_noiseType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNoiseType(EFastNoise_NoiseType(Z_Param_noiseType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetReturnType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFastNoise_CellularReturnType*)Z_Param__Result=P_THIS->GetReturnType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetDistanceFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFastNoise_CellularDistanceFunction*)Z_Param__Result=P_THIS->GetDistanceFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetCellularJitter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCellularJitter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetGain)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGain();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetLacunarity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLacunarity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetOctaves)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetOctaves();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetFractalType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFastNoise_FractalType*)Z_Param__Result=P_THIS->GetFractalType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetInterpolation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFastNoise_Interp*)Z_Param__Result=P_THIS->GetInterpolation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetFrequency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFrequency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetNoiseType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFastNoise_NoiseType*)Z_Param__Result=P_THIS->GetNoiseType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetNoise3D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNoise3D(Z_Param_x,Z_Param_y,Z_Param_z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetNoise2D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNoise2D(Z_Param_x,Z_Param_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execIsInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetupFastNoise)
	{
		P_GET_ENUM(EFastNoise_NoiseType,Z_Param_noiseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_frequency);
		P_GET_ENUM(EFastNoise_Interp,Z_Param_interp);
		P_GET_ENUM(EFastNoise_FractalType,Z_Param_fractaltype);
		P_GET_PROPERTY(FIntProperty,Z_Param_octaves);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lacunarity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_gain);
		P_GET_PROPERTY(FFloatProperty,Z_Param_cellularJitter);
		P_GET_ENUM(EFastNoise_CellularDistanceFunction,Z_Param_cellularDistanceFunction);
		P_GET_ENUM(EFastNoise_CellularReturnType,Z_Param_cellularReturnType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupFastNoise(EFastNoise_NoiseType(Z_Param_noiseType),Z_Param_seed,Z_Param_frequency,EFastNoise_Interp(Z_Param_interp),EFastNoise_FractalType(Z_Param_fractaltype),Z_Param_octaves,Z_Param_lacunarity,Z_Param_gain,Z_Param_cellularJitter,EFastNoise_CellularDistanceFunction(Z_Param_cellularDistanceFunction),EFastNoise_CellularReturnType(Z_Param_cellularReturnType));
		P_NATIVE_END;
	}
	void UFastNoiseWrapper::StaticRegisterNativesUFastNoiseWrapper()
	{
		UClass* Class = UFastNoiseWrapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCellularJitter", &UFastNoiseWrapper::execGetCellularJitter },
			{ "GetDistanceFunction", &UFastNoiseWrapper::execGetDistanceFunction },
			{ "GetFractalType", &UFastNoiseWrapper::execGetFractalType },
			{ "GetFrequency", &UFastNoiseWrapper::execGetFrequency },
			{ "GetGain", &UFastNoiseWrapper::execGetGain },
			{ "GetInterpolation", &UFastNoiseWrapper::execGetInterpolation },
			{ "GetLacunarity", &UFastNoiseWrapper::execGetLacunarity },
			{ "GetNoise2D", &UFastNoiseWrapper::execGetNoise2D },
			{ "GetNoise3D", &UFastNoiseWrapper::execGetNoise3D },
			{ "GetNoiseType", &UFastNoiseWrapper::execGetNoiseType },
			{ "GetOctaves", &UFastNoiseWrapper::execGetOctaves },
			{ "GetReturnType", &UFastNoiseWrapper::execGetReturnType },
			{ "GetSeed", &UFastNoiseWrapper::execGetSeed },
			{ "IsInitialized", &UFastNoiseWrapper::execIsInitialized },
			{ "SetCellularJitter", &UFastNoiseWrapper::execSetCellularJitter },
			{ "SetDistanceFunction", &UFastNoiseWrapper::execSetDistanceFunction },
			{ "SetFractalType", &UFastNoiseWrapper::execSetFractalType },
			{ "SetFrequency", &UFastNoiseWrapper::execSetFrequency },
			{ "SetGain", &UFastNoiseWrapper::execSetGain },
			{ "SetInterpolation", &UFastNoiseWrapper::execSetInterpolation },
			{ "SetLacunarity", &UFastNoiseWrapper::execSetLacunarity },
			{ "SetNoiseType", &UFastNoiseWrapper::execSetNoiseType },
			{ "SetOctaves", &UFastNoiseWrapper::execSetOctaves },
			{ "SetReturnType", &UFastNoiseWrapper::execSetReturnType },
			{ "SetSeed", &UFastNoiseWrapper::execSetSeed },
			{ "SetupFastNoise", &UFastNoiseWrapper::execSetupFastNoise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics
	{
		struct FastNoiseWrapper_eventGetCellularJitter_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetCellularJitter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Cellular settings" },
		{ "Comment", "/** Gets cellular jitter. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets cellular jitter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetCellularJitter", nullptr, nullptr, sizeof(FastNoiseWrapper_eventGetCellularJitter_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics
	{
		struct FastNoiseWrapper_eventGetDistanceFunction_Parms
		{
			EFastNoise_CellularDistanceFunction ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetDistanceFunction_Parms, ReturnValue), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Cellular settings" },
		{ "Comment", "/** Gets cellular distance function. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets cellular distance function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetDistanceFunction", nullptr, nullptr, sizeof(FastNoiseWrapper_eventGetDistanceFunction_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics
	{
		struct FastNoiseWrapper_eventGetFractalType_Parms
		{
			EFastNoise_FractalType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetFractalType_Parms, ReturnValue), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Gets fractal type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets fractal type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetFractalType", nullptr, nullptr, sizeof(FastNoiseWrapper_eventGetFractalType_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics
	{
		struct FastNoiseWrapper_eventGetFrequency_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Gets frequency. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets frequency." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetFrequency", nullptr, nullptr, sizeof(FastNoiseWrapper_eventGetFrequency_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics
	{
		struct FastNoiseWrapper_eventGetGain_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetGain_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Gets fractal gain. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets fractal gain." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetGain", nullptr, nullptr, sizeof(FastNoiseWrapper_eventGetGain_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics
	{
		struct FastNoiseWrapper_eventGetInterpolation_Parms
		{
			EFastNoise_Interp ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetInterpolation_Parms, ReturnValue), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Gets interpolation type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets interpolation type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetInterpolation", nullptr, nullptr, sizeof(FastNoiseWrapper_eventGetInterpolation_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics
	{
		struct FastNoiseWrapper_eventGetLacunarity_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetLacunarity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Gets fractal lacunarity. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets fractal lacunarity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetLacunarity", nullptr, nullptr, sizeof(FastNoiseWrapper_eventGetLacunarity_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics
	{
		struct FastNoiseWrapper_eventGetNoise2D_Parms
		{
			float x;
			float y;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise2D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise2D_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise2D_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_x_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise" },
		{ "Comment", "/**\n\x09* Returns the noise calculation given x and y values\n\x09*\n\x09* @param x\x09- The x axis value\n\x09* @param y\x09- The y axis value\n\x09*/" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Returns the noise calculation given x and y values\n\n@param x      - The x axis value\n@param y      - The y axis value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetNoise2D", nullptr, nullptr, sizeof(FastNoiseWrapper_eventGetNoise2D_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics
	{
		struct FastNoiseWrapper_eventGetNoise3D_Parms
		{
			float x;
			float y;
			float z;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise3D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise3D_Parms, z), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise3D_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise3D_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_x_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise" },
		{ "Comment", "/**\n\x09* Returns the noise calculation given x, y and z values\n\x09*\n\x09* @param x\x09- The x axis value\n\x09* @param y\x09- The y axis value\n\x09* @param z\x09- The z axis value\n\x09*/" },
		{ "CPP_Default_z", "0.000000" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Returns the noise calculation given x, y and z values\n\n@param x      - The x axis value\n@param y      - The y axis value\n@param z      - The z axis value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetNoise3D", nullptr, nullptr, sizeof(FastNoiseWrapper_eventGetNoise3D_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics
	{
		struct FastNoiseWrapper_eventGetNoiseType_Parms
		{
			EFastNoise_NoiseType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoiseType_Parms, ReturnValue), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Gets noise type */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets noise type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetNoiseType", nullptr, nullptr, sizeof(FastNoiseWrapper_eventGetNoiseType_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics
	{
		struct FastNoiseWrapper_eventGetOctaves_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetOctaves_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Gets fractal octaves. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets fractal octaves." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetOctaves", nullptr, nullptr, sizeof(FastNoiseWrapper_eventGetOctaves_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics
	{
		struct FastNoiseWrapper_eventGetReturnType_Parms
		{
			EFastNoise_CellularReturnType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetReturnType_Parms, ReturnValue), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Cellular settings" },
		{ "Comment", "/** Gets cellular return type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets cellular return type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetReturnType", nullptr, nullptr, sizeof(FastNoiseWrapper_eventGetReturnType_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics
	{
		struct FastNoiseWrapper_eventGetSeed_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventGetSeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Gets seed. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets seed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetSeed", nullptr, nullptr, sizeof(FastNoiseWrapper_eventGetSeed_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics
	{
		struct FastNoiseWrapper_eventIsInitialized_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FastNoiseWrapper_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FastNoiseWrapper_eventIsInitialized_Parms), &Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise" },
		{ "Comment", "/** Returns if Fast Noise properties are initialized or not */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Returns if Fast Noise properties are initialized or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "IsInitialized", nullptr, nullptr, sizeof(FastNoiseWrapper_eventIsInitialized_Parms), Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics
	{
		struct FastNoiseWrapper_eventSetCellularJitter_Parms
		{
			float cellularJitter;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cellularJitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cellularJitter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::NewProp_cellularJitter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::NewProp_cellularJitter = { "cellularJitter", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetCellularJitter_Parms, cellularJitter), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::NewProp_cellularJitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::NewProp_cellularJitter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::NewProp_cellularJitter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Cellular settings" },
		{ "Comment", "/** Set cellular jitter. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set cellular jitter." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetCellularJitter", nullptr, nullptr, sizeof(FastNoiseWrapper_eventSetCellularJitter_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics
	{
		struct FastNoiseWrapper_eventSetDistanceFunction_Parms
		{
			EFastNoise_CellularDistanceFunction distanceFunction;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distanceFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_distanceFunction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_distanceFunction_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::NewProp_distanceFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::NewProp_distanceFunction = { "distanceFunction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetDistanceFunction_Parms, distanceFunction), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::NewProp_distanceFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::NewProp_distanceFunction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::NewProp_distanceFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::NewProp_distanceFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::NewProp_distanceFunction_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Cellular settings" },
		{ "Comment", "/** Set cellular distance function. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set cellular distance function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetDistanceFunction", nullptr, nullptr, sizeof(FastNoiseWrapper_eventSetDistanceFunction_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics
	{
		struct FastNoiseWrapper_eventSetFractalType_Parms
		{
			EFastNoise_FractalType fractalType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fractalType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_fractalType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_fractalType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::NewProp_fractalType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::NewProp_fractalType = { "fractalType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetFractalType_Parms, fractalType), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::NewProp_fractalType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::NewProp_fractalType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::NewProp_fractalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::NewProp_fractalType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::NewProp_fractalType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Set fractal type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set fractal type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetFractalType", nullptr, nullptr, sizeof(FastNoiseWrapper_eventSetFractalType_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics
	{
		struct FastNoiseWrapper_eventSetFrequency_Parms
		{
			float frequency;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::NewProp_frequency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetFrequency_Parms, frequency), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::NewProp_frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::NewProp_frequency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::NewProp_frequency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Set frequency. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set frequency." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetFrequency", nullptr, nullptr, sizeof(FastNoiseWrapper_eventSetFrequency_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics
	{
		struct FastNoiseWrapper_eventSetGain_Parms
		{
			float gain;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::NewProp_gain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetGain_Parms, gain), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::NewProp_gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::NewProp_gain_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::NewProp_gain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Set fractal gain. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set fractal gain." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetGain", nullptr, nullptr, sizeof(FastNoiseWrapper_eventSetGain_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics
	{
		struct FastNoiseWrapper_eventSetInterpolation_Parms
		{
			EFastNoise_Interp interp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_interp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_interp_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::NewProp_interp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::NewProp_interp = { "interp", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetInterpolation_Parms, interp), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::NewProp_interp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::NewProp_interp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::NewProp_interp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::NewProp_interp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::NewProp_interp_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Set interpolation type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set interpolation type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetInterpolation", nullptr, nullptr, sizeof(FastNoiseWrapper_eventSetInterpolation_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics
	{
		struct FastNoiseWrapper_eventSetLacunarity_Parms
		{
			float lacunarity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lacunarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lacunarity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::NewProp_lacunarity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::NewProp_lacunarity = { "lacunarity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetLacunarity_Parms, lacunarity), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::NewProp_lacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::NewProp_lacunarity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::NewProp_lacunarity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Set fractal lacunarity. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set fractal lacunarity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetLacunarity", nullptr, nullptr, sizeof(FastNoiseWrapper_eventSetLacunarity_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics
	{
		struct FastNoiseWrapper_eventSetNoiseType_Parms
		{
			EFastNoise_NoiseType noiseType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noiseType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_noiseType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_noiseType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::NewProp_noiseType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::NewProp_noiseType = { "noiseType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetNoiseType_Parms, noiseType), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::NewProp_noiseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::NewProp_noiseType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::NewProp_noiseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::NewProp_noiseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::NewProp_noiseType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Set noise type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set noise type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetNoiseType", nullptr, nullptr, sizeof(FastNoiseWrapper_eventSetNoiseType_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics
	{
		struct FastNoiseWrapper_eventSetOctaves_Parms
		{
			int32 octaves;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_octaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_octaves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::NewProp_octaves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::NewProp_octaves = { "octaves", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetOctaves_Parms, octaves), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::NewProp_octaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::NewProp_octaves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::NewProp_octaves,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Set fractal octaves. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set fractal octaves." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetOctaves", nullptr, nullptr, sizeof(FastNoiseWrapper_eventSetOctaves_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics
	{
		struct FastNoiseWrapper_eventSetReturnType_Parms
		{
			EFastNoise_CellularReturnType cellularReturnType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cellularReturnType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_cellularReturnType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_cellularReturnType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::NewProp_cellularReturnType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::NewProp_cellularReturnType = { "cellularReturnType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetReturnType_Parms, cellularReturnType), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::NewProp_cellularReturnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::NewProp_cellularReturnType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::NewProp_cellularReturnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::NewProp_cellularReturnType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::NewProp_cellularReturnType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Cellular settings" },
		{ "Comment", "/** Set cellular return type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set cellular return type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetReturnType", nullptr, nullptr, sizeof(FastNoiseWrapper_eventSetReturnType_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics
	{
		struct FastNoiseWrapper_eventSetSeed_Parms
		{
			int32 seed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_seed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::NewProp_seed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetSeed_Parms, seed), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::NewProp_seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::NewProp_seed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::NewProp_seed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Set seed. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set seed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetSeed", nullptr, nullptr, sizeof(FastNoiseWrapper_eventSetSeed_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics
	{
		struct FastNoiseWrapper_eventSetupFastNoise_Parms
		{
			EFastNoise_NoiseType noiseType;
			int32 seed;
			float frequency;
			EFastNoise_Interp interp;
			EFastNoise_FractalType fractaltype;
			int32 octaves;
			float lacunarity;
			float gain;
			float cellularJitter;
			EFastNoise_CellularDistanceFunction cellularDistanceFunction;
			EFastNoise_CellularReturnType cellularReturnType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cellularReturnType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_cellularReturnType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_cellularReturnType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cellularDistanceFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_cellularDistanceFunction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_cellularDistanceFunction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cellularJitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cellularJitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lacunarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lacunarity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_octaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_octaves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fractaltype_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_fractaltype;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_fractaltype_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_interp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_interp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noiseType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_noiseType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_noiseType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularReturnType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularReturnType = { "cellularReturnType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, cellularReturnType), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularReturnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularReturnType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularReturnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularDistanceFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularDistanceFunction = { "cellularDistanceFunction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, cellularDistanceFunction), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularDistanceFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularDistanceFunction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularDistanceFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularJitter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularJitter = { "cellularJitter", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, cellularJitter), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularJitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularJitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_gain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, gain), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_gain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_lacunarity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_lacunarity = { "lacunarity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, lacunarity), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_lacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_lacunarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_octaves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_octaves = { "octaves", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, octaves), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_octaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_octaves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_fractaltype_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_fractaltype = { "fractaltype", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, fractaltype), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_fractaltype_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_fractaltype_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_fractaltype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_interp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_interp = { "interp", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, interp), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_interp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_interp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_interp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_frequency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, frequency), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_seed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, seed), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_noiseType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_noiseType = { "noiseType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, noiseType), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_noiseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_noiseType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_noiseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularReturnType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularReturnType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularDistanceFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularDistanceFunction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularJitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_gain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_lacunarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_octaves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_fractaltype,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_fractaltype_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_interp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_interp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_noiseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_noiseType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise" },
		{ "Comment", "/**\n\x09* Set all the properties needed to generate the noise\n\x09*\n\x09* @param noiseType\x09\x09\x09\x09\x09- Noise return type of GetNoise(...). Default value: Simplex\n\x09* @param seed\x09\x09\x09\x09\x09\x09- Seed used for all noise types. Using different seeds will cause the noise output to change. Default value: 1337\n\x09* @param frequency\x09\x09\x09\x09\x09- Frequency for all noise types, except White Noise. Affects how coarse the noise output is. Default value: 0.01\n\x09* @param interp\x09\x09\x09\x09\x09\x09- Interpolation method used to smooth between noise values in Value and Perlin Noise. Possible interpolation methods (lowest to highest quality): Linear; Hermite; Quintic. Default value: Quintic\n\x09* @param fractaltype\x09\x09\x09\x09- Method for combining octaves in all fractal noise types. Default value: FBM\n\x09* @param octaves\x09\x09\x09\x09\x09- Octave count for all fractal noise types. The amount of noise layers used to create the fractal. Default value: 3\n\x09* @param lacunarity\x09\x09\x09\x09\x09- Octave lacunarity for all fractal noise types. The frequency multiplier between each octave. Default value: 2.0\n\x09* @param gain\x09\x09\x09\x09\x09\x09- Octave gain for all fractal noise types. The relative strength of noise from each layer when compared to the last. Default value: 0.5\n\x09* @param cellularJitter\x09\x09\x09\x09- Maximum distance a cellular point can move from its grid position. Setting this high will make artifacts more common. Default value: 0.45\n\x09* @param cellularDistanceFunction\x09- Distance function used in cellular noise calculations. The distance function used to calculate the cell for a given point. Natural is a blend of Euclidean and Manhattan to give curved cell boundaries. Default value: Euclidean\n\x09* @param cellularReturnType\x09\x09\x09- Return type from cellular noise calculations. Default value: CellValue\n\x09*/" },
		{ "CPP_Default_cellularDistanceFunction", "Euclidean" },
		{ "CPP_Default_cellularJitter", "0.450000" },
		{ "CPP_Default_cellularReturnType", "CellValue" },
		{ "CPP_Default_fractaltype", "FBM" },
		{ "CPP_Default_frequency", "0.010000" },
		{ "CPP_Default_gain", "0.500000" },
		{ "CPP_Default_interp", "Quintic" },
		{ "CPP_Default_lacunarity", "2.000000" },
		{ "CPP_Default_noiseType", "Simplex" },
		{ "CPP_Default_octaves", "3" },
		{ "CPP_Default_seed", "1337" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set all the properties needed to generate the noise\n\n@param noiseType                                      - Noise return type of GetNoise(...). Default value: Simplex\n@param seed                                           - Seed used for all noise types. Using different seeds will cause the noise output to change. Default value: 1337\n@param frequency                                      - Frequency for all noise types, except White Noise. Affects how coarse the noise output is. Default value: 0.01\n@param interp                                         - Interpolation method used to smooth between noise values in Value and Perlin Noise. Possible interpolation methods (lowest to highest quality): Linear; Hermite; Quintic. Default value: Quintic\n@param fractaltype                            - Method for combining octaves in all fractal noise types. Default value: FBM\n@param octaves                                        - Octave count for all fractal noise types. The amount of noise layers used to create the fractal. Default value: 3\n@param lacunarity                                     - Octave lacunarity for all fractal noise types. The frequency multiplier between each octave. Default value: 2.0\n@param gain                                           - Octave gain for all fractal noise types. The relative strength of noise from each layer when compared to the last. Default value: 0.5\n@param cellularJitter                         - Maximum distance a cellular point can move from its grid position. Setting this high will make artifacts more common. Default value: 0.45\n@param cellularDistanceFunction       - Distance function used in cellular noise calculations. The distance function used to calculate the cell for a given point. Natural is a blend of Euclidean and Manhattan to give curved cell boundaries. Default value: Euclidean\n@param cellularReturnType                     - Return type from cellular noise calculations. Default value: CellValue" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetupFastNoise", nullptr, nullptr, sizeof(FastNoiseWrapper_eventSetupFastNoise_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFastNoiseWrapper_NoRegister()
	{
		return UFastNoiseWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UFastNoiseWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFastNoiseWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FastNoiseGenerator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFastNoiseWrapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter, "GetCellularJitter" }, // 4122077593
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction, "GetDistanceFunction" }, // 2203443134
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType, "GetFractalType" }, // 708263731
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency, "GetFrequency" }, // 818143341
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetGain, "GetGain" }, // 3818582476
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation, "GetInterpolation" }, // 1329992920
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity, "GetLacunarity" }, // 1185286974
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D, "GetNoise2D" }, // 701214941
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D, "GetNoise3D" }, // 2127312103
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType, "GetNoiseType" }, // 146292353
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves, "GetOctaves" }, // 4294330001
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType, "GetReturnType" }, // 303815185
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetSeed, "GetSeed" }, // 2449561855
		{ &Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized, "IsInitialized" }, // 131847190
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter, "SetCellularJitter" }, // 1281810816
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction, "SetDistanceFunction" }, // 4020330104
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType, "SetFractalType" }, // 3916681578
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency, "SetFrequency" }, // 1364243874
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetGain, "SetGain" }, // 3499725122
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation, "SetInterpolation" }, // 2856026127
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity, "SetLacunarity" }, // 1519277781
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType, "SetNoiseType" }, // 2580477118
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves, "SetOctaves" }, // 2401840817
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType, "SetReturnType" }, // 3816983433
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetSeed, "SetSeed" }, // 1733662494
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise, "SetupFastNoise" }, // 2502364858
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFastNoiseWrapper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UE4 Wrapper for Auburns's FastNoise library, also available for blueprints usage\n */" },
		{ "IncludePath", "FastNoiseWrapper.h" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "UE4 Wrapper for Auburns's FastNoise library, also available for blueprints usage" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFastNoiseWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFastNoiseWrapper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFastNoiseWrapper_Statics::ClassParams = {
		&UFastNoiseWrapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFastNoiseWrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFastNoiseWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFastNoiseWrapper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFastNoiseWrapper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFastNoiseWrapper, 607774312);
	template<> FASTNOISEGENERATOR_API UClass* StaticClass<UFastNoiseWrapper>()
	{
		return UFastNoiseWrapper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFastNoiseWrapper(Z_Construct_UClass_UFastNoiseWrapper, &UFastNoiseWrapper::StaticClass, TEXT("/Script/FastNoiseGenerator"), TEXT("UFastNoiseWrapper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFastNoiseWrapper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
