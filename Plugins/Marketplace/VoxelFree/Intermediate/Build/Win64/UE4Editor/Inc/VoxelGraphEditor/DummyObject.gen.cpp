// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphEditor/Private/DummyObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDummyObject() {}
// Cross Module References
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_NoRegister();
	VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
// End Cross Module References
	void UDEPRECATED_GraphEditorDummyObject::StaticRegisterNativesUDEPRECATED_GraphEditorDummyObject()
	{
	}
	UClass* Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_NoRegister()
	{
		return UDEPRECATED_GraphEditorDummyObject::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Random class to make UHT happy\n" },
		{ "IncludePath", "DummyObject.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/DummyObject.h" },
		{ "ToolTip", "Random class to make UHT happy" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_GraphEditorDummyObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::ClassParams = {
		&UDEPRECATED_GraphEditorDummyObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x060002A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_GraphEditorDummyObject, 3118905336);
	template<> VOXELGRAPHEDITOR_API UClass* StaticClass<UDEPRECATED_GraphEditorDummyObject>()
	{
		return UDEPRECATED_GraphEditorDummyObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_GraphEditorDummyObject(Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject, &UDEPRECATED_GraphEditorDummyObject::StaticClass, TEXT("/Script/VoxelGraphEditor"), TEXT("UDEPRECATED_GraphEditorDummyObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_GraphEditorDummyObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
