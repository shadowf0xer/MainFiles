// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaFogOfWar/Public/VaFogAgentComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaFogAgentComponent() {}
// Cross Module References
	VAFOGOFWAR_API UClass* Z_Construct_UClass_UVaFogAgentComponent_NoRegister();
	VAFOGOFWAR_API UClass* Z_Construct_UClass_UVaFogAgentComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_VaFogOfWar();
	VAFOGOFWAR_API UEnum* Z_Construct_UEnum_VaFogOfWar_EVaFogHeightLevel();
	VAFOGOFWAR_API UEnum* Z_Construct_UEnum_VaFogOfWar_EVaFogRadiusStrategy();
	VAFOGOFWAR_API UEnum* Z_Construct_UEnum_VaFogOfWar_EVaFogLayerChannel();
// End Cross Module References
	DEFINE_FUNCTION(UVaFogAgentComponent::execSetHeightLevel)
	{
		P_GET_ENUM(EVaFogHeightLevel,Z_Param_NewHeightLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeightLevel(EVaFogHeightLevel(Z_Param_NewHeightLevel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaFogAgentComponent::execSetVisionRadius)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewVisionRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisionRadius(Z_Param_NewVisionRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaFogAgentComponent::execIsAgentEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAgentEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaFogAgentComponent::execDisableAgent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableAgent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaFogAgentComponent::execEnableAgent)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableAgent(Z_Param_bEnable);
		P_NATIVE_END;
	}
	void UVaFogAgentComponent::StaticRegisterNativesUVaFogAgentComponent()
	{
		UClass* Class = UVaFogAgentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableAgent", &UVaFogAgentComponent::execDisableAgent },
			{ "EnableAgent", &UVaFogAgentComponent::execEnableAgent },
			{ "IsAgentEnabled", &UVaFogAgentComponent::execIsAgentEnabled },
			{ "SetHeightLevel", &UVaFogAgentComponent::execSetHeightLevel },
			{ "SetVisionRadius", &UVaFogAgentComponent::execSetVisionRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVaFogAgentComponent_DisableAgent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaFogAgentComponent_DisableAgent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaFog|Agent" },
		{ "Comment", "/** Set agent disabled */" },
		{ "ModuleRelativePath", "Public/VaFogAgentComponent.h" },
		{ "ToolTip", "Set agent disabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaFogAgentComponent_DisableAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaFogAgentComponent, nullptr, "DisableAgent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaFogAgentComponent_DisableAgent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaFogAgentComponent_DisableAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaFogAgentComponent_DisableAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaFogAgentComponent_DisableAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaFogAgentComponent_EnableAgent_Statics
	{
		struct VaFogAgentComponent_eventEnableAgent_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVaFogAgentComponent_EnableAgent_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((VaFogAgentComponent_eventEnableAgent_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaFogAgentComponent_EnableAgent_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaFogAgentComponent_eventEnableAgent_Parms), &Z_Construct_UFunction_UVaFogAgentComponent_EnableAgent_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaFogAgentComponent_EnableAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaFogAgentComponent_EnableAgent_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaFogAgentComponent_EnableAgent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaFog|Agent" },
		{ "Comment", "/** Set agent enabled (or disable it) */" },
		{ "CPP_Default_bEnable", "true" },
		{ "ModuleRelativePath", "Public/VaFogAgentComponent.h" },
		{ "ToolTip", "Set agent enabled (or disable it)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaFogAgentComponent_EnableAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaFogAgentComponent, nullptr, "EnableAgent", nullptr, nullptr, sizeof(VaFogAgentComponent_eventEnableAgent_Parms), Z_Construct_UFunction_UVaFogAgentComponent_EnableAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaFogAgentComponent_EnableAgent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaFogAgentComponent_EnableAgent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaFogAgentComponent_EnableAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaFogAgentComponent_EnableAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaFogAgentComponent_EnableAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaFogAgentComponent_IsAgentEnabled_Statics
	{
		struct VaFogAgentComponent_eventIsAgentEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVaFogAgentComponent_IsAgentEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaFogAgentComponent_eventIsAgentEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaFogAgentComponent_IsAgentEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaFogAgentComponent_eventIsAgentEnabled_Parms), &Z_Construct_UFunction_UVaFogAgentComponent_IsAgentEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaFogAgentComponent_IsAgentEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaFogAgentComponent_IsAgentEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaFogAgentComponent_IsAgentEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaFog|Agent" },
		{ "Comment", "/** Check agent status */" },
		{ "ModuleRelativePath", "Public/VaFogAgentComponent.h" },
		{ "ToolTip", "Check agent status" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaFogAgentComponent_IsAgentEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaFogAgentComponent, nullptr, "IsAgentEnabled", nullptr, nullptr, sizeof(VaFogAgentComponent_eventIsAgentEnabled_Parms), Z_Construct_UFunction_UVaFogAgentComponent_IsAgentEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaFogAgentComponent_IsAgentEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaFogAgentComponent_IsAgentEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaFogAgentComponent_IsAgentEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaFogAgentComponent_IsAgentEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaFogAgentComponent_IsAgentEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaFogAgentComponent_SetHeightLevel_Statics
	{
		struct VaFogAgentComponent_eventSetHeightLevel_Parms
		{
			EVaFogHeightLevel NewHeightLevel;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewHeightLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewHeightLevel_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaFogAgentComponent_SetHeightLevel_Statics::NewProp_NewHeightLevel = { "NewHeightLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaFogAgentComponent_eventSetHeightLevel_Parms, NewHeightLevel), Z_Construct_UEnum_VaFogOfWar_EVaFogHeightLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaFogAgentComponent_SetHeightLevel_Statics::NewProp_NewHeightLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaFogAgentComponent_SetHeightLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaFogAgentComponent_SetHeightLevel_Statics::NewProp_NewHeightLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaFogAgentComponent_SetHeightLevel_Statics::NewProp_NewHeightLevel_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaFogAgentComponent_SetHeightLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaFog|Agent" },
		{ "Comment", "/** Set agent new height level */" },
		{ "ModuleRelativePath", "Public/VaFogAgentComponent.h" },
		{ "ToolTip", "Set agent new height level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaFogAgentComponent_SetHeightLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaFogAgentComponent, nullptr, "SetHeightLevel", nullptr, nullptr, sizeof(VaFogAgentComponent_eventSetHeightLevel_Parms), Z_Construct_UFunction_UVaFogAgentComponent_SetHeightLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaFogAgentComponent_SetHeightLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaFogAgentComponent_SetHeightLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaFogAgentComponent_SetHeightLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaFogAgentComponent_SetHeightLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaFogAgentComponent_SetHeightLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaFogAgentComponent_SetVisionRadius_Statics
	{
		struct VaFogAgentComponent_eventSetVisionRadius_Parms
		{
			int32 NewVisionRadius;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewVisionRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVaFogAgentComponent_SetVisionRadius_Statics::NewProp_NewVisionRadius = { "NewVisionRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaFogAgentComponent_eventSetVisionRadius_Parms, NewVisionRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaFogAgentComponent_SetVisionRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaFogAgentComponent_SetVisionRadius_Statics::NewProp_NewVisionRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaFogAgentComponent_SetVisionRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaFog|Agent" },
		{ "Comment", "/** Set agent new vision radius */" },
		{ "ModuleRelativePath", "Public/VaFogAgentComponent.h" },
		{ "ToolTip", "Set agent new vision radius" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaFogAgentComponent_SetVisionRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaFogAgentComponent, nullptr, "SetVisionRadius", nullptr, nullptr, sizeof(VaFogAgentComponent_eventSetVisionRadius_Parms), Z_Construct_UFunction_UVaFogAgentComponent_SetVisionRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaFogAgentComponent_SetVisionRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVaFogAgentComponent_SetVisionRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaFogAgentComponent_SetVisionRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVaFogAgentComponent_SetVisionRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVaFogAgentComponent_SetVisionRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVaFogAgentComponent_NoRegister()
	{
		return UVaFogAgentComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVaFogAgentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HeightLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HeightLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VisionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RadiusStrategy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RadiusStrategy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TargetChannels;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetChannels_ElementProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetChannels_ElementProp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAgentEnabled_MetaData[];
#endif
		static void NewProp_bAgentEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAgentEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaFogAgentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VaFogOfWar,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVaFogAgentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaFogAgentComponent_DisableAgent, "DisableAgent" }, // 1076003622
		{ &Z_Construct_UFunction_UVaFogAgentComponent_EnableAgent, "EnableAgent" }, // 4215053901
		{ &Z_Construct_UFunction_UVaFogAgentComponent_IsAgentEnabled, "IsAgentEnabled" }, // 1674479565
		{ &Z_Construct_UFunction_UVaFogAgentComponent_SetHeightLevel, "SetHeightLevel" }, // 821058806
		{ &Z_Construct_UFunction_UVaFogAgentComponent_SetVisionRadius, "SetVisionRadius" }, // 992794275
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaFogAgentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "VAFogOfWar" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VaFogAgentComponent.h" },
		{ "ModuleRelativePath", "Public/VaFogAgentComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_HeightLevel_MetaData[] = {
		{ "Category", "VaFog Agent" },
		{ "Comment", "/** Height level where agent is standing */" },
		{ "ModuleRelativePath", "Public/VaFogAgentComponent.h" },
		{ "ToolTip", "Height level where agent is standing" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_HeightLevel = { "HeightLevel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaFogAgentComponent, HeightLevel), Z_Construct_UEnum_VaFogOfWar_EVaFogHeightLevel, METADATA_PARAMS(Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_HeightLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_HeightLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_HeightLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_VisionRadius_MetaData[] = {
		{ "Category", "VaFog Agent" },
		{ "Comment", "/** Agent vision radius in cm (set 0 to use single cell vision) */" },
		{ "ModuleRelativePath", "Public/VaFogAgentComponent.h" },
		{ "ToolTip", "Agent vision radius in cm (set 0 to use single cell vision)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_VisionRadius = { "VisionRadius", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaFogAgentComponent, VisionRadius), METADATA_PARAMS(Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_VisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_VisionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_RadiusStrategy_MetaData[] = {
		{ "Category", "VaFog Agent" },
		{ "Comment", "/** Radius strategy used for fog interaction */" },
		{ "ModuleRelativePath", "Public/VaFogAgentComponent.h" },
		{ "ToolTip", "Radius strategy used for fog interaction" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_RadiusStrategy = { "RadiusStrategy", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaFogAgentComponent, RadiusStrategy), Z_Construct_UEnum_VaFogOfWar_EVaFogRadiusStrategy, METADATA_PARAMS(Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_RadiusStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_RadiusStrategy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_RadiusStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_TargetChannels_MetaData[] = {
		{ "Category", "VaFog Agent" },
		{ "Comment", "/** Fog layer we're scouting by the agent */" },
		{ "ModuleRelativePath", "Public/VaFogAgentComponent.h" },
		{ "ToolTip", "Fog layer we're scouting by the agent" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_TargetChannels = { "TargetChannels", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaFogAgentComponent, TargetChannels), METADATA_PARAMS(Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_TargetChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_TargetChannels_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_TargetChannels_ElementProp = { "TargetChannels", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_VaFogOfWar_EVaFogLayerChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_TargetChannels_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_bAgentEnabled_MetaData[] = {
		{ "Category", "VaFog Agent" },
		{ "Comment", "/** Is agent is enabled by default? */" },
		{ "ModuleRelativePath", "Public/VaFogAgentComponent.h" },
		{ "ToolTip", "Is agent is enabled by default?" },
	};
#endif
	void Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_bAgentEnabled_SetBit(void* Obj)
	{
		((UVaFogAgentComponent*)Obj)->bAgentEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_bAgentEnabled = { "bAgentEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVaFogAgentComponent), &Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_bAgentEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_bAgentEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_bAgentEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaFogAgentComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_HeightLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_HeightLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_VisionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_RadiusStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_RadiusStrategy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_TargetChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_TargetChannels_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_TargetChannels_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaFogAgentComponent_Statics::NewProp_bAgentEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaFogAgentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaFogAgentComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVaFogAgentComponent_Statics::ClassParams = {
		&UVaFogAgentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVaFogAgentComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVaFogAgentComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVaFogAgentComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVaFogAgentComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVaFogAgentComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVaFogAgentComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaFogAgentComponent, 2387612837);
	template<> VAFOGOFWAR_API UClass* StaticClass<UVaFogAgentComponent>()
	{
		return UVaFogAgentComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaFogAgentComponent(Z_Construct_UClass_UVaFogAgentComponent, &UVaFogAgentComponent::StaticClass, TEXT("/Script/VaFogOfWar"), TEXT("UVaFogAgentComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaFogAgentComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
