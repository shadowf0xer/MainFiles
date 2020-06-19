// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Attributes/Public/ModifierAttributesLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifierAttributesLibrary() {}
// Cross Module References
	ATTRIBUTES_API UClass* Z_Construct_UClass_UModifierAttributesLibrary_NoRegister();
	ATTRIBUTES_API UClass* Z_Construct_UClass_UModifierAttributesLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Attributes();
	ATTRIBUTES_API UScriptStruct* Z_Construct_UScriptStruct_FAttrModifier();
// End Cross Module References
	DEFINE_FUNCTION(UModifierAttributesLibrary::execSetValues)
	{
		P_GET_STRUCT_REF(FAttrModifier,Z_Param_Out_Target);
		P_GET_STRUCT_REF(FAttrModifier,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		UModifierAttributesLibrary::SetValues(Z_Param_Out_Target,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierAttributesLibrary::execStackMod)
	{
		P_GET_STRUCT_REF(FAttrModifier,Z_Param_Out_TargetMod);
		P_GET_STRUCT_REF(FAttrModifier,Z_Param_Out_OtherMod);
		P_FINISH;
		P_NATIVE_BEGIN;
		UModifierAttributesLibrary::StackMod(Z_Param_Out_TargetMod,Z_Param_Out_OtherMod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierAttributesLibrary::execStackMods)
	{
		P_GET_STRUCT_REF(FAttrModifier,Z_Param_Out_TargetMod);
		P_GET_TARRAY_REF(FAttrModifier,Z_Param_Out_Mods);
		P_FINISH;
		P_NATIVE_BEGIN;
		UModifierAttributesLibrary::StackMods(Z_Param_Out_TargetMod,Z_Param_Out_Mods);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierAttributesLibrary::execIsNot)
	{
		P_GET_STRUCT_REF(FAttrModifier,Z_Param_Out_A);
		P_GET_STRUCT_REF(FAttrModifier,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UModifierAttributesLibrary::IsNot(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModifierAttributesLibrary::execIs)
	{
		P_GET_STRUCT_REF(FAttrModifier,Z_Param_Out_A);
		P_GET_STRUCT_REF(FAttrModifier,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UModifierAttributesLibrary::Is(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	void UModifierAttributesLibrary::StaticRegisterNativesUModifierAttributesLibrary()
	{
		UClass* Class = UModifierAttributesLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Is", &UModifierAttributesLibrary::execIs },
			{ "IsNot", &UModifierAttributesLibrary::execIsNot },
			{ "SetValues", &UModifierAttributesLibrary::execSetValues },
			{ "StackMod", &UModifierAttributesLibrary::execStackMod },
			{ "StackMods", &UModifierAttributesLibrary::execStackMods },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics
	{
		struct ModifierAttributesLibrary_eventIs_Parms
		{
			FAttrModifier A;
			FAttrModifier B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModifierAttributesLibrary_eventIs_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModifierAttributesLibrary_eventIs_Parms), &Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierAttributesLibrary_eventIs_Parms, B), Z_Construct_UScriptStruct_FAttrModifier, METADATA_PARAMS(Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierAttributesLibrary_eventIs_Parms, A), Z_Construct_UScriptStruct_FAttrModifier, METADATA_PARAMS(Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** @return true when two Attributes are the same */" },
		{ "CompactNodeTitle", "==" },
		{ "ModuleRelativePath", "Public/ModifierAttributesLibrary.h" },
		{ "ToolTip", "@return true when two Attributes are the same" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierAttributesLibrary, nullptr, "Is", nullptr, nullptr, sizeof(ModifierAttributesLibrary_eventIs_Parms), Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierAttributesLibrary_Is()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierAttributesLibrary_Is_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics
	{
		struct ModifierAttributesLibrary_eventIsNot_Parms
		{
			FAttrModifier A;
			FAttrModifier B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModifierAttributesLibrary_eventIsNot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModifierAttributesLibrary_eventIsNot_Parms), &Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierAttributesLibrary_eventIsNot_Parms, B), Z_Construct_UScriptStruct_FAttrModifier, METADATA_PARAMS(Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierAttributesLibrary_eventIsNot_Parms, A), Z_Construct_UScriptStruct_FAttrModifier, METADATA_PARAMS(Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** @return true when two Attributes are not the same */" },
		{ "CompactNodeTitle", "!=" },
		{ "ModuleRelativePath", "Public/ModifierAttributesLibrary.h" },
		{ "ToolTip", "@return true when two Attributes are not the same" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierAttributesLibrary, nullptr, "IsNot", nullptr, nullptr, sizeof(ModifierAttributesLibrary_eventIsNot_Parms), Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierAttributesLibrary_IsNot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierAttributesLibrary_IsNot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierAttributesLibrary_SetValues_Statics
	{
		struct ModifierAttributesLibrary_eventSetValues_Parms
		{
			FAttrModifier Target;
			FAttrModifier Values;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierAttributesLibrary_SetValues_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifierAttributesLibrary_SetValues_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierAttributesLibrary_eventSetValues_Parms, Values), Z_Construct_UScriptStruct_FAttrModifier, METADATA_PARAMS(Z_Construct_UFunction_UModifierAttributesLibrary_SetValues_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierAttributesLibrary_SetValues_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifierAttributesLibrary_SetValues_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierAttributesLibrary_eventSetValues_Parms, Target), Z_Construct_UScriptStruct_FAttrModifier, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierAttributesLibrary_SetValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierAttributesLibrary_SetValues_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierAttributesLibrary_SetValues_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierAttributesLibrary_SetValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes|Modifiers" },
		{ "Keywords", "copy" },
		{ "ModuleRelativePath", "Public/ModifierAttributesLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierAttributesLibrary_SetValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierAttributesLibrary, nullptr, "SetValues", nullptr, nullptr, sizeof(ModifierAttributesLibrary_eventSetValues_Parms), Z_Construct_UFunction_UModifierAttributesLibrary_SetValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierAttributesLibrary_SetValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierAttributesLibrary_SetValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierAttributesLibrary_SetValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierAttributesLibrary_SetValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierAttributesLibrary_SetValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierAttributesLibrary_StackMod_Statics
	{
		struct ModifierAttributesLibrary_eventStackMod_Parms
		{
			FAttrModifier TargetMod;
			FAttrModifier OtherMod;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherMod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherMod;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierAttributesLibrary_StackMod_Statics::NewProp_OtherMod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifierAttributesLibrary_StackMod_Statics::NewProp_OtherMod = { "OtherMod", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierAttributesLibrary_eventStackMod_Parms, OtherMod), Z_Construct_UScriptStruct_FAttrModifier, METADATA_PARAMS(Z_Construct_UFunction_UModifierAttributesLibrary_StackMod_Statics::NewProp_OtherMod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierAttributesLibrary_StackMod_Statics::NewProp_OtherMod_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifierAttributesLibrary_StackMod_Statics::NewProp_TargetMod = { "TargetMod", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierAttributesLibrary_eventStackMod_Parms, TargetMod), Z_Construct_UScriptStruct_FAttrModifier, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierAttributesLibrary_StackMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierAttributesLibrary_StackMod_Statics::NewProp_OtherMod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierAttributesLibrary_StackMod_Statics::NewProp_TargetMod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierAttributesLibrary_StackMod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes|Modifiers" },
		{ "Comment", "/** Stack other modifier's values into target mod.\n\x09 * Applying this mod will be equivalent to applying both\n\x09 * @param TargetMod to be modified\n\x09 * @param OtherMod to be stacked into TargetMod\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModifierAttributesLibrary.h" },
		{ "ToolTip", "Stack other modifier's values into target mod.\nApplying this mod will be equivalent to applying both\n@param TargetMod to be modified\n@param OtherMod to be stacked into TargetMod" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierAttributesLibrary_StackMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierAttributesLibrary, nullptr, "StackMod", nullptr, nullptr, sizeof(ModifierAttributesLibrary_eventStackMod_Parms), Z_Construct_UFunction_UModifierAttributesLibrary_StackMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierAttributesLibrary_StackMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierAttributesLibrary_StackMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierAttributesLibrary_StackMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierAttributesLibrary_StackMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierAttributesLibrary_StackMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModifierAttributesLibrary_StackMods_Statics
	{
		struct ModifierAttributesLibrary_eventStackMods_Parms
		{
			FAttrModifier TargetMod;
			TArray<FAttrModifier> Mods;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mods_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Mods;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mods_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierAttributesLibrary_StackMods_Statics::NewProp_Mods_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModifierAttributesLibrary_StackMods_Statics::NewProp_Mods = { "Mods", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierAttributesLibrary_eventStackMods_Parms, Mods), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UModifierAttributesLibrary_StackMods_Statics::NewProp_Mods_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierAttributesLibrary_StackMods_Statics::NewProp_Mods_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifierAttributesLibrary_StackMods_Statics::NewProp_Mods_Inner = { "Mods", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttrModifier, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModifierAttributesLibrary_StackMods_Statics::NewProp_TargetMod = { "TargetMod", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModifierAttributesLibrary_eventStackMods_Parms, TargetMod), Z_Construct_UScriptStruct_FAttrModifier, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModifierAttributesLibrary_StackMods_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierAttributesLibrary_StackMods_Statics::NewProp_Mods,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierAttributesLibrary_StackMods_Statics::NewProp_Mods_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModifierAttributesLibrary_StackMods_Statics::NewProp_TargetMod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModifierAttributesLibrary_StackMods_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes|Modifiers" },
		{ "Comment", "/** Stack other modifiers values into this mod.\n\x09 * Now applying this modifier will be equivalent to applying all the others at the same time\n\x09 * @param Mods to be stacked together as one\n\x09 * @return the resulting stacked mod\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModifierAttributesLibrary.h" },
		{ "ToolTip", "Stack other modifiers values into this mod.\nNow applying this modifier will be equivalent to applying all the others at the same time\n@param Mods to be stacked together as one\n@return the resulting stacked mod" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModifierAttributesLibrary_StackMods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModifierAttributesLibrary, nullptr, "StackMods", nullptr, nullptr, sizeof(ModifierAttributesLibrary_eventStackMods_Parms), Z_Construct_UFunction_UModifierAttributesLibrary_StackMods_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierAttributesLibrary_StackMods_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModifierAttributesLibrary_StackMods_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModifierAttributesLibrary_StackMods_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModifierAttributesLibrary_StackMods()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModifierAttributesLibrary_StackMods_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModifierAttributesLibrary_NoRegister()
	{
		return UModifierAttributesLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UModifierAttributesLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModifierAttributesLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Attributes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModifierAttributesLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModifierAttributesLibrary_Is, "Is" }, // 265303006
		{ &Z_Construct_UFunction_UModifierAttributesLibrary_IsNot, "IsNot" }, // 3360204122
		{ &Z_Construct_UFunction_UModifierAttributesLibrary_SetValues, "SetValues" }, // 3118080341
		{ &Z_Construct_UFunction_UModifierAttributesLibrary_StackMod, "StackMod" }, // 3372465495
		{ &Z_Construct_UFunction_UModifierAttributesLibrary_StackMods, "StackMods" }, // 4116183579
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifierAttributesLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ModifierAttributesLibrary.h" },
		{ "ModuleRelativePath", "Public/ModifierAttributesLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModifierAttributesLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifierAttributesLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModifierAttributesLibrary_Statics::ClassParams = {
		&UModifierAttributesLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModifierAttributesLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModifierAttributesLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModifierAttributesLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModifierAttributesLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModifierAttributesLibrary, 3442446132);
	template<> ATTRIBUTES_API UClass* StaticClass<UModifierAttributesLibrary>()
	{
		return UModifierAttributesLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModifierAttributesLibrary(Z_Construct_UClass_UModifierAttributesLibrary, &UModifierAttributesLibrary::StaticClass, TEXT("/Script/Attributes"), TEXT("UModifierAttributesLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModifierAttributesLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
