// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actions/Public/Action.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAction() {}
// Cross Module References
	ACTIONS_API UFunction* Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Actions();
	ACTIONS_API UEnum* Z_Construct_UEnum_Actions_EActionState();
	ACTIONS_API UFunction* Z_Construct_UDelegateFunction_Actions_ActionActivatedDelegate__DelegateSignature();
	ACTIONS_API UClass* Z_Construct_UClass_UAction_NoRegister();
	ACTIONS_API UClass* Z_Construct_UClass_UAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature_Statics
	{
		struct _Script_Actions_eventActionFinishedDelegate_Parms
		{
			EActionState Reason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Actions_eventActionFinishedDelegate_Parms, Reason), Z_Construct_UEnum_Actions_EActionState, METADATA_PARAMS(Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature_Statics::NewProp_Reason_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature_Statics::NewProp_Reason_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Actions, nullptr, "ActionFinishedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Actions_eventActionFinishedDelegate_Parms), Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Actions_ActionActivatedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Actions_ActionActivatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Actions_ActionActivatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Actions, nullptr, "ActionActivatedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Actions_ActionActivatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Actions_ActionActivatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Actions_ActionActivatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Actions_ActionActivatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EActionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Actions_EActionState, Z_Construct_UPackage__Script_Actions(), TEXT("EActionState"));
		}
		return Singleton;
	}
	template<> ACTIONS_API UEnum* StaticEnum<EActionState>()
	{
		return EActionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EActionState(EActionState_StaticEnum, TEXT("/Script/Actions"), TEXT("EActionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Actions_EActionState_Hash() { return 1898952065U; }
	UEnum* Z_Construct_UEnum_Actions_EActionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Actions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EActionState"), 0, Get_Z_Construct_UEnum_Actions_EActionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EActionState::Preparing", (int64)EActionState::Preparing },
				{ "EActionState::Running", (int64)EActionState::Running },
				{ "EActionState::Success", (int64)EActionState::Success },
				{ "EActionState::Failure", (int64)EActionState::Failure },
				{ "EActionState::Cancelled", (int64)EActionState::Cancelled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cancelled.Name", "EActionState::Cancelled" },
				{ "Comment", "/**\n * Result of a node execution\n */" },
				{ "Failure.Name", "EActionState::Failure" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Action.h" },
				{ "Preparing.Hidden", "" },
				{ "Preparing.Name", "EActionState::Preparing" },
				{ "Running.Hidden", "" },
				{ "Running.Name", "EActionState::Running" },
				{ "Success.Name", "EActionState::Success" },
				{ "ToolTip", "Result of a node execution" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Actions,
				nullptr,
				"EActionState",
				"EActionState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UAction::execGetOwnerComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActorComponent**)Z_Param__Result=P_THIS->GetOwnerComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAction::execGetOwnerActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwnerActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAction::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAction::execGetTickRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTickRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAction::execGetParentAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAction**)Z_Param__Result=P_THIS->GetParentAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAction::execGetParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetParent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAction::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EActionState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAction::execFailed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Failed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAction::execSucceeded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Succeeded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAction::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAction::execReceiveCanActivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReceiveCanActivate_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAction::execFail)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Error);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fail(Z_Param_Error);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAction::execSucceed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Succeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAction::execActivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activate();
		P_NATIVE_END;
	}
	static FName NAME_UAction_ReceiveActivate = FName(TEXT("ReceiveActivate"));
	void UAction::ReceiveActivate()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAction_ReceiveActivate),NULL);
	}
	static FName NAME_UAction_ReceiveCanActivate = FName(TEXT("ReceiveCanActivate"));
	bool UAction::ReceiveCanActivate()
	{
		Action_eventReceiveCanActivate_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UAction_ReceiveCanActivate),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAction_ReceiveFinished = FName(TEXT("ReceiveFinished"));
	void UAction::ReceiveFinished(const EActionState Reason)
	{
		Action_eventReceiveFinished_Parms Parms;
		Parms.Reason=Reason;
		ProcessEvent(FindFunctionChecked(NAME_UAction_ReceiveFinished),&Parms);
	}
	static FName NAME_UAction_ReceiveTick = FName(TEXT("ReceiveTick"));
	void UAction::ReceiveTick(float DeltaTime)
	{
		Action_eventReceiveTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UAction_ReceiveTick),&Parms);
	}
	void UAction::StaticRegisterNativesUAction()
	{
		UClass* Class = UAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &UAction::execActivate },
			{ "Fail", &UAction::execFail },
			{ "Failed", &UAction::execFailed },
			{ "GetOwner", &UAction::execGetOwner },
			{ "GetOwnerActor", &UAction::execGetOwnerActor },
			{ "GetOwnerComponent", &UAction::execGetOwnerComponent },
			{ "GetParent", &UAction::execGetParent },
			{ "GetParentAction", &UAction::execGetParentAction },
			{ "GetState", &UAction::execGetState },
			{ "GetTickRate", &UAction::execGetTickRate },
			{ "IsRunning", &UAction::execIsRunning },
			{ "ReceiveCanActivate", &UAction::execReceiveCanActivate },
			{ "Succeed", &UAction::execSucceed },
			{ "Succeeded", &UAction::execSucceeded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAction_Activate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_Activate_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "Action" },
		{ "Comment", "/** Called to active an action if not already. */" },
		{ "ModuleRelativePath", "Public/Action.h" },
		{ "ToolTip", "Called to active an action if not already." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "Activate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_Activate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAction_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_Fail_Statics
	{
		struct Action_eventFail_Parms
		{
			FName Error;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAction_Fail_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Action_eventFail_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_Fail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_Fail_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_Fail_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "CPP_Default_Error", "None" },
		{ "KeyWords", "Finish" },
		{ "ModuleRelativePath", "Public/Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_Fail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "Fail", nullptr, nullptr, sizeof(Action_eventFail_Parms), Z_Construct_UFunction_UAction_Fail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_Fail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_Fail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_Fail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_Fail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAction_Fail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_Failed_Statics
	{
		struct Action_eventFailed_Parms
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
	void Z_Construct_UFunction_UAction_Failed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Action_eventFailed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAction_Failed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Action_eventFailed_Parms), &Z_Construct_UFunction_UAction_Failed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_Failed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_Failed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_Failed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_Failed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "Failed", nullptr, nullptr, sizeof(Action_eventFailed_Parms), Z_Construct_UFunction_UAction_Failed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_Failed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_Failed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_Failed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_Failed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAction_Failed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_GetOwner_Statics
	{
		struct Action_eventGetOwner_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAction_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Action_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_GetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "Comment", "/** @return the object that executes the root action */" },
		{ "ModuleRelativePath", "Public/Action.h" },
		{ "ToolTip", "@return the object that executes the root action" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "GetOwner", nullptr, nullptr, sizeof(Action_eventGetOwner_Parms), Z_Construct_UFunction_UAction_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAction_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_GetOwnerActor_Statics
	{
		struct Action_eventGetOwnerActor_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAction_GetOwnerActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Action_eventGetOwnerActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_GetOwnerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_GetOwnerActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_GetOwnerActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "Comment", "/** @return the actor if any that executes the root action */" },
		{ "ModuleRelativePath", "Public/Action.h" },
		{ "ToolTip", "@return the actor if any that executes the root action" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_GetOwnerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "GetOwnerActor", nullptr, nullptr, sizeof(Action_eventGetOwnerActor_Parms), Z_Construct_UFunction_UAction_GetOwnerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetOwnerActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_GetOwnerActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetOwnerActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_GetOwnerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAction_GetOwnerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_GetOwnerComponent_Statics
	{
		struct Action_eventGetOwnerComponent_Parms
		{
			UActorComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_GetOwnerComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAction_GetOwnerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Action_eventGetOwnerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAction_GetOwnerComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetOwnerComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_GetOwnerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_GetOwnerComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_GetOwnerComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "Comment", "/** @return the component if any that executes the root action */" },
		{ "ModuleRelativePath", "Public/Action.h" },
		{ "ToolTip", "@return the component if any that executes the root action" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_GetOwnerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "GetOwnerComponent", nullptr, nullptr, sizeof(Action_eventGetOwnerComponent_Parms), Z_Construct_UFunction_UAction_GetOwnerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetOwnerComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_GetOwnerComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetOwnerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_GetOwnerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAction_GetOwnerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_GetParent_Statics
	{
		struct Action_eventGetParent_Parms
		{
			const UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_GetParent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAction_GetParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Action_eventGetParent_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAction_GetParent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetParent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_GetParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_GetParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_GetParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "GetParent", nullptr, nullptr, sizeof(Action_eventGetParent_Parms), Z_Construct_UFunction_UAction_GetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_GetParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_GetParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAction_GetParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_GetParentAction_Statics
	{
		struct Action_eventGetParentAction_Parms
		{
			UAction* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAction_GetParentAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Action_eventGetParentAction_Parms, ReturnValue), Z_Construct_UClass_UAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_GetParentAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_GetParentAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_GetParentAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_GetParentAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "GetParentAction", nullptr, nullptr, sizeof(Action_eventGetParentAction_Parms), Z_Construct_UFunction_UAction_GetParentAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetParentAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_GetParentAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetParentAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_GetParentAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAction_GetParentAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_GetState_Statics
	{
		struct Action_eventGetState_Parms
		{
			EActionState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAction_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Action_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_Actions_EActionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAction_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_GetState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_GetState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "GetState", nullptr, nullptr, sizeof(Action_eventGetState_Parms), Z_Construct_UFunction_UAction_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAction_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_GetTickRate_Statics
	{
		struct Action_eventGetTickRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAction_GetTickRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Action_eventGetTickRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_GetTickRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_GetTickRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_GetTickRate_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_GetTickRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "GetTickRate", nullptr, nullptr, sizeof(Action_eventGetTickRate_Parms), Z_Construct_UFunction_UAction_GetTickRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetTickRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_GetTickRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_GetTickRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_GetTickRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAction_GetTickRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_IsRunning_Statics
	{
		struct Action_eventIsRunning_Parms
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
	void Z_Construct_UFunction_UAction_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Action_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAction_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Action_eventIsRunning_Parms), &Z_Construct_UFunction_UAction_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_IsRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "IsRunning", nullptr, nullptr, sizeof(Action_eventIsRunning_Parms), Z_Construct_UFunction_UAction_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAction_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_ReceiveActivate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_ReceiveActivate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when this action is activated */" },
		{ "DisplayName", "Activate" },
		{ "ModuleRelativePath", "Public/Action.h" },
		{ "ToolTip", "Called when this action is activated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_ReceiveActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "ReceiveActivate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_ReceiveActivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_ReceiveActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_ReceiveActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAction_ReceiveActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_ReceiveCanActivate_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAction_ReceiveCanActivate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Action_eventReceiveCanActivate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAction_ReceiveCanActivate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Action_eventReceiveCanActivate_Parms), &Z_Construct_UFunction_UAction_ReceiveCanActivate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_ReceiveCanActivate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_ReceiveCanActivate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_ReceiveCanActivate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called to check if an action can activate. */" },
		{ "DisplayName", "Can Activate" },
		{ "ModuleRelativePath", "Public/Action.h" },
		{ "ToolTip", "Event called to check if an action can activate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_ReceiveCanActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "ReceiveCanActivate", nullptr, nullptr, sizeof(Action_eventReceiveCanActivate_Parms), Z_Construct_UFunction_UAction_ReceiveCanActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_ReceiveCanActivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_ReceiveCanActivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_ReceiveCanActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_ReceiveCanActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAction_ReceiveCanActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_ReceiveFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_ReceiveFinished_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAction_ReceiveFinished_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Action_eventReceiveFinished_Parms, Reason), Z_Construct_UEnum_Actions_EActionState, METADATA_PARAMS(Z_Construct_UFunction_UAction_ReceiveFinished_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_ReceiveFinished_Statics::NewProp_Reason_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAction_ReceiveFinished_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_ReceiveFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_ReceiveFinished_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_ReceiveFinished_Statics::NewProp_Reason_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_ReceiveFinished_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when this action finishes */" },
		{ "DisplayName", "Finished" },
		{ "ModuleRelativePath", "Public/Action.h" },
		{ "ToolTip", "Called when this action finishes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_ReceiveFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "ReceiveFinished", nullptr, nullptr, sizeof(Action_eventReceiveFinished_Parms), Z_Construct_UFunction_UAction_ReceiveFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_ReceiveFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_ReceiveFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_ReceiveFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_ReceiveFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAction_ReceiveFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_ReceiveTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAction_ReceiveTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Action_eventReceiveTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_ReceiveTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_ReceiveTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_ReceiveTick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when tick is received based on TickRate */" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/Action.h" },
		{ "ToolTip", "Called when tick is received based on TickRate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(Action_eventReceiveTick_Parms), Z_Construct_UFunction_UAction_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_ReceiveTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_ReceiveTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_ReceiveTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAction_ReceiveTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_Succeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_Succeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "KeyWords", "Finish" },
		{ "ModuleRelativePath", "Public/Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_Succeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "Succeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_Succeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_Succeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_Succeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAction_Succeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAction_Succeeded_Statics
	{
		struct Action_eventSucceeded_Parms
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
	void Z_Construct_UFunction_UAction_Succeeded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Action_eventSucceeded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAction_Succeeded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Action_eventSucceeded_Parms), &Z_Construct_UFunction_UAction_Succeeded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAction_Succeeded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAction_Succeeded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAction_Succeeded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/Action.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAction_Succeeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAction, nullptr, "Succeeded", nullptr, nullptr, sizeof(Action_eventSucceeded_Parms), Z_Construct_UFunction_UAction_Succeeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_Succeeded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAction_Succeeded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAction_Succeeded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAction_Succeeded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAction_Succeeded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAction_NoRegister()
	{
		return UAction::StaticClass();
	}
	struct Z_Construct_UClass_UAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinishedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActivationDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActivationDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildrenActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ChildrenActions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildrenActions_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsToTick_MetaData[];
#endif
		static void NewProp_bWantsToTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsToTick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Actions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAction_Activate, "Activate" }, // 212485051
		{ &Z_Construct_UFunction_UAction_Fail, "Fail" }, // 1864866841
		{ &Z_Construct_UFunction_UAction_Failed, "Failed" }, // 1291620342
		{ &Z_Construct_UFunction_UAction_GetOwner, "GetOwner" }, // 191618821
		{ &Z_Construct_UFunction_UAction_GetOwnerActor, "GetOwnerActor" }, // 577534158
		{ &Z_Construct_UFunction_UAction_GetOwnerComponent, "GetOwnerComponent" }, // 3733325780
		{ &Z_Construct_UFunction_UAction_GetParent, "GetParent" }, // 1265754474
		{ &Z_Construct_UFunction_UAction_GetParentAction, "GetParentAction" }, // 2204440418
		{ &Z_Construct_UFunction_UAction_GetState, "GetState" }, // 3924185049
		{ &Z_Construct_UFunction_UAction_GetTickRate, "GetTickRate" }, // 2819053808
		{ &Z_Construct_UFunction_UAction_IsRunning, "IsRunning" }, // 3862946979
		{ &Z_Construct_UFunction_UAction_ReceiveActivate, "ReceiveActivate" }, // 1595283122
		{ &Z_Construct_UFunction_UAction_ReceiveCanActivate, "ReceiveCanActivate" }, // 76775530
		{ &Z_Construct_UFunction_UAction_ReceiveFinished, "ReceiveFinished" }, // 3259397698
		{ &Z_Construct_UFunction_UAction_ReceiveTick, "ReceiveTick" }, // 1843873077
		{ &Z_Construct_UFunction_UAction_Succeed, "Succeed" }, // 1691639235
		{ &Z_Construct_UFunction_UAction_Succeeded, "Succeeded" }, // 2377634375
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ExposedAsyncProxy", "" },
		{ "IncludePath", "Action.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Action.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAction_Statics::NewProp_OnFinishedDelegate_MetaData[] = {
		{ "Comment", "// Notify when the action finished\n" },
		{ "ModuleRelativePath", "Public/Action.h" },
		{ "ToolTip", "Notify when the action finished" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAction_Statics::NewProp_OnFinishedDelegate = { "OnFinishedDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAction, OnFinishedDelegate), Z_Construct_UDelegateFunction_Actions_ActionFinishedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAction_Statics::NewProp_OnFinishedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAction_Statics::NewProp_OnFinishedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAction_Statics::NewProp_OnActivationDelegate_MetaData[] = {
		{ "Comment", "/** Delegates */// Notify when the action is activated\n" },
		{ "ModuleRelativePath", "Public/Action.h" },
		{ "ToolTip", "Delegates // Notify when the action is activated" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAction_Statics::NewProp_OnActivationDelegate = { "OnActivationDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAction, OnActivationDelegate), Z_Construct_UDelegateFunction_Actions_ActionActivatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAction_Statics::NewProp_OnActivationDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAction_Statics::NewProp_OnActivationDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAction_Statics::NewProp_ChildrenActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Action.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAction_Statics::NewProp_ChildrenActions = { "ChildrenActions", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAction, ChildrenActions), METADATA_PARAMS(Z_Construct_UClass_UAction_Statics::NewProp_ChildrenActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAction_Statics::NewProp_ChildrenActions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAction_Statics::NewProp_ChildrenActions_ElementProp = { "ChildrenActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAction_Statics::NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Public/Action.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAction_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAction, State), Z_Construct_UEnum_Actions_EActionState, METADATA_PARAMS(Z_Construct_UClass_UAction_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAction_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAction_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAction_Statics::NewProp_TickRate_MetaData[] = {
		{ "BlueprintGetter", "GetTickRate" },
		{ "Category", "Action" },
		{ "Comment", "//Tick length in seconds. 0 is default tick rate\n" },
		{ "ModuleRelativePath", "Public/Action.h" },
		{ "ToolTip", "Tick length in seconds. 0 is default tick rate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAction_Statics::NewProp_TickRate = { "TickRate", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAction, TickRate), METADATA_PARAMS(Z_Construct_UClass_UAction_Statics::NewProp_TickRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAction_Statics::NewProp_TickRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAction_Statics::NewProp_bWantsToTick_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/Action.h" },
	};
#endif
	void Z_Construct_UClass_UAction_Statics::NewProp_bWantsToTick_SetBit(void* Obj)
	{
		((UAction*)Obj)->bWantsToTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAction_Statics::NewProp_bWantsToTick = { "bWantsToTick", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAction), &Z_Construct_UClass_UAction_Statics::NewProp_bWantsToTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAction_Statics::NewProp_bWantsToTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAction_Statics::NewProp_bWantsToTick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAction_Statics::NewProp_OnFinishedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAction_Statics::NewProp_OnActivationDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAction_Statics::NewProp_ChildrenActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAction_Statics::NewProp_ChildrenActions_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAction_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAction_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAction_Statics::NewProp_TickRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAction_Statics::NewProp_bWantsToTick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAction_Statics::ClassParams = {
		&UAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAction_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAction, 3235903261);
	template<> ACTIONS_API UClass* StaticClass<UAction>()
	{
		return UAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAction(Z_Construct_UClass_UAction, &UAction::StaticClass, TEXT("/Script/Actions"), TEXT("UAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
