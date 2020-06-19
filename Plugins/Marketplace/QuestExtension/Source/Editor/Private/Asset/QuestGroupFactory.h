// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "Factories/Factory.h"
#include "QuestGroup.h"
#include "Quest.h"

#include "QuestGroupFactory.generated.h"


UCLASS()
class UQuestGroupFactory : public UFactory
{
	GENERATED_BODY()

	UQuestGroupFactory();


	UPROPERTY(EditAnywhere, Category = ItemAsset)
	TSubclassOf<UQuest> QuestClass;


	// UFactory interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory interface
};
