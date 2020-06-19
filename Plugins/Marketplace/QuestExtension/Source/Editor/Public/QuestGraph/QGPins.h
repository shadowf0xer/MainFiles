// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphPin.h"

class FQGPins
{

public:

	FQGPins() {}

	static const FName PC_Exec;
	static const FName PC_Reject;

	/**
	* Checks to see if a pin is an execution pin.
	*
	* @param	Pin	The pin to check.
	* @return	true if it is an execution pin.
	*/
	static inline bool IsExecPin(const UEdGraphPin& Pin)
	{
		return Pin.PinType.PinCategory == PC_Exec;
	}

	/**
	* Checks to see if a pin is an reject pin.
	*
	* @param	Pin	The pin to check.
	* @return	true if it is an reject pin.
	*/
	static inline bool IsRejectPin(const UEdGraphPin& Pin)
	{
		return Pin.PinType.PinCategory == PC_Reject;
	}

	static FLinearColor GetPinTypeColor(const FEdGraphPinType& PinType);
	static bool ArePinTypesCompatible(const FEdGraphPinType& Output, const FEdGraphPinType& Input, const UClass* CallingContext = nullptr);
};
