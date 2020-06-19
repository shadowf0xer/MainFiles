// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/InputMapping/UI/KeyLabel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyLabel() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UKeyLabel_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UKeyLabel();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
	DEFINE_FUNCTION(UKeyLabel::execOnGlobalKeyIconTagsModified)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGlobalKeyIconTagsModified();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKeyLabel::execGetDisplayNameVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESlateVisibility*)Z_Param__Result=P_THIS->GetDisplayNameVisibility_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKeyLabel::execGetIconVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESlateVisibility*)Z_Param__Result=P_THIS->GetIconVisibility_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKeyLabel::execGetIconBrush)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSlateBrush*)Z_Param__Result=P_THIS->GetIconBrush_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKeyLabel::execHasValidKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasValidKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKeyLabel::execHasIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasIcon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKeyLabel::execGetIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->GetIcon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKeyLabel::execGetDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayName();
		P_NATIVE_END;
	}
	static FName NAME_UKeyLabel_GetDisplayNameVisibility = FName(TEXT("GetDisplayNameVisibility"));
	ESlateVisibility UKeyLabel::GetDisplayNameVisibility() const
	{
		KeyLabel_eventGetDisplayNameVisibility_Parms Parms;
		const_cast<UKeyLabel*>(this)->ProcessEvent(FindFunctionChecked(NAME_UKeyLabel_GetDisplayNameVisibility),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UKeyLabel_GetIconBrush = FName(TEXT("GetIconBrush"));
	FSlateBrush UKeyLabel::GetIconBrush() const
	{
		KeyLabel_eventGetIconBrush_Parms Parms;
		const_cast<UKeyLabel*>(this)->ProcessEvent(FindFunctionChecked(NAME_UKeyLabel_GetIconBrush),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UKeyLabel_GetIconVisibility = FName(TEXT("GetIconVisibility"));
	ESlateVisibility UKeyLabel::GetIconVisibility() const
	{
		KeyLabel_eventGetIconVisibility_Parms Parms;
		const_cast<UKeyLabel*>(this)->ProcessEvent(FindFunctionChecked(NAME_UKeyLabel_GetIconVisibility),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UKeyLabel_UpdateKeyLabel = FName(TEXT("UpdateKeyLabel"));
	void UKeyLabel::UpdateKeyLabel()
	{
		ProcessEvent(FindFunctionChecked(NAME_UKeyLabel_UpdateKeyLabel),NULL);
	}
	void UKeyLabel::StaticRegisterNativesUKeyLabel()
	{
		UClass* Class = UKeyLabel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayName", &UKeyLabel::execGetDisplayName },
			{ "GetDisplayNameVisibility", &UKeyLabel::execGetDisplayNameVisibility },
			{ "GetIcon", &UKeyLabel::execGetIcon },
			{ "GetIconBrush", &UKeyLabel::execGetIconBrush },
			{ "GetIconVisibility", &UKeyLabel::execGetIconVisibility },
			{ "HasIcon", &UKeyLabel::execHasIcon },
			{ "HasValidKey", &UKeyLabel::execHasValidKey },
			{ "OnGlobalKeyIconTagsModified", &UKeyLabel::execOnGlobalKeyIconTagsModified },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics
	{
		struct KeyLabel_eventGetDisplayName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KeyLabel_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key Label" },
		{ "Comment", "// Label text to display for the key\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/KeyLabel.h" },
		{ "ToolTip", "Label text to display for the key" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyLabel, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(KeyLabel_eventGetDisplayName_Parms), Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKeyLabel_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKeyLabel_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KeyLabel_eventGetDisplayNameVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key Label" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/KeyLabel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyLabel, nullptr, "GetDisplayNameVisibility", nullptr, nullptr, sizeof(KeyLabel_eventGetDisplayNameVisibility_Parms), Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKeyLabel_GetIcon_Statics
	{
		struct KeyLabel_eventGetIcon_Parms
		{
			UTexture* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KeyLabel_eventGetIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key Label" },
		{ "Comment", "// Icon texture for the key\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/KeyLabel.h" },
		{ "ToolTip", "Icon texture for the key" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyLabel, nullptr, "GetIcon", nullptr, nullptr, sizeof(KeyLabel_eventGetIcon_Parms), Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKeyLabel_GetIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKeyLabel_GetIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KeyLabel_eventGetIconBrush_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key Label" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/KeyLabel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyLabel, nullptr, "GetIconBrush", nullptr, nullptr, sizeof(KeyLabel_eventGetIconBrush_Parms), Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKeyLabel_GetIconBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKeyLabel_GetIconBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KeyLabel_eventGetIconVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key Label" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/KeyLabel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyLabel, nullptr, "GetIconVisibility", nullptr, nullptr, sizeof(KeyLabel_eventGetIconVisibility_Parms), Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKeyLabel_GetIconVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKeyLabel_GetIconVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKeyLabel_HasIcon_Statics
	{
		struct KeyLabel_eventHasIcon_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KeyLabel_eventHasIcon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KeyLabel_eventHasIcon_Parms), &Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key Label" },
		{ "Comment", "// True if the key has an icon defined\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/KeyLabel.h" },
		{ "ToolTip", "True if the key has an icon defined" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyLabel, nullptr, "HasIcon", nullptr, nullptr, sizeof(KeyLabel_eventHasIcon_Parms), Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKeyLabel_HasIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKeyLabel_HasIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics
	{
		struct KeyLabel_eventHasValidKey_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KeyLabel_eventHasValidKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KeyLabel_eventHasValidKey_Parms), &Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key Label" },
		{ "Comment", "// True if the key is valid\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/KeyLabel.h" },
		{ "ToolTip", "True if the key is valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyLabel, nullptr, "HasValidKey", nullptr, nullptr, sizeof(KeyLabel_eventHasValidKey_Parms), Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKeyLabel_HasValidKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKeyLabel_HasValidKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKeyLabel_OnGlobalKeyIconTagsModified_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyLabel_OnGlobalKeyIconTagsModified_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputMapping/UI/KeyLabel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyLabel_OnGlobalKeyIconTagsModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyLabel, nullptr, "OnGlobalKeyIconTagsModified", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKeyLabel_OnGlobalKeyIconTagsModified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_OnGlobalKeyIconTagsModified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKeyLabel_OnGlobalKeyIconTagsModified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKeyLabel_OnGlobalKeyIconTagsModified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKeyLabel_UpdateKeyLabel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKeyLabel_UpdateKeyLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key Label" },
		{ "Comment", "// Implement this to respond to data changes\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/KeyLabel.h" },
		{ "ToolTip", "Implement this to respond to data changes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKeyLabel_UpdateKeyLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeyLabel, nullptr, "UpdateKeyLabel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKeyLabel_UpdateKeyLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKeyLabel_UpdateKeyLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKeyLabel_UpdateKeyLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKeyLabel_UpdateKeyLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKeyLabel_NoRegister()
	{
		return UKeyLabel::StaticClass();
	}
	struct Z_Construct_UClass_UKeyLabel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LabelOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LabelOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyInvalidText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_KeyInvalidText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKeyLabel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKeyLabel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKeyLabel_GetDisplayName, "GetDisplayName" }, // 3103003248
		{ &Z_Construct_UFunction_UKeyLabel_GetDisplayNameVisibility, "GetDisplayNameVisibility" }, // 2418090324
		{ &Z_Construct_UFunction_UKeyLabel_GetIcon, "GetIcon" }, // 328418396
		{ &Z_Construct_UFunction_UKeyLabel_GetIconBrush, "GetIconBrush" }, // 2890674797
		{ &Z_Construct_UFunction_UKeyLabel_GetIconVisibility, "GetIconVisibility" }, // 3364307757
		{ &Z_Construct_UFunction_UKeyLabel_HasIcon, "HasIcon" }, // 4109206610
		{ &Z_Construct_UFunction_UKeyLabel_HasValidKey, "HasValidKey" }, // 1720632697
		{ &Z_Construct_UFunction_UKeyLabel_OnGlobalKeyIconTagsModified, "OnGlobalKeyIconTagsModified" }, // 2202701644
		{ &Z_Construct_UFunction_UKeyLabel_UpdateKeyLabel, "UpdateKeyLabel" }, // 3965320595
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyLabel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Shows the icon for a specific key or falls back to text label\n */" },
		{ "IncludePath", "InputMapping/UI/KeyLabel.h" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/KeyLabel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Shows the icon for a specific key or falls back to text label" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyLabel_Statics::NewProp_IconTags_MetaData[] = {
		{ "Category", "Key Label" },
		{ "Comment", "// Tags to determine which key icon should be used\n// Key icons and tags can be defined in project settings (AutoSettings page)\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/KeyLabel.h" },
		{ "ToolTip", "Tags to determine which key icon should be used\nKey icons and tags can be defined in project settings (AutoSettings page)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKeyLabel_Statics::NewProp_IconTags = { "IconTags", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKeyLabel, IconTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UKeyLabel_Statics::NewProp_IconTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKeyLabel_Statics::NewProp_IconTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyLabel_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Key Label" },
		{ "Comment", "// Key that this label is for\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/KeyLabel.h" },
		{ "ToolTip", "Key that this label is for" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKeyLabel_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKeyLabel, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UKeyLabel_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKeyLabel_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyLabel_Statics::NewProp_LabelOverride_MetaData[] = {
		{ "Category", "Key Label" },
		{ "Comment", "// If not empty, text to display instead of key label\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/KeyLabel.h" },
		{ "ToolTip", "If not empty, text to display instead of key label" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UKeyLabel_Statics::NewProp_LabelOverride = { "LabelOverride", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKeyLabel, LabelOverride), METADATA_PARAMS(Z_Construct_UClass_UKeyLabel_Statics::NewProp_LabelOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKeyLabel_Statics::NewProp_LabelOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyLabel_Statics::NewProp_KeyInvalidText_MetaData[] = {
		{ "Category", "Key Label" },
		{ "Comment", "// Text to display when key is invalid or unbound\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/KeyLabel.h" },
		{ "ToolTip", "Text to display when key is invalid or unbound" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UKeyLabel_Statics::NewProp_KeyInvalidText = { "KeyInvalidText", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKeyLabel, KeyInvalidText), METADATA_PARAMS(Z_Construct_UClass_UKeyLabel_Statics::NewProp_KeyInvalidText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKeyLabel_Statics::NewProp_KeyInvalidText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKeyLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyLabel_Statics::NewProp_IconTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyLabel_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyLabel_Statics::NewProp_LabelOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeyLabel_Statics::NewProp_KeyInvalidText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKeyLabel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeyLabel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKeyLabel_Statics::ClassParams = {
		&UKeyLabel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKeyLabel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKeyLabel_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UKeyLabel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKeyLabel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKeyLabel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKeyLabel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKeyLabel, 1096931844);
	template<> AUTOSETTINGS_API UClass* StaticClass<UKeyLabel>()
	{
		return UKeyLabel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKeyLabel(Z_Construct_UClass_UKeyLabel, &UKeyLabel::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UKeyLabel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyLabel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
