// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/VoxelWorldEditorControls.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelWorldEditorControls() {}
// Cross Module References
	VOXELEDITOR_API UClass* Z_Construct_UClass_AVoxelWorldEditorControls_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_AVoxelWorldEditorControls();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInvokerEditorComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInvokerEditorComponent();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSimpleInvokerComponent();
// End Cross Module References
	void AVoxelWorldEditorControls::StaticRegisterNativesAVoxelWorldEditorControls()
	{
	}
	UClass* Z_Construct_UClass_AVoxelWorldEditorControls_NoRegister()
	{
		return AVoxelWorldEditorControls::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelWorldEditorControls_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invoker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Invoker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideLocation_MetaData[];
#endif
		static void NewProp_bOverrideLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelWorldEditorControls_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelWorldEditorControls_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelWorldEditorControls.h" },
		{ "ModuleRelativePath", "Private/VoxelWorldEditorControls.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_Invoker_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VoxelWorldEditorControls.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_Invoker = { "Invoker", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelWorldEditorControls, Invoker), Z_Construct_UClass_UVoxelInvokerEditorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_Invoker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_Invoker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_LocationOverride_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelWorldEditorControls.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_LocationOverride = { "LocationOverride", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelWorldEditorControls, LocationOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_LocationOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_LocationOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_bOverrideLocation_MetaData[] = {
		{ "Comment", "//~ End AActor interface\n" },
		{ "ModuleRelativePath", "Private/VoxelWorldEditorControls.h" },
	};
#endif
	void Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_bOverrideLocation_SetBit(void* Obj)
	{
		((AVoxelWorldEditorControls*)Obj)->bOverrideLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_bOverrideLocation = { "bOverrideLocation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVoxelWorldEditorControls), &Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_bOverrideLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_bOverrideLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_bOverrideLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelWorldEditorControls_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_Invoker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_LocationOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_bOverrideLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelWorldEditorControls_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelWorldEditorControls>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoxelWorldEditorControls_Statics::ClassParams = {
		&AVoxelWorldEditorControls::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxelWorldEditorControls_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorldEditorControls_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelWorldEditorControls_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorldEditorControls_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelWorldEditorControls()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoxelWorldEditorControls_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelWorldEditorControls, 3344152566);
	template<> VOXELEDITOR_API UClass* StaticClass<AVoxelWorldEditorControls>()
	{
		return AVoxelWorldEditorControls::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelWorldEditorControls(Z_Construct_UClass_AVoxelWorldEditorControls, &AVoxelWorldEditorControls::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("AVoxelWorldEditorControls"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelWorldEditorControls);
	void UVoxelInvokerEditorComponent::StaticRegisterNativesUVoxelInvokerEditorComponent()
	{
	}
	UClass* Z_Construct_UClass_UVoxelInvokerEditorComponent_NoRegister()
	{
		return UVoxelInvokerEditorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelInvokerEditorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelInvokerEditorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelSimpleInvokerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInvokerEditorComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VoxelWorldEditorControls.h" },
		{ "ModuleRelativePath", "Private/VoxelWorldEditorControls.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelInvokerEditorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInvokerEditorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInvokerEditorComponent_Statics::ClassParams = {
		&UVoxelInvokerEditorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelInvokerEditorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerEditorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelInvokerEditorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelInvokerEditorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelInvokerEditorComponent, 2784240496);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelInvokerEditorComponent>()
	{
		return UVoxelInvokerEditorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelInvokerEditorComponent(Z_Construct_UClass_UVoxelInvokerEditorComponent, &UVoxelInvokerEditorComponent::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelInvokerEditorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInvokerEditorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
