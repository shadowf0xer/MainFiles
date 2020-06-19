// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/InputMapping/UI/InputLabel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputLabel() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UInputLabel_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UInputLabel();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UInputLabel::execMappingsChanged)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MappingsChanged(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputLabel::execUpdateLabel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLabel_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UInputLabel_UpdateLabel = FName(TEXT("UpdateLabel"));
	void UInputLabel::UpdateLabel()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInputLabel_UpdateLabel),NULL);
	}
	void UInputLabel::StaticRegisterNativesUInputLabel()
	{
		UClass* Class = UInputLabel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MappingsChanged", &UInputLabel::execMappingsChanged },
			{ "UpdateLabel", &UInputLabel::execUpdateLabel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics
	{
		struct InputLabel_eventMappingsChanged_Parms
		{
			APlayerController* Player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputLabel_eventMappingsChanged_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputMapping/UI/InputLabel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputLabel, nullptr, "MappingsChanged", nullptr, nullptr, sizeof(InputLabel_eventMappingsChanged_Parms), Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputLabel_MappingsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputLabel_MappingsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputLabel_UpdateLabel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputLabel_UpdateLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Label" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/InputLabel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputLabel_UpdateLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputLabel, nullptr, "UpdateLabel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputLabel_UpdateLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputLabel_UpdateLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputLabel_UpdateLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputLabel_UpdateLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInputLabel_NoRegister()
	{
		return UInputLabel::StaticClass();
	}
	struct Z_Construct_UClass_UInputLabel_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePlayerKeyGroup_MetaData[];
#endif
		static void NewProp_bUsePlayerKeyGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePlayerKeyGroup;
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
	UObject* (*const Z_Construct_UClass_UInputLabel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputLabel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputLabel_MappingsChanged, "MappingsChanged" }, // 796337326
		{ &Z_Construct_UFunction_UInputLabel_UpdateLabel, "UpdateLabel" }, // 2846959430
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputLabel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base label for an input\n */" },
		{ "IncludePath", "InputMapping/UI/InputLabel.h" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/InputLabel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base label for an input" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputLabel_Statics::NewProp_IconTags_MetaData[] = {
		{ "Category", "Input Label" },
		{ "Comment", "// Tags to determine which key icon should be used\n// Key icons and tags can be defined in project settings (AutoSettings page)\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/InputLabel.h" },
		{ "ToolTip", "Tags to determine which key icon should be used\nKey icons and tags can be defined in project settings (AutoSettings page)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputLabel_Statics::NewProp_IconTags = { "IconTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputLabel, IconTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UInputLabel_Statics::NewProp_IconTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputLabel_Statics::NewProp_IconTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputLabel_Statics::NewProp_bUsePlayerKeyGroup_MetaData[] = {
		{ "Category", "Input Label" },
		{ "Comment", "// If true will use the Key Group of the owning player\n// See InputMappingManager SetPlayerKeyGroup\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/InputLabel.h" },
		{ "ToolTip", "If true will use the Key Group of the owning player\nSee InputMappingManager SetPlayerKeyGroup" },
	};
#endif
	void Z_Construct_UClass_UInputLabel_Statics::NewProp_bUsePlayerKeyGroup_SetBit(void* Obj)
	{
		((UInputLabel*)Obj)->bUsePlayerKeyGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputLabel_Statics::NewProp_bUsePlayerKeyGroup = { "bUsePlayerKeyGroup", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInputLabel), &Z_Construct_UClass_UInputLabel_Statics::NewProp_bUsePlayerKeyGroup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputLabel_Statics::NewProp_bUsePlayerKeyGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputLabel_Statics::NewProp_bUsePlayerKeyGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputLabel_Statics::NewProp_KeyGroup_MetaData[] = {
		{ "Category", "Input Label" },
		{ "Comment", "// Tag of key group to use - useful for separating groups of keys from each other such as gamepad from keyboard\n// Key groups can be defined in project settings (AutoSettings page)\n" },
		{ "EditCondition", "!bUsePlayerKeyGroup" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/InputLabel.h" },
		{ "ToolTip", "Tag of key group to use - useful for separating groups of keys from each other such as gamepad from keyboard\nKey groups can be defined in project settings (AutoSettings page)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputLabel_Statics::NewProp_KeyGroup = { "KeyGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputLabel, KeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UInputLabel_Statics::NewProp_KeyGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputLabel_Statics::NewProp_KeyGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputLabel_Statics::NewProp_MappingGroup_MetaData[] = {
		{ "Category", "Input Label" },
		{ "Comment", "// Mapping group index - if an input has multiple mappings, this will determine which one to use\n// A value of -1 will use the first mapping group available\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/InputLabel.h" },
		{ "ToolTip", "Mapping group index - if an input has multiple mappings, this will determine which one to use\nA value of -1 will use the first mapping group available" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputLabel_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputLabel, MappingGroup), METADATA_PARAMS(Z_Construct_UClass_UInputLabel_Statics::NewProp_MappingGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputLabel_Statics::NewProp_MappingGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputLabel_Statics::NewProp_IconTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputLabel_Statics::NewProp_bUsePlayerKeyGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputLabel_Statics::NewProp_KeyGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputLabel_Statics::NewProp_MappingGroup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputLabel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputLabel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputLabel_Statics::ClassParams = {
		&UInputLabel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInputLabel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputLabel_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInputLabel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputLabel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputLabel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputLabel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputLabel, 2453388479);
	template<> AUTOSETTINGS_API UClass* StaticClass<UInputLabel>()
	{
		return UInputLabel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputLabel(Z_Construct_UClass_UInputLabel, &UInputLabel::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UInputLabel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputLabel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
