// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/InputMapping/GlobalKeyIconTagManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalKeyIconTagManager() {}
// Cross Module References
	AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_GlobalKeyIconTagsModifiedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UGlobalKeyIconTagManager_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UGlobalKeyIconTagManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AutoSettings_GlobalKeyIconTagsModifiedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AutoSettings_GlobalKeyIconTagsModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputMapping/GlobalKeyIconTagManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettings_GlobalKeyIconTagsModifiedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettings, nullptr, "GlobalKeyIconTagsModifiedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AutoSettings_GlobalKeyIconTagsModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_GlobalKeyIconTagsModifiedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AutoSettings_GlobalKeyIconTagsModifiedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AutoSettings_GlobalKeyIconTagsModifiedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UGlobalKeyIconTagManager::execGetIconForKey)
	{
		P_GET_STRUCT(FKey,Z_Param_InKey);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_IconTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=UGlobalKeyIconTagManager::GetIconForKey(Z_Param_InKey,Z_Param_IconTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlobalKeyIconTagManager::execSetGlobalKeyIconTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_InGlobalIconTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGlobalKeyIconTagManager::SetGlobalKeyIconTags(Z_Param_InGlobalIconTags);
		P_NATIVE_END;
	}
	void UGlobalKeyIconTagManager::StaticRegisterNativesUGlobalKeyIconTagManager()
	{
		UClass* Class = UGlobalKeyIconTagManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIconForKey", &UGlobalKeyIconTagManager::execGetIconForKey },
			{ "SetGlobalKeyIconTags", &UGlobalKeyIconTagManager::execSetGlobalKeyIconTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics
	{
		struct GlobalKeyIconTagManager_eventGetIconForKey_Parms
		{
			FKey InKey;
			FGameplayTagContainer IconTags;
			UTexture* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalKeyIconTagManager_eventGetIconForKey_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::NewProp_IconTags = { "IconTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalKeyIconTagManager_eventGetIconForKey_Parms, IconTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalKeyIconTagManager_eventGetIconForKey_Parms, InKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::NewProp_IconTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::NewProp_InKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key Icons" },
		{ "Comment", "// Get icon for key including global icon tags\n" },
		{ "ModuleRelativePath", "Public/InputMapping/GlobalKeyIconTagManager.h" },
		{ "ToolTip", "Get icon for key including global icon tags" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlobalKeyIconTagManager, nullptr, "GetIconForKey", nullptr, nullptr, sizeof(GlobalKeyIconTagManager_eventGetIconForKey_Parms), Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics
	{
		struct GlobalKeyIconTagManager_eventSetGlobalKeyIconTags_Parms
		{
			FGameplayTagContainer InGlobalIconTags;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InGlobalIconTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::NewProp_InGlobalIconTags = { "InGlobalIconTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalKeyIconTagManager_eventSetGlobalKeyIconTags_Parms, InGlobalIconTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::NewProp_InGlobalIconTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key Icons" },
		{ "Comment", "// Set global key icon tags to determine which icon set is chosen for key icons\n" },
		{ "ModuleRelativePath", "Public/InputMapping/GlobalKeyIconTagManager.h" },
		{ "ToolTip", "Set global key icon tags to determine which icon set is chosen for key icons" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlobalKeyIconTagManager, nullptr, "SetGlobalKeyIconTags", nullptr, nullptr, sizeof(GlobalKeyIconTagManager_eventSetGlobalKeyIconTags_Parms), Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGlobalKeyIconTagManager_NoRegister()
	{
		return UGlobalKeyIconTagManager::StaticClass();
	}
	struct Z_Construct_UClass_UGlobalKeyIconTagManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalKeyIconTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalKeyIconTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGlobalKeyIconTagsModified_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGlobalKeyIconTagsModified;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGlobalKeyIconTagManager_GetIconForKey, "GetIconForKey" }, // 2223405026
		{ &Z_Construct_UFunction_UGlobalKeyIconTagManager_SetGlobalKeyIconTags, "SetGlobalKeyIconTags" }, // 2430488109
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles global key icon tags\n * Useful for platform-specific gamepad button icons where you might want to globally use one set or another\n */" },
		{ "IncludePath", "InputMapping/GlobalKeyIconTagManager.h" },
		{ "ModuleRelativePath", "Public/InputMapping/GlobalKeyIconTagManager.h" },
		{ "ToolTip", "Handles global key icon tags\nUseful for platform-specific gamepad button icons where you might want to globally use one set or another" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::NewProp_GlobalKeyIconTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputMapping/GlobalKeyIconTagManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::NewProp_GlobalKeyIconTags = { "GlobalKeyIconTags", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGlobalKeyIconTagManager, GlobalKeyIconTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::NewProp_GlobalKeyIconTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::NewProp_GlobalKeyIconTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::NewProp_OnGlobalKeyIconTagsModified_MetaData[] = {
		{ "Comment", "// Fired when the GlobalKeyIconTags are modified\n" },
		{ "ModuleRelativePath", "Public/InputMapping/GlobalKeyIconTagManager.h" },
		{ "ToolTip", "Fired when the GlobalKeyIconTags are modified" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::NewProp_OnGlobalKeyIconTagsModified = { "OnGlobalKeyIconTagsModified", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGlobalKeyIconTagManager, OnGlobalKeyIconTagsModified), Z_Construct_UDelegateFunction_AutoSettings_GlobalKeyIconTagsModifiedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::NewProp_OnGlobalKeyIconTagsModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::NewProp_OnGlobalKeyIconTagsModified_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::NewProp_GlobalKeyIconTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::NewProp_OnGlobalKeyIconTagsModified,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlobalKeyIconTagManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::ClassParams = {
		&UGlobalKeyIconTagManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGlobalKeyIconTagManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGlobalKeyIconTagManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGlobalKeyIconTagManager, 3937991776);
	template<> AUTOSETTINGS_API UClass* StaticClass<UGlobalKeyIconTagManager>()
	{
		return UGlobalKeyIconTagManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGlobalKeyIconTagManager(Z_Construct_UClass_UGlobalKeyIconTagManager, &UGlobalKeyIconTagManager::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UGlobalKeyIconTagManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGlobalKeyIconTagManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
