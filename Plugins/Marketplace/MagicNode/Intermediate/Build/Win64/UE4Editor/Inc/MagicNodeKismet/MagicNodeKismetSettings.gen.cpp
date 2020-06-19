// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicNodeKismet/Public/MagicNodeKismetSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicNodeKismetSettings() {}
// Cross Module References
	MAGICNODEKISMET_API UClass* Z_Construct_UClass_UKMGC_Settings_NoRegister();
	MAGICNODEKISMET_API UClass* Z_Construct_UClass_UKMGC_Settings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MagicNodeKismet();
	MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_SemanticDB_NoRegister();
	MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_ClassDB_NoRegister();
	MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_FunctionDB_NoRegister();
	MAGICNODEKISMET_API UClass* Z_Construct_UClass_UMGC_KeywordDB_NoRegister();
// End Cross Module References
	void UKMGC_Settings::StaticRegisterNativesUKMGC_Settings()
	{
	}
	UClass* Z_Construct_UClass_UKMGC_Settings_NoRegister()
	{
		return UKMGC_Settings::StaticClass();
	}
	struct Z_Construct_UClass_UKMGC_Settings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScanUnrealTypesOnEditorStartup_MetaData[];
#endif
		static void NewProp_ScanUnrealTypesOnEditorStartup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ScanUnrealTypesOnEditorStartup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowKeywordHints_MetaData[];
#endif
		static void NewProp_ShowKeywordHints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowKeywordHints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SemanticDB_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_SemanticDB;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SemanticDB_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassDB_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ClassDB;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ClassDB_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionDB_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_FunctionDB;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_FunctionDB_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeywordDB_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_KeywordDB;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_KeywordDB_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKMGC_Settings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeKismet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKMGC_Settings_Statics::Class_MetaDataParams[] = {
		{ "Category", "Synaptech" },
		{ "ClassGroupNames", "Synaptech" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n/// MGC Global Settings\n" },
		{ "IncludePath", "MagicNodeKismetSettings.h" },
		{ "ModuleRelativePath", "Public/MagicNodeKismetSettings.h" },
		{ "ToolTip", "MGC Global Settings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ScanUnrealTypesOnEditorStartup_MetaData[] = {
		{ "Category", "MGC Code Completion" },
		{ "Comment", "/* If enabled, the auto-complete system will search for Unreal Types on Editor launch.\n\x09The list of types is HUGE and Editor startup could increase by several minutes with this activated. */" },
		{ "ModuleRelativePath", "Public/MagicNodeKismetSettings.h" },
		{ "ToolTip", "If enabled, the auto-complete system will search for Unreal Types on Editor launch.\n      The list of types is HUGE and Editor startup could increase by several minutes with this activated." },
	};
#endif
	void Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ScanUnrealTypesOnEditorStartup_SetBit(void* Obj)
	{
		((UKMGC_Settings*)Obj)->ScanUnrealTypesOnEditorStartup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ScanUnrealTypesOnEditorStartup = { "ScanUnrealTypesOnEditorStartup", nullptr, (EPropertyFlags)0x0010000000014001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKMGC_Settings), &Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ScanUnrealTypesOnEditorStartup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ScanUnrealTypesOnEditorStartup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ScanUnrealTypesOnEditorStartup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ShowKeywordHints_MetaData[] = {
		{ "Category", "MGC Node Editor" },
		{ "Comment", "//\n//\n" },
		{ "ModuleRelativePath", "Public/MagicNodeKismetSettings.h" },
	};
#endif
	void Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ShowKeywordHints_SetBit(void* Obj)
	{
		((UKMGC_Settings*)Obj)->ShowKeywordHints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ShowKeywordHints = { "ShowKeywordHints", nullptr, (EPropertyFlags)0x0010000000014001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKMGC_Settings), &Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ShowKeywordHints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ShowKeywordHints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ShowKeywordHints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_SemanticDB_MetaData[] = {
		{ "Category", "MGC Kismet Data" },
		{ "Comment", "//\n" },
		{ "DisplayName", "Semantic Database" },
		{ "ModuleRelativePath", "Public/MagicNodeKismetSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_SemanticDB = { "SemanticDB", nullptr, (EPropertyFlags)0x0014000000014001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKMGC_Settings, SemanticDB), METADATA_PARAMS(Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_SemanticDB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_SemanticDB_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_SemanticDB_ElementProp = { "SemanticDB", nullptr, (EPropertyFlags)0x0004000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMGC_SemanticDB_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ClassDB_MetaData[] = {
		{ "Category", "MGC Kismet Data" },
		{ "Comment", "//\n" },
		{ "DisplayName", "Class Database" },
		{ "ModuleRelativePath", "Public/MagicNodeKismetSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ClassDB = { "ClassDB", nullptr, (EPropertyFlags)0x0014000000014001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKMGC_Settings, ClassDB), METADATA_PARAMS(Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ClassDB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ClassDB_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ClassDB_ElementProp = { "ClassDB", nullptr, (EPropertyFlags)0x0004000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMGC_ClassDB_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_FunctionDB_MetaData[] = {
		{ "Category", "MGC Kismet Data" },
		{ "Comment", "//\n" },
		{ "DisplayName", "Function Database" },
		{ "ModuleRelativePath", "Public/MagicNodeKismetSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_FunctionDB = { "FunctionDB", nullptr, (EPropertyFlags)0x0014000000014001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKMGC_Settings, FunctionDB), METADATA_PARAMS(Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_FunctionDB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_FunctionDB_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_FunctionDB_ElementProp = { "FunctionDB", nullptr, (EPropertyFlags)0x0004000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMGC_FunctionDB_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_KeywordDB_MetaData[] = {
		{ "Category", "MGC Kismet Data" },
		{ "Comment", "//\n/// :: KISMET ::\n///\n" },
		{ "DisplayName", "Keyword Database" },
		{ "ModuleRelativePath", "Public/MagicNodeKismetSettings.h" },
		{ "ToolTip", ":: KISMET ::" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_KeywordDB = { "KeywordDB", nullptr, (EPropertyFlags)0x0014000000014001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKMGC_Settings, KeywordDB), METADATA_PARAMS(Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_KeywordDB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_KeywordDB_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_KeywordDB_ElementProp = { "KeywordDB", nullptr, (EPropertyFlags)0x0004000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMGC_KeywordDB_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKMGC_Settings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ScanUnrealTypesOnEditorStartup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ShowKeywordHints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_SemanticDB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_SemanticDB_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ClassDB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_ClassDB_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_FunctionDB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_FunctionDB_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_KeywordDB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKMGC_Settings_Statics::NewProp_KeywordDB_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKMGC_Settings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKMGC_Settings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKMGC_Settings_Statics::ClassParams = {
		&UKMGC_Settings::StaticClass,
		"MagicNode",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKMGC_Settings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKMGC_Settings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKMGC_Settings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKMGC_Settings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKMGC_Settings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKMGC_Settings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKMGC_Settings, 3794388064);
	template<> MAGICNODEKISMET_API UClass* StaticClass<UKMGC_Settings>()
	{
		return UKMGC_Settings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKMGC_Settings(Z_Construct_UClass_UKMGC_Settings, &UKMGC_Settings::StaticClass, TEXT("/Script/MagicNodeKismet"), TEXT("UKMGC_Settings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKMGC_Settings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
