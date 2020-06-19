// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/InputMapping/UI/InputMapping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputMapping() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UInputMapping_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UInputMapping();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UBindCaptureButton_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UInputMapping::execChordCaptured)
	{
		P_GET_STRUCT(FInputChord,Z_Param_InChord);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChordCaptured(Z_Param_InChord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMapping::execUpdateLabel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLabel_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMapping::execBindChord)
	{
		P_GET_STRUCT(FInputChord,Z_Param_InChord);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindChord(Z_Param_InChord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMapping::execUpdateMapping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMapping_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UInputMapping_UpdateLabel = FName(TEXT("UpdateLabel"));
	void UInputMapping::UpdateLabel()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInputMapping_UpdateLabel),NULL);
	}
	static FName NAME_UInputMapping_UpdateMapping = FName(TEXT("UpdateMapping"));
	void UInputMapping::UpdateMapping()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInputMapping_UpdateMapping),NULL);
	}
	void UInputMapping::StaticRegisterNativesUInputMapping()
	{
		UClass* Class = UInputMapping::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindChord", &UInputMapping::execBindChord },
			{ "ChordCaptured", &UInputMapping::execChordCaptured },
			{ "UpdateLabel", &UInputMapping::execUpdateLabel },
			{ "UpdateMapping", &UInputMapping::execUpdateMapping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputMapping_BindChord_Statics
	{
		struct InputMapping_eventBindChord_Parms
		{
			FInputChord InChord;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InChord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMapping_BindChord_Statics::NewProp_InChord = { "InChord", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMapping_eventBindChord_Parms, InChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMapping_BindChord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMapping_BindChord_Statics::NewProp_InChord,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMapping_BindChord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Manually update bindings with a captured chord\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/InputMapping.h" },
		{ "ToolTip", "Manually update bindings with a captured chord" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMapping_BindChord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMapping, nullptr, "BindChord", nullptr, nullptr, sizeof(InputMapping_eventBindChord_Parms), Z_Construct_UFunction_UInputMapping_BindChord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMapping_BindChord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMapping_BindChord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMapping_BindChord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMapping_BindChord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMapping_BindChord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics
	{
		struct InputMapping_eventChordCaptured_Parms
		{
			FInputChord InChord;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InChord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::NewProp_InChord = { "InChord", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMapping_eventChordCaptured_Parms, InChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::NewProp_InChord,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputMapping/UI/InputMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMapping, nullptr, "ChordCaptured", nullptr, nullptr, sizeof(InputMapping_eventChordCaptured_Parms), Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMapping_ChordCaptured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMapping_ChordCaptured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMapping_UpdateLabel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMapping_UpdateLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/InputMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMapping_UpdateLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMapping, nullptr, "UpdateLabel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMapping_UpdateLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMapping_UpdateLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMapping_UpdateLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMapping_UpdateLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMapping_UpdateMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMapping_UpdateMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Force the mapping to refresh\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/InputMapping.h" },
		{ "ToolTip", "Force the mapping to refresh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMapping_UpdateMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMapping, nullptr, "UpdateMapping", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMapping_UpdateMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMapping_UpdateMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMapping_UpdateMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMapping_UpdateMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInputMapping_NoRegister()
	{
		return UInputMapping::StaticClass();
	}
	struct Z_Construct_UClass_UInputMapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindCaptureButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BindCaptureButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappingGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputMapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputMapping_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputMapping_BindChord, "BindChord" }, // 2420833285
		{ &Z_Construct_UFunction_UInputMapping_ChordCaptured, "ChordCaptured" }, // 3595014936
		{ &Z_Construct_UFunction_UInputMapping_UpdateLabel, "UpdateLabel" }, // 1369973639
		{ &Z_Construct_UFunction_UInputMapping_UpdateMapping, "UpdateMapping" }, // 43387725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputMapping_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Shows a label for an input and allows the user to rebind it\n */" },
		{ "IncludePath", "InputMapping/UI/InputMapping.h" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/InputMapping.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Shows a label for an input and allows the user to rebind it" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputMapping_Statics::NewProp_BindCaptureButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Input Mapping" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/InputMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputMapping_Statics::NewProp_BindCaptureButton = { "BindCaptureButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputMapping, BindCaptureButton), Z_Construct_UClass_UBindCaptureButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputMapping_Statics::NewProp_BindCaptureButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputMapping_Statics::NewProp_BindCaptureButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputMapping_Statics::NewProp_IconTags_MetaData[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Tags to determine which key icon should be used\n// Key icons and tags can be defined in project settings (AutoSettings page)\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/InputMapping.h" },
		{ "ToolTip", "Tags to determine which key icon should be used\nKey icons and tags can be defined in project settings (AutoSettings page)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputMapping_Statics::NewProp_IconTags = { "IconTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputMapping, IconTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UInputMapping_Statics::NewProp_IconTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputMapping_Statics::NewProp_IconTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputMapping_Statics::NewProp_KeyGroup_MetaData[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Tag of key group to use - useful for separating groups of keys from each other such as gamepad from keyboard\n// Key groups can be defined in project settings (AutoSettings page)\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/InputMapping.h" },
		{ "ToolTip", "Tag of key group to use - useful for separating groups of keys from each other such as gamepad from keyboard\nKey groups can be defined in project settings (AutoSettings page)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputMapping_Statics::NewProp_KeyGroup = { "KeyGroup", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputMapping, KeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UInputMapping_Statics::NewProp_KeyGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputMapping_Statics::NewProp_KeyGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputMapping_Statics::NewProp_MappingGroup_MetaData[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Mapping group index - if an input has multiple mappings, this will determine which one to use\n// A value of -1 will use the first mapping group available\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/InputMapping.h" },
		{ "ToolTip", "Mapping group index - if an input has multiple mappings, this will determine which one to use\nA value of -1 will use the first mapping group available" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputMapping_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputMapping, MappingGroup), METADATA_PARAMS(Z_Construct_UClass_UInputMapping_Statics::NewProp_MappingGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputMapping_Statics::NewProp_MappingGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMapping_Statics::NewProp_BindCaptureButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMapping_Statics::NewProp_IconTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMapping_Statics::NewProp_KeyGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMapping_Statics::NewProp_MappingGroup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputMapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputMapping>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputMapping_Statics::ClassParams = {
		&UInputMapping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInputMapping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputMapping_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInputMapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputMapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputMapping()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputMapping_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputMapping, 1721155401);
	template<> AUTOSETTINGS_API UClass* StaticClass<UInputMapping>()
	{
		return UInputMapping::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputMapping(Z_Construct_UClass_UInputMapping, &UInputMapping::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UInputMapping"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputMapping);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
