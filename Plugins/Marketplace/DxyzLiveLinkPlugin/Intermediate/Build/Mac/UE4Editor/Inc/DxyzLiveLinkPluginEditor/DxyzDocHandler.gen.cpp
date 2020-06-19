// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DxyzLiveLinkPluginEditor/Private/DxyzDocHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDxyzDocHandler() {}
// Cross Module References
	DXYZLIVELINKPLUGINEDITOR_API UClass* Z_Construct_UClass_UDxyzDocHandler_NoRegister();
	DXYZLIVELINKPLUGINEDITOR_API UClass* Z_Construct_UClass_UDxyzDocHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DxyzLiveLinkPluginEditor();
// End Cross Module References
	void UDxyzDocHandler::StaticRegisterNativesUDxyzDocHandler()
	{
	}
	UClass* Z_Construct_UClass_UDxyzDocHandler_NoRegister()
	{
		return UDxyzDocHandler::StaticClass();
	}
	struct Z_Construct_UClass_UDxyzDocHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowDocPopup_MetaData[];
#endif
		static void NewProp_ShowDocPopup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowDocPopup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDxyzDocHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPluginEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzDocHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DxyzDocHandler.h" },
		{ "ModuleRelativePath", "Private/DxyzDocHandler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzDocHandler_Statics::NewProp_ShowDocPopup_MetaData[] = {
		{ "ModuleRelativePath", "Private/DxyzDocHandler.h" },
	};
#endif
	void Z_Construct_UClass_UDxyzDocHandler_Statics::NewProp_ShowDocPopup_SetBit(void* Obj)
	{
		((UDxyzDocHandler*)Obj)->ShowDocPopup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDxyzDocHandler_Statics::NewProp_ShowDocPopup = { "ShowDocPopup", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDxyzDocHandler), &Z_Construct_UClass_UDxyzDocHandler_Statics::NewProp_ShowDocPopup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDxyzDocHandler_Statics::NewProp_ShowDocPopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzDocHandler_Statics::NewProp_ShowDocPopup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDxyzDocHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzDocHandler_Statics::NewProp_ShowDocPopup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDxyzDocHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDxyzDocHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDxyzDocHandler_Statics::ClassParams = {
		&UDxyzDocHandler::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDxyzDocHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzDocHandler_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDxyzDocHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzDocHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDxyzDocHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDxyzDocHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDxyzDocHandler, 294661230);
	template<> DXYZLIVELINKPLUGINEDITOR_API UClass* StaticClass<UDxyzDocHandler>()
	{
		return UDxyzDocHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDxyzDocHandler(Z_Construct_UClass_UDxyzDocHandler, &UDxyzDocHandler::StaticClass, TEXT("/Script/DxyzLiveLinkPluginEditor"), TEXT("UDxyzDocHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDxyzDocHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
