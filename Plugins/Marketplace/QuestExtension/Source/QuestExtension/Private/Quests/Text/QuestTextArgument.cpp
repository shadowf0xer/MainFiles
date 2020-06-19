// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "Text/QuestTextArgument.h"

FFormatArgumentValue FQuestTextArgument::GetArgument() const
{
	switch (Type)
	{
	case EQuestArgType::Int:
		return { IntValue };
	case EQuestArgType::Float:
		return { FloatValue };
	case EQuestArgType::Text:
		return { TextValue };
	case EQuestArgType::Gender:
		return { (ETextGender)GenderValue };
	default:
		return {};
	}
}
