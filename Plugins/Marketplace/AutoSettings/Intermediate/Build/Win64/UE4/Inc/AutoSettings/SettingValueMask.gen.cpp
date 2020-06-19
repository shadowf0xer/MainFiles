// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Misc/SettingValueMask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingValueMask() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingValueMask_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingValueMask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References
	DEFINE_FUNCTION(USettingValueMask::execRecombineValues)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SettingValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_ConsoleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->RecombineValues_Implementation(Z_Param_SettingValue,Z_Param_ConsoleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingValueMask::execMaskValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConsoleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->MaskValue_Implementation(Z_Param_ConsoleValue);
		P_NATIVE_END;
	}
	static FName NAME_USettingValueMask_MaskValue = FName(TEXT("MaskValue"));
	FString USettingValueMask::MaskValue(const FString& ConsoleValue) const
	{
		SettingValueMask_eventMaskValue_Parms Parms;
		Parms.ConsoleValue=ConsoleValue;
		const_cast<USettingValueMask*>(this)->ProcessEvent(FindFunctionChecked(NAME_USettingValueMask_MaskValue),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_USettingValueMask_RecombineValues = FName(TEXT("RecombineValues"));
	FString USettingValueMask::RecombineValues(const FString& SettingValue, const FString& ConsoleValue) const
	{
		SettingValueMask_eventRecombineValues_Parms Parms;
		Parms.SettingValue=SettingValue;
		Parms.ConsoleValue=ConsoleValue;
		const_cast<USettingValueMask*>(this)->ProcessEvent(FindFunctionChecked(NAME_USettingValueMask_RecombineValues),&Parms);
		return Parms.ReturnValue;
	}
	void USettingValueMask::StaticRegisterNativesUSettingValueMask()
	{
		UClass* Class = USettingValueMask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MaskValue", &USettingValueMask::execMaskValue },
			{ "RecombineValues", &USettingValueMask::execRecombineValues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USettingValueMask_MaskValue_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConsoleValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingValueMask_eventMaskValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::NewProp_ConsoleValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::NewProp_ConsoleValue = { "ConsoleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingValueMask_eventMaskValue_Parms, ConsoleValue), METADATA_PARAMS(Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::NewProp_ConsoleValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::NewProp_ConsoleValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::NewProp_ConsoleValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setting Value Mask" },
		{ "Comment", "// Extract the value that the setting cares about from the full console value\n" },
		{ "ModuleRelativePath", "Public/Misc/SettingValueMask.h" },
		{ "ToolTip", "Extract the value that the setting cares about from the full console value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingValueMask, nullptr, "MaskValue", nullptr, nullptr, sizeof(SettingValueMask_eventMaskValue_Parms), Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingValueMask_MaskValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingValueMask_MaskValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConsoleValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SettingValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingValueMask_eventRecombineValues_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::NewProp_ConsoleValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::NewProp_ConsoleValue = { "ConsoleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingValueMask_eventRecombineValues_Parms, ConsoleValue), METADATA_PARAMS(Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::NewProp_ConsoleValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::NewProp_ConsoleValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::NewProp_SettingValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::NewProp_SettingValue = { "SettingValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingValueMask_eventRecombineValues_Parms, SettingValue), METADATA_PARAMS(Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::NewProp_SettingValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::NewProp_SettingValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::NewProp_ConsoleValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::NewProp_SettingValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setting Value Mask" },
		{ "Comment", "// Transform a setting value back into a new console value, using the current console value for parts we don't care about\n" },
		{ "ModuleRelativePath", "Public/Misc/SettingValueMask.h" },
		{ "ToolTip", "Transform a setting value back into a new console value, using the current console value for parts we don't care about" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingValueMask, nullptr, "RecombineValues", nullptr, nullptr, sizeof(SettingValueMask_eventRecombineValues_Parms), Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingValueMask_RecombineValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingValueMask_RecombineValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USettingValueMask_NoRegister()
	{
		return USettingValueMask::StaticClass();
	}
	struct Z_Construct_UClass_USettingValueMask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USettingValueMask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USettingValueMask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USettingValueMask_MaskValue, "MaskValue" }, // 3608633752
		{ &Z_Construct_UFunction_USettingValueMask_RecombineValues, "RecombineValues" }, // 1027667168
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingValueMask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents transformations that can be applied to a setting value to add or subtract subsections that the setting doesn't care about\n * e.g. Resolution CVar (r.SetRes) can be in the form of \"1920x1080wf\" - you might want one setting that cares about the pixel dimensions (1920x1080) and another that cares about the window mode (wf)\n */" },
		{ "IncludePath", "Misc/SettingValueMask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/SettingValueMask.h" },
		{ "ToolTip", "Represents transformations that can be applied to a setting value to add or subtract subsections that the setting doesn't care about\ne.g. Resolution CVar (r.SetRes) can be in the form of \"1920x1080wf\" - you might want one setting that cares about the pixel dimensions (1920x1080) and another that cares about the window mode (wf)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USettingValueMask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingValueMask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USettingValueMask_Statics::ClassParams = {
		&USettingValueMask::StaticClass,
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
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USettingValueMask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USettingValueMask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USettingValueMask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USettingValueMask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USettingValueMask, 1432640475);
	template<> AUTOSETTINGS_API UClass* StaticClass<USettingValueMask>()
	{
		return USettingValueMask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USettingValueMask(Z_Construct_UClass_USettingValueMask, &USettingValueMask::StaticClass, TEXT("/Script/AutoSettings"), TEXT("USettingValueMask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USettingValueMask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
