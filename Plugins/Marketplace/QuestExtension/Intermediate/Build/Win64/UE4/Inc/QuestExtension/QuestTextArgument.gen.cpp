// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/Text/QuestTextArgument.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestTextArgument() {}
// Cross Module References
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EQuestArgType();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EQuestArgGender();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTextArgument();
// End Cross Module References
	static UEnum* EQuestArgType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_QuestExtension_EQuestArgType, Z_Construct_UPackage__Script_QuestExtension(), TEXT("EQuestArgType"));
		}
		return Singleton;
	}
	template<> QUESTEXTENSION_API UEnum* StaticEnum<EQuestArgType>()
	{
		return EQuestArgType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuestArgType(EQuestArgType_StaticEnum, TEXT("/Script/QuestExtension"), TEXT("EQuestArgType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_QuestExtension_EQuestArgType_Hash() { return 3445481099U; }
	UEnum* Z_Construct_UEnum_QuestExtension_EQuestArgType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuestArgType"), 0, Get_Z_Construct_UEnum_QuestExtension_EQuestArgType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuestArgType::Int", (int64)EQuestArgType::Int },
				{ "EQuestArgType::Float", (int64)EQuestArgType::Float },
				{ "EQuestArgType::Text", (int64)EQuestArgType::Text },
				{ "EQuestArgType::Gender", (int64)EQuestArgType::Gender },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Float.Name", "EQuestArgType::Float" },
				{ "Gender.Name", "EQuestArgType::Gender" },
				{ "Int.Name", "EQuestArgType::Int" },
				{ "ModuleRelativePath", "Public/Quests/Text/QuestTextArgument.h" },
				{ "Text.Name", "EQuestArgType::Text" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_QuestExtension,
				nullptr,
				"EQuestArgType",
				"EQuestArgType",
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
	static UEnum* EQuestArgGender_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_QuestExtension_EQuestArgGender, Z_Construct_UPackage__Script_QuestExtension(), TEXT("EQuestArgGender"));
		}
		return Singleton;
	}
	template<> QUESTEXTENSION_API UEnum* StaticEnum<EQuestArgGender>()
	{
		return EQuestArgGender_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuestArgGender(EQuestArgGender_StaticEnum, TEXT("/Script/QuestExtension"), TEXT("EQuestArgGender"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_QuestExtension_EQuestArgGender_Hash() { return 162146143U; }
	UEnum* Z_Construct_UEnum_QuestExtension_EQuestArgGender()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuestArgGender"), 0, Get_Z_Construct_UEnum_QuestExtension_EQuestArgGender_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuestArgGender::Masculine", (int64)EQuestArgGender::Masculine },
				{ "EQuestArgGender::Feminine", (int64)EQuestArgGender::Feminine },
				{ "EQuestArgGender::Neuter", (int64)EQuestArgGender::Neuter },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Feminine.Name", "EQuestArgGender::Feminine" },
				{ "Masculine.Name", "EQuestArgGender::Masculine" },
				{ "ModuleRelativePath", "Public/Quests/Text/QuestTextArgument.h" },
				{ "Neuter.Name", "EQuestArgGender::Neuter" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_QuestExtension,
				nullptr,
				"EQuestArgGender",
				"EQuestArgGender",
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
class UScriptStruct* FQuestTextArgument::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FQuestTextArgument_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestTextArgument, Z_Construct_UPackage__Script_QuestExtension(), TEXT("QuestTextArgument"), sizeof(FQuestTextArgument), Get_Z_Construct_UScriptStruct_FQuestTextArgument_Hash());
	}
	return Singleton;
}
template<> QUESTEXTENSION_API UScriptStruct* StaticStruct<FQuestTextArgument>()
{
	return FQuestTextArgument::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestTextArgument(FQuestTextArgument::StaticStruct, TEXT("/Script/QuestExtension"), TEXT("QuestTextArgument"), false, nullptr, nullptr);
static struct FScriptStruct_QuestExtension_StaticRegisterNativesFQuestTextArgument
{
	FScriptStruct_QuestExtension_StaticRegisterNativesFQuestTextArgument()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestTextArgument")),new UScriptStruct::TCppStructOps<FQuestTextArgument>);
	}
} ScriptStruct_QuestExtension_StaticRegisterNativesFQuestTextArgument;
	struct Z_Construct_UScriptStruct_FQuestTextArgument_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenderValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GenderValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GenderValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TextValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTextArgument_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Exposes Text Format Argument to Blueprints\n */" },
		{ "ModuleRelativePath", "Public/Quests/Text/QuestTextArgument.h" },
		{ "ToolTip", "Exposes Text Format Argument to Blueprints" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestTextArgument>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_GenderValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Public/Quests/Text/QuestTextArgument.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_GenderValue = { "GenderValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestTextArgument, GenderValue), Z_Construct_UEnum_QuestExtension_EQuestArgGender, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_GenderValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_GenderValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_GenderValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_TextValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Public/Quests/Text/QuestTextArgument.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_TextValue = { "TextValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestTextArgument, TextValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_TextValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_TextValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_FloatValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Public/Quests/Text/QuestTextArgument.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestTextArgument, FloatValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_FloatValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_IntValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Public/Quests/Text/QuestTextArgument.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestTextArgument, IntValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_IntValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_IntValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "Public/Quests/Text/QuestTextArgument.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestTextArgument, Type), Z_Construct_UEnum_QuestExtension_EQuestArgType, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestTextArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_GenderValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_GenderValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_TextValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_FloatValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_IntValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTextArgument_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestTextArgument_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
		nullptr,
		&NewStructOps,
		"QuestTextArgument",
		sizeof(FQuestTextArgument),
		alignof(FQuestTextArgument),
		Z_Construct_UScriptStruct_FQuestTextArgument_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTextArgument_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTextArgument_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTextArgument_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestTextArgument()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestTextArgument_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestTextArgument"), sizeof(FQuestTextArgument), Get_Z_Construct_UScriptStruct_FQuestTextArgument_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestTextArgument_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestTextArgument_Hash() { return 116936437U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
