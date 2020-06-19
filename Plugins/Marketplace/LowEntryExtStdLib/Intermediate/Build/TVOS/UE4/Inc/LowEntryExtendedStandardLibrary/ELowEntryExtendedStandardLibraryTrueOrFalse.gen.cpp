// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryExtendedStandardLibrary/Public/Classes/ELowEntryExtendedStandardLibraryTrueOrFalse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELowEntryExtendedStandardLibraryTrueOrFalse() {}
// Cross Module References
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// End Cross Module References
	static UEnum* ELowEntryExtendedStandardLibraryTrueOrFalse_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse, Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary(), TEXT("ELowEntryExtendedStandardLibraryTrueOrFalse"));
		}
		return Singleton;
	}
	template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* StaticEnum<ELowEntryExtendedStandardLibraryTrueOrFalse>()
	{
		return ELowEntryExtendedStandardLibraryTrueOrFalse_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELowEntryExtendedStandardLibraryTrueOrFalse(ELowEntryExtendedStandardLibraryTrueOrFalse_StaticEnum, TEXT("/Script/LowEntryExtendedStandardLibrary"), TEXT("ELowEntryExtendedStandardLibraryTrueOrFalse"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse_Hash() { return 3959844865U; }
	UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELowEntryExtendedStandardLibraryTrueOrFalse"), 0, Get_Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELowEntryExtendedStandardLibraryTrueOrFalse::_True_", (int64)ELowEntryExtendedStandardLibraryTrueOrFalse::_True_ },
				{ "ELowEntryExtendedStandardLibraryTrueOrFalse::_False_", (int64)ELowEntryExtendedStandardLibraryTrueOrFalse::_False_ },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "_False_.Name", "ELowEntryExtendedStandardLibraryTrueOrFalse::_False_" },
				{ "_True_.Name", "ELowEntryExtendedStandardLibraryTrueOrFalse::_True_" },
				{ "ModuleRelativePath", "Public/Classes/ELowEntryExtendedStandardLibraryTrueOrFalse.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
				nullptr,
				"ELowEntryExtendedStandardLibraryTrueOrFalse",
				"ELowEntryExtendedStandardLibraryTrueOrFalse",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
