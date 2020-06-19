// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/LatentActions/SaveGameAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameAction() {}
// Cross Module References
	SAVEEXTENSION_API UEnum* Z_Construct_UEnum_SaveExtension_ESaveGameResult();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	static UEnum* ESaveGameResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SaveExtension_ESaveGameResult, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ESaveGameResult"));
		}
		return Singleton;
	}
	template<> SAVEEXTENSION_API UEnum* StaticEnum<ESaveGameResult>()
	{
		return ESaveGameResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESaveGameResult(ESaveGameResult_StaticEnum, TEXT("/Script/SaveExtension"), TEXT("ESaveGameResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SaveExtension_ESaveGameResult_Hash() { return 442299380U; }
	UEnum* Z_Construct_UEnum_SaveExtension_ESaveGameResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESaveGameResult"), 0, Get_Z_Construct_UEnum_SaveExtension_ESaveGameResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESaveGameResult::Saving", (int64)ESaveGameResult::Saving },
				{ "ESaveGameResult::Continue", (int64)ESaveGameResult::Continue },
				{ "ESaveGameResult::Failed", (int64)ESaveGameResult::Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * Enum used to indicate quote execution results\n */" },
				{ "Continue.Name", "ESaveGameResult::Continue" },
				{ "Failed.Name", "ESaveGameResult::Failed" },
				{ "ModuleRelativePath", "Public/LatentActions/SaveGameAction.h" },
				{ "Saving.Hidden", "" },
				{ "Saving.Name", "ESaveGameResult::Saving" },
				{ "ToolTip", "Enum used to indicate quote execution results" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SaveExtension,
				nullptr,
				"ESaveGameResult",
				"ESaveGameResult",
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
