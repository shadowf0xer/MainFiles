// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryExtendedStandardLibrary/Public/Classes/ELowEntrySplitScreenType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELowEntrySplitScreenType() {}
// Cross Module References
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// End Cross Module References
	static UEnum* ELowEntrySplitScreenType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType, Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary(), TEXT("ELowEntrySplitScreenType"));
		}
		return Singleton;
	}
	template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* StaticEnum<ELowEntrySplitScreenType>()
	{
		return ELowEntrySplitScreenType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELowEntrySplitScreenType(ELowEntrySplitScreenType_StaticEnum, TEXT("/Script/LowEntryExtendedStandardLibrary"), TEXT("ELowEntrySplitScreenType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType_Hash() { return 2599356679U; }
	UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELowEntrySplitScreenType"), 0, Get_Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELowEntrySplitScreenType::None", (int64)ELowEntrySplitScreenType::None },
				{ "ELowEntrySplitScreenType::TwoPlayer_Horizontal", (int64)ELowEntrySplitScreenType::TwoPlayer_Horizontal },
				{ "ELowEntrySplitScreenType::TwoPlayer_Vertical", (int64)ELowEntrySplitScreenType::TwoPlayer_Vertical },
				{ "ELowEntrySplitScreenType::ThreePlayer_FavorTop", (int64)ELowEntrySplitScreenType::ThreePlayer_FavorTop },
				{ "ELowEntrySplitScreenType::ThreePlayer_FavorBottom", (int64)ELowEntrySplitScreenType::ThreePlayer_FavorBottom },
				{ "ELowEntrySplitScreenType::ThreePlayer_Vertical", (int64)ELowEntrySplitScreenType::ThreePlayer_Vertical },
				{ "ELowEntrySplitScreenType::FourPlayer_Grid", (int64)ELowEntrySplitScreenType::FourPlayer_Grid },
				{ "ELowEntrySplitScreenType::FourPlayer_Vertical", (int64)ELowEntrySplitScreenType::FourPlayer_Vertical },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FourPlayer_Grid.Name", "ELowEntrySplitScreenType::FourPlayer_Grid" },
				{ "FourPlayer_Vertical.Name", "ELowEntrySplitScreenType::FourPlayer_Vertical" },
				{ "ModuleRelativePath", "Public/Classes/ELowEntrySplitScreenType.h" },
				{ "None.Name", "ELowEntrySplitScreenType::None" },
				{ "ThreePlayer_FavorBottom.Name", "ELowEntrySplitScreenType::ThreePlayer_FavorBottom" },
				{ "ThreePlayer_FavorTop.Name", "ELowEntrySplitScreenType::ThreePlayer_FavorTop" },
				{ "ThreePlayer_Vertical.Name", "ELowEntrySplitScreenType::ThreePlayer_Vertical" },
				{ "TwoPlayer_Horizontal.Name", "ELowEntrySplitScreenType::TwoPlayer_Horizontal" },
				{ "TwoPlayer_Vertical.Name", "ELowEntrySplitScreenType::TwoPlayer_Vertical" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
				nullptr,
				"ELowEntrySplitScreenType",
				"ELowEntrySplitScreenType",
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
