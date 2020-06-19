// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "CGPins.h"


#define LOCTEXT_NAMESPACE "ConditionGraphPins"

const FName FCGPins::PC_Exec { "Execute" };

FLinearColor FCGPins::GetPinTypeColor(const FEdGraphPinType& PinType)
{
	const FName Category = PinType.PinCategory;

	//TODO: Implement In Editor Configuration
	if (Category == PC_Exec)
	{
		return FLinearColor::White;
	}

	//Unrecognized
	return FLinearColor::Gray;
}


bool FCGPins::ArePinTypesCompatible(const FEdGraphPinType& Output, const FEdGraphPinType& Input, const UClass* CallingContext)
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

	return false;
}

#undef LOCTEXT_NAMESPACE
