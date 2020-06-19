// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelHelpers/Public/VoxelColorWheel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelColorWheel() {}
// Cross Module References
	VOXELHELPERS_API UFunction* Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VoxelHelpers();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	VOXELHELPERS_API UClass* Z_Construct_UClass_UVoxelColorWheel_NoRegister();
	VOXELHELPERS_API UClass* Z_Construct_UClass_UVoxelColorWheel();
	UMG_API UClass* Z_Construct_UClass_UWidget();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics
	{
		struct _Script_VoxelHelpers_eventOnVoxelColorWheelColorChangedEvent_Parms
		{
			FLinearColor NewColor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VoxelHelpers_eventOnVoxelColorWheelColorChangedEvent_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelColorWheel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VoxelHelpers, nullptr, "OnVoxelColorWheelColorChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_VoxelHelpers_eventOnVoxelColorWheelColorChangedEvent_Parms), Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UVoxelColorWheel::StaticRegisterNativesUVoxelColorWheel()
	{
	}
	UClass* Z_Construct_UClass_UVoxelColorWheel_NoRegister()
	{
		return UVoxelColorWheel::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelColorWheel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnColorChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnColorChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelColorWheel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelHelpers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelColorWheel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelColorWheel.h" },
		{ "ModuleRelativePath", "Public/VoxelColorWheel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_OnColorChanged_MetaData[] = {
		{ "Category", "Voxel Color Wheel" },
		{ "ModuleRelativePath", "Public/VoxelColorWheel.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_OnColorChanged = { "OnColorChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelColorWheel, OnColorChanged), Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_OnColorChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_OnColorChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Voxel Color Wheel" },
		{ "ModuleRelativePath", "Public/VoxelColorWheel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelColorWheel, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelColorWheel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_OnColorChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_Color,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelColorWheel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelColorWheel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelColorWheel_Statics::ClassParams = {
		&UVoxelColorWheel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelColorWheel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelColorWheel_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelColorWheel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelColorWheel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelColorWheel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelColorWheel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelColorWheel, 3106886546);
	template<> VOXELHELPERS_API UClass* StaticClass<UVoxelColorWheel>()
	{
		return UVoxelColorWheel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelColorWheel(Z_Construct_UClass_UVoxelColorWheel, &UVoxelColorWheel::StaticClass, TEXT("/Script/VoxelHelpers"), TEXT("UVoxelColorWheel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelColorWheel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
