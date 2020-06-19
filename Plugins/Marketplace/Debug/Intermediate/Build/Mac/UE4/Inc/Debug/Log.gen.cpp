// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Debug/Public/Log.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLog() {}
// Cross Module References
	DEBUG_API UEnum* Z_Construct_UEnum_Debug_EDebugLogComparisonMethod();
	UPackage* Z_Construct_UPackage__Script_Debug();
	DEBUG_API UEnum* Z_Construct_UEnum_Debug_EDebugLogTimeUnit();
	DEBUG_API UEnum* Z_Construct_UEnum_Debug_EDebugLogSpeedUnit();
	DEBUG_API UEnum* Z_Construct_UEnum_Debug_EDebugLogMassUnit();
	DEBUG_API UEnum* Z_Construct_UEnum_Debug_EDebugLogLengthUnit();
	DEBUG_API UEnum* Z_Construct_UEnum_Debug_EDebugLogDataUnit();
	DEBUG_API UEnum* Z_Construct_UEnum_Debug_EDebugLogVolumeUnit();
	DEBUG_API UEnum* Z_Construct_UEnum_Debug_EDebugLogTemperatureUnit();
	DEBUG_API UEnum* Z_Construct_UEnum_Debug_EDebugLogNumberSystems();
	DEBUG_API UEnum* Z_Construct_UEnum_Debug_ELoggingOptions();
	DEBUG_API UEnum* Z_Construct_UEnum_Debug_EDebugLogType();
	DEBUG_API UClass* Z_Construct_UClass_ULog_NoRegister();
	DEBUG_API UClass* Z_Construct_UClass_ULog();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
