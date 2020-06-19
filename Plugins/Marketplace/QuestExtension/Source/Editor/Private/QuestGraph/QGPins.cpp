// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestGraph/QGPins.h"


#define LOCTEXT_NAMESPACE "QuestGraphPins"

const FName FQGPins::PC_Exec   { "Execute" };
const FName FQGPins::PC_Reject { "Reject"  };

FLinearColor FQGPins::GetPinTypeColor(const FEdGraphPinType& PinType)
{
	const FName Category = PinType.PinCategory;

	//TODO: Implement In Editor Configuration
	if (Category == PC_Exec)
	{
		return FLinearColor::White;
	}
	else if(Category == PC_Reject) 
	{
		return FLinearColor::Red;
	}

	//Unrecognized
	return FLinearColor::Gray;
}


bool FQGPins::ArePinTypesCompatible(const FEdGraphPinType& Output, const FEdGraphPinType& Input, const UClass* CallingContext)
{
	if (Output.PinCategory == Input.PinCategory)
	{
		if ((Output.PinSubCategory == Input.PinSubCategory)
			&& (Output.PinSubCategoryObject == Input.PinSubCategoryObject)
			&& (Output.PinSubCategoryMemberReference == Input.PinSubCategoryMemberReference))
		{
			return true;
		}
	}
	else if(Output.PinCategory == PC_Reject && Input.PinCategory == PC_Exec)
	{
		return true;
	}

	return false;
}

#undef LOCTEXT_NAMESPACE
