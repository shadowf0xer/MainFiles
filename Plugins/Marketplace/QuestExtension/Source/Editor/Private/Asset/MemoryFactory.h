// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "Factories/Factory.h"
#include "MemoryFactory.generated.h"

UCLASS()
class UMemoryFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

	// UFactory interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory interface
};
