// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "Factories/Factory.h"
#include "Quest.h"
#include "QuestFactory.generated.h"


UCLASS()
class UQuestFactory : public UFactory
{
	GENERATED_UCLASS_BODY()


	UPROPERTY(EditAnywhere, Category = ItemAsset)
	TSubclassOf<UQuest> QuestClass;


	// UFactory interface
	/** For selecting a custom quest subclass*/
	//virtual bool ConfigureProperties() override;

	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory interface
};
