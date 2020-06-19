// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "QuestTextArgument.generated.h"


UENUM()
enum class EQuestArgGender : uint8
{
	Masculine,
	Feminine,
	Neuter,
};

UENUM()
enum class EQuestArgType : uint8
{
	Int,
	Float,
	Text,
	Gender
};


/**
 * Exposes Text Format Argument to Blueprints
 */
USTRUCT(BlueprintType)
struct FQuestTextArgument
{
	GENERATED_USTRUCT_BODY()

	FQuestTextArgument() : Type(EQuestArgType::Int) {}
	FQuestTextArgument(int32 InInt)              : Type(EQuestArgType::Int),    IntValue(InInt)       {}
	FQuestTextArgument(float InFloat)            : Type(EQuestArgType::Float),  FloatValue(InFloat)   {}
	FQuestTextArgument(FText InText)             : Type(EQuestArgType::Text),   TextValue(InText)     {}
	FQuestTextArgument(EQuestArgGender InGender) : Type(EQuestArgType::Gender), GenderValue(InGender) {}


	UPROPERTY(EditAnywhere, Category = Type)
	EQuestArgType Type;

	UPROPERTY(EditAnywhere, Category = Value)
	int32 IntValue;

	UPROPERTY(EditAnywhere, Category = Value)
	float FloatValue;

	UPROPERTY(EditAnywhere, Category = Value)
	FText TextValue;

	UPROPERTY(EditAnywhere, Category = Value)
	EQuestArgGender GenderValue;

	FFormatArgumentValue GetArgument() const;
};