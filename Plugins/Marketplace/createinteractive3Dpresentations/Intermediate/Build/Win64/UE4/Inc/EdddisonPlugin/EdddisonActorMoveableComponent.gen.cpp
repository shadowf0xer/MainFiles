// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdddisonPlugin/Private/Actors/EdddisonActorMoveableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdddisonActorMoveableComponent() {}
// Cross Module References
	EDDDISONPLUGIN_API UClass* Z_Construct_UClass_UEdddisonActorMoveableComponent_NoRegister();
	EDDDISONPLUGIN_API UClass* Z_Construct_UClass_UEdddisonActorMoveableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_EdddisonPlugin();
// End Cross Module References
	static FName NAME_UEdddisonActorMoveableComponent_VisiblityChangedToEvent = FName(TEXT("VisiblityChangedToEvent"));
	void UEdddisonActorMoveableComponent::VisiblityChangedToEvent(bool visible)
	{
		EdddisonActorMoveableComponent_eventVisiblityChangedToEvent_Parms Parms;
		Parms.visible=visible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UEdddisonActorMoveableComponent_VisiblityChangedToEvent),&Parms);
	}
	void UEdddisonActorMoveableComponent::StaticRegisterNativesUEdddisonActorMoveableComponent()
	{
	}
	struct Z_Construct_UFunction_UEdddisonActorMoveableComponent_VisiblityChangedToEvent_Statics
	{
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEdddisonActorMoveableComponent_VisiblityChangedToEvent_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((EdddisonActorMoveableComponent_eventVisiblityChangedToEvent_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEdddisonActorMoveableComponent_VisiblityChangedToEvent_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EdddisonActorMoveableComponent_eventVisiblityChangedToEvent_Parms), &Z_Construct_UFunction_UEdddisonActorMoveableComponent_VisiblityChangedToEvent_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEdddisonActorMoveableComponent_VisiblityChangedToEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEdddisonActorMoveableComponent_VisiblityChangedToEvent_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEdddisonActorMoveableComponent_VisiblityChangedToEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "edddison plugin" },
		{ "DisplayName", "on visible change of a 3d object" },
		{ "ModuleRelativePath", "Private/Actors/EdddisonActorMoveableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEdddisonActorMoveableComponent_VisiblityChangedToEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEdddisonActorMoveableComponent, nullptr, "VisiblityChangedToEvent", nullptr, nullptr, sizeof(EdddisonActorMoveableComponent_eventVisiblityChangedToEvent_Parms), Z_Construct_UFunction_UEdddisonActorMoveableComponent_VisiblityChangedToEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEdddisonActorMoveableComponent_VisiblityChangedToEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEdddisonActorMoveableComponent_VisiblityChangedToEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEdddisonActorMoveableComponent_VisiblityChangedToEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEdddisonActorMoveableComponent_VisiblityChangedToEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEdddisonActorMoveableComponent_VisiblityChangedToEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEdddisonActorMoveableComponent_NoRegister()
	{
		return UEdddisonActorMoveableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEdddisonActorMoveableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdddisonActorMoveableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EdddisonPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEdddisonActorMoveableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEdddisonActorMoveableComponent_VisiblityChangedToEvent, "VisiblityChangedToEvent" }, // 2568338308
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdddisonActorMoveableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Actors/EdddisonActorMoveableComponent.h" },
		{ "ModuleRelativePath", "Private/Actors/EdddisonActorMoveableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdddisonActorMoveableComponent_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "edddison" },
		{ "ModuleRelativePath", "Private/Actors/EdddisonActorMoveableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdddisonActorMoveableComponent_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdddisonActorMoveableComponent, ID), METADATA_PARAMS(Z_Construct_UClass_UEdddisonActorMoveableComponent_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdddisonActorMoveableComponent_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdddisonActorMoveableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdddisonActorMoveableComponent_Statics::NewProp_ID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdddisonActorMoveableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdddisonActorMoveableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdddisonActorMoveableComponent_Statics::ClassParams = {
		&UEdddisonActorMoveableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEdddisonActorMoveableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdddisonActorMoveableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEdddisonActorMoveableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdddisonActorMoveableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdddisonActorMoveableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdddisonActorMoveableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdddisonActorMoveableComponent, 837668840);
	template<> EDDDISONPLUGIN_API UClass* StaticClass<UEdddisonActorMoveableComponent>()
	{
		return UEdddisonActorMoveableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdddisonActorMoveableComponent(Z_Construct_UClass_UEdddisonActorMoveableComponent, &UEdddisonActorMoveableComponent::StaticClass, TEXT("/Script/EdddisonPlugin"), TEXT("UEdddisonActorMoveableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdddisonActorMoveableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
