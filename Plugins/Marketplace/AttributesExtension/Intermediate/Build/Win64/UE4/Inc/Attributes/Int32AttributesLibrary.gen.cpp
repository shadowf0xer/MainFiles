// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Attributes/Public/Int32AttributesLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInt32AttributesLibrary() {}
// Cross Module References
	ATTRIBUTES_API UClass* Z_Construct_UClass_UInt32AttributesLibrary_NoRegister();
	ATTRIBUTES_API UClass* Z_Construct_UClass_UInt32AttributesLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Attributes();
	ATTRIBUTES_API UScriptStruct* Z_Construct_UScriptStruct_FAttrCategory();
	ATTRIBUTES_API UScriptStruct* Z_Construct_UScriptStruct_FAttrModifier();
	ATTRIBUTES_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Attr();
	ATTRIBUTES_API UFunction* Z_Construct_UDelegateFunction_Attributes_Int32ModifiedDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UInt32AttributesLibrary::execBreak)
	{
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_IntAttr);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BaseValue);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInt32AttributesLibrary::Break(Z_Param_Out_IntAttr,Z_Param_Out_BaseValue,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInt32AttributesLibrary::execMake)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BaseValue);
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_IntAttr);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInt32AttributesLibrary::Make(Z_Param_BaseValue,Z_Param_Out_IntAttr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInt32AttributesLibrary::execUnbindOnModified)
	{
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_Attribute);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInt32AttributesLibrary::UnbindOnModified(Z_Param_Out_Attribute,FInt32ModifiedDelegate(Z_Param_Out_Event));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInt32AttributesLibrary::execBindOnModified)
	{
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_Attribute);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInt32AttributesLibrary::BindOnModified(Z_Param_Out_Attribute,FInt32ModifiedDelegate(Z_Param_Out_Event));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInt32AttributesLibrary::execCleanCategoryModifiers)
	{
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_Attribute);
		P_GET_STRUCT(FAttrCategory,Z_Param_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInt32AttributesLibrary::CleanCategoryModifiers(Z_Param_Out_Attribute,Z_Param_Category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInt32AttributesLibrary::execCleanModifiers)
	{
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInt32AttributesLibrary::CleanModifiers(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInt32AttributesLibrary::execGetModifiedCategories)
	{
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_Attribute);
		P_GET_TARRAY_REF(FAttrCategory,Z_Param_Out_Categories);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInt32AttributesLibrary::GetModifiedCategories(Z_Param_Out_Attribute,Z_Param_Out_Categories);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInt32AttributesLibrary::execGetModifiers)
	{
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_Attribute);
		P_GET_STRUCT(FAttrCategory,Z_Param_Category);
		P_GET_TARRAY_REF(FAttrModifier,Z_Param_Out_Modifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInt32AttributesLibrary::GetModifiers(Z_Param_Out_Attribute,Z_Param_Category,Z_Param_Out_Modifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInt32AttributesLibrary::execRemoveModifier)
	{
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_Attribute);
		P_GET_STRUCT_REF(FAttrModifier,Z_Param_Out_Modifier);
		P_GET_STRUCT(FAttrCategory,Z_Param_Category);
		P_GET_UBOOL(Z_Param_bRemoveFromAllCategories);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInt32AttributesLibrary::RemoveModifier(Z_Param_Out_Attribute,Z_Param_Out_Modifier,Z_Param_Category,Z_Param_bRemoveFromAllCategories);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInt32AttributesLibrary::execAddModifier)
	{
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_Attribute);
		P_GET_STRUCT_REF(FAttrModifier,Z_Param_Out_Modifier);
		P_GET_STRUCT(FAttrCategory,Z_Param_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInt32AttributesLibrary::AddModifier(Z_Param_Out_Attribute,Z_Param_Out_Modifier,Z_Param_Category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInt32AttributesLibrary::execSetBase)
	{
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_Attribute);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInt32AttributesLibrary::SetBase(Z_Param_Out_Attribute,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInt32AttributesLibrary::execGetBase)
	{
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UInt32AttributesLibrary::GetBase(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInt32AttributesLibrary::execConv_AttributeToString)
	{
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UInt32AttributesLibrary::Conv_AttributeToString(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInt32AttributesLibrary::execConv_AttributeToInt)
	{
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UInt32AttributesLibrary::Conv_AttributeToInt(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInt32AttributesLibrary::execGetValue)
	{
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UInt32AttributesLibrary::GetValue(Z_Param_Out_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInt32AttributesLibrary::execEquals)
	{
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_A);
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInt32AttributesLibrary::Equals(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInt32AttributesLibrary::execIsNot)
	{
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_A);
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInt32AttributesLibrary::IsNot(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInt32AttributesLibrary::execIs)
	{
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_A);
		P_GET_STRUCT_REF(FInt32Attr,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInt32AttributesLibrary::Is(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	void UInt32AttributesLibrary::StaticRegisterNativesUInt32AttributesLibrary()
	{
		UClass* Class = UInt32AttributesLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddModifier", &UInt32AttributesLibrary::execAddModifier },
			{ "BindOnModified", &UInt32AttributesLibrary::execBindOnModified },
			{ "Break", &UInt32AttributesLibrary::execBreak },
			{ "CleanCategoryModifiers", &UInt32AttributesLibrary::execCleanCategoryModifiers },
			{ "CleanModifiers", &UInt32AttributesLibrary::execCleanModifiers },
			{ "Conv_AttributeToInt", &UInt32AttributesLibrary::execConv_AttributeToInt },
			{ "Conv_AttributeToString", &UInt32AttributesLibrary::execConv_AttributeToString },
			{ "Equals", &UInt32AttributesLibrary::execEquals },
			{ "GetBase", &UInt32AttributesLibrary::execGetBase },
			{ "GetModifiedCategories", &UInt32AttributesLibrary::execGetModifiedCategories },
			{ "GetModifiers", &UInt32AttributesLibrary::execGetModifiers },
			{ "GetValue", &UInt32AttributesLibrary::execGetValue },
			{ "Is", &UInt32AttributesLibrary::execIs },
			{ "IsNot", &UInt32AttributesLibrary::execIsNot },
			{ "Make", &UInt32AttributesLibrary::execMake },
			{ "RemoveModifier", &UInt32AttributesLibrary::execRemoveModifier },
			{ "SetBase", &UInt32AttributesLibrary::execSetBase },
			{ "UnbindOnModified", &UInt32AttributesLibrary::execUnbindOnModified },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics
	{
		struct Int32AttributesLibrary_eventAddModifier_Parms
		{
			FInt32Attr Attribute;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventAddModifier_Parms, Category), Z_Construct_UScriptStruct_FAttrCategory, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::NewProp_Modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventAddModifier_Parms, Modifier), Z_Construct_UScriptStruct_FAttrModifier, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::NewProp_Modifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::NewProp_Modifier_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventAddModifier_Parms, Attribute), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::NewProp_Modifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Category" },
		{ "Category", "Attributes" },
		{ "Comment", "/**\n\x09 * Adds a modifier to an attribute\n\x09 * @param Attribute to be modified\n\x09 * @param Modifier to apply to the attribute\n\x09 * @param Category of the modifier (Optional)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
		{ "ToolTip", "Adds a modifier to an attribute\n@param Attribute to be modified\n@param Modifier to apply to the attribute\n@param Category of the modifier (Optional)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32AttributesLibrary, nullptr, "AddModifier", nullptr, nullptr, sizeof(Int32AttributesLibrary_eventAddModifier_Parms), Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInt32AttributesLibrary_BindOnModified_Statics
	{
		struct Int32AttributesLibrary_eventBindOnModified_Parms
		{
			FInt32Attr Attribute;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_BindOnModified_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_BindOnModified_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventBindOnModified_Parms, Event), Z_Construct_UDelegateFunction_Attributes_Int32ModifiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_BindOnModified_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_BindOnModified_Statics::NewProp_Event_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_BindOnModified_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventBindOnModified_Parms, Attribute), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32AttributesLibrary_BindOnModified_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_BindOnModified_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_BindOnModified_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_BindOnModified_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Category" },
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32AttributesLibrary_BindOnModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32AttributesLibrary, nullptr, "BindOnModified", nullptr, nullptr, sizeof(Int32AttributesLibrary_eventBindOnModified_Parms), Z_Construct_UFunction_UInt32AttributesLibrary_BindOnModified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_BindOnModified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_BindOnModified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_BindOnModified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32AttributesLibrary_BindOnModified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32AttributesLibrary_BindOnModified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInt32AttributesLibrary_Break_Statics
	{
		struct Int32AttributesLibrary_eventBreak_Parms
		{
			FInt32Attr IntAttr;
			int32 BaseValue;
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntAttr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntAttr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_Break_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventBreak_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_Break_Statics::NewProp_BaseValue = { "BaseValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventBreak_Parms, BaseValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_Break_Statics::NewProp_IntAttr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_Break_Statics::NewProp_IntAttr = { "IntAttr", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventBreak_Parms, IntAttr), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_Break_Statics::NewProp_IntAttr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Break_Statics::NewProp_IntAttr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32AttributesLibrary_Break_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_Break_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_Break_Statics::NewProp_BaseValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_Break_Statics::NewProp_IntAttr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_Break_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32AttributesLibrary_Break_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32AttributesLibrary, nullptr, "Break", nullptr, nullptr, sizeof(Int32AttributesLibrary_eventBreak_Parms), Z_Construct_UFunction_UInt32AttributesLibrary_Break_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Break_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_Break_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Break_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32AttributesLibrary_Break()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32AttributesLibrary_Break_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInt32AttributesLibrary_CleanCategoryModifiers_Statics
	{
		struct Int32AttributesLibrary_eventCleanCategoryModifiers_Parms
		{
			FInt32Attr Attribute;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_CleanCategoryModifiers_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_CleanCategoryModifiers_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventCleanCategoryModifiers_Parms, Category), Z_Construct_UScriptStruct_FAttrCategory, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_CleanCategoryModifiers_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_CleanCategoryModifiers_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_CleanCategoryModifiers_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventCleanCategoryModifiers_Parms, Attribute), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32AttributesLibrary_CleanCategoryModifiers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_CleanCategoryModifiers_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_CleanCategoryModifiers_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_CleanCategoryModifiers_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Category" },
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32AttributesLibrary_CleanCategoryModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32AttributesLibrary, nullptr, "CleanCategoryModifiers", nullptr, nullptr, sizeof(Int32AttributesLibrary_eventCleanCategoryModifiers_Parms), Z_Construct_UFunction_UInt32AttributesLibrary_CleanCategoryModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_CleanCategoryModifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_CleanCategoryModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_CleanCategoryModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32AttributesLibrary_CleanCategoryModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32AttributesLibrary_CleanCategoryModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInt32AttributesLibrary_CleanModifiers_Statics
	{
		struct Int32AttributesLibrary_eventCleanModifiers_Parms
		{
			FInt32Attr Attribute;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_CleanModifiers_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventCleanModifiers_Parms, Attribute), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32AttributesLibrary_CleanModifiers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_CleanModifiers_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_CleanModifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/**\n\x09 * Remove all modifiers of an attribute\n\x09 * @param Attribute to clean\n\x09 */" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
		{ "ToolTip", "Remove all modifiers of an attribute\n@param Attribute to clean" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32AttributesLibrary_CleanModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32AttributesLibrary, nullptr, "CleanModifiers", nullptr, nullptr, sizeof(Int32AttributesLibrary_eventCleanModifiers_Parms), Z_Construct_UFunction_UInt32AttributesLibrary_CleanModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_CleanModifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_CleanModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_CleanModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32AttributesLibrary_CleanModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32AttributesLibrary_CleanModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToInt_Statics
	{
		struct Int32AttributesLibrary_eventConv_AttributeToInt_Parms
		{
			FInt32Attr Attribute;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventConv_AttributeToInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToInt_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToInt_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventConv_AttributeToInt_Parms, Attribute), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToInt_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToInt_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToInt_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToInt_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Attributes" },
		{ "Comment", "// Get final value\n" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToInt (Int32Attr)" },
		{ "Keywords", "get value int" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
		{ "ToolTip", "Get final value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32AttributesLibrary, nullptr, "Conv_AttributeToInt", nullptr, nullptr, sizeof(Int32AttributesLibrary_eventConv_AttributeToInt_Parms), Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToString_Statics
	{
		struct Int32AttributesLibrary_eventConv_AttributeToString_Parms
		{
			FInt32Attr Attribute;
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventConv_AttributeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventConv_AttributeToString_Parms, Attribute), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToString_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToString_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Attributes" },
		{ "Comment", "// Get final value as String\n" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (Int32Attr)" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
		{ "ToolTip", "Get final value as String" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32AttributesLibrary, nullptr, "Conv_AttributeToString", nullptr, nullptr, sizeof(Int32AttributesLibrary_eventConv_AttributeToString_Parms), Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics
	{
		struct Int32AttributesLibrary_eventEquals_Parms
		{
			FInt32Attr A;
			FInt32Attr B;
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
	void Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Int32AttributesLibrary_eventEquals_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Int32AttributesLibrary_eventEquals_Parms), &Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventEquals_Parms, B), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventEquals_Parms, A), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** @return true if two attributes have the same base value */" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
		{ "ToolTip", "@return true if two attributes have the same base value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32AttributesLibrary, nullptr, "Equals", nullptr, nullptr, sizeof(Int32AttributesLibrary_eventEquals_Parms), Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32AttributesLibrary_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32AttributesLibrary_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInt32AttributesLibrary_GetBase_Statics
	{
		struct Int32AttributesLibrary_eventGetBase_Parms
		{
			FInt32Attr Attribute;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_GetBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventGetBase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_GetBase_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_GetBase_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventGetBase_Parms, Attribute), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_GetBase_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_GetBase_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32AttributesLibrary_GetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_GetBase_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_GetBase_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_GetBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/**\n\x09 * Get the base value of an attribute\n\x09 * @param Attribute to get base value from\n\x09 * @return the base value\n\x09 */" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
		{ "ToolTip", "Get the base value of an attribute\n@param Attribute to get base value from\n@return the base value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32AttributesLibrary_GetBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32AttributesLibrary, nullptr, "GetBase", nullptr, nullptr, sizeof(Int32AttributesLibrary_eventGetBase_Parms), Z_Construct_UFunction_UInt32AttributesLibrary_GetBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_GetBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_GetBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_GetBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32AttributesLibrary_GetBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32AttributesLibrary_GetBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories_Statics
	{
		struct Int32AttributesLibrary_eventGetModifiedCategories_Parms
		{
			FInt32Attr Attribute;
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventGetModifiedCategories_Parms, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttrCategory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventGetModifiedCategories_Parms, Attribute), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories_Statics::NewProp_Categories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories_Statics::NewProp_Categories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/**\n\x09 * Get all categories where the attribute has any modifiers\n\x09 * @param Attribute to get categories from\n\x09 * @return Categories of an attribute as an Array\n\x09 */" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
		{ "ToolTip", "Get all categories where the attribute has any modifiers\n@param Attribute to get categories from\n@return Categories of an attribute as an Array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32AttributesLibrary, nullptr, "GetModifiedCategories", nullptr, nullptr, sizeof(Int32AttributesLibrary_eventGetModifiedCategories_Parms), Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics
	{
		struct Int32AttributesLibrary_eventGetModifiers_Parms
		{
			FInt32Attr Attribute;
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventGetModifiers_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttrModifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventGetModifiers_Parms, Category), Z_Construct_UScriptStruct_FAttrCategory, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventGetModifiers_Parms, Attribute), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::NewProp_Modifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::NewProp_Modifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Category" },
		{ "Category", "Attributes" },
		{ "Comment", "/**\n\x09 * Get all modifiers of a category, base mods will be returned if category is None\n\x09 * @param Attribute to get modifiers from\n\x09 * @return Modifiers of a category as an Array\n\x09 */" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
		{ "ToolTip", "Get all modifiers of a category, base mods will be returned if category is None\n@param Attribute to get modifiers from\n@return Modifiers of a category as an Array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32AttributesLibrary, nullptr, "GetModifiers", nullptr, nullptr, sizeof(Int32AttributesLibrary_eventGetModifiers_Parms), Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInt32AttributesLibrary_GetValue_Statics
	{
		struct Int32AttributesLibrary_eventGetValue_Parms
		{
			FInt32Attr Attribute;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_GetValue_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_GetValue_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventGetValue_Parms, Attribute), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_GetValue_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_GetValue_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32AttributesLibrary_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_GetValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_GetValue_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/**\n\x09 * Get the final value of an attribute\n\x09 * @param Attribute to get value from\n\x09 * @return the final value\n\x09 */" },
		{ "Keywords", "get value int total final" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
		{ "ToolTip", "Get the final value of an attribute\n@param Attribute to get value from\n@return the final value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32AttributesLibrary_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32AttributesLibrary, nullptr, "GetValue", nullptr, nullptr, sizeof(Int32AttributesLibrary_eventGetValue_Parms), Z_Construct_UFunction_UInt32AttributesLibrary_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32AttributesLibrary_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32AttributesLibrary_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics
	{
		struct Int32AttributesLibrary_eventIs_Parms
		{
			FInt32Attr A;
			FInt32Attr B;
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
	void Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Int32AttributesLibrary_eventIs_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Int32AttributesLibrary_eventIs_Parms), &Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventIs_Parms, B), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventIs_Parms, A), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** @return true when two Attributes are the same */" },
		{ "CompactNodeTitle", "==" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
		{ "ToolTip", "@return true when two Attributes are the same" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32AttributesLibrary, nullptr, "Is", nullptr, nullptr, sizeof(Int32AttributesLibrary_eventIs_Parms), Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32AttributesLibrary_Is()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32AttributesLibrary_Is_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics
	{
		struct Int32AttributesLibrary_eventIsNot_Parms
		{
			FInt32Attr A;
			FInt32Attr B;
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
	void Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Int32AttributesLibrary_eventIsNot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Int32AttributesLibrary_eventIsNot_Parms), &Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventIsNot_Parms, B), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventIsNot_Parms, A), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** @return true when two Attributes are not the same */" },
		{ "CompactNodeTitle", "!=" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
		{ "ToolTip", "@return true when two Attributes are not the same" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32AttributesLibrary, nullptr, "IsNot", nullptr, nullptr, sizeof(Int32AttributesLibrary_eventIsNot_Parms), Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32AttributesLibrary_IsNot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32AttributesLibrary_IsNot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInt32AttributesLibrary_Make_Statics
	{
		struct Int32AttributesLibrary_eventMake_Parms
		{
			int32 BaseValue;
			FInt32Attr IntAttr;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntAttr;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_Make_Statics::NewProp_IntAttr = { "IntAttr", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventMake_Parms, IntAttr), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_Make_Statics::NewProp_BaseValue = { "BaseValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventMake_Parms, BaseValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32AttributesLibrary_Make_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_Make_Statics::NewProp_IntAttr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_Make_Statics::NewProp_BaseValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_Make_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32AttributesLibrary_Make_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32AttributesLibrary, nullptr, "Make", nullptr, nullptr, sizeof(Int32AttributesLibrary_eventMake_Parms), Z_Construct_UFunction_UInt32AttributesLibrary_Make_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Make_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14482401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_Make_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_Make_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32AttributesLibrary_Make()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32AttributesLibrary_Make_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics
	{
		struct Int32AttributesLibrary_eventRemoveModifier_Parms
		{
			FInt32Attr Attribute;
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
	void Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Int32AttributesLibrary_eventRemoveModifier_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Int32AttributesLibrary_eventRemoveModifier_Parms), &Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_bRemoveFromAllCategories_SetBit(void* Obj)
	{
		((Int32AttributesLibrary_eventRemoveModifier_Parms*)Obj)->bRemoveFromAllCategories = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_bRemoveFromAllCategories = { "bRemoveFromAllCategories", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Int32AttributesLibrary_eventRemoveModifier_Parms), &Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_bRemoveFromAllCategories_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventRemoveModifier_Parms, Category), Z_Construct_UScriptStruct_FAttrCategory, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_Modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventRemoveModifier_Parms, Modifier), Z_Construct_UScriptStruct_FAttrModifier, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_Modifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_Modifier_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventRemoveModifier_Parms, Attribute), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_bRemoveFromAllCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_Modifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Category,bRemoveFromAllCategories" },
		{ "Category", "Attributes" },
		{ "Comment", "/**\n\x09 * Removes a modifier from an attribute\n\x09 * @param Attribute to be modified\n\x09 * @param Modifier to remove from the attribute\n\x09 * @param Category of the modifier (Optional)\n\x09 * @return true if any modifier was removed\n\x09 */" },
		{ "CPP_Default_bRemoveFromAllCategories", "false" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
		{ "ToolTip", "Removes a modifier from an attribute\n@param Attribute to be modified\n@param Modifier to remove from the attribute\n@param Category of the modifier (Optional)\n@return true if any modifier was removed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32AttributesLibrary, nullptr, "RemoveModifier", nullptr, nullptr, sizeof(Int32AttributesLibrary_eventRemoveModifier_Parms), Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInt32AttributesLibrary_SetBase_Statics
	{
		struct Int32AttributesLibrary_eventSetBase_Parms
		{
			FInt32Attr Attribute;
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_SetBase_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventSetBase_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_SetBase_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventSetBase_Parms, Attribute), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32AttributesLibrary_SetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_SetBase_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_SetBase_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_SetBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/**\n\x09 * Set the base value of an attribute\n\x09 * @param Attribute to set base value at\n\x09 * @param Value to set as the base value\n\x09 */" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
		{ "ToolTip", "Set the base value of an attribute\n@param Attribute to set base value at\n@param Value to set as the base value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32AttributesLibrary_SetBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32AttributesLibrary, nullptr, "SetBase", nullptr, nullptr, sizeof(Int32AttributesLibrary_eventSetBase_Parms), Z_Construct_UFunction_UInt32AttributesLibrary_SetBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_SetBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_SetBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_SetBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32AttributesLibrary_SetBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32AttributesLibrary_SetBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInt32AttributesLibrary_UnbindOnModified_Statics
	{
		struct Int32AttributesLibrary_eventUnbindOnModified_Parms
		{
			FInt32Attr Attribute;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_UnbindOnModified_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_UnbindOnModified_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventUnbindOnModified_Parms, Event), Z_Construct_UDelegateFunction_Attributes_Int32ModifiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_UnbindOnModified_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_UnbindOnModified_Statics::NewProp_Event_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInt32AttributesLibrary_UnbindOnModified_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32AttributesLibrary_eventUnbindOnModified_Parms, Attribute), Z_Construct_UScriptStruct_FInt32Attr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32AttributesLibrary_UnbindOnModified_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_UnbindOnModified_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32AttributesLibrary_UnbindOnModified_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32AttributesLibrary_UnbindOnModified_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Category" },
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32AttributesLibrary_UnbindOnModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32AttributesLibrary, nullptr, "UnbindOnModified", nullptr, nullptr, sizeof(Int32AttributesLibrary_eventUnbindOnModified_Parms), Z_Construct_UFunction_UInt32AttributesLibrary_UnbindOnModified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_UnbindOnModified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32AttributesLibrary_UnbindOnModified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInt32AttributesLibrary_UnbindOnModified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32AttributesLibrary_UnbindOnModified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32AttributesLibrary_UnbindOnModified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInt32AttributesLibrary_NoRegister()
	{
		return UInt32AttributesLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UInt32AttributesLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInt32AttributesLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Attributes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInt32AttributesLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInt32AttributesLibrary_AddModifier, "AddModifier" }, // 3902104885
		{ &Z_Construct_UFunction_UInt32AttributesLibrary_BindOnModified, "BindOnModified" }, // 3144666636
		{ &Z_Construct_UFunction_UInt32AttributesLibrary_Break, "Break" }, // 429748740
		{ &Z_Construct_UFunction_UInt32AttributesLibrary_CleanCategoryModifiers, "CleanCategoryModifiers" }, // 1056655117
		{ &Z_Construct_UFunction_UInt32AttributesLibrary_CleanModifiers, "CleanModifiers" }, // 2693315968
		{ &Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToInt, "Conv_AttributeToInt" }, // 1595470455
		{ &Z_Construct_UFunction_UInt32AttributesLibrary_Conv_AttributeToString, "Conv_AttributeToString" }, // 2847779131
		{ &Z_Construct_UFunction_UInt32AttributesLibrary_Equals, "Equals" }, // 4049220949
		{ &Z_Construct_UFunction_UInt32AttributesLibrary_GetBase, "GetBase" }, // 1373327786
		{ &Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiedCategories, "GetModifiedCategories" }, // 401569764
		{ &Z_Construct_UFunction_UInt32AttributesLibrary_GetModifiers, "GetModifiers" }, // 2787561123
		{ &Z_Construct_UFunction_UInt32AttributesLibrary_GetValue, "GetValue" }, // 1907996226
		{ &Z_Construct_UFunction_UInt32AttributesLibrary_Is, "Is" }, // 676208211
		{ &Z_Construct_UFunction_UInt32AttributesLibrary_IsNot, "IsNot" }, // 2396038072
		{ &Z_Construct_UFunction_UInt32AttributesLibrary_Make, "Make" }, // 2027444268
		{ &Z_Construct_UFunction_UInt32AttributesLibrary_RemoveModifier, "RemoveModifier" }, // 3757654973
		{ &Z_Construct_UFunction_UInt32AttributesLibrary_SetBase, "SetBase" }, // 2800255897
		{ &Z_Construct_UFunction_UInt32AttributesLibrary_UnbindOnModified, "UnbindOnModified" }, // 3440504705
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInt32AttributesLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Int32AttributesLibrary.h" },
		{ "ModuleRelativePath", "Public/Int32AttributesLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInt32AttributesLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInt32AttributesLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInt32AttributesLibrary_Statics::ClassParams = {
		&UInt32AttributesLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInt32AttributesLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInt32AttributesLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInt32AttributesLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInt32AttributesLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInt32AttributesLibrary, 1296447213);
	template<> ATTRIBUTES_API UClass* StaticClass<UInt32AttributesLibrary>()
	{
		return UInt32AttributesLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInt32AttributesLibrary(Z_Construct_UClass_UInt32AttributesLibrary, &UInt32AttributesLibrary::StaticClass, TEXT("/Script/Attributes"), TEXT("UInt32AttributesLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInt32AttributesLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
