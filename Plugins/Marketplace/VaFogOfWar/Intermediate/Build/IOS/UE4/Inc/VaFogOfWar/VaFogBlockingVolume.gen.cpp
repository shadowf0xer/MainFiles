// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaFogOfWar/Public/VaFogBlockingVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaFogBlockingVolume() {}
// Cross Module References
	VAFOGOFWAR_API UClass* Z_Construct_UClass_AVaFogBlockingVolume_NoRegister();
	VAFOGOFWAR_API UClass* Z_Construct_UClass_AVaFogBlockingVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_VaFogOfWar();
	VAFOGOFWAR_API UEnum* Z_Construct_UEnum_VaFogOfWar_EVaFogHeightLevel();
	VAFOGOFWAR_API UClass* Z_Construct_UClass_AVaFogLayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	void AVaFogBlockingVolume::StaticRegisterNativesAVaFogBlockingVolume()
	{
	}
	UClass* Z_Construct_UClass_AVaFogBlockingVolume_NoRegister()
	{
		return AVaFogBlockingVolume::StaticClass();
	}
	struct Z_Construct_UClass_AVaFogBlockingVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugVolume_MetaData[];
#endif
		static void NewProp_bDebugVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HeightLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HeightLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Layer;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVaFogBlockingVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_VaFogOfWar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogBlockingVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "VaFogBlockingVolume.h" },
		{ "ModuleRelativePath", "Public/VaFogBlockingVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_bDebugVolume_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Debug fog layer affect */" },
		{ "ModuleRelativePath", "Public/VaFogBlockingVolume.h" },
		{ "ToolTip", "Debug fog layer affect" },
	};
#endif
	void Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_bDebugVolume_SetBit(void* Obj)
	{
		((AVaFogBlockingVolume*)Obj)->bDebugVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_bDebugVolume = { "bDebugVolume", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVaFogBlockingVolume), &Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_bDebugVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_bDebugVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_bDebugVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "VaFog Blocking Volume" },
		{ "Comment", "/** Volumes will affect terrain level being sorted by Priority */" },
		{ "ModuleRelativePath", "Public/VaFogBlockingVolume.h" },
		{ "ToolTip", "Volumes will affect terrain level being sorted by Priority" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVaFogBlockingVolume, Priority), METADATA_PARAMS(Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_HeightLevel_MetaData[] = {
		{ "Category", "VaFog Blocking Volume" },
		{ "Comment", "/** Height level where agent is standing */" },
		{ "ModuleRelativePath", "Public/VaFogBlockingVolume.h" },
		{ "ToolTip", "Height level where agent is standing" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_HeightLevel = { "HeightLevel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVaFogBlockingVolume, HeightLevel), Z_Construct_UEnum_VaFogOfWar_EVaFogHeightLevel, METADATA_PARAMS(Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_HeightLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_HeightLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_HeightLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_Layer_MetaData[] = {
		{ "Category", "VaFog Blocking Volume" },
		{ "Comment", "/** Target layer to paint on */" },
		{ "ModuleRelativePath", "Public/VaFogBlockingVolume.h" },
		{ "ToolTip", "Target layer to paint on" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVaFogBlockingVolume, Layer), Z_Construct_UClass_AVaFogLayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_Layer_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VaFogBlockingVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVaFogBlockingVolume, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVaFogBlockingVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_bDebugVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_HeightLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_HeightLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_Layer,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogBlockingVolume_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVaFogBlockingVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVaFogBlockingVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVaFogBlockingVolume_Statics::ClassParams = {
		&AVaFogBlockingVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVaFogBlockingVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogBlockingVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVaFogBlockingVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogBlockingVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVaFogBlockingVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVaFogBlockingVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVaFogBlockingVolume, 980120259);
	template<> VAFOGOFWAR_API UClass* StaticClass<AVaFogBlockingVolume>()
	{
		return AVaFogBlockingVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVaFogBlockingVolume(Z_Construct_UClass_AVaFogBlockingVolume, &AVaFogBlockingVolume::StaticClass, TEXT("/Script/VaFogOfWar"), TEXT("AVaFogBlockingVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVaFogBlockingVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
