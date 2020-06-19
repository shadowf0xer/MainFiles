// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Debug/Public/DebugLogLibrarySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugLogLibrarySettings() {}
// Cross Module References
	DEBUG_API UClass* Z_Construct_UClass_UDebugLogLibrarySettings_NoRegister();
	DEBUG_API UClass* Z_Construct_UClass_UDebugLogLibrarySettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Debug();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void UDebugLogLibrarySettings::StaticRegisterNativesUDebugLogLibrarySettings()
	{
	}
	UClass* Z_Construct_UClass_UDebugLogLibrarySettings_NoRegister()
	{
		return UDebugLogLibrarySettings::StaticClass();
	}
	struct Z_Construct_UClass_UDebugLogLibrarySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCrashGameInShippingBuildConfiguration_MetaData[];
#endif
		static void NewProp_bCrashGameInShippingBuildConfiguration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrashGameInShippingBuildConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_MetaData[];
#endif
		static void NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuccessColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarningColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WarningColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ErrorColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InfoColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDebugLogLibrarySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Debug,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DebugLogLibrarySettings.h" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Should the game crash if any ULog functions are called in a shipping build configuration?\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "Should the game crash if any ULog functions are called in a shipping build configuration?" },
	};
#endif
	void Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration_SetBit(void* Obj)
	{
		((UDebugLogLibrarySettings*)Obj)->bCrashGameInShippingBuildConfiguration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration = { "bCrashGameInShippingBuildConfiguration", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugLogLibrarySettings), &Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Should we use Two's Compliment when converting a decimal number to a hexadecimal value on negative numbers?\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "Should we use Two's Compliment when converting a decimal number to a hexadecimal value on negative numbers?" },
	};
#endif
	void Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_SetBit(void* Obj)
	{
		((UDebugLogLibrarySettings*)Obj)->bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers = { "bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDebugLogLibrarySettings), &Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_SuccessColor_MetaData[] = {
		{ "Category", "Viewport Log Colors" },
		{ "Comment", "// The color to use when logging a success message\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The color to use when logging a success message" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_SuccessColor = { "SuccessColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, SuccessColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_SuccessColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_SuccessColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_WarningColor_MetaData[] = {
		{ "Category", "Viewport Log Colors" },
		{ "Comment", "// The color to use when logging a warning message\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The color to use when logging a warning message" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_WarningColor = { "WarningColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, WarningColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_WarningColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_WarningColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ErrorColor_MetaData[] = {
		{ "Category", "Viewport Log Colors" },
		{ "Comment", "// The color to use when logging a error message\n" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The color to use when logging a error message" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ErrorColor = { "ErrorColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, ErrorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ErrorColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ErrorColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_InfoColor_MetaData[] = {
		{ "Category", "Viewport Log Colors" },
		{ "Comment", "// The color to use when logging a standard message\n" },
		{ "DisplayName", "Default Color" },
		{ "ModuleRelativePath", "Public/DebugLogLibrarySettings.h" },
		{ "ToolTip", "The color to use when logging a standard message" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_InfoColor = { "InfoColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDebugLogLibrarySettings, InfoColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_InfoColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_InfoColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDebugLogLibrarySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bCrashGameInShippingBuildConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_SuccessColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_WarningColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_ErrorColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugLogLibrarySettings_Statics::NewProp_InfoColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDebugLogLibrarySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugLogLibrarySettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDebugLogLibrarySettings_Statics::ClassParams = {
		&UDebugLogLibrarySettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDebugLogLibrarySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugLogLibrarySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDebugLogLibrarySettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDebugLogLibrarySettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDebugLogLibrarySettings, 1658088086);
	template<> DEBUG_API UClass* StaticClass<UDebugLogLibrarySettings>()
	{
		return UDebugLogLibrarySettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDebugLogLibrarySettings(Z_Construct_UClass_UDebugLogLibrarySettings, &UDebugLogLibrarySettings::StaticClass, TEXT("/Script/Debug"), TEXT("UDebugLogLibrarySettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugLogLibrarySettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
