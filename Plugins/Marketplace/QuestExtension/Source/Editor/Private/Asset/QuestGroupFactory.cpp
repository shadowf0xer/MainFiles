// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestGroupFactory.h"

#define LOCTEXT_NAMESPACE "QuestGroupFactory"


UQuestGroupFactory::UQuestGroupFactory()
	: Super()
{
	SupportedClass = UQuestGroup::StaticClass();

	//bText = true;
	bCreateNew = true;
	bEditorImport = true;
	bEditAfterNew = true;
}

UObject* UQuestGroupFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	// if we have no asset class, use the passed-in class instead
	check(Class == UQuestGroup::StaticClass() || Class->IsChildOf(UQuestGroup::StaticClass()));
	return NewObject<UQuestGroup>(InParent, Class, Name, Flags);
}

#undef LOCTEXT_NAMESPACE
