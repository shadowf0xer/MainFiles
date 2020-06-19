// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryExtendedStandardLibrary/Public/Classes/ELowEntryImageFormat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELowEntryImageFormat() {}
// Cross Module References
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// End Cross Module References
	static UEnum* ELowEntryImageFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat, Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary(), TEXT("ELowEntryImageFormat"));
		}
		return Singleton;
	}
	template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* StaticEnum<ELowEntryImageFormat>()
	{
		return ELowEntryImageFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELowEntryImageFormat(ELowEntryImageFormat_StaticEnum, TEXT("/Script/LowEntryExtendedStandardLibrary"), TEXT("ELowEntryImageFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Hash() { return 2418561722U; }
	UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELowEntryImageFormat"), 0, Get_Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryImageFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELowEntryImageFormat::Invalid", (int64)ELowEntryImageFormat::Invalid },
				{ "ELowEntryImageFormat::PNG", (int64)ELowEntryImageFormat::PNG },
				{ "ELowEntryImageFormat::JPEG", (int64)ELowEntryImageFormat::JPEG },
				{ "ELowEntryImageFormat::GrayscaleJPEG", (int64)ELowEntryImageFormat::GrayscaleJPEG },
				{ "ELowEntryImageFormat::BMP", (int64)ELowEntryImageFormat::BMP },
				{ "ELowEntryImageFormat::ICO", (int64)ELowEntryImageFormat::ICO },
				{ "ELowEntryImageFormat::EXR", (int64)ELowEntryImageFormat::EXR },
				{ "ELowEntryImageFormat::ICNS", (int64)ELowEntryImageFormat::ICNS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BMP.Comment", "/** Windows Bitmap */" },
				{ "BMP.Name", "ELowEntryImageFormat::BMP" },
				{ "BMP.ToolTip", "Windows Bitmap" },
				{ "EXR.Comment", "/** OpenEXR (HDR) image file format */" },
				{ "EXR.Name", "ELowEntryImageFormat::EXR" },
				{ "EXR.ToolTip", "OpenEXR (HDR) image file format" },
				{ "GrayscaleJPEG.Comment", "/** Single channel jpeg */" },
				{ "GrayscaleJPEG.Name", "ELowEntryImageFormat::GrayscaleJPEG" },
				{ "GrayscaleJPEG.ToolTip", "Single channel jpeg" },
				{ "ICNS.Comment", "/** Mac icon */" },
				{ "ICNS.Name", "ELowEntryImageFormat::ICNS" },
				{ "ICNS.ToolTip", "Mac icon" },
				{ "ICO.Comment", "/** Windows Icon resource */" },
				{ "ICO.Name", "ELowEntryImageFormat::ICO" },
				{ "ICO.ToolTip", "Windows Icon resource" },
				{ "Invalid.Comment", "/** Invalid or unrecognized format */" },
				{ "Invalid.Name", "ELowEntryImageFormat::Invalid" },
				{ "Invalid.ToolTip", "Invalid or unrecognized format" },
				{ "JPEG.Comment", "/** Joint Photographic Experts Group */" },
				{ "JPEG.Name", "ELowEntryImageFormat::JPEG" },
				{ "JPEG.ToolTip", "Joint Photographic Experts Group" },
				{ "ModuleRelativePath", "Public/Classes/ELowEntryImageFormat.h" },
				{ "PNG.Comment", "/** Portable Network Graphics */" },
				{ "PNG.Name", "ELowEntryImageFormat::PNG" },
				{ "PNG.ToolTip", "Portable Network Graphics" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
				nullptr,
				"ELowEntryImageFormat",
				"ELowEntryImageFormat",
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