// End Cross Module References
	static UEnum* EDebugLogComparisonMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Debug_EDebugLogComparisonMethod, Z_Construct_UPackage__Script_Debug(), TEXT("EDebugLogComparisonMethod"));
		}
		return Singleton;
	}
	template<> DEBUG_API UEnum* StaticEnum<EDebugLogComparisonMethod>()
	{
		return EDebugLogComparisonMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDebugLogComparisonMethod(EDebugLogComparisonMethod_StaticEnum, TEXT("/Script/Debug"), TEXT("EDebugLogComparisonMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Debug_EDebugLogComparisonMethod_Hash() { return 209829770U; }
	UEnum* Z_Construct_UEnum_Debug_EDebugLogComparisonMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Debug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDebugLogComparisonMethod"), 0, Get_Z_Construct_UEnum_Debug_EDebugLogComparisonMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CM_Equal_To", (int64)CM_Equal_To },
				{ "CM_Not_Equal_To", (int64)CM_Not_Equal_To },
				{ "CM_Greater_Than_Or_Equal_To", (int64)CM_Greater_Than_Or_Equal_To },
				{ "CM_Less_Than_Or_Equal_To", (int64)CM_Less_Than_Or_Equal_To },
				{ "CM_Greater_Than", (int64)CM_Greater_Than },
				{ "CM_Less_Than", (int64)CM_Less_Than },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CM_Equal_To.DisplayName", "Equal To (==)" },
				{ "CM_Equal_To.Name", "CM_Equal_To" },
				{ "CM_Greater_Than.DisplayName", "Greater Than (>)" },
				{ "CM_Greater_Than.Name", "CM_Greater_Than" },
				{ "CM_Greater_Than_Or_Equal_To.DisplayName", "Greater Than or Equal To (>=)" },
				{ "CM_Greater_Than_Or_Equal_To.Name", "CM_Greater_Than_Or_Equal_To" },
				{ "CM_Less_Than.DisplayName", "Less Than (<)" },
				{ "CM_Less_Than.Name", "CM_Less_Than" },
				{ "CM_Less_Than_Or_Equal_To.DisplayName", "Less Than or Equal To (<=)" },
				{ "CM_Less_Than_Or_Equal_To.Name", "CM_Less_Than_Or_Equal_To" },
				{ "CM_Not_Equal_To.DisplayName", "Not Equal To (!=)" },
				{ "CM_Not_Equal_To.Name", "CM_Not_Equal_To" },
				{ "ModuleRelativePath", "Public/Log.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Debug,
				nullptr,
				"EDebugLogComparisonMethod",
				"EDebugLogComparisonMethod",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDebugLogTimeUnit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Debug_EDebugLogTimeUnit, Z_Construct_UPackage__Script_Debug(), TEXT("EDebugLogTimeUnit"));
		}
		return Singleton;
	}
	template<> DEBUG_API UEnum* StaticEnum<EDebugLogTimeUnit>()
	{
		return EDebugLogTimeUnit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDebugLogTimeUnit(EDebugLogTimeUnit_StaticEnum, TEXT("/Script/Debug"), TEXT("EDebugLogTimeUnit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Debug_EDebugLogTimeUnit_Hash() { return 357529241U; }
	UEnum* Z_Construct_UEnum_Debug_EDebugLogTimeUnit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Debug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDebugLogTimeUnit"), 0, Get_Z_Construct_UEnum_Debug_EDebugLogTimeUnit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DLTU_Nanoseconds", (int64)DLTU_Nanoseconds },
				{ "DLTU_Microseconds", (int64)DLTU_Microseconds },
				{ "DLTU_Milliseconds", (int64)DLTU_Milliseconds },
				{ "DLTU_Seconds", (int64)DLTU_Seconds },
				{ "DLTU_Minutes", (int64)DLTU_Minutes },
				{ "DLTU_Hours", (int64)DLTU_Hours },
				{ "DLTU_Days", (int64)DLTU_Days },
				{ "DLTU_Weeks", (int64)DLTU_Weeks },
				{ "DLTU_Months", (int64)DLTU_Months },
				{ "DLTU_Years", (int64)DLTU_Years },
				{ "DLTU_Decades", (int64)DLTU_Decades },
				{ "DLTU_Centuries", (int64)DLTU_Centuries },
				{ "DLTU_Millennium", (int64)DLTU_Millennium },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DLTU_Centuries.DisplayName", "Centuries (century)" },
				{ "DLTU_Centuries.Name", "DLTU_Centuries" },
				{ "DLTU_Days.DisplayName", "Days (day)" },
				{ "DLTU_Days.Name", "DLTU_Days" },
				{ "DLTU_Decades.DisplayName", "Decades (decade)" },
				{ "DLTU_Decades.Name", "DLTU_Decades" },
				{ "DLTU_Hours.DisplayName", "Hours (hr)" },
				{ "DLTU_Hours.Name", "DLTU_Hours" },
				{ "DLTU_Microseconds.DisplayName", "Microseconds (us)" },
				{ "DLTU_Microseconds.Name", "DLTU_Microseconds" },
				{ "DLTU_Millennium.DisplayName", "Millennuim" },
				{ "DLTU_Millennium.Name", "DLTU_Millennium" },
				{ "DLTU_Milliseconds.DisplayName", "Milliseconds (ms)" },
				{ "DLTU_Milliseconds.Name", "DLTU_Milliseconds" },
				{ "DLTU_Minutes.DisplayName", "Minutes (min)" },
				{ "DLTU_Minutes.Name", "DLTU_Minutes" },
				{ "DLTU_Months.DisplayName", "Months (mth)" },
				{ "DLTU_Months.Name", "DLTU_Months" },
				{ "DLTU_Nanoseconds.DisplayName", "Nanoseconds (ns)" },
				{ "DLTU_Nanoseconds.Name", "DLTU_Nanoseconds" },
				{ "DLTU_Seconds.DisplayName", "Seconds (sec)" },
				{ "DLTU_Seconds.Name", "DLTU_Seconds" },
				{ "DLTU_Weeks.DisplayName", "Weeks (wk)" },
				{ "DLTU_Weeks.Name", "DLTU_Weeks" },
				{ "DLTU_Years.DisplayName", "Years (yrs)" },
				{ "DLTU_Years.Name", "DLTU_Years" },
				{ "ModuleRelativePath", "Public/Log.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Debug,
				nullptr,
				"EDebugLogTimeUnit",
				"EDebugLogTimeUnit",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDebugLogSpeedUnit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Debug_EDebugLogSpeedUnit, Z_Construct_UPackage__Script_Debug(), TEXT("EDebugLogSpeedUnit"));
		}
		return Singleton;
	}
	template<> DEBUG_API UEnum* StaticEnum<EDebugLogSpeedUnit>()
	{
		return EDebugLogSpeedUnit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDebugLogSpeedUnit(EDebugLogSpeedUnit_StaticEnum, TEXT("/Script/Debug"), TEXT("EDebugLogSpeedUnit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Debug_EDebugLogSpeedUnit_Hash() { return 2574855993U; }
	UEnum* Z_Construct_UEnum_Debug_EDebugLogSpeedUnit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Debug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDebugLogSpeedUnit"), 0, Get_Z_Construct_UEnum_Debug_EDebugLogSpeedUnit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DLSU_CentimetersPerSec", (int64)DLSU_CentimetersPerSec },
				{ "DLSU_CentimetersPerHour", (int64)DLSU_CentimetersPerHour },
				{ "DLSU_MillimetersPerSec", (int64)DLSU_MillimetersPerSec },
				{ "DLSU_MillimetersPerHour", (int64)DLSU_MillimetersPerHour },
				{ "DLSU_MetersPerSec", (int64)DLSU_MetersPerSec },
				{ "DLSU_MetersPerHour", (int64)DLSU_MetersPerHour },
				{ "DLSU_KilometersPerSec", (int64)DLSU_KilometersPerSec },
				{ "DLSU_KilometersPerHour", (int64)DLSU_KilometersPerHour },
				{ "DLSU_InchesPerSec", (int64)DLSU_InchesPerSec },
				{ "DLSU_InchesPerHour", (int64)DLSU_InchesPerHour },
				{ "DLSU_FeetPerSec", (int64)DLSU_FeetPerSec },
				{ "DLSU_FeetPerHour", (int64)DLSU_FeetPerHour },
				{ "DLSU_MilesPerSec", (int64)DLSU_MilesPerSec },
				{ "DLSU_MilesPerHour", (int64)DLSU_MilesPerHour },
				{ "DLSU_YardsPerSec", (int64)DLSU_YardsPerSec },
				{ "DLSU_YardsPerHour", (int64)DLSU_YardsPerHour },
				{ "DLSU_Knots", (int64)DLSU_Knots },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DLSU_CentimetersPerHour.DisplayName", "Centimeters per Hour (cm/h))" },
				{ "DLSU_CentimetersPerHour.Name", "DLSU_CentimetersPerHour" },
				{ "DLSU_CentimetersPerSec.DisplayName", "Centimeters per Sec (cm/s)" },
				{ "DLSU_CentimetersPerSec.Name", "DLSU_CentimetersPerSec" },
				{ "DLSU_FeetPerHour.DisplayName", "Feet per Hour (ft/h)" },
				{ "DLSU_FeetPerHour.Name", "DLSU_FeetPerHour" },
				{ "DLSU_FeetPerSec.DisplayName", "Feet per Sec (ft/s)" },
				{ "DLSU_FeetPerSec.Name", "DLSU_FeetPerSec" },
				{ "DLSU_InchesPerHour.DisplayName", "Inches per Hour (in/h)" },
				{ "DLSU_InchesPerHour.Name", "DLSU_InchesPerHour" },
				{ "DLSU_InchesPerSec.DisplayName", "Inches per Sec (in/s)" },
				{ "DLSU_InchesPerSec.Name", "DLSU_InchesPerSec" },
				{ "DLSU_KilometersPerHour.DisplayName", "Kilometers per Hour (km/h)" },
				{ "DLSU_KilometersPerHour.Name", "DLSU_KilometersPerHour" },
				{ "DLSU_KilometersPerSec.DisplayName", "Kilometers per Sec (km/s)" },
				{ "DLSU_KilometersPerSec.Name", "DLSU_KilometersPerSec" },
				{ "DLSU_Knots.DisplayName", "Knots (kn)" },
				{ "DLSU_Knots.Name", "DLSU_Knots" },
				{ "DLSU_MetersPerHour.DisplayName", "Meters per Hour (m/h)" },
				{ "DLSU_MetersPerHour.Name", "DLSU_MetersPerHour" },
				{ "DLSU_MetersPerSec.DisplayName", "Meters per Sec (m/s)" },
				{ "DLSU_MetersPerSec.Name", "DLSU_MetersPerSec" },
				{ "DLSU_MilesPerHour.DisplayName", "Miles per Hour (mi/h)" },
				{ "DLSU_MilesPerHour.Name", "DLSU_MilesPerHour" },
				{ "DLSU_MilesPerSec.DisplayName", "Miles per Sec (mi/s)" },
				{ "DLSU_MilesPerSec.Name", "DLSU_MilesPerSec" },
				{ "DLSU_MillimetersPerHour.DisplayName", "Millimeters per Hour (mm/h)" },
				{ "DLSU_MillimetersPerHour.Name", "DLSU_MillimetersPerHour" },
				{ "DLSU_MillimetersPerSec.DisplayName", "Millimeters per Sec (mm/s)" },
				{ "DLSU_MillimetersPerSec.Name", "DLSU_MillimetersPerSec" },
				{ "DLSU_YardsPerHour.DisplayName", "Yards per Hour (yd/h)" },
				{ "DLSU_YardsPerHour.Name", "DLSU_YardsPerHour" },
				{ "DLSU_YardsPerSec.DisplayName", "Yards per Sec (yd/s)" },
				{ "DLSU_YardsPerSec.Name", "DLSU_YardsPerSec" },
				{ "ModuleRelativePath", "Public/Log.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Debug,
				nullptr,
				"EDebugLogSpeedUnit",
				"EDebugLogSpeedUnit",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDebugLogMassUnit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Debug_EDebugLogMassUnit, Z_Construct_UPackage__Script_Debug(), TEXT("EDebugLogMassUnit"));
		}
		return Singleton;
	}
	template<> DEBUG_API UEnum* StaticEnum<EDebugLogMassUnit>()
	{
		return EDebugLogMassUnit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDebugLogMassUnit(EDebugLogMassUnit_StaticEnum, TEXT("/Script/Debug"), TEXT("EDebugLogMassUnit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Debug_EDebugLogMassUnit_Hash() { return 3240413964U; }
	UEnum* Z_Construct_UEnum_Debug_EDebugLogMassUnit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Debug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDebugLogMassUnit"), 0, Get_Z_Construct_UEnum_Debug_EDebugLogMassUnit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DLMU_Microgram", (int64)DLMU_Microgram },
				{ "DLMU_Milligram", (int64)DLMU_Milligram },
				{ "DLMU_Gram", (int64)DLMU_Gram },
				{ "DLMU_Kilogram", (int64)DLMU_Kilogram },
				{ "DLMU_Tonne", (int64)DLMU_Tonne },
				{ "DLMU_Ounce", (int64)DLMU_Ounce },
				{ "DLMU_Pound", (int64)DLMU_Pound },
				{ "DLMU_Stone", (int64)DLMU_Stone },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DLMU_Gram.DisplayName", "Gram (g)" },
				{ "DLMU_Gram.Name", "DLMU_Gram" },
				{ "DLMU_Kilogram.DisplayName", "Kilogram (kg)" },
				{ "DLMU_Kilogram.Name", "DLMU_Kilogram" },
				{ "DLMU_Microgram.DisplayName", "Microgram (\xce\xbcg)" },
				{ "DLMU_Microgram.Name", "DLMU_Microgram" },
				{ "DLMU_Milligram.DisplayName", "Milligram (mg)" },
				{ "DLMU_Milligram.Name", "DLMU_Milligram" },
				{ "DLMU_Ounce.DisplayName", "Ounce (oz)" },
				{ "DLMU_Ounce.Name", "DLMU_Ounce" },
				{ "DLMU_Pound.DisplayName", "Pound (lb)" },
				{ "DLMU_Pound.Name", "DLMU_Pound" },
				{ "DLMU_Stone.DisplayName", "Stone (st)" },
				{ "DLMU_Stone.Name", "DLMU_Stone" },
				{ "DLMU_Tonne.DisplayName", "Tonne (t)" },
				{ "DLMU_Tonne.Name", "DLMU_Tonne" },
				{ "ModuleRelativePath", "Public/Log.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Debug,
				nullptr,
				"EDebugLogMassUnit",
				"EDebugLogMassUnit",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDebugLogLengthUnit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Debug_EDebugLogLengthUnit, Z_Construct_UPackage__Script_Debug(), TEXT("EDebugLogLengthUnit"));
		}
		return Singleton;
	}
	template<> DEBUG_API UEnum* StaticEnum<EDebugLogLengthUnit>()
	{
		return EDebugLogLengthUnit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDebugLogLengthUnit(EDebugLogLengthUnit_StaticEnum, TEXT("/Script/Debug"), TEXT("EDebugLogLengthUnit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Debug_EDebugLogLengthUnit_Hash() { return 4099702309U; }
	UEnum* Z_Construct_UEnum_Debug_EDebugLogLengthUnit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Debug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDebugLogLengthUnit"), 0, Get_Z_Construct_UEnum_Debug_EDebugLogLengthUnit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DLLU_Centimeter", (int64)DLLU_Centimeter },
				{ "DLLU_Millimeter", (int64)DLLU_Millimeter },
				{ "DLLU_Meter", (int64)DLLU_Meter },
				{ "DLLU_Kilometer", (int64)DLLU_Kilometer },
				{ "DLLU_Inch", (int64)DLLU_Inch },
				{ "DLLU_Feet", (int64)DLLU_Feet },
				{ "DLLU_Mile", (int64)DLLU_Mile },
				{ "DLLU_NauticalMile", (int64)DLLU_NauticalMile },
				{ "DLLU_Yard", (int64)DLLU_Yard },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DLLU_Centimeter.DisplayName", "Centimeter (cm)" },
				{ "DLLU_Centimeter.Name", "DLLU_Centimeter" },
				{ "DLLU_Feet.DisplayName", "Feet (ft)" },
				{ "DLLU_Feet.Name", "DLLU_Feet" },
				{ "DLLU_Inch.DisplayName", "Inches (in)" },
				{ "DLLU_Inch.Name", "DLLU_Inch" },
				{ "DLLU_Kilometer.DisplayName", "Kilometer (km)" },
				{ "DLLU_Kilometer.Name", "DLLU_Kilometer" },
				{ "DLLU_Meter.DisplayName", "Meter (m)" },
				{ "DLLU_Meter.Name", "DLLU_Meter" },
				{ "DLLU_Mile.DisplayName", "Miles (mi)" },
				{ "DLLU_Mile.Name", "DLLU_Mile" },
				{ "DLLU_Millimeter.DisplayName", "Millimeter (mm)" },
				{ "DLLU_Millimeter.Name", "DLLU_Millimeter" },
				{ "DLLU_NauticalMile.DisplayName", "Nautical Mile (nm)" },
				{ "DLLU_NauticalMile.Name", "DLLU_NauticalMile" },
				{ "DLLU_Yard.DisplayName", "Yard (yd)" },
				{ "DLLU_Yard.Name", "DLLU_Yard" },
				{ "ModuleRelativePath", "Public/Log.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Debug,
				nullptr,
				"EDebugLogLengthUnit",
				"EDebugLogLengthUnit",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDebugLogDataUnit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Debug_EDebugLogDataUnit, Z_Construct_UPackage__Script_Debug(), TEXT("EDebugLogDataUnit"));
		}
		return Singleton;
	}
	template<> DEBUG_API UEnum* StaticEnum<EDebugLogDataUnit>()
	{
		return EDebugLogDataUnit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDebugLogDataUnit(EDebugLogDataUnit_StaticEnum, TEXT("/Script/Debug"), TEXT("EDebugLogDataUnit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Debug_EDebugLogDataUnit_Hash() { return 3999837579U; }
	UEnum* Z_Construct_UEnum_Debug_EDebugLogDataUnit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Debug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDebugLogDataUnit"), 0, Get_Z_Construct_UEnum_Debug_EDebugLogDataUnit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DLDU_Bit", (int64)DLDU_Bit },
				{ "DLDU_Byte", (int64)DLDU_Byte },
				{ "DLDU_Kilobyte", (int64)DLDU_Kilobyte },
				{ "DLDU_Megabyte", (int64)DLDU_Megabyte },
				{ "DLDU_Gigabyte", (int64)DLDU_Gigabyte },
				{ "DLDU_Terabyte", (int64)DLDU_Terabyte },
				{ "DLDU_Petabyte", (int64)DLDU_Petabyte },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DLDU_Bit.DisplayName", "Bit (bit)" },
				{ "DLDU_Bit.Name", "DLDU_Bit" },
				{ "DLDU_Byte.DisplayName", "Byte (byte)" },
				{ "DLDU_Byte.Name", "DLDU_Byte" },
				{ "DLDU_Gigabyte.DisplayName", "Gigabyte (GB)" },
				{ "DLDU_Gigabyte.Name", "DLDU_Gigabyte" },
				{ "DLDU_Kilobyte.DisplayName", "Kilobyte (KB)" },
				{ "DLDU_Kilobyte.Name", "DLDU_Kilobyte" },
				{ "DLDU_Megabyte.DisplayName", "Megabyte (MB)" },
				{ "DLDU_Megabyte.Name", "DLDU_Megabyte" },
				{ "DLDU_Petabyte.DisplayName", "Petabyte (PB)" },
				{ "DLDU_Petabyte.Name", "DLDU_Petabyte" },
				{ "DLDU_Terabyte.DisplayName", "Terabyte (TB)" },
				{ "DLDU_Terabyte.Name", "DLDU_Terabyte" },
				{ "ModuleRelativePath", "Public/Log.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Debug,
				nullptr,
				"EDebugLogDataUnit",
				"EDebugLogDataUnit",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDebugLogVolumeUnit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Debug_EDebugLogVolumeUnit, Z_Construct_UPackage__Script_Debug(), TEXT("EDebugLogVolumeUnit"));
		}
		return Singleton;
	}
	template<> DEBUG_API UEnum* StaticEnum<EDebugLogVolumeUnit>()
	{
		return EDebugLogVolumeUnit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDebugLogVolumeUnit(EDebugLogVolumeUnit_StaticEnum, TEXT("/Script/Debug"), TEXT("EDebugLogVolumeUnit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Debug_EDebugLogVolumeUnit_Hash() { return 1557918905U; }
	UEnum* Z_Construct_UEnum_Debug_EDebugLogVolumeUnit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Debug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDebugLogVolumeUnit"), 0, Get_Z_Construct_UEnum_Debug_EDebugLogVolumeUnit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DLVU_Litre", (int64)DLVU_Litre },
				{ "DLVU_Millilitre", (int64)DLVU_Millilitre },
				{ "DLVU_Gallon", (int64)DLVU_Gallon },
				{ "DLVU_Pint", (int64)DLVU_Pint },
				{ "DLVU_Quart", (int64)DLVU_Quart },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DLVU_Gallon.DisplayName", "Gallon (GAL)" },
				{ "DLVU_Gallon.Name", "DLVU_Gallon" },
				{ "DLVU_Litre.DisplayName", "Litre (L)" },
				{ "DLVU_Litre.Name", "DLVU_Litre" },
				{ "DLVU_Millilitre.DisplayName", "Millilitre (ml)" },
				{ "DLVU_Millilitre.Name", "DLVU_Millilitre" },
				{ "DLVU_Pint.DisplayName", "Pint (pt)" },
				{ "DLVU_Pint.Name", "DLVU_Pint" },
				{ "DLVU_Quart.DisplayName", "Quart (qt)" },
				{ "DLVU_Quart.Name", "DLVU_Quart" },
				{ "ModuleRelativePath", "Public/Log.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Debug,
				nullptr,
				"EDebugLogVolumeUnit",
				"EDebugLogVolumeUnit",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDebugLogTemperatureUnit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Debug_EDebugLogTemperatureUnit, Z_Construct_UPackage__Script_Debug(), TEXT("EDebugLogTemperatureUnit"));
		}
		return Singleton;
	}
	template<> DEBUG_API UEnum* StaticEnum<EDebugLogTemperatureUnit>()
	{
		return EDebugLogTemperatureUnit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDebugLogTemperatureUnit(EDebugLogTemperatureUnit_StaticEnum, TEXT("/Script/Debug"), TEXT("EDebugLogTemperatureUnit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Debug_EDebugLogTemperatureUnit_Hash() { return 1730191660U; }
	UEnum* Z_Construct_UEnum_Debug_EDebugLogTemperatureUnit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Debug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDebugLogTemperatureUnit"), 0, Get_Z_Construct_UEnum_Debug_EDebugLogTemperatureUnit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DLTU_Celsius", (int64)DLTU_Celsius },
				{ "DLTU_Fahrenheit", (int64)DLTU_Fahrenheit },
				{ "DLTU_Kelvin", (int64)DLTU_Kelvin },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DLTU_Celsius.DisplayName", "Celsius (C)" },
				{ "DLTU_Celsius.Name", "DLTU_Celsius" },
				{ "DLTU_Fahrenheit.DisplayName", "Fahrenheit (F)" },
				{ "DLTU_Fahrenheit.Name", "DLTU_Fahrenheit" },
				{ "DLTU_Kelvin.DisplayName", "Kelvin (K)" },
				{ "DLTU_Kelvin.Name", "DLTU_Kelvin" },
				{ "ModuleRelativePath", "Public/Log.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Debug,
				nullptr,
				"EDebugLogTemperatureUnit",
				"EDebugLogTemperatureUnit",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDebugLogNumberSystems_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Debug_EDebugLogNumberSystems, Z_Construct_UPackage__Script_Debug(), TEXT("EDebugLogNumberSystems"));
		}
		return Singleton;
	}
	template<> DEBUG_API UEnum* StaticEnum<EDebugLogNumberSystems>()
	{
		return EDebugLogNumberSystems_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDebugLogNumberSystems(EDebugLogNumberSystems_StaticEnum, TEXT("/Script/Debug"), TEXT("EDebugLogNumberSystems"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Debug_EDebugLogNumberSystems_Hash() { return 944524971U; }
	UEnum* Z_Construct_UEnum_Debug_EDebugLogNumberSystems()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Debug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDebugLogNumberSystems"), 0, Get_Z_Construct_UEnum_Debug_EDebugLogNumberSystems_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DLNS_Decimal", (int64)DLNS_Decimal },
				{ "DLNS_Binary", (int64)DLNS_Binary },
				{ "DLNS_Hex", (int64)DLNS_Hex },
				{ "DLNS_Octal", (int64)DLNS_Octal },
				{ "DLNS_Roman", (int64)DLNS_Roman },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DLNS_Binary.DisplayName", "Binary (Base 2)" },
				{ "DLNS_Binary.Name", "DLNS_Binary" },
				{ "DLNS_Decimal.DisplayName", "Decimal (Base 10)" },
				{ "DLNS_Decimal.Name", "DLNS_Decimal" },
				{ "DLNS_Hex.DisplayName", "Hexadecimal (Base 16)" },
				{ "DLNS_Hex.Name", "DLNS_Hex" },
				{ "DLNS_Octal.DisplayName", "Octal (Base 8)" },
				{ "DLNS_Octal.Name", "DLNS_Octal" },
				{ "DLNS_Roman.DisplayName", "Roman Numerals (Base 10)" },
				{ "DLNS_Roman.Name", "DLNS_Roman" },
				{ "ModuleRelativePath", "Public/Log.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Debug,
				nullptr,
				"EDebugLogNumberSystems",
				"EDebugLogNumberSystems",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELoggingOptions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Debug_ELoggingOptions, Z_Construct_UPackage__Script_Debug(), TEXT("ELoggingOptions"));
		}
		return Singleton;
	}
	template<> DEBUG_API UEnum* StaticEnum<ELoggingOptions>()
	{
		return ELoggingOptions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELoggingOptions(ELoggingOptions_StaticEnum, TEXT("/Script/Debug"), TEXT("ELoggingOptions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Debug_ELoggingOptions_Hash() { return 1072205016U; }
	UEnum* Z_Construct_UEnum_Debug_ELoggingOptions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Debug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELoggingOptions"), 0, Get_Z_Construct_UEnum_Debug_ELoggingOptions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LO_Viewport", (int64)LO_Viewport },
				{ "LO_Console", (int64)LO_Console },
				{ "LO_Both", (int64)LO_Both },
				{ "LO_NoLog", (int64)LO_NoLog },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LO_Both.DisplayName", "Viewport and Console" },
				{ "LO_Both.Name", "LO_Both" },
				{ "LO_Console.DisplayName", "Console" },
				{ "LO_Console.Name", "LO_Console" },
				{ "LO_NoLog.DisplayName", "Disabled" },
				{ "LO_NoLog.Name", "LO_NoLog" },
				{ "LO_Viewport.DisplayName", "Viewport" },
				{ "LO_Viewport.Name", "LO_Viewport" },
				{ "ModuleRelativePath", "Public/Log.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Debug,
				nullptr,
				"ELoggingOptions",
				"ELoggingOptions",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDebugLogType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Debug_EDebugLogType, Z_Construct_UPackage__Script_Debug(), TEXT("EDebugLogType"));
		}
		return Singleton;
	}
	template<> DEBUG_API UEnum* StaticEnum<EDebugLogType>()
	{
		return EDebugLogType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDebugLogType(EDebugLogType_StaticEnum, TEXT("/Script/Debug"), TEXT("EDebugLogType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Debug_EDebugLogType_Hash() { return 4022814571U; }
	UEnum* Z_Construct_UEnum_Debug_EDebugLogType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Debug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDebugLogType"), 0, Get_Z_Construct_UEnum_Debug_EDebugLogType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DL_Info", (int64)DL_Info },
				{ "DL_Success", (int64)DL_Success },
				{ "DL_Warning", (int64)DL_Warning },
				{ "DL_Error", (int64)DL_Error },
				{ "DL_Fatal", (int64)DL_Fatal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DL_Error.DisplayName", "Error" },
				{ "DL_Error.Name", "DL_Error" },
				{ "DL_Fatal.DisplayName", "Fatal" },
				{ "DL_Fatal.Name", "DL_Fatal" },
				{ "DL_Info.DisplayName", "Info" },
				{ "DL_Info.Name", "DL_Info" },
				{ "DL_Success.DisplayName", "Success" },
				{ "DL_Success.Name", "DL_Success" },
				{ "DL_Warning.DisplayName", "Warning" },
				{ "DL_Warning.Name", "DL_Warning" },
				{ "ModuleRelativePath", "Public/Log.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Debug,
				nullptr,
				"EDebugLogType",
				"EDebugLogType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ULog::execUnImplemented)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::UnImplemented();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execCheckNoRecursion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::CheckNoRecursion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execCheckNoReEntry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::CheckNoReEntry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execCheckNoEntry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::CheckNoEntry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execCheckCondition)
	{
		P_GET_UBOOL(Z_Param_bCondition);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::CheckCondition(Z_Param_bCondition,Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execCheckObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::CheckObject(Z_Param_Object,Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execEnsureCondition)
	{
		P_GET_UBOOL(Z_Param_bCondition);
		P_GET_UBOOL(Z_Param_bAlwaysEnsure);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::EnsureCondition(Z_Param_bCondition,Z_Param_bAlwaysEnsure,Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execEnsureObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_UBOOL(Z_Param_bAlwaysEnsure);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::EnsureObject(Z_Param_Object,Z_Param_bAlwaysEnsure,Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execInBrackets_Text_Blueprint)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=ULog::InBrackets_Text_Blueprint(Z_Param_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execInBrackets_Name_Blueprint)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=ULog::InBrackets_Name_Blueprint(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execInBrackets_String_Blueprint)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=ULog::InBrackets_String_Blueprint(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execNumber_Float_Blueprint)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Number_Float_Blueprint(Z_Param_Number,Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execNumber_Int_Blueprint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Number);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_NumberSystem);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Number_Int_Blueprint(Z_Param_Number,Z_Param_Prefix,Z_Param_Suffix,EDebugLogNumberSystems(Z_Param_NumberSystem),ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssert_IsValid)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::Assert_IsValid(Z_Param_Object,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssert_False)
	{
		P_GET_UBOOL(Z_Param_bCondition);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::Assert_False(Z_Param_bCondition,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssert_True)
	{
		P_GET_UBOOL(Z_Param_bCondition);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::Assert_True(Z_Param_bCondition,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertValue_DateTime)
	{
		P_GET_STRUCT(FDateTime,Z_Param_Actual);
		P_GET_STRUCT(FDateTime,Z_Param_Expected);
		P_GET_PROPERTY(FByteProperty,Z_Param_ShouldBe);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertValue_DateTime(Z_Param_Actual,Z_Param_Expected,EDebugLogComparisonMethod(Z_Param_ShouldBe),Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertEqual_DateTime)
	{
		P_GET_STRUCT(FDateTime,Z_Param_Actual);
		P_GET_STRUCT(FDateTime,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertEqual_DateTime(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertNotEqual_Color)
	{
		P_GET_STRUCT(FColor,Z_Param_Actual);
		P_GET_STRUCT(FColor,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertNotEqual_Color(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertEqual_Color)
	{
		P_GET_STRUCT(FColor,Z_Param_Actual);
		P_GET_STRUCT(FColor,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertEqual_Color(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertNotEqual_Transform)
	{
		P_GET_STRUCT(FTransform,Z_Param_Actual);
		P_GET_STRUCT(FTransform,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bNoScale);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertNotEqual_Transform(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bNoScale,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertEqual_Transform)
	{
		P_GET_STRUCT(FTransform,Z_Param_Actual);
		P_GET_STRUCT(FTransform,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bNoScale);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertEqual_Transform(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bNoScale,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertNotEqual_Quat)
	{
		P_GET_STRUCT(FQuat,Z_Param_Actual);
		P_GET_STRUCT(FQuat,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertNotEqual_Quat(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertEqual_Quat)
	{
		P_GET_STRUCT(FQuat,Z_Param_Actual);
		P_GET_STRUCT(FQuat,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertEqual_Quat(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertNotEqual_Rotator)
	{
		P_GET_STRUCT(FRotator,Z_Param_Actual);
		P_GET_STRUCT(FRotator,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertNotEqual_Rotator(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertEqual_Rotator)
	{
		P_GET_STRUCT(FRotator,Z_Param_Actual);
		P_GET_STRUCT(FRotator,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertEqual_Rotator(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertNotEqual_Vector2D)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Actual);
		P_GET_STRUCT(FVector2D,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertNotEqual_Vector2D(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertNotEqual_Vector)
	{
		P_GET_STRUCT(FVector,Z_Param_Actual);
		P_GET_STRUCT(FVector,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertNotEqual_Vector(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertEqual_Vector2D)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Actual);
		P_GET_STRUCT(FVector2D,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertEqual_Vector2D(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertEqual_Vector)
	{
		P_GET_STRUCT(FVector,Z_Param_Actual);
		P_GET_STRUCT(FVector,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertEqual_Vector(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertNotEqual_Object)
	{
		P_GET_OBJECT(UObject,Z_Param_Actual);
		P_GET_OBJECT(UObject,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertNotEqual_Object(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertEqual_Object)
	{
		P_GET_OBJECT(UObject,Z_Param_Actual);
		P_GET_OBJECT(UObject,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertEqual_Object(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertNotEqual_Name)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Actual);
		P_GET_PROPERTY(FNameProperty,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertNotEqual_Name(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertEqual_Name)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Actual);
		P_GET_PROPERTY(FNameProperty,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertEqual_Name(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertNotEqual_String)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Actual);
		P_GET_PROPERTY(FStrProperty,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertNotEqual_String(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertEqual_String)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Actual);
		P_GET_PROPERTY(FStrProperty,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertEqual_String(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertValue_Float)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Actual);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Expected);
		P_GET_PROPERTY(FByteProperty,Z_Param_ShouldBe);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertValue_Float(Z_Param_Actual,Z_Param_Expected,EDebugLogComparisonMethod(Z_Param_ShouldBe),Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertEqual_Float)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Actual);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertEqual_Float(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertValue_Integer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Actual);
		P_GET_PROPERTY(FIntProperty,Z_Param_Expected);
		P_GET_PROPERTY(FByteProperty,Z_Param_ShouldBe);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertValue_Integer(Z_Param_Actual,Z_Param_Expected,EDebugLogComparisonMethod(Z_Param_ShouldBe),Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertEqual_Integer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Actual);
		P_GET_PROPERTY(FIntProperty,Z_Param_Expected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertEqual_Integer(Z_Param_Actual,Z_Param_Expected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execAssertEqual_Bool)
	{
		P_GET_UBOOL(Z_Param_bActual);
		P_GET_UBOOL(Z_Param_bExpected);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCrashOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULog::AssertEqual_Bool(Z_Param_bActual,Z_Param_bExpected,Z_Param_Message,Z_Param_bCrashOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execDollar)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDollarValue);
		P_GET_UBOOL(Z_Param_bConvertValueToInt);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Dollar(Z_Param_InDollarValue,Z_Param_bConvertValueToInt,Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeValue);
		P_GET_PROPERTY(FByteProperty,Z_Param_TimeUnit);
		P_GET_UBOOL(Z_Param_bConvertValueToInt);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Time(Z_Param_InTimeValue,EDebugLogTimeUnit(Z_Param_TimeUnit),Z_Param_bConvertValueToInt,Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSpeedValue);
		P_GET_PROPERTY(FByteProperty,Z_Param_SpeedUnit);
		P_GET_UBOOL(Z_Param_bConvertValueToInt);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Speed(Z_Param_InSpeedValue,EDebugLogSpeedUnit(Z_Param_SpeedUnit),Z_Param_bConvertValueToInt,Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execMass)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMassValue);
		P_GET_PROPERTY(FByteProperty,Z_Param_MassUnit);
		P_GET_UBOOL(Z_Param_bConvertValueToInt);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Mass(Z_Param_InMassValue,EDebugLogMassUnit(Z_Param_MassUnit),Z_Param_bConvertValueToInt,Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLengthValue);
		P_GET_PROPERTY(FByteProperty,Z_Param_LengthUnit);
		P_GET_UBOOL(Z_Param_bConvertValueToInt);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Length(Z_Param_InLengthValue,EDebugLogLengthUnit(Z_Param_LengthUnit),Z_Param_bConvertValueToInt,Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execData)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDataValue);
		P_GET_PROPERTY(FByteProperty,Z_Param_DataUnit);
		P_GET_UBOOL(Z_Param_bConvertValueToInt);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Data(Z_Param_InDataValue,EDebugLogDataUnit(Z_Param_DataUnit),Z_Param_bConvertValueToInt,Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InVolumeValue);
		P_GET_PROPERTY(FByteProperty,Z_Param_VolumeUnit);
		P_GET_UBOOL(Z_Param_bConvertValueToInt);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Volume(Z_Param_InVolumeValue,EDebugLogVolumeUnit(Z_Param_VolumeUnit),Z_Param_bConvertValueToInt,Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execTemperature)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTemperatureValue);
		P_GET_PROPERTY(FByteProperty,Z_Param_TemperatureUnit);
		P_GET_UBOOL(Z_Param_bConvertValueToInt);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Temperature(Z_Param_InTemperatureValue,EDebugLogTemperatureUnit(Z_Param_TemperatureUnit),Z_Param_bConvertValueToInt,Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execMessageInWorld)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FontScale);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::MessageInWorld(Z_Param_Message,Z_Param_Out_WorldLocation,Z_Param_FontScale,Z_Param_Prefix,Z_Param_Suffix,Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execDateTime)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_InDateTime);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::DateTime(Z_Param_Out_InDateTime,Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InColor);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Color(Z_Param_Out_InColor,Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execMatrix)
	{
		P_GET_STRUCT_REF(FMatrix,Z_Param_Out_InMatrix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Matrix(Z_Param_Out_InMatrix,Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execQuat)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quaternion);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Quat(Z_Param_Out_Quaternion,Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_UBOOL(Z_Param_bFormat);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Transform(Z_Param_Out_InTransform,Z_Param_Prefix,Z_Param_bFormat,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execRotator)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotator);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Rotator(Z_Param_Out_InRotator,Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execVector2D)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InVector2D);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Vector2D(Z_Param_Out_InVector2D,Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execVector)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVector);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Vector(Z_Param_Out_InVector,Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execBool)
	{
		P_GET_UBOOL(Z_Param_bBoolToTest);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Bool(Z_Param_bBoolToTest,Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Percent(Z_Param_Number,Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execStopDebugTimer)
	{
		P_GET_UBOOL(Z_Param_bAutoDetermineTimeUnit);
		P_GET_PROPERTY(FByteProperty,Z_Param_DisplayIn);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::StopDebugTimer(Z_Param_bAutoDetermineTimeUnit,EDebugLogTimeUnit(Z_Param_DisplayIn),ELoggingOptions(Z_Param_LoggingOption));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execStartDebugTimer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::StartDebugTimer(Z_Param_Description);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execNo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::No(Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execYes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Yes(Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execInvalid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Invalid(Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execValid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Valid(Z_Param_Prefix,Z_Param_Suffix,ELoggingOptions(Z_Param_LoggingOption));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execYo)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Yo(ELoggingOptions(Z_Param_LoggingOption));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execWassup)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Wassup(ELoggingOptions(Z_Param_LoggingOption));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execCya)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Cya(ELoggingOptions(Z_Param_LoggingOption));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execGoodbye)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Goodbye(ELoggingOptions(Z_Param_LoggingOption));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execBye)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Bye(ELoggingOptions(Z_Param_LoggingOption));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execHey)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Hey(ELoggingOptions(Z_Param_LoggingOption));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execHello)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Hello(ELoggingOptions(Z_Param_LoggingOption));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execInfo_WithCondition)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCondition);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_UBOOL(Z_Param_bAddPrefix);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Info_WithCondition(Z_Param_Message,Z_Param_bCondition,ELoggingOptions(Z_Param_LoggingOption),Z_Param_bAddPrefix,Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_UBOOL(Z_Param_bAddPrefix);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Info(Z_Param_Message,ELoggingOptions(Z_Param_LoggingOption),Z_Param_bAddPrefix,Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execWarning_WithCondition)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCondition);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_UBOOL(Z_Param_bAddPrefix);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Warning_WithCondition(Z_Param_Message,Z_Param_bCondition,ELoggingOptions(Z_Param_LoggingOption),Z_Param_bAddPrefix,Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execWarning)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_UBOOL(Z_Param_bAddPrefix);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Warning(Z_Param_Message,ELoggingOptions(Z_Param_LoggingOption),Z_Param_bAddPrefix,Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execSuccess_WithCondition)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCondition);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_UBOOL(Z_Param_bAddPrefix);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Success_WithCondition(Z_Param_Message,Z_Param_bCondition,ELoggingOptions(Z_Param_LoggingOption),Z_Param_bAddPrefix,Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execSuccess)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_UBOOL(Z_Param_bAddPrefix);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Success(Z_Param_Message,ELoggingOptions(Z_Param_LoggingOption),Z_Param_bAddPrefix,Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execError_WithCondition)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCondition);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_UBOOL(Z_Param_bAddPrefix);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Error_WithCondition(Z_Param_Message,Z_Param_bCondition,ELoggingOptions(Z_Param_LoggingOption),Z_Param_bAddPrefix,Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_UBOOL(Z_Param_bAddPrefix);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Error(Z_Param_Message,ELoggingOptions(Z_Param_LoggingOption),Z_Param_bAddPrefix,Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execFatal_WithCondition)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bCondition);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Fatal_WithCondition(Z_Param_Message,Z_Param_bCondition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execFatal)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Fatal(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execCrash)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FStrProperty,Z_Param_FromFunction);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::Crash(Z_Param_Message,Z_Param_FromFunction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execDebugMessage_WithCondition)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_LogSeverity);
		P_GET_UBOOL(Z_Param_bCondition);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_UBOOL(Z_Param_bAddPrefix);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::DebugMessage_WithCondition(EDebugLogType(Z_Param_LogSeverity),Z_Param_bCondition,Z_Param_Message,ELoggingOptions(Z_Param_LoggingOption),Z_Param_bAddPrefix,Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execDebugMessage)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_LogSeverity);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_UBOOL(Z_Param_bAddPrefix);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::DebugMessage(EDebugLogType(Z_Param_LogSeverity),Z_Param_Message,ELoggingOptions(Z_Param_LoggingOption),Z_Param_bAddPrefix,Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execObjectName)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_UBOOL(Z_Param_bSilenceOnError);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::ObjectName(Z_Param_InObject,Z_Param_bSilenceOnError,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULog::execObjectValidity)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_UBOOL(Z_Param_bSilenceOnError);
		P_GET_PROPERTY(FByteProperty,Z_Param_LoggingOption);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULog::ObjectValidity(Z_Param_InObject,Z_Param_bSilenceOnError,ELoggingOptions(Z_Param_LoggingOption),Z_Param_TimeToDisplay);
		P_NATIVE_END;
	}
	void ULog::StaticRegisterNativesULog()
	{
		UClass* Class = ULog::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Assert_False", &ULog::execAssert_False },
			{ "Assert_IsValid", &ULog::execAssert_IsValid },
			{ "Assert_True", &ULog::execAssert_True },
			{ "AssertEqual_Bool", &ULog::execAssertEqual_Bool },
			{ "AssertEqual_Color", &ULog::execAssertEqual_Color },
			{ "AssertEqual_DateTime", &ULog::execAssertEqual_DateTime },
			{ "AssertEqual_Float", &ULog::execAssertEqual_Float },
			{ "AssertEqual_Integer", &ULog::execAssertEqual_Integer },
			{ "AssertEqual_Name", &ULog::execAssertEqual_Name },
			{ "AssertEqual_Object", &ULog::execAssertEqual_Object },
			{ "AssertEqual_Quat", &ULog::execAssertEqual_Quat },
			{ "AssertEqual_Rotator", &ULog::execAssertEqual_Rotator },
			{ "AssertEqual_String", &ULog::execAssertEqual_String },
			{ "AssertEqual_Transform", &ULog::execAssertEqual_Transform },
			{ "AssertEqual_Vector", &ULog::execAssertEqual_Vector },
			{ "AssertEqual_Vector2D", &ULog::execAssertEqual_Vector2D },
			{ "AssertNotEqual_Color", &ULog::execAssertNotEqual_Color },
			{ "AssertNotEqual_Name", &ULog::execAssertNotEqual_Name },
			{ "AssertNotEqual_Object", &ULog::execAssertNotEqual_Object },
			{ "AssertNotEqual_Quat", &ULog::execAssertNotEqual_Quat },
			{ "AssertNotEqual_Rotator", &ULog::execAssertNotEqual_Rotator },
			{ "AssertNotEqual_String", &ULog::execAssertNotEqual_String },
			{ "AssertNotEqual_Transform", &ULog::execAssertNotEqual_Transform },
			{ "AssertNotEqual_Vector", &ULog::execAssertNotEqual_Vector },
			{ "AssertNotEqual_Vector2D", &ULog::execAssertNotEqual_Vector2D },
			{ "AssertValue_DateTime", &ULog::execAssertValue_DateTime },
			{ "AssertValue_Float", &ULog::execAssertValue_Float },
			{ "AssertValue_Integer", &ULog::execAssertValue_Integer },
			{ "Bool", &ULog::execBool },
			{ "Bye", &ULog::execBye },
			{ "CheckCondition", &ULog::execCheckCondition },
			{ "CheckNoEntry", &ULog::execCheckNoEntry },
			{ "CheckNoRecursion", &ULog::execCheckNoRecursion },
			{ "CheckNoReEntry", &ULog::execCheckNoReEntry },
			{ "CheckObject", &ULog::execCheckObject },
			{ "Color", &ULog::execColor },
			{ "Crash", &ULog::execCrash },
			{ "Cya", &ULog::execCya },
			{ "Data", &ULog::execData },
			{ "DateTime", &ULog::execDateTime },
			{ "DebugMessage", &ULog::execDebugMessage },
			{ "DebugMessage_WithCondition", &ULog::execDebugMessage_WithCondition },
			{ "Dollar", &ULog::execDollar },
			{ "EnsureCondition", &ULog::execEnsureCondition },
			{ "EnsureObject", &ULog::execEnsureObject },
			{ "Error", &ULog::execError },
			{ "Error_WithCondition", &ULog::execError_WithCondition },
			{ "Fatal", &ULog::execFatal },
			{ "Fatal_WithCondition", &ULog::execFatal_WithCondition },
			{ "Goodbye", &ULog::execGoodbye },
			{ "Hello", &ULog::execHello },
			{ "Hey", &ULog::execHey },
			{ "InBrackets_Name_Blueprint", &ULog::execInBrackets_Name_Blueprint },
			{ "InBrackets_String_Blueprint", &ULog::execInBrackets_String_Blueprint },
			{ "InBrackets_Text_Blueprint", &ULog::execInBrackets_Text_Blueprint },
			{ "Info", &ULog::execInfo },
			{ "Info_WithCondition", &ULog::execInfo_WithCondition },
			{ "Invalid", &ULog::execInvalid },
			{ "Length", &ULog::execLength },
			{ "Mass", &ULog::execMass },
			{ "Matrix", &ULog::execMatrix },
			{ "MessageInWorld", &ULog::execMessageInWorld },
			{ "No", &ULog::execNo },
			{ "Number_Float_Blueprint", &ULog::execNumber_Float_Blueprint },
			{ "Number_Int_Blueprint", &ULog::execNumber_Int_Blueprint },
			{ "ObjectName", &ULog::execObjectName },
			{ "ObjectValidity", &ULog::execObjectValidity },
			{ "Percent", &ULog::execPercent },
			{ "Quat", &ULog::execQuat },
			{ "Rotator", &ULog::execRotator },
			{ "Speed", &ULog::execSpeed },
			{ "StartDebugTimer", &ULog::execStartDebugTimer },
			{ "StopDebugTimer", &ULog::execStopDebugTimer },
			{ "Success", &ULog::execSuccess },
			{ "Success_WithCondition", &ULog::execSuccess_WithCondition },
			{ "Temperature", &ULog::execTemperature },
			{ "Time", &ULog::execTime },
			{ "Transform", &ULog::execTransform },
			{ "UnImplemented", &ULog::execUnImplemented },
			{ "Valid", &ULog::execValid },
			{ "Vector", &ULog::execVector },
			{ "Vector2D", &ULog::execVector2D },
			{ "Volume", &ULog::execVolume },
			{ "Warning", &ULog::execWarning },
			{ "Warning_WithCondition", &ULog::execWarning_WithCondition },
			{ "Wassup", &ULog::execWassup },
			{ "Yes", &ULog::execYes },
			{ "Yo", &ULog::execYo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULog_Assert_False_Statics
	{
		struct Log_eventAssert_False_Parms
		{
			bool bCondition;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_bCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCondition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_Assert_False_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssert_False_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Assert_False_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssert_False_Parms), &Z_Construct_UFunction_ULog_Assert_False_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_Assert_False_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssert_False_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Assert_False_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssert_False_Parms), &Z_Construct_UFunction_ULog_Assert_False_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Assert_False_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssert_False_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_Assert_False_Statics::NewProp_bCondition_SetBit(void* Obj)
	{
		((Log_eventAssert_False_Parms*)Obj)->bCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Assert_False_Statics::NewProp_bCondition = { "bCondition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssert_False_Parms), &Z_Construct_UFunction_ULog_Assert_False_Statics::NewProp_bCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Assert_False_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Assert_False_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Assert_False_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Assert_False_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Assert_False_Statics::NewProp_bCondition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Assert_False_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert" },
		{ "Comment", "// Assert that a bool value is false\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert False" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that a bool value is false" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Assert_False_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Assert_False", nullptr, nullptr, sizeof(Log_eventAssert_False_Parms), Z_Construct_UFunction_ULog_Assert_False_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Assert_False_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Assert_False_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Assert_False_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Assert_False()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Assert_False_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Assert_IsValid_Statics
	{
		struct Log_eventAssert_IsValid_Parms
		{
			UObject* Object;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_Assert_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssert_IsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Assert_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssert_IsValid_Parms), &Z_Construct_UFunction_ULog_Assert_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_Assert_IsValid_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssert_IsValid_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Assert_IsValid_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssert_IsValid_Parms), &Z_Construct_UFunction_ULog_Assert_IsValid_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Assert_IsValid_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssert_IsValid_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULog_Assert_IsValid_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssert_IsValid_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Assert_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Assert_IsValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Assert_IsValid_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Assert_IsValid_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Assert_IsValid_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Assert_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert" },
		{ "Comment", "// Assert that an object is valid\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Is Valid" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that an object is valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Assert_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Assert_IsValid", nullptr, nullptr, sizeof(Log_eventAssert_IsValid_Parms), Z_Construct_UFunction_ULog_Assert_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Assert_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Assert_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Assert_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Assert_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Assert_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Assert_True_Statics
	{
		struct Log_eventAssert_True_Parms
		{
			bool bCondition;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_bCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCondition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_Assert_True_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssert_True_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Assert_True_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssert_True_Parms), &Z_Construct_UFunction_ULog_Assert_True_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_Assert_True_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssert_True_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Assert_True_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssert_True_Parms), &Z_Construct_UFunction_ULog_Assert_True_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Assert_True_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssert_True_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_Assert_True_Statics::NewProp_bCondition_SetBit(void* Obj)
	{
		((Log_eventAssert_True_Parms*)Obj)->bCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Assert_True_Statics::NewProp_bCondition = { "bCondition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssert_True_Parms), &Z_Construct_UFunction_ULog_Assert_True_Statics::NewProp_bCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Assert_True_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Assert_True_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Assert_True_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Assert_True_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Assert_True_Statics::NewProp_bCondition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Assert_True_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert" },
		{ "Comment", "// Assert that a bool value is true\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert True" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that a bool value is true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Assert_True_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Assert_True", nullptr, nullptr, sizeof(Log_eventAssert_True_Parms), Z_Construct_UFunction_ULog_Assert_True_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Assert_True_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Assert_True_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Assert_True_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Assert_True()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Assert_True_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics
	{
		struct Log_eventAssertEqual_Bool_Parms
		{
			bool bActual;
			bool bExpected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_bExpected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExpected;
		static void NewProp_bActual_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Bool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Bool_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Bool_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Bool_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Bool_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::NewProp_bExpected_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Bool_Parms*)Obj)->bExpected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::NewProp_bExpected = { "bExpected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Bool_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::NewProp_bExpected_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::NewProp_bActual_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Bool_Parms*)Obj)->bActual = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::NewProp_bActual = { "bActual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Bool_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::NewProp_bActual_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::NewProp_bExpected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::NewProp_bActual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Equal" },
		{ "Comment", "// Assert that two bools are equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Equal (Bool)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two bools are equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertEqual_Bool", nullptr, nullptr, sizeof(Log_eventAssertEqual_Bool_Parms), Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertEqual_Bool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertEqual_Bool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertEqual_Color_Statics
	{
		struct Log_eventAssertEqual_Color_Parms
		{
			FColor Actual;
			FColor Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Color_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Color_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Color_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Color_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Color_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Color_Parms, Expected), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Color_Parms, Actual), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Equal" },
		{ "Comment", "// Assert that two colors are equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Equal (Color)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two colors are equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertEqual_Color", nullptr, nullptr, sizeof(Log_eventAssertEqual_Color_Parms), Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertEqual_Color()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertEqual_Color_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics
	{
		struct Log_eventAssertEqual_DateTime_Parms
		{
			FDateTime Actual;
			FDateTime Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_DateTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_DateTime_Parms), &Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_DateTime_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_DateTime_Parms), &Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_DateTime_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_DateTime_Parms, Expected), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_DateTime_Parms, Actual), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Equal" },
		{ "Comment", "// Assert that two DateTime values are equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Equal (DateTime)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two DateTime values are equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertEqual_DateTime", nullptr, nullptr, sizeof(Log_eventAssertEqual_DateTime_Parms), Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertEqual_DateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertEqual_DateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertEqual_Float_Statics
	{
		struct Log_eventAssertEqual_Float_Parms
		{
			float Actual;
			float Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Float_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Float_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Float_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Float_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Float_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Float_Parms, Expected), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Float_Parms, Actual), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Equal" },
		{ "Comment", "// Assert that two floats are equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Equal (Float)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two floats are equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertEqual_Float", nullptr, nullptr, sizeof(Log_eventAssertEqual_Float_Parms), Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertEqual_Float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertEqual_Float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics
	{
		struct Log_eventAssertEqual_Integer_Parms
		{
			int32 Actual;
			int32 Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Integer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Integer_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Integer_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Integer_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Integer_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Integer_Parms, Expected), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Integer_Parms, Actual), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Equal" },
		{ "Comment", "// Assert that two integers are equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Equal (Integer)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two integers are equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertEqual_Integer", nullptr, nullptr, sizeof(Log_eventAssertEqual_Integer_Parms), Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertEqual_Integer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertEqual_Integer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertEqual_Name_Statics
	{
		struct Log_eventAssertEqual_Name_Parms
		{
			FName Actual;
			FName Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Name_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Name_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Name_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Name_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Name_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Name_Parms, Expected), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Name_Parms, Actual), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Equal" },
		{ "Comment", "// Assert that two names are equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Equal (Name)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two names are equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertEqual_Name", nullptr, nullptr, sizeof(Log_eventAssertEqual_Name_Parms), Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertEqual_Name()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertEqual_Name_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertEqual_Object_Statics
	{
		struct Log_eventAssertEqual_Object_Parms
		{
			UObject* Actual;
			UObject* Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Object_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Object_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Object_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Object_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Object_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Object_Parms, Expected), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Object_Parms, Actual), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Equal" },
		{ "Comment", "// Assert that two objects are equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Equal (Object)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two objects are equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertEqual_Object", nullptr, nullptr, sizeof(Log_eventAssertEqual_Object_Parms), Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertEqual_Object()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertEqual_Object_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics
	{
		struct Log_eventAssertEqual_Quat_Parms
		{
			FQuat Actual;
			FQuat Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Quat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Quat_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Quat_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Quat_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Quat_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Quat_Parms, Expected), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Quat_Parms, Actual), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Equal" },
		{ "Comment", "// Assert that two quaternions are equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Equal (Quaternion)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two quaternions are equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertEqual_Quat", nullptr, nullptr, sizeof(Log_eventAssertEqual_Quat_Parms), Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertEqual_Quat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertEqual_Quat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics
	{
		struct Log_eventAssertEqual_Rotator_Parms
		{
			FRotator Actual;
			FRotator Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Rotator_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Rotator_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Rotator_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Rotator_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Rotator_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Rotator_Parms, Expected), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Rotator_Parms, Actual), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Equal" },
		{ "Comment", "// Assert that two rotators are equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Equal (Rotator)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two rotators are equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertEqual_Rotator", nullptr, nullptr, sizeof(Log_eventAssertEqual_Rotator_Parms), Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertEqual_Rotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertEqual_Rotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertEqual_String_Statics
	{
		struct Log_eventAssertEqual_String_Parms
		{
			FString Actual;
			FString Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertEqual_String_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_String_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_String_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_String_Parms), &Z_Construct_UFunction_ULog_AssertEqual_String_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertEqual_String_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_String_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_String_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_String_Parms), &Z_Construct_UFunction_ULog_AssertEqual_String_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertEqual_String_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_String_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertEqual_String_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_String_Parms, Expected), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertEqual_String_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_String_Parms, Actual), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertEqual_String_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_String_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_String_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_String_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_String_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_String_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertEqual_String_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Equal" },
		{ "Comment", "// Assert that two strings are equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Equal (String)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two strings are equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertEqual_String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertEqual_String", nullptr, nullptr, sizeof(Log_eventAssertEqual_String_Parms), Z_Construct_UFunction_ULog_AssertEqual_String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertEqual_String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertEqual_String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertEqual_String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics
	{
		struct Log_eventAssertEqual_Transform_Parms
		{
			FTransform Actual;
			FTransform Expected;
			FString Message;
			bool bNoScale;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static void NewProp_bNoScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoScale;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Transform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Transform_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Transform_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Transform_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::NewProp_bNoScale_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Transform_Parms*)Obj)->bNoScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::NewProp_bNoScale = { "bNoScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Transform_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::NewProp_bNoScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Transform_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Transform_Parms, Expected), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Transform_Parms, Actual), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::NewProp_bNoScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Equal" },
		{ "Comment", "// Assert that two transforms are equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "CPP_Default_bNoScale", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Equal (Transform)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two transforms are equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertEqual_Transform", nullptr, nullptr, sizeof(Log_eventAssertEqual_Transform_Parms), Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertEqual_Transform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertEqual_Transform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics
	{
		struct Log_eventAssertEqual_Vector_Parms
		{
			FVector Actual;
			FVector Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Vector_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Vector_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Vector_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Vector_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Vector_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Vector_Parms, Expected), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Vector_Parms, Actual), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Equal" },
		{ "Comment", "// Assert that two vectors are equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Equal (Vector)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two vectors are equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertEqual_Vector", nullptr, nullptr, sizeof(Log_eventAssertEqual_Vector_Parms), Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertEqual_Vector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertEqual_Vector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics
	{
		struct Log_eventAssertEqual_Vector2D_Parms
		{
			FVector2D Actual;
			FVector2D Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Vector2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Vector2D_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertEqual_Vector2D_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertEqual_Vector2D_Parms), &Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Vector2D_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Vector2D_Parms, Expected), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertEqual_Vector2D_Parms, Actual), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Equal" },
		{ "Comment", "// Assert that two vectors are equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Equal (Vector2D)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two vectors are equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertEqual_Vector2D", nullptr, nullptr, sizeof(Log_eventAssertEqual_Vector2D_Parms), Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertEqual_Vector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertEqual_Vector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics
	{
		struct Log_eventAssertNotEqual_Color_Parms
		{
			FColor Actual;
			FColor Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_Color_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_Color_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_Color_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_Color_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Color_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Color_Parms, Expected), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Color_Parms, Actual), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Not Equal" },
		{ "Comment", "// Assert that two colors are not equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Not Equal (Color)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two colors are not equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertNotEqual_Color", nullptr, nullptr, sizeof(Log_eventAssertNotEqual_Color_Parms), Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertNotEqual_Color()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertNotEqual_Color_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics
	{
		struct Log_eventAssertNotEqual_Name_Parms
		{
			FName Actual;
			FName Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_Name_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_Name_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_Name_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_Name_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Name_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Name_Parms, Expected), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Name_Parms, Actual), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Not Equal" },
		{ "Comment", "// Assert that two names are not equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Not Equal (Name)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two names are not equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertNotEqual_Name", nullptr, nullptr, sizeof(Log_eventAssertNotEqual_Name_Parms), Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertNotEqual_Name()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertNotEqual_Name_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics
	{
		struct Log_eventAssertNotEqual_Object_Parms
		{
			UObject* Actual;
			UObject* Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_Object_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_Object_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_Object_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_Object_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Object_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Object_Parms, Expected), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Object_Parms, Actual), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Not Equal" },
		{ "Comment", "// Assert that two objects are not equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Not Equal (Object)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two objects are not equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertNotEqual_Object", nullptr, nullptr, sizeof(Log_eventAssertNotEqual_Object_Parms), Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertNotEqual_Object()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertNotEqual_Object_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics
	{
		struct Log_eventAssertNotEqual_Quat_Parms
		{
			FQuat Actual;
			FQuat Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_Quat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_Quat_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_Quat_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_Quat_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Quat_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Quat_Parms, Expected), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Quat_Parms, Actual), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Not Equal" },
		{ "Comment", "// Assert that two quaternions are not equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Not Equal (Quaternion)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two quaternions are not equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertNotEqual_Quat", nullptr, nullptr, sizeof(Log_eventAssertNotEqual_Quat_Parms), Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertNotEqual_Quat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertNotEqual_Quat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics
	{
		struct Log_eventAssertNotEqual_Rotator_Parms
		{
			FRotator Actual;
			FRotator Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_Rotator_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_Rotator_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_Rotator_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_Rotator_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Rotator_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Rotator_Parms, Expected), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Rotator_Parms, Actual), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Not Equal" },
		{ "Comment", "// Assert that two rotators are not equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Not Equal (Rotator)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two rotators are not equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertNotEqual_Rotator", nullptr, nullptr, sizeof(Log_eventAssertNotEqual_Rotator_Parms), Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertNotEqual_Rotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertNotEqual_Rotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics
	{
		struct Log_eventAssertNotEqual_String_Parms
		{
			FString Actual;
			FString Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_String_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_String_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_String_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_String_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_String_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_String_Parms, Expected), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_String_Parms, Actual), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Not Equal" },
		{ "Comment", "// Assert that two strings are not equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Not Equal (String)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two strings are not equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertNotEqual_String", nullptr, nullptr, sizeof(Log_eventAssertNotEqual_String_Parms), Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertNotEqual_String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertNotEqual_String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics
	{
		struct Log_eventAssertNotEqual_Transform_Parms
		{
			FTransform Actual;
			FTransform Expected;
			FString Message;
			bool bNoScale;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static void NewProp_bNoScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoScale;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_Transform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_Transform_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_Transform_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_Transform_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::NewProp_bNoScale_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_Transform_Parms*)Obj)->bNoScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::NewProp_bNoScale = { "bNoScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_Transform_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::NewProp_bNoScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Transform_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Transform_Parms, Expected), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Transform_Parms, Actual), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::NewProp_bNoScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Not Equal" },
		{ "Comment", "// Assert that two transforms are not equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "CPP_Default_bNoScale", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Not Equal (Transform)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two transforms are not equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertNotEqual_Transform", nullptr, nullptr, sizeof(Log_eventAssertNotEqual_Transform_Parms), Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertNotEqual_Transform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertNotEqual_Transform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics
	{
		struct Log_eventAssertNotEqual_Vector_Parms
		{
			FVector Actual;
			FVector Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_Vector_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_Vector_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_Vector_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_Vector_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Vector_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Vector_Parms, Expected), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Vector_Parms, Actual), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Not Equal" },
		{ "Comment", "// Assert that two vectors are not equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Not Equal (Vector)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two vectors are not equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertNotEqual_Vector", nullptr, nullptr, sizeof(Log_eventAssertNotEqual_Vector_Parms), Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertNotEqual_Vector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertNotEqual_Vector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics
	{
		struct Log_eventAssertNotEqual_Vector2D_Parms
		{
			FVector2D Actual;
			FVector2D Expected;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_Vector2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_Vector2D_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertNotEqual_Vector2D_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertNotEqual_Vector2D_Parms), &Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Vector2D_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Vector2D_Parms, Expected), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertNotEqual_Vector2D_Parms, Actual), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Not Equal" },
		{ "Comment", "// Assert that two vectors are not equal\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Not Equal (Vector2D)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert that two vectors are not equal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertNotEqual_Vector2D", nullptr, nullptr, sizeof(Log_eventAssertNotEqual_Vector2D_Parms), Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics
	{
		struct Log_eventAssertValue_DateTime_Parms
		{
			FDateTime Actual;
			FDateTime Expected;
			TEnumAsByte<EDebugLogComparisonMethod> ShouldBe;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShouldBe;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertValue_DateTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertValue_DateTime_Parms), &Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertValue_DateTime_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertValue_DateTime_Parms), &Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertValue_DateTime_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::NewProp_ShouldBe = { "ShouldBe", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertValue_DateTime_Parms, ShouldBe), Z_Construct_UEnum_Debug_EDebugLogComparisonMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertValue_DateTime_Parms, Expected), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertValue_DateTime_Parms, Actual), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::NewProp_ShouldBe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Value" },
		{ "Comment", "// Assert a relationship between two DateTime values\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Value (DateTime)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert a relationship between two DateTime values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertValue_DateTime", nullptr, nullptr, sizeof(Log_eventAssertValue_DateTime_Parms), Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertValue_DateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertValue_DateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertValue_Float_Statics
	{
		struct Log_eventAssertValue_Float_Parms
		{
			float Actual;
			float Expected;
			TEnumAsByte<EDebugLogComparisonMethod> ShouldBe;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShouldBe;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertValue_Float_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertValue_Float_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertValue_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertValue_Float_Parms), &Z_Construct_UFunction_ULog_AssertValue_Float_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertValue_Float_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertValue_Float_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertValue_Float_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertValue_Float_Parms), &Z_Construct_UFunction_ULog_AssertValue_Float_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertValue_Float_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertValue_Float_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_AssertValue_Float_Statics::NewProp_ShouldBe = { "ShouldBe", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertValue_Float_Parms, ShouldBe), Z_Construct_UEnum_Debug_EDebugLogComparisonMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_AssertValue_Float_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertValue_Float_Parms, Expected), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_AssertValue_Float_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertValue_Float_Parms, Actual), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertValue_Float_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertValue_Float_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertValue_Float_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertValue_Float_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertValue_Float_Statics::NewProp_ShouldBe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertValue_Float_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertValue_Float_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertValue_Float_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Value" },
		{ "Comment", "// Assert on a relationship between two floats\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Value (Float)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert on a relationship between two floats" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertValue_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertValue_Float", nullptr, nullptr, sizeof(Log_eventAssertValue_Float_Parms), Z_Construct_UFunction_ULog_AssertValue_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertValue_Float_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertValue_Float_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertValue_Float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertValue_Float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertValue_Float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_AssertValue_Integer_Statics
	{
		struct Log_eventAssertValue_Integer_Parms
		{
			int32 Actual;
			int32 Expected;
			TEnumAsByte<EDebugLogComparisonMethod> ShouldBe;
			FString Message;
			bool bCrashOnFailure;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCrashOnFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashOnFailure;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShouldBe;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Expected;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Actual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Log_eventAssertValue_Integer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertValue_Integer_Parms), &Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::NewProp_bCrashOnFailure_SetBit(void* Obj)
	{
		((Log_eventAssertValue_Integer_Parms*)Obj)->bCrashOnFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::NewProp_bCrashOnFailure = { "bCrashOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventAssertValue_Integer_Parms), &Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::NewProp_bCrashOnFailure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertValue_Integer_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::NewProp_ShouldBe = { "ShouldBe", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertValue_Integer_Parms, ShouldBe), Z_Construct_UEnum_Debug_EDebugLogComparisonMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertValue_Integer_Parms, Expected), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventAssertValue_Integer_Parms, Actual), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::NewProp_bCrashOnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::NewProp_ShouldBe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::NewProp_Expected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::NewProp_Actual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Assert | Value" },
		{ "Comment", "// Assert on a relationship between two integers\n" },
		{ "CPP_Default_bCrashOnFailure", "false" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Assert Value (Integer)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Assert on a relationship between two integers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "AssertValue_Integer", nullptr, nullptr, sizeof(Log_eventAssertValue_Integer_Parms), Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_AssertValue_Integer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_AssertValue_Integer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Bool_Statics
	{
		struct Log_eventBool_Parms
		{
			bool bBoolToTest;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static void NewProp_bBoolToTest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBoolToTest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Bool_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventBool_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Bool_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventBool_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Bool_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Bool_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventBool_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Bool_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Bool_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Bool_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Bool_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventBool_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Bool_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Bool_Statics::NewProp_Prefix_MetaData)) };
	void Z_Construct_UFunction_ULog_Bool_Statics::NewProp_bBoolToTest_SetBit(void* Obj)
	{
		((Log_eventBool_Parms*)Obj)->bBoolToTest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Bool_Statics::NewProp_bBoolToTest = { "bBoolToTest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventBool_Parms), &Z_Construct_UFunction_ULog_Bool_Statics::NewProp_bBoolToTest_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Bool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Bool_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Bool_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Bool_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Bool_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Bool_Statics::NewProp_bBoolToTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Bool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log the given bool value to the console or viewport\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log the given bool value to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Bool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Bool", nullptr, nullptr, sizeof(Log_eventBool_Parms), Z_Construct_UFunction_ULog_Bool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Bool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Bool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Bool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Bool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Bool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Bye_Statics
	{
		struct Log_eventBye_Parms
		{
			TEnumAsByte<ELoggingOptions> LoggingOption;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Bye_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventBye_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Bye_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Bye_Statics::NewProp_LoggingOption,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Bye_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a bye message to the console or viewport\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a bye message to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Bye_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Bye", nullptr, nullptr, sizeof(Log_eventBye_Parms), Z_Construct_UFunction_ULog_Bye_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Bye_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Bye_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Bye_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Bye()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Bye_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_CheckCondition_Statics
	{
		struct Log_eventCheckCondition_Parms
		{
			bool bCondition;
			FString Message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_bCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCondition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_CheckCondition_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_CheckCondition_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventCheckCondition_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_CheckCondition_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_CheckCondition_Statics::NewProp_Message_MetaData)) };
	void Z_Construct_UFunction_ULog_CheckCondition_Statics::NewProp_bCondition_SetBit(void* Obj)
	{
		((Log_eventCheckCondition_Parms*)Obj)->bCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_CheckCondition_Statics::NewProp_bCondition = { "bCondition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventCheckCondition_Parms), &Z_Construct_UFunction_ULog_CheckCondition_Statics::NewProp_bCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_CheckCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_CheckCondition_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_CheckCondition_Statics::NewProp_bCondition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_CheckCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// This function executes the expression and, if it results in a false assertion, halts execution. \n" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Check (Condition)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "This function executes the expression and, if it results in a false assertion, halts execution." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_CheckCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "CheckCondition", nullptr, nullptr, sizeof(Log_eventCheckCondition_Parms), Z_Construct_UFunction_ULog_CheckCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_CheckCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_CheckCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_CheckCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_CheckCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_CheckCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_CheckNoEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_CheckNoEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// This function doesn't take an expression and is used to mark code paths that should never execute.\n" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "This function doesn't take an expression and is used to mark code paths that should never execute." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_CheckNoEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "CheckNoEntry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_CheckNoEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_CheckNoEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_CheckNoEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_CheckNoEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_CheckNoRecursion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_CheckNoRecursion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// This function is used to prevent code that should never be called recursively.\n" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "This function is used to prevent code that should never be called recursively." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_CheckNoRecursion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "CheckNoRecursion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_CheckNoRecursion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_CheckNoRecursion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_CheckNoRecursion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_CheckNoRecursion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_CheckNoReEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_CheckNoReEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// This function is used to prevent calls from being reentrant to a given function. Use it for functions that should only be called once and must be completed before being called again.\n" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Check No Re-Entry" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "This function is used to prevent calls from being reentrant to a given function. Use it for functions that should only be called once and must be completed before being called again." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_CheckNoReEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "CheckNoReEntry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_CheckNoReEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_CheckNoReEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_CheckNoReEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_CheckNoReEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_CheckObject_Statics
	{
		struct Log_eventCheckObject_Parms
		{
			UObject* Object;
			FString Message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_CheckObject_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_CheckObject_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventCheckObject_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_CheckObject_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_CheckObject_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULog_CheckObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventCheckObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_CheckObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_CheckObject_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_CheckObject_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_CheckObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// This function executes the expression and, if it results in a false assertion, halts execution. \n" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Check (Object)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "This function executes the expression and, if it results in a false assertion, halts execution." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_CheckObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "CheckObject", nullptr, nullptr, sizeof(Log_eventCheckObject_Parms), Z_Construct_UFunction_ULog_CheckObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_CheckObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_CheckObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_CheckObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_CheckObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_CheckObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Color_Statics
	{
		struct Log_eventColor_Parms
		{
			FLinearColor InColor;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Color_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventColor_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Color_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventColor_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Color_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Color_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventColor_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Color_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Color_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Color_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Color_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventColor_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Color_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Color_Statics::NewProp_Prefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Color_Statics::NewProp_InColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_Color_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventColor_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ULog_Color_Statics::NewProp_InColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Color_Statics::NewProp_InColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Color_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Color_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Color_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Color_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Color_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Color_Statics::NewProp_InColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Color_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a color value to the console or viewport\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a color value to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Color_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Color", nullptr, nullptr, sizeof(Log_eventColor_Parms), Z_Construct_UFunction_ULog_Color_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Color_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Color_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Color_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Color()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Color_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Crash_Statics
	{
		struct Log_eventCrash_Parms
		{
			FString Message;
			FString FromFunction;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FromFunction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Crash_Statics::NewProp_FromFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Crash_Statics::NewProp_FromFunction = { "FromFunction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventCrash_Parms, FromFunction), METADATA_PARAMS(Z_Construct_UFunction_ULog_Crash_Statics::NewProp_FromFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Crash_Statics::NewProp_FromFunction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Crash_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Crash_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventCrash_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_Crash_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Crash_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Crash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Crash_Statics::NewProp_FromFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Crash_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Crash_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Crash the game, and log the message to the console and log file. FromFunction means the function (as a string) that this 'Crash' function was called from. Ultimately, this is for better debug information and is optional\n" },
		{ "CPP_Default_FromFunction", "" },
		{ "CPP_Default_Message", "" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Crash the game, and log the message to the console and log file. FromFunction means the function (as a string) that this 'Crash' function was called from. Ultimately, this is for better debug information and is optional" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Crash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Crash", nullptr, nullptr, sizeof(Log_eventCrash_Parms), Z_Construct_UFunction_ULog_Crash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Crash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Crash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Crash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Crash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Crash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Cya_Statics
	{
		struct Log_eventCya_Parms
		{
			TEnumAsByte<ELoggingOptions> LoggingOption;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Cya_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventCya_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Cya_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Cya_Statics::NewProp_LoggingOption,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Cya_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a cya message to the console or viewport\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a cya message to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Cya_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Cya", nullptr, nullptr, sizeof(Log_eventCya_Parms), Z_Construct_UFunction_ULog_Cya_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Cya_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Cya_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Cya_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Cya()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Cya_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Data_Statics
	{
		struct Log_eventData_Parms
		{
			float InDataValue;
			TEnumAsByte<EDebugLogDataUnit> DataUnit;
			bool bConvertValueToInt;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static void NewProp_bConvertValueToInt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertValueToInt;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataUnit;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDataValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Data_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventData_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Data_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventData_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Data_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Data_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventData_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Data_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Data_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Data_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Data_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventData_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Data_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Data_Statics::NewProp_Prefix_MetaData)) };
	void Z_Construct_UFunction_ULog_Data_Statics::NewProp_bConvertValueToInt_SetBit(void* Obj)
	{
		((Log_eventData_Parms*)Obj)->bConvertValueToInt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Data_Statics::NewProp_bConvertValueToInt = { "bConvertValueToInt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventData_Parms), &Z_Construct_UFunction_ULog_Data_Statics::NewProp_bConvertValueToInt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Data_Statics::NewProp_DataUnit = { "DataUnit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventData_Parms, DataUnit), Z_Construct_UEnum_Debug_EDebugLogDataUnit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Data_Statics::NewProp_InDataValue = { "InDataValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventData_Parms, InDataValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Data_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Data_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Data_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Data_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Data_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Data_Statics::NewProp_bConvertValueToInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Data_Statics::NewProp_DataUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Data_Statics::NewProp_InDataValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Data_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Unit Systems" },
		{ "Comment", "// Log a data unit value to the console or viewport (Just adds the appropriate symbol at the end)\n" },
		{ "CPP_Default_bConvertValueToInt", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a data unit value to the console or viewport (Just adds the appropriate symbol at the end)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Data_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Data", nullptr, nullptr, sizeof(Log_eventData_Parms), Z_Construct_UFunction_ULog_Data_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Data_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Data_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Data_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Data()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Data_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_DateTime_Statics
	{
		struct Log_eventDateTime_Parms
		{
			FDateTime InDateTime;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventDateTime_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventDateTime_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventDateTime_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventDateTime_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_Prefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_InDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_InDateTime = { "InDateTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventDateTime_Parms, InDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_InDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_InDateTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_DateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_DateTime_Statics::NewProp_InDateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_DateTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a DateTime value to the console or viewport\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a DateTime value to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "DateTime", nullptr, nullptr, sizeof(Log_eventDateTime_Parms), Z_Construct_UFunction_ULog_DateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_DateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_DateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_DateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_DateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_DateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_DebugMessage_Statics
	{
		struct Log_eventDebugMessage_Parms
		{
			TEnumAsByte<EDebugLogType> LogSeverity;
			FString Message;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			bool bAddPrefix;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static void NewProp_bAddPrefix_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddPrefix;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LogSeverity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_DebugMessage_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventDebugMessage_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_DebugMessage_Statics::NewProp_bAddPrefix_SetBit(void* Obj)
	{
		((Log_eventDebugMessage_Parms*)Obj)->bAddPrefix = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_DebugMessage_Statics::NewProp_bAddPrefix = { "bAddPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventDebugMessage_Parms), &Z_Construct_UFunction_ULog_DebugMessage_Statics::NewProp_bAddPrefix_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_DebugMessage_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventDebugMessage_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_DebugMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_DebugMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventDebugMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_DebugMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_DebugMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_DebugMessage_Statics::NewProp_LogSeverity = { "LogSeverity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventDebugMessage_Parms, LogSeverity), Z_Construct_UEnum_Debug_EDebugLogType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_DebugMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_DebugMessage_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_DebugMessage_Statics::NewProp_bAddPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_DebugMessage_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_DebugMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_DebugMessage_Statics::NewProp_LogSeverity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_DebugMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a debug message to the console or viewport\n" },
		{ "CPP_Default_bAddPrefix", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a debug message to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_DebugMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "DebugMessage", nullptr, nullptr, sizeof(Log_eventDebugMessage_Parms), Z_Construct_UFunction_ULog_DebugMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_DebugMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_DebugMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_DebugMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_DebugMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_DebugMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics
	{
		struct Log_eventDebugMessage_WithCondition_Parms
		{
			TEnumAsByte<EDebugLogType> LogSeverity;
			bool bCondition;
			FString Message;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			bool bAddPrefix;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static void NewProp_bAddPrefix_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddPrefix;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_bCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCondition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LogSeverity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventDebugMessage_WithCondition_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_bAddPrefix_SetBit(void* Obj)
	{
		((Log_eventDebugMessage_WithCondition_Parms*)Obj)->bAddPrefix = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_bAddPrefix = { "bAddPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventDebugMessage_WithCondition_Parms), &Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_bAddPrefix_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventDebugMessage_WithCondition_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventDebugMessage_WithCondition_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_Message_MetaData)) };
	void Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_bCondition_SetBit(void* Obj)
	{
		((Log_eventDebugMessage_WithCondition_Parms*)Obj)->bCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_bCondition = { "bCondition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventDebugMessage_WithCondition_Parms), &Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_bCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_LogSeverity = { "LogSeverity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventDebugMessage_WithCondition_Parms, LogSeverity), Z_Construct_UEnum_Debug_EDebugLogType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_bAddPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_bCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::NewProp_LogSeverity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a debug message to the console or viewport, only if the condition is met\n" },
		{ "CPP_Default_bAddPrefix", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Debug Message (Condition)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a debug message to the console or viewport, only if the condition is met" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "DebugMessage_WithCondition", nullptr, nullptr, sizeof(Log_eventDebugMessage_WithCondition_Parms), Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_DebugMessage_WithCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_DebugMessage_WithCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Dollar_Statics
	{
		struct Log_eventDollar_Parms
		{
			float InDollarValue;
			bool bConvertValueToInt;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static void NewProp_bConvertValueToInt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertValueToInt;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDollarValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventDollar_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventDollar_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventDollar_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventDollar_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_Prefix_MetaData)) };
	void Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_bConvertValueToInt_SetBit(void* Obj)
	{
		((Log_eventDollar_Parms*)Obj)->bConvertValueToInt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_bConvertValueToInt = { "bConvertValueToInt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventDollar_Parms), &Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_bConvertValueToInt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_InDollarValue = { "InDollarValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventDollar_Parms, InDollarValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Dollar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_bConvertValueToInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Dollar_Statics::NewProp_InDollarValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Dollar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Unit Systems" },
		{ "Comment", "// Log a dollar value to the console or viewport (Just adds the $ symbol at the start)\n" },
		{ "CPP_Default_bConvertValueToInt", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a dollar value to the console or viewport (Just adds the $ symbol at the start)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Dollar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Dollar", nullptr, nullptr, sizeof(Log_eventDollar_Parms), Z_Construct_UFunction_ULog_Dollar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Dollar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Dollar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Dollar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Dollar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Dollar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_EnsureCondition_Statics
	{
		struct Log_eventEnsureCondition_Parms
		{
			bool bCondition;
			bool bAlwaysEnsure;
			FString Message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_bAlwaysEnsure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysEnsure;
		static void NewProp_bCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCondition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_EnsureCondition_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_EnsureCondition_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventEnsureCondition_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_EnsureCondition_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_EnsureCondition_Statics::NewProp_Message_MetaData)) };
	void Z_Construct_UFunction_ULog_EnsureCondition_Statics::NewProp_bAlwaysEnsure_SetBit(void* Obj)
	{
		((Log_eventEnsureCondition_Parms*)Obj)->bAlwaysEnsure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_EnsureCondition_Statics::NewProp_bAlwaysEnsure = { "bAlwaysEnsure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventEnsureCondition_Parms), &Z_Construct_UFunction_ULog_EnsureCondition_Statics::NewProp_bAlwaysEnsure_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_EnsureCondition_Statics::NewProp_bCondition_SetBit(void* Obj)
	{
		((Log_eventEnsureCondition_Parms*)Obj)->bCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_EnsureCondition_Statics::NewProp_bCondition = { "bCondition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventEnsureCondition_Parms), &Z_Construct_UFunction_ULog_EnsureCondition_Statics::NewProp_bCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_EnsureCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_EnsureCondition_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_EnsureCondition_Statics::NewProp_bAlwaysEnsure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_EnsureCondition_Statics::NewProp_bCondition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_EnsureCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Verifies the expression and if it fails generates a callstack leading to that point to the Output Log window. (With an optional message parameter)\n" },
		{ "CPP_Default_bAlwaysEnsure", "false" },
		{ "CPP_Default_Message", "" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Ensure (Condition)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Verifies the expression and if it fails generates a callstack leading to that point to the Output Log window. (With an optional message parameter)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_EnsureCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "EnsureCondition", nullptr, nullptr, sizeof(Log_eventEnsureCondition_Parms), Z_Construct_UFunction_ULog_EnsureCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_EnsureCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_EnsureCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_EnsureCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_EnsureCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_EnsureCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_EnsureObject_Statics
	{
		struct Log_eventEnsureObject_Parms
		{
			UObject* Object;
			bool bAlwaysEnsure;
			FString Message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_bAlwaysEnsure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysEnsure;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_EnsureObject_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_EnsureObject_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventEnsureObject_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_EnsureObject_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_EnsureObject_Statics::NewProp_Message_MetaData)) };
	void Z_Construct_UFunction_ULog_EnsureObject_Statics::NewProp_bAlwaysEnsure_SetBit(void* Obj)
	{
		((Log_eventEnsureObject_Parms*)Obj)->bAlwaysEnsure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_EnsureObject_Statics::NewProp_bAlwaysEnsure = { "bAlwaysEnsure", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventEnsureObject_Parms), &Z_Construct_UFunction_ULog_EnsureObject_Statics::NewProp_bAlwaysEnsure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULog_EnsureObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventEnsureObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_EnsureObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_EnsureObject_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_EnsureObject_Statics::NewProp_bAlwaysEnsure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_EnsureObject_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_EnsureObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Verifies the object and if it fails generates a callstack leading to that point to the Output Log window. (With an optional message parameter)\n" },
		{ "CPP_Default_bAlwaysEnsure", "false" },
		{ "CPP_Default_Message", "" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Ensure (Object)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Verifies the object and if it fails generates a callstack leading to that point to the Output Log window. (With an optional message parameter)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_EnsureObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "EnsureObject", nullptr, nullptr, sizeof(Log_eventEnsureObject_Parms), Z_Construct_UFunction_ULog_EnsureObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_EnsureObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_EnsureObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_EnsureObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_EnsureObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_EnsureObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Error_Statics
	{
		struct Log_eventError_Parms
		{
			FString Message;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			bool bAddPrefix;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static void NewProp_bAddPrefix_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddPrefix;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Error_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventError_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_Error_Statics::NewProp_bAddPrefix_SetBit(void* Obj)
	{
		((Log_eventError_Parms*)Obj)->bAddPrefix = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Error_Statics::NewProp_bAddPrefix = { "bAddPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventError_Parms), &Z_Construct_UFunction_ULog_Error_Statics::NewProp_bAddPrefix_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Error_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventError_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Error_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Error_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventError_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_Error_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Error_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Error_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Error_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Error_Statics::NewProp_bAddPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Error_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Error_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Error_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log an error message to the console or viewport\n" },
		{ "CPP_Default_bAddPrefix", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log an error message to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Error_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Error", nullptr, nullptr, sizeof(Log_eventError_Parms), Z_Construct_UFunction_ULog_Error_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Error_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Error_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Error_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Error()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Error_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Error_WithCondition_Statics
	{
		struct Log_eventError_WithCondition_Parms
		{
			FString Message;
			bool bCondition;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			bool bAddPrefix;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static void NewProp_bAddPrefix_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddPrefix;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
		static void NewProp_bCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Error_WithCondition_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventError_WithCondition_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_Error_WithCondition_Statics::NewProp_bAddPrefix_SetBit(void* Obj)
	{
		((Log_eventError_WithCondition_Parms*)Obj)->bAddPrefix = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Error_WithCondition_Statics::NewProp_bAddPrefix = { "bAddPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventError_WithCondition_Parms), &Z_Construct_UFunction_ULog_Error_WithCondition_Statics::NewProp_bAddPrefix_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Error_WithCondition_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventError_WithCondition_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_Error_WithCondition_Statics::NewProp_bCondition_SetBit(void* Obj)
	{
		((Log_eventError_WithCondition_Parms*)Obj)->bCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Error_WithCondition_Statics::NewProp_bCondition = { "bCondition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventError_WithCondition_Parms), &Z_Construct_UFunction_ULog_Error_WithCondition_Statics::NewProp_bCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Error_WithCondition_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Error_WithCondition_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventError_WithCondition_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_Error_WithCondition_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Error_WithCondition_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Error_WithCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Error_WithCondition_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Error_WithCondition_Statics::NewProp_bAddPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Error_WithCondition_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Error_WithCondition_Statics::NewProp_bCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Error_WithCondition_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Error_WithCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log an error message to the console or viewport, only if the condition is met\n" },
		{ "CPP_Default_bAddPrefix", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Error (Condition)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log an error message to the console or viewport, only if the condition is met" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Error_WithCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Error_WithCondition", nullptr, nullptr, sizeof(Log_eventError_WithCondition_Parms), Z_Construct_UFunction_ULog_Error_WithCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Error_WithCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Error_WithCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Error_WithCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Error_WithCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Error_WithCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Fatal_Statics
	{
		struct Log_eventFatal_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Fatal_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Fatal_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventFatal_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_Fatal_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Fatal_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Fatal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Fatal_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Fatal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a fatal error message to the console and crash\n" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a fatal error message to the console and crash" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Fatal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Fatal", nullptr, nullptr, sizeof(Log_eventFatal_Parms), Z_Construct_UFunction_ULog_Fatal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Fatal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Fatal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Fatal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Fatal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Fatal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Fatal_WithCondition_Statics
	{
		struct Log_eventFatal_WithCondition_Parms
		{
			FString Message;
			bool bCondition;
		};
		static void NewProp_bCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULog_Fatal_WithCondition_Statics::NewProp_bCondition_SetBit(void* Obj)
	{
		((Log_eventFatal_WithCondition_Parms*)Obj)->bCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Fatal_WithCondition_Statics::NewProp_bCondition = { "bCondition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventFatal_WithCondition_Parms), &Z_Construct_UFunction_ULog_Fatal_WithCondition_Statics::NewProp_bCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Fatal_WithCondition_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Fatal_WithCondition_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventFatal_WithCondition_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_Fatal_WithCondition_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Fatal_WithCondition_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Fatal_WithCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Fatal_WithCondition_Statics::NewProp_bCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Fatal_WithCondition_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Fatal_WithCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a fatal error message to the console and crash, only if the condition is met\n" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Fatal (Condition)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a fatal error message to the console and crash, only if the condition is met" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Fatal_WithCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Fatal_WithCondition", nullptr, nullptr, sizeof(Log_eventFatal_WithCondition_Parms), Z_Construct_UFunction_ULog_Fatal_WithCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Fatal_WithCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Fatal_WithCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Fatal_WithCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Fatal_WithCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Fatal_WithCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Goodbye_Statics
	{
		struct Log_eventGoodbye_Parms
		{
			TEnumAsByte<ELoggingOptions> LoggingOption;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Goodbye_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventGoodbye_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Goodbye_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Goodbye_Statics::NewProp_LoggingOption,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Goodbye_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a goodbye message to the console or viewport\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a goodbye message to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Goodbye_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Goodbye", nullptr, nullptr, sizeof(Log_eventGoodbye_Parms), Z_Construct_UFunction_ULog_Goodbye_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Goodbye_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Goodbye_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Goodbye_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Goodbye()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Goodbye_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Hello_Statics
	{
		struct Log_eventHello_Parms
		{
			TEnumAsByte<ELoggingOptions> LoggingOption;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Hello_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventHello_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Hello_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Hello_Statics::NewProp_LoggingOption,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Hello_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a hello message to the console or viewport\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a hello message to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Hello_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Hello", nullptr, nullptr, sizeof(Log_eventHello_Parms), Z_Construct_UFunction_ULog_Hello_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Hello_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Hello_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Hello_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Hello()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Hello_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Hey_Statics
	{
		struct Log_eventHey_Parms
		{
			TEnumAsByte<ELoggingOptions> LoggingOption;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Hey_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventHey_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Hey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Hey_Statics::NewProp_LoggingOption,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Hey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a hey message to the console or viewport\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a hey message to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Hey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Hey", nullptr, nullptr, sizeof(Log_eventHey_Parms), Z_Construct_UFunction_ULog_Hey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Hey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Hey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Hey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Hey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Hey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_InBrackets_Name_Blueprint_Statics
	{
		struct Log_eventInBrackets_Name_Blueprint_Parms
		{
			FName Name;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULog_InBrackets_Name_Blueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventInBrackets_Name_Blueprint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULog_InBrackets_Name_Blueprint_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventInBrackets_Name_Blueprint_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_InBrackets_Name_Blueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_InBrackets_Name_Blueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_InBrackets_Name_Blueprint_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_InBrackets_Name_Blueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Return the name with brackets () around it\n" },
		{ "DisplayName", "In Brackets (Name)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Return the name with brackets () around it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_InBrackets_Name_Blueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "InBrackets_Name_Blueprint", nullptr, nullptr, sizeof(Log_eventInBrackets_Name_Blueprint_Parms), Z_Construct_UFunction_ULog_InBrackets_Name_Blueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_InBrackets_Name_Blueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_InBrackets_Name_Blueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_InBrackets_Name_Blueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_InBrackets_Name_Blueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_InBrackets_Name_Blueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_InBrackets_String_Blueprint_Statics
	{
		struct Log_eventInBrackets_String_Blueprint_Parms
		{
			FString String;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_InBrackets_String_Blueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventInBrackets_String_Blueprint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_InBrackets_String_Blueprint_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_InBrackets_String_Blueprint_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventInBrackets_String_Blueprint_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_ULog_InBrackets_String_Blueprint_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_InBrackets_String_Blueprint_Statics::NewProp_String_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_InBrackets_String_Blueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_InBrackets_String_Blueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_InBrackets_String_Blueprint_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_InBrackets_String_Blueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Return the string with brackets () around it\n" },
		{ "DisplayName", "In Brackets (String)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Return the string with brackets () around it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_InBrackets_String_Blueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "InBrackets_String_Blueprint", nullptr, nullptr, sizeof(Log_eventInBrackets_String_Blueprint_Parms), Z_Construct_UFunction_ULog_InBrackets_String_Blueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_InBrackets_String_Blueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_InBrackets_String_Blueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_InBrackets_String_Blueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_InBrackets_String_Blueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_InBrackets_String_Blueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_InBrackets_Text_Blueprint_Statics
	{
		struct Log_eventInBrackets_Text_Blueprint_Parms
		{
			FText Text;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULog_InBrackets_Text_Blueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventInBrackets_Text_Blueprint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULog_InBrackets_Text_Blueprint_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventInBrackets_Text_Blueprint_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_InBrackets_Text_Blueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_InBrackets_Text_Blueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_InBrackets_Text_Blueprint_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_InBrackets_Text_Blueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Return the text with brackets () around it\n" },
		{ "DisplayName", "In Brackets (Text)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Return the text with brackets () around it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_InBrackets_Text_Blueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "InBrackets_Text_Blueprint", nullptr, nullptr, sizeof(Log_eventInBrackets_Text_Blueprint_Parms), Z_Construct_UFunction_ULog_InBrackets_Text_Blueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_InBrackets_Text_Blueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_InBrackets_Text_Blueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_InBrackets_Text_Blueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_InBrackets_Text_Blueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_InBrackets_Text_Blueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Info_Statics
	{
		struct Log_eventInfo_Parms
		{
			FString Message;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			bool bAddPrefix;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static void NewProp_bAddPrefix_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddPrefix;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Info_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventInfo_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_Info_Statics::NewProp_bAddPrefix_SetBit(void* Obj)
	{
		((Log_eventInfo_Parms*)Obj)->bAddPrefix = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Info_Statics::NewProp_bAddPrefix = { "bAddPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventInfo_Parms), &Z_Construct_UFunction_ULog_Info_Statics::NewProp_bAddPrefix_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Info_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventInfo_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Info_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Info_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventInfo_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_Info_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Info_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Info_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Info_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Info_Statics::NewProp_bAddPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Info_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Info_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Info_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log an information message to the console or viewport\n" },
		{ "CPP_Default_bAddPrefix", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log an information message to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Info_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Info", nullptr, nullptr, sizeof(Log_eventInfo_Parms), Z_Construct_UFunction_ULog_Info_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Info_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Info_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Info_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Info()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Info_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Info_WithCondition_Statics
	{
		struct Log_eventInfo_WithCondition_Parms
		{
			FString Message;
			bool bCondition;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			bool bAddPrefix;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static void NewProp_bAddPrefix_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddPrefix;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
		static void NewProp_bCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Info_WithCondition_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventInfo_WithCondition_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_Info_WithCondition_Statics::NewProp_bAddPrefix_SetBit(void* Obj)
	{
		((Log_eventInfo_WithCondition_Parms*)Obj)->bAddPrefix = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Info_WithCondition_Statics::NewProp_bAddPrefix = { "bAddPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventInfo_WithCondition_Parms), &Z_Construct_UFunction_ULog_Info_WithCondition_Statics::NewProp_bAddPrefix_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Info_WithCondition_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventInfo_WithCondition_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_Info_WithCondition_Statics::NewProp_bCondition_SetBit(void* Obj)
	{
		((Log_eventInfo_WithCondition_Parms*)Obj)->bCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Info_WithCondition_Statics::NewProp_bCondition = { "bCondition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventInfo_WithCondition_Parms), &Z_Construct_UFunction_ULog_Info_WithCondition_Statics::NewProp_bCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Info_WithCondition_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Info_WithCondition_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventInfo_WithCondition_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_Info_WithCondition_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Info_WithCondition_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Info_WithCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Info_WithCondition_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Info_WithCondition_Statics::NewProp_bAddPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Info_WithCondition_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Info_WithCondition_Statics::NewProp_bCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Info_WithCondition_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Info_WithCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log an information message to the console or viewport, only if the condition is met\n" },
		{ "CPP_Default_bAddPrefix", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Info (Condition)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log an information message to the console or viewport, only if the condition is met" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Info_WithCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Info_WithCondition", nullptr, nullptr, sizeof(Log_eventInfo_WithCondition_Parms), Z_Construct_UFunction_ULog_Info_WithCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Info_WithCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Info_WithCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Info_WithCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Info_WithCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Info_WithCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Invalid_Statics
	{
		struct Log_eventInvalid_Parms
		{
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Invalid_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventInvalid_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Invalid_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Invalid_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventInvalid_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Invalid_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Invalid_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Invalid_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Invalid_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventInvalid_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Invalid_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Invalid_Statics::NewProp_Prefix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Invalid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Invalid_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Invalid_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Invalid_Statics::NewProp_Prefix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Invalid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log an 'invalid' message to the console or viewport\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log an 'invalid' message to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Invalid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Invalid", nullptr, nullptr, sizeof(Log_eventInvalid_Parms), Z_Construct_UFunction_ULog_Invalid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Invalid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Invalid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Invalid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Invalid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Invalid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Length_Statics
	{
		struct Log_eventLength_Parms
		{
			float InLengthValue;
			TEnumAsByte<EDebugLogLengthUnit> LengthUnit;
			bool bConvertValueToInt;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static void NewProp_bConvertValueToInt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertValueToInt;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LengthUnit;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InLengthValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Length_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventLength_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Length_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventLength_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Length_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Length_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventLength_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Length_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Length_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Length_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Length_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventLength_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Length_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Length_Statics::NewProp_Prefix_MetaData)) };
	void Z_Construct_UFunction_ULog_Length_Statics::NewProp_bConvertValueToInt_SetBit(void* Obj)
	{
		((Log_eventLength_Parms*)Obj)->bConvertValueToInt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Length_Statics::NewProp_bConvertValueToInt = { "bConvertValueToInt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventLength_Parms), &Z_Construct_UFunction_ULog_Length_Statics::NewProp_bConvertValueToInt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Length_Statics::NewProp_LengthUnit = { "LengthUnit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventLength_Parms, LengthUnit), Z_Construct_UEnum_Debug_EDebugLogLengthUnit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Length_Statics::NewProp_InLengthValue = { "InLengthValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventLength_Parms, InLengthValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Length_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Length_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Length_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Length_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Length_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Length_Statics::NewProp_bConvertValueToInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Length_Statics::NewProp_LengthUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Length_Statics::NewProp_InLengthValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Length_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Unit Systems" },
		{ "Comment", "// Log a length unit value to the console or viewport (Just adds the appropriate symbol at the end)\n" },
		{ "CPP_Default_bConvertValueToInt", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a length unit value to the console or viewport (Just adds the appropriate symbol at the end)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Length_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Length", nullptr, nullptr, sizeof(Log_eventLength_Parms), Z_Construct_UFunction_ULog_Length_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Length_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Length_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Length_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Length()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Length_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Mass_Statics
	{
		struct Log_eventMass_Parms
		{
			float InMassValue;
			TEnumAsByte<EDebugLogMassUnit> MassUnit;
			bool bConvertValueToInt;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static void NewProp_bConvertValueToInt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertValueToInt;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MassUnit;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InMassValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Mass_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventMass_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Mass_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventMass_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Mass_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Mass_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventMass_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Mass_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Mass_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Mass_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Mass_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventMass_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Mass_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Mass_Statics::NewProp_Prefix_MetaData)) };
	void Z_Construct_UFunction_ULog_Mass_Statics::NewProp_bConvertValueToInt_SetBit(void* Obj)
	{
		((Log_eventMass_Parms*)Obj)->bConvertValueToInt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Mass_Statics::NewProp_bConvertValueToInt = { "bConvertValueToInt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventMass_Parms), &Z_Construct_UFunction_ULog_Mass_Statics::NewProp_bConvertValueToInt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Mass_Statics::NewProp_MassUnit = { "MassUnit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventMass_Parms, MassUnit), Z_Construct_UEnum_Debug_EDebugLogMassUnit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Mass_Statics::NewProp_InMassValue = { "InMassValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventMass_Parms, InMassValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Mass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Mass_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Mass_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Mass_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Mass_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Mass_Statics::NewProp_bConvertValueToInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Mass_Statics::NewProp_MassUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Mass_Statics::NewProp_InMassValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Mass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Unit Systems" },
		{ "Comment", "// Log a mass unit value to the console or viewport (Just adds the appropriate symbol at the end)\n" },
		{ "CPP_Default_bConvertValueToInt", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a mass unit value to the console or viewport (Just adds the appropriate symbol at the end)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Mass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Mass", nullptr, nullptr, sizeof(Log_eventMass_Parms), Z_Construct_UFunction_ULog_Mass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Mass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Mass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Mass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Mass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Mass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Matrix_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct Log_eventMatrix_Parms
		{
			FMatrix InMatrix;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMatrix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMatrix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventMatrix_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventMatrix_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventMatrix_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventMatrix_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_Prefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_InMatrix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_InMatrix = { "InMatrix", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventMatrix_Parms, InMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_InMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_InMatrix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Matrix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Matrix_Statics::NewProp_InMatrix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Matrix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a matrix value to the console or viewport\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a matrix value to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Matrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Matrix", nullptr, nullptr, sizeof(Log_eventMatrix_Parms), Z_Construct_UFunction_ULog_Matrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Matrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Matrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Matrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Matrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Matrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_MessageInWorld_Statics
	{
		struct Log_eventMessageInWorld_Parms
		{
			FString Message;
			FVector WorldLocation;
			float FontScale;
			FString Prefix;
			FString Suffix;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FontScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventMessageInWorld_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventMessageInWorld_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventMessageInWorld_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_Prefix_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_FontScale = { "FontScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventMessageInWorld_Parms, FontScale), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventMessageInWorld_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_WorldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventMessageInWorld_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_MessageInWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_FontScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_MessageInWorld_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_MessageInWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a message in the world\n" },
		{ "CPP_Default_FontScale", "1.000000" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a message in the world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_MessageInWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "MessageInWorld", nullptr, nullptr, sizeof(Log_eventMessageInWorld_Parms), Z_Construct_UFunction_ULog_MessageInWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_MessageInWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_MessageInWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_MessageInWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_MessageInWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_MessageInWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_No_Statics
	{
		struct Log_eventNo_Parms
		{
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_No_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventNo_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_No_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_No_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventNo_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_No_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_No_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_No_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_No_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventNo_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_No_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_No_Statics::NewProp_Prefix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_No_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_No_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_No_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_No_Statics::NewProp_Prefix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_No_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a no message to the console or viewport (with an optional prefix and suffix string)\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a no message to the console or viewport (with an optional prefix and suffix string)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_No_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "No", nullptr, nullptr, sizeof(Log_eventNo_Parms), Z_Construct_UFunction_ULog_No_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_No_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_No_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_No_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_No()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_No_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics
	{
		struct Log_eventNumber_Float_Blueprint_Parms
		{
			float Number;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Number;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventNumber_Float_Blueprint_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventNumber_Float_Blueprint_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventNumber_Float_Blueprint_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventNumber_Float_Blueprint_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::NewProp_Prefix_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventNumber_Float_Blueprint_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::NewProp_Number,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a number to the console or viewport (float version)\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Number (float)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a number to the console or viewport (float version)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Number_Float_Blueprint", nullptr, nullptr, sizeof(Log_eventNumber_Float_Blueprint_Parms), Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Number_Float_Blueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Number_Float_Blueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics
	{
		struct Log_eventNumber_Int_Blueprint_Parms
		{
			int32 Number;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<EDebugLogNumberSystems> NumberSystem;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NumberSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Number;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventNumber_Int_Blueprint_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventNumber_Int_Blueprint_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::NewProp_NumberSystem = { "NumberSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventNumber_Int_Blueprint_Parms, NumberSystem), Z_Construct_UEnum_Debug_EDebugLogNumberSystems, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventNumber_Int_Blueprint_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventNumber_Int_Blueprint_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::NewProp_Prefix_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventNumber_Int_Blueprint_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::NewProp_NumberSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::NewProp_Number,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a number to the console or viewport\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_NumberSystem", "DLNS_Decimal" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Number (int)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a number to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Number_Int_Blueprint", nullptr, nullptr, sizeof(Log_eventNumber_Int_Blueprint_Parms), Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Number_Int_Blueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Number_Int_Blueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_ObjectName_Statics
	{
		struct Log_eventObjectName_Parms
		{
			UObject* InObject;
			bool bSilenceOnError;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
		static void NewProp_bSilenceOnError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSilenceOnError;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_ObjectName_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventObjectName_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_ObjectName_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventObjectName_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_ObjectName_Statics::NewProp_bSilenceOnError_SetBit(void* Obj)
	{
		((Log_eventObjectName_Parms*)Obj)->bSilenceOnError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_ObjectName_Statics::NewProp_bSilenceOnError = { "bSilenceOnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventObjectName_Parms), &Z_Construct_UFunction_ULog_ObjectName_Statics::NewProp_bSilenceOnError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULog_ObjectName_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventObjectName_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_ObjectName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_ObjectName_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_ObjectName_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_ObjectName_Statics::NewProp_bSilenceOnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_ObjectName_Statics::NewProp_InObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_ObjectName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log the given object's name, if it's valid\n" },
		{ "CPP_Default_bSilenceOnError", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log the given object's name, if it's valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_ObjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "ObjectName", nullptr, nullptr, sizeof(Log_eventObjectName_Parms), Z_Construct_UFunction_ULog_ObjectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ObjectName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_ObjectName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ObjectName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_ObjectName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_ObjectName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_ObjectValidity_Statics
	{
		struct Log_eventObjectValidity_Parms
		{
			UObject* InObject;
			bool bSilenceOnError;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
		static void NewProp_bSilenceOnError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSilenceOnError;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_ObjectValidity_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventObjectValidity_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_ObjectValidity_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventObjectValidity_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_ObjectValidity_Statics::NewProp_bSilenceOnError_SetBit(void* Obj)
	{
		((Log_eventObjectValidity_Parms*)Obj)->bSilenceOnError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_ObjectValidity_Statics::NewProp_bSilenceOnError = { "bSilenceOnError", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventObjectValidity_Parms), &Z_Construct_UFunction_ULog_ObjectValidity_Statics::NewProp_bSilenceOnError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULog_ObjectValidity_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventObjectValidity_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_ObjectValidity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_ObjectValidity_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_ObjectValidity_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_ObjectValidity_Statics::NewProp_bSilenceOnError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_ObjectValidity_Statics::NewProp_InObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_ObjectValidity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log whether the object is valid or not\n" },
		{ "CPP_Default_bSilenceOnError", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log whether the object is valid or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_ObjectValidity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "ObjectValidity", nullptr, nullptr, sizeof(Log_eventObjectValidity_Parms), Z_Construct_UFunction_ULog_ObjectValidity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ObjectValidity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_ObjectValidity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_ObjectValidity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_ObjectValidity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_ObjectValidity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Percent_Statics
	{
		struct Log_eventPercent_Parms
		{
			float Number;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Number;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Percent_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventPercent_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Percent_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventPercent_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Percent_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Percent_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventPercent_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Percent_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Percent_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Percent_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Percent_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventPercent_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Percent_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Percent_Statics::NewProp_Prefix_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Percent_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventPercent_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Percent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Percent_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Percent_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Percent_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Percent_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Percent_Statics::NewProp_Number,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Percent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log the a percentage value to the console or viewport (Just appends a % symbol)\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log the a percentage value to the console or viewport (Just appends a % symbol)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Percent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Percent", nullptr, nullptr, sizeof(Log_eventPercent_Parms), Z_Construct_UFunction_ULog_Percent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Percent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Percent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Percent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Percent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Percent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Quat_Statics
	{
		struct Log_eventQuat_Parms
		{
			FQuat Quaternion;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quaternion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quaternion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Quat_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventQuat_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Quat_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventQuat_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Quat_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Quat_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventQuat_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Quat_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Quat_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Quat_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Quat_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventQuat_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Quat_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Quat_Statics::NewProp_Prefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Quat_Statics::NewProp_Quaternion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_Quat_Statics::NewProp_Quaternion = { "Quaternion", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventQuat_Parms, Quaternion), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_ULog_Quat_Statics::NewProp_Quaternion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Quat_Statics::NewProp_Quaternion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Quat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Quat_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Quat_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Quat_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Quat_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Quat_Statics::NewProp_Quaternion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Quat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a Quaternion value to the console or viewport\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a Quaternion value to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Quat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Quat", nullptr, nullptr, sizeof(Log_eventQuat_Parms), Z_Construct_UFunction_ULog_Quat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Quat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Quat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Quat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Quat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Quat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Rotator_Statics
	{
		struct Log_eventRotator_Parms
		{
			FRotator InRotator;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRotator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventRotator_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventRotator_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventRotator_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventRotator_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_Prefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_InRotator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_InRotator = { "InRotator", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventRotator_Parms, InRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_InRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_InRotator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Rotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Rotator_Statics::NewProp_InRotator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Rotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a FRotator value to the console or viewport\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a FRotator value to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Rotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Rotator", nullptr, nullptr, sizeof(Log_eventRotator_Parms), Z_Construct_UFunction_ULog_Rotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Rotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Rotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Rotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Rotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Rotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Speed_Statics
	{
		struct Log_eventSpeed_Parms
		{
			float InSpeedValue;
			TEnumAsByte<EDebugLogSpeedUnit> SpeedUnit;
			bool bConvertValueToInt;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static void NewProp_bConvertValueToInt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertValueToInt;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpeedUnit;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSpeedValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Speed_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventSpeed_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Speed_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventSpeed_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Speed_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Speed_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventSpeed_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Speed_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Speed_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Speed_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Speed_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventSpeed_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Speed_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Speed_Statics::NewProp_Prefix_MetaData)) };
	void Z_Construct_UFunction_ULog_Speed_Statics::NewProp_bConvertValueToInt_SetBit(void* Obj)
	{
		((Log_eventSpeed_Parms*)Obj)->bConvertValueToInt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Speed_Statics::NewProp_bConvertValueToInt = { "bConvertValueToInt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventSpeed_Parms), &Z_Construct_UFunction_ULog_Speed_Statics::NewProp_bConvertValueToInt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Speed_Statics::NewProp_SpeedUnit = { "SpeedUnit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventSpeed_Parms, SpeedUnit), Z_Construct_UEnum_Debug_EDebugLogSpeedUnit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Speed_Statics::NewProp_InSpeedValue = { "InSpeedValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventSpeed_Parms, InSpeedValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Speed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Speed_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Speed_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Speed_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Speed_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Speed_Statics::NewProp_bConvertValueToInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Speed_Statics::NewProp_SpeedUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Speed_Statics::NewProp_InSpeedValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Speed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Unit Systems" },
		{ "Comment", "// Log a speed unit value to the console or viewport (Just adds the appropriate symbol at the end)\n" },
		{ "CPP_Default_bConvertValueToInt", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a speed unit value to the console or viewport (Just adds the appropriate symbol at the end)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Speed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Speed", nullptr, nullptr, sizeof(Log_eventSpeed_Parms), Z_Construct_UFunction_ULog_Speed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Speed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Speed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Speed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Speed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Speed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_StartDebugTimer_Statics
	{
		struct Log_eventStartDebugTimer_Parms
		{
			FString Description;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_StartDebugTimer_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_StartDebugTimer_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventStartDebugTimer_Parms, Description), METADATA_PARAMS(Z_Construct_UFunction_ULog_StartDebugTimer_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_StartDebugTimer_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_StartDebugTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_StartDebugTimer_Statics::NewProp_Description,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_StartDebugTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Creates and starts a debug timer\n" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Creates and starts a debug timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_StartDebugTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "StartDebugTimer", nullptr, nullptr, sizeof(Log_eventStartDebugTimer_Parms), Z_Construct_UFunction_ULog_StartDebugTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_StartDebugTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_StartDebugTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_StartDebugTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_StartDebugTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_StartDebugTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_StopDebugTimer_Statics
	{
		struct Log_eventStopDebugTimer_Parms
		{
			bool bAutoDetermineTimeUnit;
			TEnumAsByte<EDebugLogTimeUnit> DisplayIn;
			TEnumAsByte<ELoggingOptions> LoggingOption;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisplayIn;
		static void NewProp_bAutoDetermineTimeUnit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDetermineTimeUnit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_StopDebugTimer_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventStopDebugTimer_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_StopDebugTimer_Statics::NewProp_DisplayIn = { "DisplayIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventStopDebugTimer_Parms, DisplayIn), Z_Construct_UEnum_Debug_EDebugLogTimeUnit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_StopDebugTimer_Statics::NewProp_bAutoDetermineTimeUnit_SetBit(void* Obj)
	{
		((Log_eventStopDebugTimer_Parms*)Obj)->bAutoDetermineTimeUnit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_StopDebugTimer_Statics::NewProp_bAutoDetermineTimeUnit = { "bAutoDetermineTimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventStopDebugTimer_Parms), &Z_Construct_UFunction_ULog_StopDebugTimer_Statics::NewProp_bAutoDetermineTimeUnit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_StopDebugTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_StopDebugTimer_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_StopDebugTimer_Statics::NewProp_DisplayIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_StopDebugTimer_Statics::NewProp_bAutoDetermineTimeUnit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_StopDebugTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Stops and destroys the active debug timer, outputting how long the operation took since StartDebugTimer was called\n" },
		{ "CPP_Default_bAutoDetermineTimeUnit", "false" },
		{ "CPP_Default_DisplayIn", "DLTU_Seconds" },
		{ "CPP_Default_LoggingOption", "LO_Both" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Stops and destroys the active debug timer, outputting how long the operation took since StartDebugTimer was called" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_StopDebugTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "StopDebugTimer", nullptr, nullptr, sizeof(Log_eventStopDebugTimer_Parms), Z_Construct_UFunction_ULog_StopDebugTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_StopDebugTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_StopDebugTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_StopDebugTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_StopDebugTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_StopDebugTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Success_Statics
	{
		struct Log_eventSuccess_Parms
		{
			FString Message;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			bool bAddPrefix;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static void NewProp_bAddPrefix_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddPrefix;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Success_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventSuccess_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_Success_Statics::NewProp_bAddPrefix_SetBit(void* Obj)
	{
		((Log_eventSuccess_Parms*)Obj)->bAddPrefix = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Success_Statics::NewProp_bAddPrefix = { "bAddPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventSuccess_Parms), &Z_Construct_UFunction_ULog_Success_Statics::NewProp_bAddPrefix_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Success_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventSuccess_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Success_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Success_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventSuccess_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_Success_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Success_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Success_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Success_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Success_Statics::NewProp_bAddPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Success_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Success_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Success_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a success message to the console or viewport\n" },
		{ "CPP_Default_bAddPrefix", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a success message to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Success_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Success", nullptr, nullptr, sizeof(Log_eventSuccess_Parms), Z_Construct_UFunction_ULog_Success_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Success_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Success_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Success_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Success()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Success_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Success_WithCondition_Statics
	{
		struct Log_eventSuccess_WithCondition_Parms
		{
			FString Message;
			bool bCondition;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			bool bAddPrefix;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static void NewProp_bAddPrefix_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddPrefix;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
		static void NewProp_bCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Success_WithCondition_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventSuccess_WithCondition_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_Success_WithCondition_Statics::NewProp_bAddPrefix_SetBit(void* Obj)
	{
		((Log_eventSuccess_WithCondition_Parms*)Obj)->bAddPrefix = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Success_WithCondition_Statics::NewProp_bAddPrefix = { "bAddPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventSuccess_WithCondition_Parms), &Z_Construct_UFunction_ULog_Success_WithCondition_Statics::NewProp_bAddPrefix_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Success_WithCondition_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventSuccess_WithCondition_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_Success_WithCondition_Statics::NewProp_bCondition_SetBit(void* Obj)
	{
		((Log_eventSuccess_WithCondition_Parms*)Obj)->bCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Success_WithCondition_Statics::NewProp_bCondition = { "bCondition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventSuccess_WithCondition_Parms), &Z_Construct_UFunction_ULog_Success_WithCondition_Statics::NewProp_bCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Success_WithCondition_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Success_WithCondition_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventSuccess_WithCondition_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_Success_WithCondition_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Success_WithCondition_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Success_WithCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Success_WithCondition_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Success_WithCondition_Statics::NewProp_bAddPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Success_WithCondition_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Success_WithCondition_Statics::NewProp_bCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Success_WithCondition_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Success_WithCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a success message to the console or viewport, only if the condition is met\n" },
		{ "CPP_Default_bAddPrefix", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Success (Condition)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a success message to the console or viewport, only if the condition is met" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Success_WithCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Success_WithCondition", nullptr, nullptr, sizeof(Log_eventSuccess_WithCondition_Parms), Z_Construct_UFunction_ULog_Success_WithCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Success_WithCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Success_WithCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Success_WithCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Success_WithCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Success_WithCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Temperature_Statics
	{
		struct Log_eventTemperature_Parms
		{
			float InTemperatureValue;
			TEnumAsByte<EDebugLogTemperatureUnit> TemperatureUnit;
			bool bConvertValueToInt;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static void NewProp_bConvertValueToInt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertValueToInt;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TemperatureUnit;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTemperatureValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventTemperature_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventTemperature_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventTemperature_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventTemperature_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_Prefix_MetaData)) };
	void Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_bConvertValueToInt_SetBit(void* Obj)
	{
		((Log_eventTemperature_Parms*)Obj)->bConvertValueToInt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_bConvertValueToInt = { "bConvertValueToInt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventTemperature_Parms), &Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_bConvertValueToInt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_TemperatureUnit = { "TemperatureUnit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventTemperature_Parms, TemperatureUnit), Z_Construct_UEnum_Debug_EDebugLogTemperatureUnit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_InTemperatureValue = { "InTemperatureValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventTemperature_Parms, InTemperatureValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Temperature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_bConvertValueToInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_TemperatureUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Temperature_Statics::NewProp_InTemperatureValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Temperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Unit Systems" },
		{ "Comment", "// Log a temperature value in degrees celsius to the console or viewport (Just adds the appropriate symbol at the end)\n" },
		{ "CPP_Default_bConvertValueToInt", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a temperature value in degrees celsius to the console or viewport (Just adds the appropriate symbol at the end)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Temperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Temperature", nullptr, nullptr, sizeof(Log_eventTemperature_Parms), Z_Construct_UFunction_ULog_Temperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Temperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Temperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Temperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Temperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Temperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Time_Statics
	{
		struct Log_eventTime_Parms
		{
			float InTimeValue;
			TEnumAsByte<EDebugLogTimeUnit> TimeUnit;
			bool bConvertValueToInt;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static void NewProp_bConvertValueToInt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertValueToInt;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TimeUnit;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTimeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Time_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventTime_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Time_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventTime_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Time_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Time_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventTime_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Time_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Time_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Time_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Time_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventTime_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Time_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Time_Statics::NewProp_Prefix_MetaData)) };
	void Z_Construct_UFunction_ULog_Time_Statics::NewProp_bConvertValueToInt_SetBit(void* Obj)
	{
		((Log_eventTime_Parms*)Obj)->bConvertValueToInt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Time_Statics::NewProp_bConvertValueToInt = { "bConvertValueToInt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventTime_Parms), &Z_Construct_UFunction_ULog_Time_Statics::NewProp_bConvertValueToInt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Time_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventTime_Parms, TimeUnit), Z_Construct_UEnum_Debug_EDebugLogTimeUnit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Time_Statics::NewProp_InTimeValue = { "InTimeValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventTime_Parms, InTimeValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Time_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Time_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Time_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Time_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Time_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Time_Statics::NewProp_bConvertValueToInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Time_Statics::NewProp_TimeUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Time_Statics::NewProp_InTimeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Time_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Unit Systems" },
		{ "Comment", "// Log a time unit value to the console or viewport (Just adds the appropriate symbol at the end)\n" },
		{ "CPP_Default_bConvertValueToInt", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a time unit value to the console or viewport (Just adds the appropriate symbol at the end)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Time_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Time", nullptr, nullptr, sizeof(Log_eventTime_Parms), Z_Construct_UFunction_ULog_Time_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Time_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Time_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Time_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Time()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Time_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Transform_Statics
	{
		struct Log_eventTransform_Parms
		{
			FTransform InTransform;
			FString Prefix;
			bool bFormat;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
		static void NewProp_bFormat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Transform_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventTransform_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Transform_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventTransform_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_Transform_Statics::NewProp_bFormat_SetBit(void* Obj)
	{
		((Log_eventTransform_Parms*)Obj)->bFormat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Transform_Statics::NewProp_bFormat = { "bFormat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventTransform_Parms), &Z_Construct_UFunction_ULog_Transform_Statics::NewProp_bFormat_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Transform_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Transform_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventTransform_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Transform_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Transform_Statics::NewProp_Prefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Transform_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_Transform_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventTransform_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ULog_Transform_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Transform_Statics::NewProp_InTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Transform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Transform_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Transform_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Transform_Statics::NewProp_bFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Transform_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Transform_Statics::NewProp_InTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Transform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a FTransform value to the console or viewport\n" },
		{ "CPP_Default_bFormat", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a FTransform value to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Transform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Transform", nullptr, nullptr, sizeof(Log_eventTransform_Parms), Z_Construct_UFunction_ULog_Transform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Transform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Transform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Transform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Transform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Transform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_UnImplemented_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_UnImplemented_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// This function is used to mark a function that should be overridden because the base function contains no implementation. Alternatively, this can be used anywhere where a function has not been implemented yet.\n" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Un-Implemented" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "This function is used to mark a function that should be overridden because the base function contains no implementation. Alternatively, this can be used anywhere where a function has not been implemented yet." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_UnImplemented_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "UnImplemented", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_UnImplemented_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_UnImplemented_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_UnImplemented()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_UnImplemented_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Valid_Statics
	{
		struct Log_eventValid_Parms
		{
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Valid_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventValid_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Valid_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Valid_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventValid_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Valid_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Valid_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Valid_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Valid_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventValid_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Valid_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Valid_Statics::NewProp_Prefix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Valid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Valid_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Valid_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Valid_Statics::NewProp_Prefix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Valid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a 'valid' message to the console or viewport\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a 'valid' message to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Valid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Valid", nullptr, nullptr, sizeof(Log_eventValid_Parms), Z_Construct_UFunction_ULog_Valid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Valid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Valid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Valid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Valid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Valid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Vector_Statics
	{
		struct Log_eventVector_Parms
		{
			FVector InVector;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Vector_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventVector_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Vector_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventVector_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Vector_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Vector_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventVector_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Vector_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Vector_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Vector_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Vector_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventVector_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Vector_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Vector_Statics::NewProp_Prefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Vector_Statics::NewProp_InVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_Vector_Statics::NewProp_InVector = { "InVector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventVector_Parms, InVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULog_Vector_Statics::NewProp_InVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Vector_Statics::NewProp_InVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Vector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Vector_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Vector_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Vector_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Vector_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Vector_Statics::NewProp_InVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Vector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a FVector value to the console or viewport\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a FVector value to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Vector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Vector", nullptr, nullptr, sizeof(Log_eventVector_Parms), Z_Construct_UFunction_ULog_Vector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Vector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Vector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Vector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Vector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Vector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Vector2D_Statics
	{
		struct Log_eventVector2D_Parms
		{
			FVector2D InVector2D;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVector2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVector2D;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventVector2D_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventVector2D_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventVector2D_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventVector2D_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_Prefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_InVector2D_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_InVector2D = { "InVector2D", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventVector2D_Parms, InVector2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_InVector2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_InVector2D_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Vector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Vector2D_Statics::NewProp_InVector2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Vector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a FVector2D value to the console or viewport\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a FVector2D value to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Vector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Vector2D", nullptr, nullptr, sizeof(Log_eventVector2D_Parms), Z_Construct_UFunction_ULog_Vector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Vector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Vector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Vector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Vector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Vector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Volume_Statics
	{
		struct Log_eventVolume_Parms
		{
			float InVolumeValue;
			TEnumAsByte<EDebugLogVolumeUnit> VolumeUnit;
			bool bConvertValueToInt;
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static void NewProp_bConvertValueToInt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertValueToInt;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VolumeUnit;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InVolumeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Volume_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventVolume_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Volume_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventVolume_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Volume_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Volume_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventVolume_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Volume_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Volume_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Volume_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Volume_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventVolume_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Volume_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Volume_Statics::NewProp_Prefix_MetaData)) };
	void Z_Construct_UFunction_ULog_Volume_Statics::NewProp_bConvertValueToInt_SetBit(void* Obj)
	{
		((Log_eventVolume_Parms*)Obj)->bConvertValueToInt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Volume_Statics::NewProp_bConvertValueToInt = { "bConvertValueToInt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventVolume_Parms), &Z_Construct_UFunction_ULog_Volume_Statics::NewProp_bConvertValueToInt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Volume_Statics::NewProp_VolumeUnit = { "VolumeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventVolume_Parms, VolumeUnit), Z_Construct_UEnum_Debug_EDebugLogVolumeUnit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Volume_Statics::NewProp_InVolumeValue = { "InVolumeValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventVolume_Parms, InVolumeValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Volume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Volume_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Volume_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Volume_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Volume_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Volume_Statics::NewProp_bConvertValueToInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Volume_Statics::NewProp_VolumeUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Volume_Statics::NewProp_InVolumeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Volume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug | Unit Systems" },
		{ "Comment", "// Log a volume unit value to the console or viewport (Just adds the appropriate symbol at the end)\n" },
		{ "CPP_Default_bConvertValueToInt", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a volume unit value to the console or viewport (Just adds the appropriate symbol at the end)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Volume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Volume", nullptr, nullptr, sizeof(Log_eventVolume_Parms), Z_Construct_UFunction_ULog_Volume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Volume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Volume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Volume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Volume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Volume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Warning_Statics
	{
		struct Log_eventWarning_Parms
		{
			FString Message;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			bool bAddPrefix;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static void NewProp_bAddPrefix_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddPrefix;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Warning_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventWarning_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_Warning_Statics::NewProp_bAddPrefix_SetBit(void* Obj)
	{
		((Log_eventWarning_Parms*)Obj)->bAddPrefix = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Warning_Statics::NewProp_bAddPrefix = { "bAddPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventWarning_Parms), &Z_Construct_UFunction_ULog_Warning_Statics::NewProp_bAddPrefix_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Warning_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventWarning_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Warning_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Warning_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventWarning_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_Warning_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Warning_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Warning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Warning_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Warning_Statics::NewProp_bAddPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Warning_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Warning_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Warning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a warning message to the console or viewport\n" },
		{ "CPP_Default_bAddPrefix", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a warning message to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Warning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Warning", nullptr, nullptr, sizeof(Log_eventWarning_Parms), Z_Construct_UFunction_ULog_Warning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Warning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Warning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Warning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Warning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Warning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Warning_WithCondition_Statics
	{
		struct Log_eventWarning_WithCondition_Parms
		{
			FString Message;
			bool bCondition;
			TEnumAsByte<ELoggingOptions> LoggingOption;
			bool bAddPrefix;
			float TimeToDisplay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static void NewProp_bAddPrefix_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddPrefix;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
		static void NewProp_bCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventWarning_WithCondition_Parms, TimeToDisplay), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::NewProp_bAddPrefix_SetBit(void* Obj)
	{
		((Log_eventWarning_WithCondition_Parms*)Obj)->bAddPrefix = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::NewProp_bAddPrefix = { "bAddPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventWarning_WithCondition_Parms), &Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::NewProp_bAddPrefix_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventWarning_WithCondition_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::NewProp_bCondition_SetBit(void* Obj)
	{
		((Log_eventWarning_WithCondition_Parms*)Obj)->bCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::NewProp_bCondition = { "bCondition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Log_eventWarning_WithCondition_Parms), &Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::NewProp_bCondition_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventWarning_WithCondition_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::NewProp_bAddPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::NewProp_bCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a warning message to the console or viewport, only if the condition is met\n" },
		{ "CPP_Default_bAddPrefix", "false" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_TimeToDisplay", "5.000000" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Warning (Condition)" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a warning message to the console or viewport, only if the condition is met" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Warning_WithCondition", nullptr, nullptr, sizeof(Log_eventWarning_WithCondition_Parms), Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Warning_WithCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Warning_WithCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Wassup_Statics
	{
		struct Log_eventWassup_Parms
		{
			TEnumAsByte<ELoggingOptions> LoggingOption;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Wassup_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventWassup_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Wassup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Wassup_Statics::NewProp_LoggingOption,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Wassup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a wassup message to the console or viewport\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a wassup message to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Wassup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Wassup", nullptr, nullptr, sizeof(Log_eventWassup_Parms), Z_Construct_UFunction_ULog_Wassup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Wassup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Wassup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Wassup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Wassup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Wassup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Yes_Statics
	{
		struct Log_eventYes_Parms
		{
			FString Prefix;
			FString Suffix;
			TEnumAsByte<ELoggingOptions> LoggingOption;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Yes_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventYes_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Yes_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Yes_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventYes_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Yes_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Yes_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Yes_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULog_Yes_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventYes_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_ULog_Yes_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Yes_Statics::NewProp_Prefix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Yes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Yes_Statics::NewProp_LoggingOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Yes_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Yes_Statics::NewProp_Prefix,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Yes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a yes message to the console or viewport (with an optional prefix and suffix string)\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "CPP_Default_Prefix", "" },
		{ "CPP_Default_Suffix", "" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a yes message to the console or viewport (with an optional prefix and suffix string)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Yes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Yes", nullptr, nullptr, sizeof(Log_eventYes_Parms), Z_Construct_UFunction_ULog_Yes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Yes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Yes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Yes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Yes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Yes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULog_Yo_Statics
	{
		struct Log_eventYo_Parms
		{
			TEnumAsByte<ELoggingOptions> LoggingOption;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoggingOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULog_Yo_Statics::NewProp_LoggingOption = { "LoggingOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Log_eventYo_Parms, LoggingOption), Z_Construct_UEnum_Debug_ELoggingOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULog_Yo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULog_Yo_Statics::NewProp_LoggingOption,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULog_Yo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Log a yo message to the console or viewport\n" },
		{ "CPP_Default_LoggingOption", "LO_Console" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "Log a yo message to the console or viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULog_Yo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULog, nullptr, "Yo", nullptr, nullptr, sizeof(Log_eventYo_Parms), Z_Construct_UFunction_ULog_Yo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Yo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULog_Yo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULog_Yo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULog_Yo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULog_Yo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULog_NoRegister()
	{
		return ULog::StaticClass();
	}
	struct Z_Construct_UClass_ULog_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Debug,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULog_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULog_Assert_False, "Assert_False" }, // 148525393
		{ &Z_Construct_UFunction_ULog_Assert_IsValid, "Assert_IsValid" }, // 411673411
		{ &Z_Construct_UFunction_ULog_Assert_True, "Assert_True" }, // 420191685
		{ &Z_Construct_UFunction_ULog_AssertEqual_Bool, "AssertEqual_Bool" }, // 2092987086
		{ &Z_Construct_UFunction_ULog_AssertEqual_Color, "AssertEqual_Color" }, // 1317198137
		{ &Z_Construct_UFunction_ULog_AssertEqual_DateTime, "AssertEqual_DateTime" }, // 3199829039
		{ &Z_Construct_UFunction_ULog_AssertEqual_Float, "AssertEqual_Float" }, // 1151701359
		{ &Z_Construct_UFunction_ULog_AssertEqual_Integer, "AssertEqual_Integer" }, // 429438133
		{ &Z_Construct_UFunction_ULog_AssertEqual_Name, "AssertEqual_Name" }, // 1384524225
		{ &Z_Construct_UFunction_ULog_AssertEqual_Object, "AssertEqual_Object" }, // 1845176821
		{ &Z_Construct_UFunction_ULog_AssertEqual_Quat, "AssertEqual_Quat" }, // 446474088
		{ &Z_Construct_UFunction_ULog_AssertEqual_Rotator, "AssertEqual_Rotator" }, // 2126944575
		{ &Z_Construct_UFunction_ULog_AssertEqual_String, "AssertEqual_String" }, // 2662559581
		{ &Z_Construct_UFunction_ULog_AssertEqual_Transform, "AssertEqual_Transform" }, // 1197297987
		{ &Z_Construct_UFunction_ULog_AssertEqual_Vector, "AssertEqual_Vector" }, // 4130584690
		{ &Z_Construct_UFunction_ULog_AssertEqual_Vector2D, "AssertEqual_Vector2D" }, // 502145973
		{ &Z_Construct_UFunction_ULog_AssertNotEqual_Color, "AssertNotEqual_Color" }, // 742824794
		{ &Z_Construct_UFunction_ULog_AssertNotEqual_Name, "AssertNotEqual_Name" }, // 3365035959
		{ &Z_Construct_UFunction_ULog_AssertNotEqual_Object, "AssertNotEqual_Object" }, // 2120971343
		{ &Z_Construct_UFunction_ULog_AssertNotEqual_Quat, "AssertNotEqual_Quat" }, // 3868207138
		{ &Z_Construct_UFunction_ULog_AssertNotEqual_Rotator, "AssertNotEqual_Rotator" }, // 188358900
		{ &Z_Construct_UFunction_ULog_AssertNotEqual_String, "AssertNotEqual_String" }, // 3383033347
		{ &Z_Construct_UFunction_ULog_AssertNotEqual_Transform, "AssertNotEqual_Transform" }, // 1321272364
		{ &Z_Construct_UFunction_ULog_AssertNotEqual_Vector, "AssertNotEqual_Vector" }, // 3239028297
		{ &Z_Construct_UFunction_ULog_AssertNotEqual_Vector2D, "AssertNotEqual_Vector2D" }, // 3773789670
		{ &Z_Construct_UFunction_ULog_AssertValue_DateTime, "AssertValue_DateTime" }, // 1686515549
		{ &Z_Construct_UFunction_ULog_AssertValue_Float, "AssertValue_Float" }, // 1843381761
		{ &Z_Construct_UFunction_ULog_AssertValue_Integer, "AssertValue_Integer" }, // 619377046
		{ &Z_Construct_UFunction_ULog_Bool, "Bool" }, // 3663028968
		{ &Z_Construct_UFunction_ULog_Bye, "Bye" }, // 1115612807
		{ &Z_Construct_UFunction_ULog_CheckCondition, "CheckCondition" }, // 2243845975
		{ &Z_Construct_UFunction_ULog_CheckNoEntry, "CheckNoEntry" }, // 4004088544
		{ &Z_Construct_UFunction_ULog_CheckNoRecursion, "CheckNoRecursion" }, // 2802828614
		{ &Z_Construct_UFunction_ULog_CheckNoReEntry, "CheckNoReEntry" }, // 2699779713
		{ &Z_Construct_UFunction_ULog_CheckObject, "CheckObject" }, // 1432551235
		{ &Z_Construct_UFunction_ULog_Color, "Color" }, // 3024833674
		{ &Z_Construct_UFunction_ULog_Crash, "Crash" }, // 1744572855
		{ &Z_Construct_UFunction_ULog_Cya, "Cya" }, // 642530265
		{ &Z_Construct_UFunction_ULog_Data, "Data" }, // 3367230167
		{ &Z_Construct_UFunction_ULog_DateTime, "DateTime" }, // 2755586776
		{ &Z_Construct_UFunction_ULog_DebugMessage, "DebugMessage" }, // 567863482
		{ &Z_Construct_UFunction_ULog_DebugMessage_WithCondition, "DebugMessage_WithCondition" }, // 1528834942
		{ &Z_Construct_UFunction_ULog_Dollar, "Dollar" }, // 2667761924
		{ &Z_Construct_UFunction_ULog_EnsureCondition, "EnsureCondition" }, // 1288367472
		{ &Z_Construct_UFunction_ULog_EnsureObject, "EnsureObject" }, // 572293336
		{ &Z_Construct_UFunction_ULog_Error, "Error" }, // 965101397
		{ &Z_Construct_UFunction_ULog_Error_WithCondition, "Error_WithCondition" }, // 3460069249
		{ &Z_Construct_UFunction_ULog_Fatal, "Fatal" }, // 1886742242
		{ &Z_Construct_UFunction_ULog_Fatal_WithCondition, "Fatal_WithCondition" }, // 2095531119
		{ &Z_Construct_UFunction_ULog_Goodbye, "Goodbye" }, // 3852270135
		{ &Z_Construct_UFunction_ULog_Hello, "Hello" }, // 819447817
		{ &Z_Construct_UFunction_ULog_Hey, "Hey" }, // 3328328602
		{ &Z_Construct_UFunction_ULog_InBrackets_Name_Blueprint, "InBrackets_Name_Blueprint" }, // 4248069970
		{ &Z_Construct_UFunction_ULog_InBrackets_String_Blueprint, "InBrackets_String_Blueprint" }, // 2453748214
		{ &Z_Construct_UFunction_ULog_InBrackets_Text_Blueprint, "InBrackets_Text_Blueprint" }, // 3604672772
		{ &Z_Construct_UFunction_ULog_Info, "Info" }, // 1893757518
		{ &Z_Construct_UFunction_ULog_Info_WithCondition, "Info_WithCondition" }, // 3293973731
		{ &Z_Construct_UFunction_ULog_Invalid, "Invalid" }, // 186834159
		{ &Z_Construct_UFunction_ULog_Length, "Length" }, // 216936360
		{ &Z_Construct_UFunction_ULog_Mass, "Mass" }, // 1795183152
		{ &Z_Construct_UFunction_ULog_Matrix, "Matrix" }, // 3549036047
		{ &Z_Construct_UFunction_ULog_MessageInWorld, "MessageInWorld" }, // 2220942619
		{ &Z_Construct_UFunction_ULog_No, "No" }, // 1094043655
		{ &Z_Construct_UFunction_ULog_Number_Float_Blueprint, "Number_Float_Blueprint" }, // 3807106916
		{ &Z_Construct_UFunction_ULog_Number_Int_Blueprint, "Number_Int_Blueprint" }, // 2896972834
		{ &Z_Construct_UFunction_ULog_ObjectName, "ObjectName" }, // 3981752726
		{ &Z_Construct_UFunction_ULog_ObjectValidity, "ObjectValidity" }, // 4284094143
		{ &Z_Construct_UFunction_ULog_Percent, "Percent" }, // 2582523177
		{ &Z_Construct_UFunction_ULog_Quat, "Quat" }, // 3434667972
		{ &Z_Construct_UFunction_ULog_Rotator, "Rotator" }, // 215438872
		{ &Z_Construct_UFunction_ULog_Speed, "Speed" }, // 840730560
		{ &Z_Construct_UFunction_ULog_StartDebugTimer, "StartDebugTimer" }, // 156371180
		{ &Z_Construct_UFunction_ULog_StopDebugTimer, "StopDebugTimer" }, // 2468752059
		{ &Z_Construct_UFunction_ULog_Success, "Success" }, // 3553765514
		{ &Z_Construct_UFunction_ULog_Success_WithCondition, "Success_WithCondition" }, // 1659820795
		{ &Z_Construct_UFunction_ULog_Temperature, "Temperature" }, // 2514190335
		{ &Z_Construct_UFunction_ULog_Time, "Time" }, // 3296093735
		{ &Z_Construct_UFunction_ULog_Transform, "Transform" }, // 1527077614
		{ &Z_Construct_UFunction_ULog_UnImplemented, "UnImplemented" }, // 2432160639
		{ &Z_Construct_UFunction_ULog_Valid, "Valid" }, // 410948526
		{ &Z_Construct_UFunction_ULog_Vector, "Vector" }, // 2592024906
		{ &Z_Construct_UFunction_ULog_Vector2D, "Vector2D" }, // 3861572016
		{ &Z_Construct_UFunction_ULog_Volume, "Volume" }, // 477658938
		{ &Z_Construct_UFunction_ULog_Warning, "Warning" }, // 2327123229
		{ &Z_Construct_UFunction_ULog_Warning_WithCondition, "Warning_WithCondition" }, // 2579693922
		{ &Z_Construct_UFunction_ULog_Wassup, "Wassup" }, // 1566931520
		{ &Z_Construct_UFunction_ULog_Yes, "Yes" }, // 1341618924
		{ &Z_Construct_UFunction_ULog_Yo, "Yo" }, // 2007385641
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULog_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A library of log utility functions\n */" },
		{ "IncludePath", "Log.h" },
		{ "ModuleRelativePath", "Public/Log.h" },
		{ "ToolTip", "A library of log utility functions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULog>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULog_Statics::ClassParams = {
		&ULog::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULog_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULog()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULog_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULog, 3653977762);
	template<> DEBUG_API UClass* StaticClass<ULog>()
	{
		return ULog::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULog(Z_Construct_UClass_ULog, &ULog::StaticClass, TEXT("/Script/Debug"), TEXT("ULog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
