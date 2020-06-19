// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestFactory.h"

#include "ClassViewerModule.h"
#include "Kismet2/SClassPickerDialog.h"

#define LOCTEXT_NAMESPACE "QuestFactory"


UQuestFactory::UQuestFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClass = UQuest::StaticClass();

	//bText = true;
	bCreateNew = true;
	bEditorImport = true;
	bEditAfterNew = true;
}

UObject* UQuestFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	if (QuestClass != nullptr)
	{
		return NewObject<UQuest>(InParent, QuestClass, Name, Flags);
	}
	else
	{
		// if we have no asset class, use the passed-in class instead
		check(Class == UQuest::StaticClass() || Class->IsChildOf(UQuest::StaticClass()));
		return NewObject<UQuest>(InParent, Class, Name, Flags);
	}
}

#undef LOCTEXT_NAMESPACE
