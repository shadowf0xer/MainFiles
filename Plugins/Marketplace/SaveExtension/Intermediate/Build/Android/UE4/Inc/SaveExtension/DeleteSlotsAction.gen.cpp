// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/LatentActions/DeleteSlotsAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeleteSlotsAction() {}
// Cross Module References
	SAVEEXTENSION_API UEnum* Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	static UEnum* EDeleteSlotsResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult, Z_Construct_UPackage__Script_SaveExtension(), TEXT("EDeleteSlotsResult"));
		}
		return Singleton;
	}
	template<> SAVEEXTENSION_API UEnum* StaticEnum<EDeleteSlotsResult>()
	{
		return EDeleteSlotsResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDeleteSlotsResult(EDeleteSlotsResult_StaticEnum, TEXT("/Script/SaveExtension"), TEXT("EDeleteSlotsResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult_Hash() { return 3698240892U; }
	UEnum* Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDeleteSlotsResult"), 0, Get_Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDeleteSlotsResult::Completed", (int64)EDeleteSlotsResult::Completed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * Enum used to indicate quote execution results\n */" },
				{ "Completed.Name", "EDeleteSlotsResult::Completed" },
				{ "ModuleRelativePath", "Public/LatentActions/DeleteSlotsAction.h" },
				{ "ToolTip", "Enum used to indicate quote execution results" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SaveExtension,
				nullptr,
				"EDeleteSlotsResult",
				"EDeleteSlotsResult",
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
