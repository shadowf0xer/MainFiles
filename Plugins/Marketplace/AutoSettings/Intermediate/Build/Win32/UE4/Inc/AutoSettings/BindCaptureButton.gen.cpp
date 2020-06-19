// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/InputMapping/UI/BindCaptureButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBindCaptureButton() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UBindCaptureButton_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UBindCaptureButton();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UBindCapturePrompt_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UBindCaptureButton::execChordCaptured)
	{
		P_GET_STRUCT(FInputChord,Z_Param_Chord);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChordCaptured(Z_Param_Chord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBindCaptureButton::execInitializePrompt)
	{
		P_GET_OBJECT(UBindCapturePrompt,Z_Param_PromptWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializePrompt_Implementation(Z_Param_PromptWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBindCaptureButton::execStartCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBindCapturePrompt**)Z_Param__Result=P_THIS->StartCapture();
		P_NATIVE_END;
	}
	static FName NAME_UBindCaptureButton_InitializePrompt = FName(TEXT("InitializePrompt"));
	void UBindCaptureButton::InitializePrompt(UBindCapturePrompt* PromptWidget)
	{
		BindCaptureButton_eventInitializePrompt_Parms Parms;
		Parms.PromptWidget=PromptWidget;
		ProcessEvent(FindFunctionChecked(NAME_UBindCaptureButton_InitializePrompt),&Parms);
	}
	void UBindCaptureButton::StaticRegisterNativesUBindCaptureButton()
	{
		UClass* Class = UBindCaptureButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChordCaptured", &UBindCaptureButton::execChordCaptured },
			{ "InitializePrompt", &UBindCaptureButton::execInitializePrompt },
			{ "StartCapture", &UBindCaptureButton::execStartCapture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics
	{
		struct BindCaptureButton_eventChordCaptured_Parms
		{
			FInputChord Chord;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Chord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::NewProp_Chord = { "Chord", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BindCaptureButton_eventChordCaptured_Parms, Chord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::NewProp_Chord,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputMapping/UI/BindCaptureButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBindCaptureButton, nullptr, "ChordCaptured", nullptr, nullptr, sizeof(BindCaptureButton_eventChordCaptured_Parms), Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBindCaptureButton_ChordCaptured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBindCaptureButton_ChordCaptured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PromptWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PromptWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::NewProp_PromptWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::NewProp_PromptWidget = { "PromptWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BindCaptureButton_eventInitializePrompt_Parms, PromptWidget), Z_Construct_UClass_UBindCapturePrompt_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::NewProp_PromptWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::NewProp_PromptWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::NewProp_PromptWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bind Capture Button" },
		{ "Comment", "// Called to initialize a new prompt widget to listen for input capture\n// Override this to change how the prompt is set up, or add it to another widget instead of the viewport\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/BindCaptureButton.h" },
		{ "ToolTip", "Called to initialize a new prompt widget to listen for input capture\nOverride this to change how the prompt is set up, or add it to another widget instead of the viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBindCaptureButton, nullptr, "InitializePrompt", nullptr, nullptr, sizeof(BindCaptureButton_eventInitializePrompt_Parms), Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBindCaptureButton_InitializePrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBindCaptureButton_InitializePrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics
	{
		struct BindCaptureButton_eventStartCapture_Parms
		{
			UBindCapturePrompt* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BindCaptureButton_eventStartCapture_Parms, ReturnValue), Z_Construct_UClass_UBindCapturePrompt_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bind Capture Button" },
		{ "Comment", "// Create prompt and start listening for input chord\n// Returns the newly created prompt\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/BindCaptureButton.h" },
		{ "ToolTip", "Create prompt and start listening for input chord\nReturns the newly created prompt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBindCaptureButton, nullptr, "StartCapture", nullptr, nullptr, sizeof(BindCaptureButton_eventStartCapture_Parms), Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBindCaptureButton_StartCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBindCaptureButton_StartCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBindCaptureButton_NoRegister()
	{
		return UBindCaptureButton::StaticClass();
	}
	struct Z_Construct_UClass_UBindCaptureButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prompt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Prompt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapturePromptZOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CapturePromptZOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindCapturePromptClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BindCapturePromptClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBindCaptureButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBindCaptureButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBindCaptureButton_ChordCaptured, "ChordCaptured" }, // 1484064964
		{ &Z_Construct_UFunction_UBindCaptureButton_InitializePrompt, "InitializePrompt" }, // 4253113248
		{ &Z_Construct_UFunction_UBindCaptureButton_StartCapture, "StartCapture" }, // 2813005585
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBindCaptureButton_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Button that, when clicked, prompts the user and listens for an input chord\n */" },
		{ "IncludePath", "InputMapping/UI/BindCaptureButton.h" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/BindCaptureButton.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Button that, when clicked, prompts the user and listens for an input chord" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_Prompt_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/BindCaptureButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBindCaptureButton, Prompt), Z_Construct_UClass_UBindCapturePrompt_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_Prompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_Prompt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_CapturePromptZOrder_MetaData[] = {
		{ "Category", "Bind Capture Button" },
		{ "Comment", "// Z-order to open capture prompts with\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/BindCaptureButton.h" },
		{ "ToolTip", "Z-order to open capture prompts with" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_CapturePromptZOrder = { "CapturePromptZOrder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBindCaptureButton, CapturePromptZOrder), METADATA_PARAMS(Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_CapturePromptZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_CapturePromptZOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_BindCapturePromptClass_MetaData[] = {
		{ "Category", "Bind Capture Button" },
		{ "Comment", "// BindCapturePrompt class to create when button is clicked\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/BindCaptureButton.h" },
		{ "ToolTip", "BindCapturePrompt class to create when button is clicked" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_BindCapturePromptClass = { "BindCapturePromptClass", nullptr, (EPropertyFlags)0x0014000002000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBindCaptureButton, BindCapturePromptClass), Z_Construct_UClass_UBindCapturePrompt_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_BindCapturePromptClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_BindCapturePromptClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_KeyGroup_MetaData[] = {
		{ "Comment", "// Tag of key group to use - useful for separating groups of keys from each other such as gamepad from keyboard\n// Key groups can be defined in project settings (AutoSettings page)\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/BindCaptureButton.h" },
		{ "ToolTip", "Tag of key group to use - useful for separating groups of keys from each other such as gamepad from keyboard\nKey groups can be defined in project settings (AutoSettings page)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_KeyGroup = { "KeyGroup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBindCaptureButton, KeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_KeyGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_KeyGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBindCaptureButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_Prompt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_CapturePromptZOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_BindCapturePromptClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCaptureButton_Statics::NewProp_KeyGroup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBindCaptureButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBindCaptureButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBindCaptureButton_Statics::ClassParams = {
		&UBindCaptureButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBindCaptureButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBindCaptureButton_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBindCaptureButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBindCaptureButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBindCaptureButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBindCaptureButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBindCaptureButton, 648406522);
	template<> AUTOSETTINGS_API UClass* StaticClass<UBindCaptureButton>()
	{
		return UBindCaptureButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBindCaptureButton(Z_Construct_UClass_UBindCaptureButton, &UBindCaptureButton::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UBindCaptureButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBindCaptureButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
