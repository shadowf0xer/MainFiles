// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Private/Nodes/K2Node_Action.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_Action() {}
// Cross Module References
	ACTIONSEDITOR_API UClass* Z_Construct_UClass_UK2Node_Action_NoRegister();
	ACTIONSEDITOR_API UClass* Z_Construct_UClass_UK2Node_Action();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_ActionsEditor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ACTIONSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FActionProperties();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalPinFromProperty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UK2Node_Action::StaticRegisterNativesUK2Node_Action()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_Action_NoRegister()
	{
		return UK2Node_Action::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_Action_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowPinForProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShowPinForProperties;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShowPinForProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowClass_MetaData[];
#endif
		static void NewProp_bShowClass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActionClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_Action_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Action_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Nodes/K2Node_Action.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Nodes/K2Node_Action.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Action_Statics::NewProp_ActionBlueprint_MetaData[] = {
		{ "Comment", "/** Blueprint that is binded OnCompile */" },
		{ "ModuleRelativePath", "Private/Nodes/K2Node_Action.h" },
		{ "ToolTip", "Blueprint that is binded OnCompile" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_Action_Statics::NewProp_ActionBlueprint = { "ActionBlueprint", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Action, ActionBlueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Action_Statics::NewProp_ActionBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Action_Statics::NewProp_ActionBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Action_Statics::NewProp_CurrentProperties_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/K2Node_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_Action_Statics::NewProp_CurrentProperties = { "CurrentProperties", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Action, CurrentProperties), Z_Construct_UScriptStruct_FActionProperties, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Action_Statics::NewProp_CurrentProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Action_Statics::NewProp_CurrentProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Action_Statics::NewProp_ShowPinForProperties_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "Comment", "/** Output pin visibility control */" },
		{ "ModuleRelativePath", "Private/Nodes/K2Node_Action.h" },
		{ "ToolTip", "Output pin visibility control" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_Action_Statics::NewProp_ShowPinForProperties = { "ShowPinForProperties", nullptr, (EPropertyFlags)0x0020080000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Action, ShowPinForProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Action_Statics::NewProp_ShowPinForProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Action_Statics::NewProp_ShowPinForProperties_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_Action_Statics::NewProp_ShowPinForProperties_Inner = { "ShowPinForProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOptionalPinFromProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Action_Statics::NewProp_bShowClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/K2Node_Action.h" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Action_Statics::NewProp_bShowClass_SetBit(void* Obj)
	{
		((UK2Node_Action*)Obj)->bShowClass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Action_Statics::NewProp_bShowClass = { "bShowClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK2Node_Action), &Z_Construct_UClass_UK2Node_Action_Statics::NewProp_bShowClass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Action_Statics::NewProp_bShowClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Action_Statics::NewProp_bShowClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Action_Statics::NewProp_ActionClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/K2Node_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_Action_Statics::NewProp_ActionClass = { "ActionClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Action, ActionClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Action_Statics::NewProp_ActionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Action_Statics::NewProp_ActionClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_Action_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Action_Statics::NewProp_ActionBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Action_Statics::NewProp_CurrentProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Action_Statics::NewProp_ShowPinForProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Action_Statics::NewProp_ShowPinForProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Action_Statics::NewProp_bShowClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Action_Statics::NewProp_ActionClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_Action_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_Action>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_Action_Statics::ClassParams = {
		&UK2Node_Action::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_Action_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Action_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_Action_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_Action_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_Action()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_Action_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_Action, 2513327483);
	template<> ACTIONSEDITOR_API UClass* StaticClass<UK2Node_Action>()
	{
		return UK2Node_Action::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_Action(Z_Construct_UClass_UK2Node_Action, &UK2Node_Action::StaticClass, TEXT("/Script/ActionsEditor"), TEXT("UK2Node_Action"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_Action);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
