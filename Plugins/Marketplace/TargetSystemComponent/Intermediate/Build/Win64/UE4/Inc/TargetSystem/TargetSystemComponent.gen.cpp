// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetSystem/Public/TargetSystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetSystemComponent() {}
// Cross Module References
	TARGETSYSTEM_API UFunction* Z_Construct_UDelegateFunction_TargetSystem_ComponentSetRotation__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TargetSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TARGETSYSTEM_API UFunction* Z_Construct_UDelegateFunction_TargetSystem_ComponentOnTargetLockedOnOff__DelegateSignature();
	TARGETSYSTEM_API UClass* Z_Construct_UClass_UTargetSystemComponent_NoRegister();
	TARGETSYSTEM_API UClass* Z_Construct_UClass_UTargetSystemComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TargetSystem_ComponentSetRotation__DelegateSignature_Statics
	{
		struct _Script_TargetSystem_eventComponentSetRotation_Parms
		{
			AActor* TargetActor;
			FRotator ControlRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlRotation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TargetSystem_ComponentSetRotation__DelegateSignature_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TargetSystem_eventComponentSetRotation_Parms, ControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TargetSystem_ComponentSetRotation__DelegateSignature_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TargetSystem_eventComponentSetRotation_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TargetSystem_ComponentSetRotation__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TargetSystem_ComponentSetRotation__DelegateSignature_Statics::NewProp_ControlRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TargetSystem_ComponentSetRotation__DelegateSignature_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TargetSystem_ComponentSetRotation__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TargetSystem_ComponentSetRotation__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TargetSystem, nullptr, "ComponentSetRotation__DelegateSignature", nullptr, nullptr, sizeof(_Script_TargetSystem_eventComponentSetRotation_Parms), Z_Construct_UDelegateFunction_TargetSystem_ComponentSetRotation__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetSystem_ComponentSetRotation__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TargetSystem_ComponentSetRotation__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetSystem_ComponentSetRotation__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TargetSystem_ComponentSetRotation__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TargetSystem_ComponentSetRotation__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TargetSystem_ComponentOnTargetLockedOnOff__DelegateSignature_Statics
	{
		struct _Script_TargetSystem_eventComponentOnTargetLockedOnOff_Parms
		{
			AActor* TargetActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TargetSystem_ComponentOnTargetLockedOnOff__DelegateSignature_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TargetSystem_eventComponentOnTargetLockedOnOff_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TargetSystem_ComponentOnTargetLockedOnOff__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TargetSystem_ComponentOnTargetLockedOnOff__DelegateSignature_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TargetSystem_ComponentOnTargetLockedOnOff__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TargetSystem_ComponentOnTargetLockedOnOff__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TargetSystem, nullptr, "ComponentOnTargetLockedOnOff__DelegateSignature", nullptr, nullptr, sizeof(_Script_TargetSystem_eventComponentOnTargetLockedOnOff_Parms), Z_Construct_UDelegateFunction_TargetSystem_ComponentOnTargetLockedOnOff__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetSystem_ComponentOnTargetLockedOnOff__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TargetSystem_ComponentOnTargetLockedOnOff__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetSystem_ComponentOnTargetLockedOnOff__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TargetSystem_ComponentOnTargetLockedOnOff__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TargetSystem_ComponentOnTargetLockedOnOff__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTargetSystemComponent::execIsLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetSystemComponent::execGetLockedOnTargetActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetLockedOnTargetActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetSystemComponent::execTargetActorWithAxisInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TargetActorWithAxisInput(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetSystemComponent::execTargetLockOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TargetLockOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetSystemComponent::execTargetActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TargetActor();
		P_NATIVE_END;
	}
	void UTargetSystemComponent::StaticRegisterNativesUTargetSystemComponent()
	{
		UClass* Class = UTargetSystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLockedOnTargetActor", &UTargetSystemComponent::execGetLockedOnTargetActor },
			{ "IsLocked", &UTargetSystemComponent::execIsLocked },
			{ "TargetActor", &UTargetSystemComponent::execTargetActor },
			{ "TargetActorWithAxisInput", &UTargetSystemComponent::execTargetActorWithAxisInput },
			{ "TargetLockOff", &UTargetSystemComponent::execTargetLockOff },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTargetSystemComponent_GetLockedOnTargetActor_Statics
	{
		struct TargetSystemComponent_eventGetLockedOnTargetActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetSystemComponent_GetLockedOnTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetSystemComponent_eventGetLockedOnTargetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetSystemComponent_GetLockedOnTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSystemComponent_GetLockedOnTargetActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSystemComponent_GetLockedOnTargetActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target System" },
		{ "Comment", "// Returns the reference to currently targeted Actor if any\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "Returns the reference to currently targeted Actor if any" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSystemComponent_GetLockedOnTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSystemComponent, nullptr, "GetLockedOnTargetActor", nullptr, nullptr, sizeof(TargetSystemComponent_eventGetLockedOnTargetActor_Parms), Z_Construct_UFunction_UTargetSystemComponent_GetLockedOnTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSystemComponent_GetLockedOnTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSystemComponent_GetLockedOnTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSystemComponent_GetLockedOnTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSystemComponent_GetLockedOnTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSystemComponent_GetLockedOnTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetSystemComponent_IsLocked_Statics
	{
		struct TargetSystemComponent_eventIsLocked_Parms
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
	void Z_Construct_UFunction_UTargetSystemComponent_IsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TargetSystemComponent_eventIsLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetSystemComponent_IsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TargetSystemComponent_eventIsLocked_Parms), &Z_Construct_UFunction_UTargetSystemComponent_IsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetSystemComponent_IsLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSystemComponent_IsLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSystemComponent_IsLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target System" },
		{ "Comment", "// Returns true / false whether the system is targeting an actor\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "Returns true / false whether the system is targeting an actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSystemComponent_IsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSystemComponent, nullptr, "IsLocked", nullptr, nullptr, sizeof(TargetSystemComponent_eventIsLocked_Parms), Z_Construct_UFunction_UTargetSystemComponent_IsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSystemComponent_IsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSystemComponent_IsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSystemComponent_IsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSystemComponent_IsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSystemComponent_IsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetSystemComponent_TargetActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSystemComponent_TargetActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target System" },
		{ "Comment", "// Function to call to target a new actor.\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "Function to call to target a new actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSystemComponent_TargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSystemComponent, nullptr, "TargetActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSystemComponent_TargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSystemComponent_TargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSystemComponent_TargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSystemComponent_TargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetSystemComponent_TargetActorWithAxisInput_Statics
	{
		struct TargetSystemComponent_eventTargetActorWithAxisInput_Parms
		{
			float AxisValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTargetSystemComponent_TargetActorWithAxisInput_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetSystemComponent_eventTargetActorWithAxisInput_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetSystemComponent_TargetActorWithAxisInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSystemComponent_TargetActorWithAxisInput_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSystemComponent_TargetActorWithAxisInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target System" },
		{ "Comment", "/**\n\x09* Function to call to switch with X-Axis mouse / controller stick movement.\n\x09*\n\x09* @param AxisValue Pass in the float value of your Input Axis\n\x09* @param Delta This value and AxisValue are multiplied before being checked against StartRotatingThreshold\n\x09*/" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "Function to call to switch with X-Axis mouse / controller stick movement.\n\n@param AxisValue Pass in the float value of your Input Axis\n@param Delta This value and AxisValue are multiplied before being checked against StartRotatingThreshold" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSystemComponent_TargetActorWithAxisInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSystemComponent, nullptr, "TargetActorWithAxisInput", nullptr, nullptr, sizeof(TargetSystemComponent_eventTargetActorWithAxisInput_Parms), Z_Construct_UFunction_UTargetSystemComponent_TargetActorWithAxisInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSystemComponent_TargetActorWithAxisInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSystemComponent_TargetActorWithAxisInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSystemComponent_TargetActorWithAxisInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSystemComponent_TargetActorWithAxisInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSystemComponent_TargetActorWithAxisInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetSystemComponent_TargetLockOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSystemComponent_TargetLockOff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target System" },
		{ "Comment", "// Function to call to manually untarget.\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "Function to call to manually untarget." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSystemComponent_TargetLockOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSystemComponent, nullptr, "TargetLockOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSystemComponent_TargetLockOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSystemComponent_TargetLockOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSystemComponent_TargetLockOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSystemComponent_TargetLockOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTargetSystemComponent_NoRegister()
	{
		return UTargetSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTargetSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedOnTargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockedOnTargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLockedOnWidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetLockedOnWidgetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTargetSetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetSetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTargetLockedOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetLockedOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTargetLockedOff_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetLockedOff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickyRotationThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickyRotationThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableStickyTarget_MetaData[];
#endif
		static void NewProp_bEnableStickyTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableStickyTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchDistanceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchDistanceOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchDistanceCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchDistanceCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdjustPitchBasedOnDistanceToTarget_MetaData[];
#endif
		static void NewProp_bAdjustPitchBasedOnDistanceToTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdjustPitchBasedOnDistanceToTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedOnWidgetRelativeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LockedOnWidgetRelativeLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedOnWidgetParentSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LockedOnWidgetParentSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedOnWidgetDrawSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LockedOnWidgetDrawSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedOnWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LockedOnWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldDrawLockedOnWidget_MetaData[];
#endif
		static void NewProp_bShouldDrawLockedOnWidget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldDrawLockedOnWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRotatingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartRotatingThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakLineOfSightDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BreakLineOfSightDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldControlRotation_MetaData[];
#endif
		static void NewProp_bShouldControlRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldControlRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetableActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TargetableActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumDistanceToEnable_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumDistanceToEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTargetSystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetSystemComponent_GetLockedOnTargetActor, "GetLockedOnTargetActor" }, // 2042301554
		{ &Z_Construct_UFunction_UTargetSystemComponent_IsLocked, "IsLocked" }, // 1480532120
		{ &Z_Construct_UFunction_UTargetSystemComponent_TargetActor, "TargetActor" }, // 388430670
		{ &Z_Construct_UFunction_UTargetSystemComponent_TargetActorWithAxisInput, "TargetActorWithAxisInput" }, // 2898437133
		{ &Z_Construct_UFunction_UTargetSystemComponent_TargetLockOff, "TargetLockOff" }, // 3270944506
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TargetSystemComponent.h" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnTargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnTargetActor = { "LockedOnTargetActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, LockedOnTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnTargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnTargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_TargetLockedOnWidgetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_TargetLockedOnWidgetComponent = { "TargetLockedOnWidgetComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, TargetLockedOnWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_TargetLockedOnWidgetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_TargetLockedOnWidgetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_CharacterReference_MetaData[] = {
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_CharacterReference = { "CharacterReference", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, CharacterReference), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_CharacterReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_CharacterReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_OnTargetSetRotation_MetaData[] = {
		{ "Category", "Target System" },
		{ "Comment", "// Setup the control rotation on Tick when a target is locked on.\n//\n// If not implemented, will fallback to default implementation.\n// If this event is implemented, it lets you control the rotation of the character.\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "Setup the control rotation on Tick when a target is locked on.\n\nIf not implemented, will fallback to default implementation.\nIf this event is implemented, it lets you control the rotation of the character." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_OnTargetSetRotation = { "OnTargetSetRotation", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, OnTargetSetRotation), Z_Construct_UDelegateFunction_TargetSystem_ComponentSetRotation__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_OnTargetSetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_OnTargetSetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_OnTargetLockedOn_MetaData[] = {
		{ "Category", "Target System" },
		{ "Comment", "// Called when a target is locked on\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "Called when a target is locked on" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_OnTargetLockedOn = { "OnTargetLockedOn", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, OnTargetLockedOn), Z_Construct_UDelegateFunction_TargetSystem_ComponentOnTargetLockedOnOff__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_OnTargetLockedOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_OnTargetLockedOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_OnTargetLockedOff_MetaData[] = {
		{ "Category", "Target System" },
		{ "Comment", "// Called when a target is locked off, either if it is out of reach (based on MinimumDistanceToEnable) or behind an Object.\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "Called when a target is locked off, either if it is out of reach (based on MinimumDistanceToEnable) or behind an Object." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_OnTargetLockedOff = { "OnTargetLockedOff", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, OnTargetLockedOff), Z_Construct_UDelegateFunction_TargetSystem_ComponentOnTargetLockedOnOff__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_OnTargetLockedOff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_OnTargetLockedOff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_StickyRotationThreshold_MetaData[] = {
		{ "Category", "Target System|Sticky Feeling on Target Switch" },
		{ "Comment", "// Lower this value is, easier it will be to switch new target on right or left.\n//\n// This is similar to StartRotatingThreshold, but you should set this to a much higher value.\n//\n// Only used when Sticky Target is enabled.\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "Lower this value is, easier it will be to switch new target on right or left.\n\nThis is similar to StartRotatingThreshold, but you should set this to a much higher value.\n\nOnly used when Sticky Target is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_StickyRotationThreshold = { "StickyRotationThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, StickyRotationThreshold), METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_StickyRotationThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_StickyRotationThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_AxisMultiplier_MetaData[] = {
		{ "Category", "Target System|Sticky Feeling on Target Switch" },
		{ "Comment", "// This value gets multiplied to the AxisValue to check against StickyRotationThreshold.\n//\n// Only used when Sticky Target is enabled.\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "This value gets multiplied to the AxisValue to check against StickyRotationThreshold.\n\nOnly used when Sticky Target is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_AxisMultiplier = { "AxisMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, AxisMultiplier), METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_AxisMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_AxisMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bEnableStickyTarget_MetaData[] = {
		{ "Category", "Target System|Sticky Feeling on Target Switch" },
		{ "Comment", "// Set it to true / false whether you want a sticky feeling when switching target\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "Set it to true / false whether you want a sticky feeling when switching target" },
	};
#endif
	void Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bEnableStickyTarget_SetBit(void* Obj)
	{
		((UTargetSystemComponent*)Obj)->bEnableStickyTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bEnableStickyTarget = { "bEnableStickyTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTargetSystemComponent), &Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bEnableStickyTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bEnableStickyTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bEnableStickyTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchMax_MetaData[] = {
		{ "Category", "Target System|Pitch Offset" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchMax = { "PitchMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, PitchMax), METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchMin_MetaData[] = {
		{ "Category", "Target System|Pitch Offset" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchMin = { "PitchMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, PitchMin), METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchDistanceOffset_MetaData[] = {
		{ "Category", "Target System|Pitch Offset" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchDistanceOffset = { "PitchDistanceOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, PitchDistanceOffset), METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchDistanceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchDistanceOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchDistanceCoefficient_MetaData[] = {
		{ "Category", "Target System|Pitch Offset" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchDistanceCoefficient = { "PitchDistanceCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, PitchDistanceCoefficient), METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchDistanceCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchDistanceCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bAdjustPitchBasedOnDistanceToTarget_MetaData[] = {
		{ "Category", "Target System|Pitch Offset" },
		{ "Comment", "// Setting this to true will tell the Target System to adjust the Pitch Offset (the Y axis) when locked on,\n// depending on the distance to the target actor.\n//\n// It will ensure that the Camera will be moved up vertically the closer this Actor gets to its target.\n//\n// Formula:\n//\n//   (DistanceToTarget * PitchDistanceCoefficient + PitchDistanceOffset) * -1.0f\n//\n// Then Clamped by PitchMin / PitchMax\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "Setting this to true will tell the Target System to adjust the Pitch Offset (the Y axis) when locked on,\ndepending on the distance to the target actor.\n\nIt will ensure that the Camera will be moved up vertically the closer this Actor gets to its target.\n\nFormula:\n\n  (DistanceToTarget * PitchDistanceCoefficient + PitchDistanceOffset) * -1.0f\n\nThen Clamped by PitchMin / PitchMax" },
	};
#endif
	void Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bAdjustPitchBasedOnDistanceToTarget_SetBit(void* Obj)
	{
		((UTargetSystemComponent*)Obj)->bAdjustPitchBasedOnDistanceToTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bAdjustPitchBasedOnDistanceToTarget = { "bAdjustPitchBasedOnDistanceToTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTargetSystemComponent), &Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bAdjustPitchBasedOnDistanceToTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bAdjustPitchBasedOnDistanceToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bAdjustPitchBasedOnDistanceToTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetRelativeLocation_MetaData[] = {
		{ "Category", "Target System|Widget" },
		{ "Comment", "// The Relative Location to apply on Target LockedOn Widget when attached to a target.\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "The Relative Location to apply on Target LockedOn Widget when attached to a target." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetRelativeLocation = { "LockedOnWidgetRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, LockedOnWidgetRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetRelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetRelativeLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetParentSocket_MetaData[] = {
		{ "Category", "Target System|Widget" },
		{ "Comment", "// The Socket name to attach the LockedOn Widget.\n//\n// You should use this to configure the Bone or Socket name the widget should be attached to, and allow\n// the widget to move with target character's animation (Ex: spine_03)\n//\n// Set it to None to attach the Widget Component to the Root Component instead of the Mesh.\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "The Socket name to attach the LockedOn Widget.\n\nYou should use this to configure the Bone or Socket name the widget should be attached to, and allow\nthe widget to move with target character's animation (Ex: spine_03)\n\nSet it to None to attach the Widget Component to the Root Component instead of the Mesh." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetParentSocket = { "LockedOnWidgetParentSocket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, LockedOnWidgetParentSocket), METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetParentSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetParentSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetDrawSize_MetaData[] = {
		{ "Category", "Target System|Widget" },
		{ "Comment", "// The Widget Draw Size for the Widget class to use when locked on Target.\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "The Widget Draw Size for the Widget class to use when locked on Target." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetDrawSize = { "LockedOnWidgetDrawSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, LockedOnWidgetDrawSize), METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetDrawSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetDrawSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetClass_MetaData[] = {
		{ "Category", "Target System|Widget" },
		{ "Comment", "// The Widget Class to use when locked on Target. If not defined, will fallback to a Text-rendered\n// widget with a single O character.\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "The Widget Class to use when locked on Target. If not defined, will fallback to a Text-rendered\nwidget with a single O character." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetClass = { "LockedOnWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, LockedOnWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bShouldDrawLockedOnWidget_MetaData[] = {
		{ "Category", "Target System|Widget" },
		{ "Comment", "// Whether or not the Target LockOn Widget indicator should be drawn and attached automatically.\n//\n// When set to false, this allow you to manually draw the widget for further control on where you'd like it to appear.\n//\n// OnTargetLockedOn and OnTargetLockedOff events can be used for this.\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "Whether or not the Target LockOn Widget indicator should be drawn and attached automatically.\n\nWhen set to false, this allow you to manually draw the widget for further control on where you'd like it to appear.\n\nOnTargetLockedOn and OnTargetLockedOff events can be used for this." },
	};
#endif
	void Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bShouldDrawLockedOnWidget_SetBit(void* Obj)
	{
		((UTargetSystemComponent*)Obj)->bShouldDrawLockedOnWidget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bShouldDrawLockedOnWidget = { "bShouldDrawLockedOnWidget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTargetSystemComponent), &Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bShouldDrawLockedOnWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bShouldDrawLockedOnWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bShouldDrawLockedOnWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_StartRotatingThreshold_MetaData[] = {
		{ "Category", "Target System" },
		{ "Comment", "// Lower this value is, easier it will be to switch new target on right or left.\n//\n// When using Sticky Feeling feature, it has no effect (see StickyRotationThreshold)\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "Lower this value is, easier it will be to switch new target on right or left.\n\nWhen using Sticky Feeling feature, it has no effect (see StickyRotationThreshold)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_StartRotatingThreshold = { "StartRotatingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, StartRotatingThreshold), METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_StartRotatingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_StartRotatingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_BreakLineOfSightDelay_MetaData[] = {
		{ "Category", "Target System" },
		{ "Comment", "// The amount of time to break line of sight when actor gets behind an Object.\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "The amount of time to break line of sight when actor gets behind an Object." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_BreakLineOfSightDelay = { "BreakLineOfSightDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, BreakLineOfSightDelay), METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_BreakLineOfSightDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_BreakLineOfSightDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bShouldControlRotation_MetaData[] = {
		{ "Category", "Target System" },
		{ "Comment", "// Whether or not the character rotation should be controlled when Target is locked on.\n//\n// If true, it'll set the value of bUseControllerRotationYaw and bOrientationToMovement variables on Target locked on / off.\n//\n// Set it to true if you want the character to rotate around the locked on target to enable you to setup strafe animations.\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "Whether or not the character rotation should be controlled when Target is locked on.\n\nIf true, it'll set the value of bUseControllerRotationYaw and bOrientationToMovement variables on Target locked on / off.\n\nSet it to true if you want the character to rotate around the locked on target to enable you to setup strafe animations." },
	};
#endif
	void Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bShouldControlRotation_SetBit(void* Obj)
	{
		((UTargetSystemComponent*)Obj)->bShouldControlRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bShouldControlRotation = { "bShouldControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTargetSystemComponent), &Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bShouldControlRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bShouldControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bShouldControlRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_TargetableActors_MetaData[] = {
		{ "Category", "Target System" },
		{ "Comment", "// The AActor Subclass to search for targetable Actors.\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "The AActor Subclass to search for targetable Actors." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_TargetableActors = { "TargetableActors", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, TargetableActors), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_TargetableActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_TargetableActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_MinimumDistanceToEnable_MetaData[] = {
		{ "Category", "Target System" },
		{ "Comment", "// The minimum distance to enable target locked on.\n" },
		{ "ModuleRelativePath", "Public/TargetSystemComponent.h" },
		{ "ToolTip", "The minimum distance to enable target locked on." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_MinimumDistanceToEnable = { "MinimumDistanceToEnable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSystemComponent, MinimumDistanceToEnable), METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_MinimumDistanceToEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_MinimumDistanceToEnable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetSystemComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnTargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_TargetLockedOnWidgetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_CharacterReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_OnTargetSetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_OnTargetLockedOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_OnTargetLockedOff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_StickyRotationThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_AxisMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bEnableStickyTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchDistanceOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_PitchDistanceCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bAdjustPitchBasedOnDistanceToTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetRelativeLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetParentSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetDrawSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_LockedOnWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bShouldDrawLockedOnWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_StartRotatingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_BreakLineOfSightDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_bShouldControlRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_TargetableActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSystemComponent_Statics::NewProp_MinimumDistanceToEnable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetSystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTargetSystemComponent_Statics::ClassParams = {
		&UTargetSystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTargetSystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetSystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetSystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTargetSystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTargetSystemComponent, 3256709444);
	template<> TARGETSYSTEM_API UClass* StaticClass<UTargetSystemComponent>()
	{
		return UTargetSystemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTargetSystemComponent(Z_Construct_UClass_UTargetSystemComponent, &UTargetSystemComponent::StaticClass, TEXT("/Script/TargetSystem"), TEXT("UTargetSystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetSystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
