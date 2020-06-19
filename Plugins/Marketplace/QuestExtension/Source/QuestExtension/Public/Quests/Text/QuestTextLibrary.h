// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "QuestTextArgument.h"
//#include "TextProperty.h"
#include "QuestTextLibrary.generated.h"

/**
 *
 */
UCLASS()
class QUESTEXTENSION_API UQuestTextLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


	/** Converts a float value to an argument */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Argument (float)", CompactNodeTitle = "->", BlueprintAutocast), Category = "Quests|Argument")
	static FORCEINLINE FQuestTextArgument Conv_FloatToArgument(float InFloat)
	{ return { InFloat }; }

	/** Converts an integer value to an argument */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Argument (int)", CompactNodeTitle = "->", BlueprintAutocast), Category = "Quests|Argument")
	static FQuestTextArgument Conv_IntToArgument(int32 InInt)
	{ return { InInt }; }

	/** Converts a text value to an argument */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Argument (text)", CompactNodeTitle = "->", BlueprintAutocast), Category = "Quests|Argument")
	static FQuestTextArgument Conv_TextToArgument(FText InText)
	{ return { InText }; }

	/** Converts a gender value to an argument */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Argument (gender)", CompactNodeTitle = "->", BlueprintAutocast), Category = "Quests|Argument")
	static FQuestTextArgument Conv_GenderToArgument(EQuestArgGender InGender)
	{ return { InGender }; }
};
