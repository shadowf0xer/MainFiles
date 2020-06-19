// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Attributes/Public/FloatAttributesLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatAttributesLibrary() {}
// Cross Module References
	ATTRIBUTES_API UClass* Z_Construct_UClass_UFloatAttributesLibrary_NoRegister();
	ATTRIBUTES_API UClass* Z_Construct_UClass_UFloatAttributesLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Attributes();
	ATTRIBUTES_API UScriptStruct* Z_Construct_UScriptStruct_FAttrCategory();
	ATTRIBUTES_API UScriptStruct* Z_Construct_UScriptStruct_FAttrModifier();
	ATTRIBUTES_API UScriptStruct* Z_Construct_UScriptStruct_FFloatAttr();
	ATTRIBUTES_API UFunction* Z_Construct_UDelegateFunction_Attributes_FloatModifiedDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UFloatAttributesLibrary::execBreak)
	{
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_FloatAttr);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_BaseValue);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFloatAttributesLibrary::Break(Z_Param_Out_FloatAttr,Z_Param_Out_BaseValue,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAttributesLibrary::execMake)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BaseValue);
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_FloatAttr);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFloatAttributesLibrary::Make(Z_Param_BaseValue,Z_Param_Out_FloatAttr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAttributesLibrary::execUnbindOnModified)
	{
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_Attribute);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFloatAttributesLibrary::UnbindOnModified(Z_Param_Out_Attribute,FFloatModifiedDelegate(Z_Param_Out_Event));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAttributesLibrary::execBindOnModified)
	{
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_Attribute);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFloatAttributesLibrary::BindOnModified(Z_Param_Out_Attribute,FFloatModifiedDelegate(Z_Param_Out_Event));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAttributesLibrary::execCleanCategoryModifiers)
	{
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_Attribute);
		P_GET_STRUCT(FAttrCategory,Z_Param_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFloatAttributesLibrary::CleanCategoryModifiers(Z_Param_Out_Attribute,Z_Param_Category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAttributesLibrary::execCleanModifiers)
	{
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFloatAttributesLibrary::CleanModifiers(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAttributesLibrary::execGetModifiedCategories)
	{
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_Attribute);
		P_GET_TARRAY_REF(FAttrCategory,Z_Param_Out_Categories);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFloatAttributesLibrary::GetModifiedCategories(Z_Param_Out_Attribute,Z_Param_Out_Categories);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAttributesLibrary::execGetModifiers)
	{
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_Attribute);
		P_GET_STRUCT(FAttrCategory,Z_Param_Category);
		P_GET_TARRAY_REF(FAttrModifier,Z_Param_Out_Modifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFloatAttributesLibrary::GetModifiers(Z_Param_Out_Attribute,Z_Param_Category,Z_Param_Out_Modifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAttributesLibrary::execRemoveModifier)
	{
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_Attribute);
		P_GET_STRUCT_REF(FAttrModifier,Z_Param_Out_Modifier);
		P_GET_STRUCT(FAttrCategory,Z_Param_Category);
		P_GET_UBOOL(Z_Param_bRemoveFromAllCategories);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFloatAttributesLibrary::RemoveModifier(Z_Param_Out_Attribute,Z_Param_Out_Modifier,Z_Param_Category,Z_Param_bRemoveFromAllCategories);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAttributesLibrary::execAddModifier)
	{
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_Attribute);
		P_GET_STRUCT_REF(FAttrModifier,Z_Param_Out_Modifier);
		P_GET_STRUCT(FAttrCategory,Z_Param_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFloatAttributesLibrary::AddModifier(Z_Param_Out_Attribute,Z_Param_Out_Modifier,Z_Param_Category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAttributesLibrary::execSetBase)
	{
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_Attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFloatAttributesLibrary::SetBase(Z_Param_Out_Attribute,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAttributesLibrary::execGetBase)
	{
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFloatAttributesLibrary::GetBase(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAttributesLibrary::execConv_AttributeToString)
	{
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFloatAttributesLibrary::Conv_AttributeToString(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAttributesLibrary::execConv_AttributeToFloat)
	{
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFloatAttributesLibrary::Conv_AttributeToFloat(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAttributesLibrary::execGetValue)
	{
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFloatAttributesLibrary::GetValue(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAttributesLibrary::execEquals)
	{
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_A);
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFloatAttributesLibrary::Equals(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAttributesLibrary::execIsNot)
	{
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_A);
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFloatAttributesLibrary::IsNot(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFloatAttributesLibrary::execIs)
	{
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_A);
		P_GET_STRUCT_REF(FFloatAttr,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFloatAttributesLibrary::Is(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	void UFloatAttributesLibrary::StaticRegisterNativesUFloatAttributesLibrary()
	{
		UClass* Class = UFloatAttributesLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddModifier", &UFloatAttributesLibrary::execAddModifier },
			{ "BindOnModified", &UFloatAttributesLibrary::execBindOnModified },
			{ "Break", &UFloatAttributesLibrary::execBreak },
			{ "CleanCategoryModifiers", &UFloatAttributesLibrary::execCleanCategoryModifiers },
			{ "CleanModifiers", &UFloatAttributesLibrary::execCleanModifiers },
			{ "Conv_AttributeToFloat", &UFloatAttributesLibrary::execConv_AttributeToFloat },
			{ "Conv_AttributeToString", &UFloatAttributesLibrary::execConv_AttributeToString },
			{ "Equals", &UFloatAttributesLibrary::execEquals },
			{ "GetBase", &UFloatAttributesLibrary::execGetBase },
			{ "GetModifiedCategories", &UFloatAttributesLibrary::execGetModifiedCategories },
			{ "GetModifiers", &UFloatAttributesLibrary::execGetModifiers },
			{ "GetValue", &UFloatAttributesLibrary::execGetValue },
			{ "Is", &UFloatAttributesLibrary::execIs },
			{ "IsNot", &UFloatAttributesLibrary::execIsNot },
			{ "Make", &UFloatAttributesLibrary::execMake },
			{ "RemoveModifier", &UFloatAttributesLibrary::execRemoveModifier },
			{ "SetBase", &UFloatAttributesLibrary::execSetBase },
			{ "UnbindOnModified", &UFloatAttributesLibrary::execUnbindOnModified },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics
	{
		struct FloatAttributesLibrary_eventAddModifier_Parms
		{
			FFloatAttr Attribute;
			FAttrModifier Modifier;
			FAttrCategory Category;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventAddModifier_Parms, Category), Z_Construct_UScriptStruct_FAttrCategory, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::NewProp_Modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventAddModifier_Parms, Modifier), Z_Construct_UScriptStruct_FAttrModifier, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::NewProp_Modifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::NewProp_Modifier_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventAddModifier_Parms, Attribute), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::NewProp_Modifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Category" },
		{ "Category", "Attributes" },
		{ "Comment", "/**\n\x09 * Adds a modifier to an attribute\n\x09 * @param Attribute to be modified\n\x09 * @param Modifier to apply to the attribute\n\x09 * @param Category of the modifier (Optional)\n\x09 */" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
		{ "ToolTip", "Adds a modifier to an attribute\n@param Attribute to be modified\n@param Modifier to apply to the attribute\n@param Category of the modifier (Optional)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAttributesLibrary, nullptr, "AddModifier", nullptr, nullptr, sizeof(FloatAttributesLibrary_eventAddModifier_Parms), Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAttributesLibrary_BindOnModified_Statics
	{
		struct FloatAttributesLibrary_eventBindOnModified_Parms
		{
			FFloatAttr Attribute;
			FScriptDelegate Event;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_BindOnModified_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_BindOnModified_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventBindOnModified_Parms, Event), Z_Construct_UDelegateFunction_Attributes_FloatModifiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_BindOnModified_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_BindOnModified_Statics::NewProp_Event_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_BindOnModified_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventBindOnModified_Parms, Attribute), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAttributesLibrary_BindOnModified_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_BindOnModified_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_BindOnModified_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_BindOnModified_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Category" },
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAttributesLibrary_BindOnModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAttributesLibrary, nullptr, "BindOnModified", nullptr, nullptr, sizeof(FloatAttributesLibrary_eventBindOnModified_Parms), Z_Construct_UFunction_UFloatAttributesLibrary_BindOnModified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_BindOnModified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_BindOnModified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_BindOnModified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatAttributesLibrary_BindOnModified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatAttributesLibrary_BindOnModified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAttributesLibrary_Break_Statics
	{
		struct FloatAttributesLibrary_eventBreak_Parms
		{
			FFloatAttr FloatAttr;
			float BaseValue;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatAttr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatAttr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_Break_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventBreak_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_Break_Statics::NewProp_BaseValue = { "BaseValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventBreak_Parms, BaseValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_Break_Statics::NewProp_FloatAttr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_Break_Statics::NewProp_FloatAttr = { "FloatAttr", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventBreak_Parms, FloatAttr), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_Break_Statics::NewProp_FloatAttr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Break_Statics::NewProp_FloatAttr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAttributesLibrary_Break_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_Break_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_Break_Statics::NewProp_BaseValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_Break_Statics::NewProp_FloatAttr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_Break_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAttributesLibrary_Break_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAttributesLibrary, nullptr, "Break", nullptr, nullptr, sizeof(FloatAttributesLibrary_eventBreak_Parms), Z_Construct_UFunction_UFloatAttributesLibrary_Break_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Break_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_Break_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Break_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatAttributesLibrary_Break()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatAttributesLibrary_Break_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAttributesLibrary_CleanCategoryModifiers_Statics
	{
		struct FloatAttributesLibrary_eventCleanCategoryModifiers_Parms
		{
			FFloatAttr Attribute;
			FAttrCategory Category;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_CleanCategoryModifiers_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_CleanCategoryModifiers_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventCleanCategoryModifiers_Parms, Category), Z_Construct_UScriptStruct_FAttrCategory, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_CleanCategoryModifiers_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_CleanCategoryModifiers_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_CleanCategoryModifiers_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventCleanCategoryModifiers_Parms, Attribute), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAttributesLibrary_CleanCategoryModifiers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_CleanCategoryModifiers_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_CleanCategoryModifiers_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_CleanCategoryModifiers_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Category" },
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAttributesLibrary_CleanCategoryModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAttributesLibrary, nullptr, "CleanCategoryModifiers", nullptr, nullptr, sizeof(FloatAttributesLibrary_eventCleanCategoryModifiers_Parms), Z_Construct_UFunction_UFloatAttributesLibrary_CleanCategoryModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_CleanCategoryModifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_CleanCategoryModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_CleanCategoryModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatAttributesLibrary_CleanCategoryModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatAttributesLibrary_CleanCategoryModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAttributesLibrary_CleanModifiers_Statics
	{
		struct FloatAttributesLibrary_eventCleanModifiers_Parms
		{
			FFloatAttr Attribute;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_CleanModifiers_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventCleanModifiers_Parms, Attribute), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAttributesLibrary_CleanModifiers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_CleanModifiers_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_CleanModifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/**\n\x09 * Remove all modifiers of an attribute\n\x09 * @param Attribute to clean\n\x09 */" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
		{ "ToolTip", "Remove all modifiers of an attribute\n@param Attribute to clean" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAttributesLibrary_CleanModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAttributesLibrary, nullptr, "CleanModifiers", nullptr, nullptr, sizeof(FloatAttributesLibrary_eventCleanModifiers_Parms), Z_Construct_UFunction_UFloatAttributesLibrary_CleanModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_CleanModifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_CleanModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_CleanModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatAttributesLibrary_CleanModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatAttributesLibrary_CleanModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToFloat_Statics
	{
		struct FloatAttributesLibrary_eventConv_AttributeToFloat_Parms
		{
			FFloatAttr Attribute;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventConv_AttributeToFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToFloat_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToFloat_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventConv_AttributeToFloat_Parms, Attribute), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToFloat_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToFloat_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToFloat_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToFloat_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Attributes" },
		{ "Comment", "// Get final value\n" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToFloat (FloatAttr)" },
		{ "Keywords", "get value float" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
		{ "ToolTip", "Get final value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAttributesLibrary, nullptr, "Conv_AttributeToFloat", nullptr, nullptr, sizeof(FloatAttributesLibrary_eventConv_AttributeToFloat_Parms), Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToString_Statics
	{
		struct FloatAttributesLibrary_eventConv_AttributeToString_Parms
		{
			FFloatAttr Attribute;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventConv_AttributeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventConv_AttributeToString_Parms, Attribute), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToString_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToString_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Attributes" },
		{ "Comment", "// Get final value as String\n" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (FloatAttr)" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
		{ "ToolTip", "Get final value as String" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAttributesLibrary, nullptr, "Conv_AttributeToString", nullptr, nullptr, sizeof(FloatAttributesLibrary_eventConv_AttributeToString_Parms), Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics
	{
		struct FloatAttributesLibrary_eventEquals_Parms
		{
			FFloatAttr A;
			FFloatAttr B;
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
	void Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FloatAttributesLibrary_eventEquals_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FloatAttributesLibrary_eventEquals_Parms), &Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventEquals_Parms, B), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventEquals_Parms, A), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** @return true if two attributes have the same base value */" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
		{ "ToolTip", "@return true if two attributes have the same base value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAttributesLibrary, nullptr, "Equals", nullptr, nullptr, sizeof(FloatAttributesLibrary_eventEquals_Parms), Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatAttributesLibrary_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatAttributesLibrary_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAttributesLibrary_GetBase_Statics
	{
		struct FloatAttributesLibrary_eventGetBase_Parms
		{
			FFloatAttr Attribute;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_GetBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventGetBase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_GetBase_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_GetBase_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventGetBase_Parms, Attribute), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_GetBase_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_GetBase_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAttributesLibrary_GetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_GetBase_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_GetBase_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_GetBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/**\n\x09 * Get the base value of an attribute\n\x09 * @param Attribute to get base value from\n\x09 * @return the base value\n\x09 */" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
		{ "ToolTip", "Get the base value of an attribute\n@param Attribute to get base value from\n@return the base value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAttributesLibrary_GetBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAttributesLibrary, nullptr, "GetBase", nullptr, nullptr, sizeof(FloatAttributesLibrary_eventGetBase_Parms), Z_Construct_UFunction_UFloatAttributesLibrary_GetBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_GetBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_GetBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_GetBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatAttributesLibrary_GetBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatAttributesLibrary_GetBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories_Statics
	{
		struct FloatAttributesLibrary_eventGetModifiedCategories_Parms
		{
			FFloatAttr Attribute;
			TArray<FAttrCategory> Categories;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Categories;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventGetModifiedCategories_Parms, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttrCategory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventGetModifiedCategories_Parms, Attribute), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories_Statics::NewProp_Categories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories_Statics::NewProp_Categories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/**\n\x09 * Get all categories where the attribute has any modifiers\n\x09 * @param Attribute to get categories from\n\x09 * @return Categories of an attribute as an Array\n\x09 */" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
		{ "ToolTip", "Get all categories where the attribute has any modifiers\n@param Attribute to get categories from\n@return Categories of an attribute as an Array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAttributesLibrary, nullptr, "GetModifiedCategories", nullptr, nullptr, sizeof(FloatAttributesLibrary_eventGetModifiedCategories_Parms), Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics
	{
		struct FloatAttributesLibrary_eventGetModifiers_Parms
		{
			FFloatAttr Attribute;
			FAttrCategory Category;
			TArray<FAttrModifier> Modifiers;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventGetModifiers_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttrModifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventGetModifiers_Parms, Category), Z_Construct_UScriptStruct_FAttrCategory, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventGetModifiers_Parms, Attribute), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::NewProp_Modifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::NewProp_Modifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Category" },
		{ "Category", "Attributes" },
		{ "Comment", "/**\n\x09 * Get all modifiers of a category, base mods will be returned if category is None\n\x09 * @param Attribute to get modifiers from\n\x09 * @return Modifiers of a category as an Array\n\x09 */" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
		{ "ToolTip", "Get all modifiers of a category, base mods will be returned if category is None\n@param Attribute to get modifiers from\n@return Modifiers of a category as an Array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAttributesLibrary, nullptr, "GetModifiers", nullptr, nullptr, sizeof(FloatAttributesLibrary_eventGetModifiers_Parms), Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAttributesLibrary_GetValue_Statics
	{
		struct FloatAttributesLibrary_eventGetValue_Parms
		{
			FFloatAttr Attribute;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_GetValue_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_GetValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventGetValue_Parms, Attribute), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_GetValue_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_GetValue_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAttributesLibrary_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_GetValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_GetValue_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/**\n\x09 * Get the final value of an attribute\n\x09 * @param Attribute to get value from\n\x09 * @return the final value\n\x09 */" },
		{ "Keywords", "get value float total final" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
		{ "ToolTip", "Get the final value of an attribute\n@param Attribute to get value from\n@return the final value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAttributesLibrary_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAttributesLibrary, nullptr, "GetValue", nullptr, nullptr, sizeof(FloatAttributesLibrary_eventGetValue_Parms), Z_Construct_UFunction_UFloatAttributesLibrary_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatAttributesLibrary_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatAttributesLibrary_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics
	{
		struct FloatAttributesLibrary_eventIs_Parms
		{
			FFloatAttr A;
			FFloatAttr B;
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
	void Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FloatAttributesLibrary_eventIs_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FloatAttributesLibrary_eventIs_Parms), &Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventIs_Parms, B), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventIs_Parms, A), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** @return true when two Attributes are the same */" },
		{ "CompactNodeTitle", "==" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
		{ "ToolTip", "@return true when two Attributes are the same" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAttributesLibrary, nullptr, "Is", nullptr, nullptr, sizeof(FloatAttributesLibrary_eventIs_Parms), Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatAttributesLibrary_Is()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatAttributesLibrary_Is_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics
	{
		struct FloatAttributesLibrary_eventIsNot_Parms
		{
			FFloatAttr A;
			FFloatAttr B;
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
	void Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FloatAttributesLibrary_eventIsNot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FloatAttributesLibrary_eventIsNot_Parms), &Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventIsNot_Parms, B), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventIsNot_Parms, A), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** @return true when two Attributes are not the same */" },
		{ "CompactNodeTitle", "!=" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
		{ "ToolTip", "@return true when two Attributes are not the same" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAttributesLibrary, nullptr, "IsNot", nullptr, nullptr, sizeof(FloatAttributesLibrary_eventIsNot_Parms), Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatAttributesLibrary_IsNot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatAttributesLibrary_IsNot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAttributesLibrary_Make_Statics
	{
		struct FloatAttributesLibrary_eventMake_Parms
		{
			float BaseValue;
			FFloatAttr FloatAttr;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatAttr;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_Make_Statics::NewProp_FloatAttr = { "FloatAttr", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventMake_Parms, FloatAttr), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_Make_Statics::NewProp_BaseValue = { "BaseValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventMake_Parms, BaseValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAttributesLibrary_Make_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_Make_Statics::NewProp_FloatAttr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_Make_Statics::NewProp_BaseValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_Make_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAttributesLibrary_Make_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAttributesLibrary, nullptr, "Make", nullptr, nullptr, sizeof(FloatAttributesLibrary_eventMake_Parms), Z_Construct_UFunction_UFloatAttributesLibrary_Make_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Make_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_Make_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_Make_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatAttributesLibrary_Make()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatAttributesLibrary_Make_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics
	{
		struct FloatAttributesLibrary_eventRemoveModifier_Parms
		{
			FFloatAttr Attribute;
			FAttrModifier Modifier;
			FAttrCategory Category;
			bool bRemoveFromAllCategories;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bRemoveFromAllCategories_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveFromAllCategories;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FloatAttributesLibrary_eventRemoveModifier_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FloatAttributesLibrary_eventRemoveModifier_Parms), &Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_bRemoveFromAllCategories_SetBit(void* Obj)
	{
		((FloatAttributesLibrary_eventRemoveModifier_Parms*)Obj)->bRemoveFromAllCategories = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_bRemoveFromAllCategories = { "bRemoveFromAllCategories", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FloatAttributesLibrary_eventRemoveModifier_Parms), &Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_bRemoveFromAllCategories_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventRemoveModifier_Parms, Category), Z_Construct_UScriptStruct_FAttrCategory, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_Modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventRemoveModifier_Parms, Modifier), Z_Construct_UScriptStruct_FAttrModifier, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_Modifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_Modifier_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventRemoveModifier_Parms, Attribute), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_bRemoveFromAllCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_Modifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Category,bRemoveFromAllCategories" },
		{ "Category", "Attributes" },
		{ "Comment", "/**\n\x09 * Removes a modifier from an attribute\n\x09 * @param Attribute to be modified\n\x09 * @param Modifier to remove from the attribute\n\x09 * @param Category of the modifier (Optional)\n\x09 * @return true if any modifier was removed\n\x09 */" },
		{ "CPP_Default_bRemoveFromAllCategories", "false" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
		{ "ToolTip", "Removes a modifier from an attribute\n@param Attribute to be modified\n@param Modifier to remove from the attribute\n@param Category of the modifier (Optional)\n@return true if any modifier was removed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAttributesLibrary, nullptr, "RemoveModifier", nullptr, nullptr, sizeof(FloatAttributesLibrary_eventRemoveModifier_Parms), Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAttributesLibrary_SetBase_Statics
	{
		struct FloatAttributesLibrary_eventSetBase_Parms
		{
			FFloatAttr Attribute;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_SetBase_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventSetBase_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_SetBase_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventSetBase_Parms, Attribute), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAttributesLibrary_SetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_SetBase_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_SetBase_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_SetBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/**\n\x09 * Set the base value of an attribute\n\x09 * @param Attribute to set base value at\n\x09 * @param Value to set as the base value\n\x09 */" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
		{ "ToolTip", "Set the base value of an attribute\n@param Attribute to set base value at\n@param Value to set as the base value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAttributesLibrary_SetBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAttributesLibrary, nullptr, "SetBase", nullptr, nullptr, sizeof(FloatAttributesLibrary_eventSetBase_Parms), Z_Construct_UFunction_UFloatAttributesLibrary_SetBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_SetBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_SetBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_SetBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatAttributesLibrary_SetBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatAttributesLibrary_SetBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFloatAttributesLibrary_UnbindOnModified_Statics
	{
		struct FloatAttributesLibrary_eventUnbindOnModified_Parms
		{
			FFloatAttr Attribute;
			FScriptDelegate Event;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_UnbindOnModified_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_UnbindOnModified_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventUnbindOnModified_Parms, Event), Z_Construct_UDelegateFunction_Attributes_FloatModifiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_UnbindOnModified_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_UnbindOnModified_Statics::NewProp_Event_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloatAttributesLibrary_UnbindOnModified_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatAttributesLibrary_eventUnbindOnModified_Parms, Attribute), Z_Construct_UScriptStruct_FFloatAttr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatAttributesLibrary_UnbindOnModified_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_UnbindOnModified_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatAttributesLibrary_UnbindOnModified_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatAttributesLibrary_UnbindOnModified_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Category" },
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatAttributesLibrary_UnbindOnModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatAttributesLibrary, nullptr, "UnbindOnModified", nullptr, nullptr, sizeof(FloatAttributesLibrary_eventUnbindOnModified_Parms), Z_Construct_UFunction_UFloatAttributesLibrary_UnbindOnModified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_UnbindOnModified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatAttributesLibrary_UnbindOnModified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatAttributesLibrary_UnbindOnModified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatAttributesLibrary_UnbindOnModified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatAttributesLibrary_UnbindOnModified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFloatAttributesLibrary_NoRegister()
	{
		return UFloatAttributesLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFloatAttributesLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatAttributesLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Attributes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFloatAttributesLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFloatAttributesLibrary_AddModifier, "AddModifier" }, // 2015974413
		{ &Z_Construct_UFunction_UFloatAttributesLibrary_BindOnModified, "BindOnModified" }, // 2763730446
		{ &Z_Construct_UFunction_UFloatAttributesLibrary_Break, "Break" }, // 4044351682
		{ &Z_Construct_UFunction_UFloatAttributesLibrary_CleanCategoryModifiers, "CleanCategoryModifiers" }, // 2729652513
		{ &Z_Construct_UFunction_UFloatAttributesLibrary_CleanModifiers, "CleanModifiers" }, // 543363908
		{ &Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToFloat, "Conv_AttributeToFloat" }, // 1479867037
		{ &Z_Construct_UFunction_UFloatAttributesLibrary_Conv_AttributeToString, "Conv_AttributeToString" }, // 992663178
		{ &Z_Construct_UFunction_UFloatAttributesLibrary_Equals, "Equals" }, // 1082898665
		{ &Z_Construct_UFunction_UFloatAttributesLibrary_GetBase, "GetBase" }, // 1822320580
		{ &Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiedCategories, "GetModifiedCategories" }, // 2538672301
		{ &Z_Construct_UFunction_UFloatAttributesLibrary_GetModifiers, "GetModifiers" }, // 2543799956
		{ &Z_Construct_UFunction_UFloatAttributesLibrary_GetValue, "GetValue" }, // 3049362939
		{ &Z_Construct_UFunction_UFloatAttributesLibrary_Is, "Is" }, // 1261662370
		{ &Z_Construct_UFunction_UFloatAttributesLibrary_IsNot, "IsNot" }, // 3499570521
		{ &Z_Construct_UFunction_UFloatAttributesLibrary_Make, "Make" }, // 1411551236
		{ &Z_Construct_UFunction_UFloatAttributesLibrary_RemoveModifier, "RemoveModifier" }, // 746701632
		{ &Z_Construct_UFunction_UFloatAttributesLibrary_SetBase, "SetBase" }, // 287784540
		{ &Z_Construct_UFunction_UFloatAttributesLibrary_UnbindOnModified, "UnbindOnModified" }, // 2795232231
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatAttributesLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "FloatAttributesLibrary.h" },
		{ "ModuleRelativePath", "Public/FloatAttributesLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatAttributesLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatAttributesLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFloatAttributesLibrary_Statics::ClassParams = {
		&UFloatAttributesLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFloatAttributesLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatAttributesLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloatAttributesLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFloatAttributesLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFloatAttributesLibrary, 4199301793);
	template<> ATTRIBUTES_API UClass* StaticClass<UFloatAttributesLibrary>()
	{
		return UFloatAttributesLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFloatAttributesLibrary(Z_Construct_UClass_UFloatAttributesLibrary, &UFloatAttributesLibrary::StaticClass, TEXT("/Script/Attributes"), TEXT("UFloatAttributesLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatAttributesLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
