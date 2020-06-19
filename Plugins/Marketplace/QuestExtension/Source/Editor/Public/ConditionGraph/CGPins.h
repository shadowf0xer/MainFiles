// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphPin.h"

class FCGPins
{

public:

	FCGPins() {}

	static const FName PC_Exec;

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

	static FLinearColor GetPinTypeColor(const FEdGraphPinType& PinType);
	static bool ArePinTypesCompatible(const FEdGraphPinType& Output, const FEdGraphPinType& Input, const UClass* CallingContext = nullptr);
};
