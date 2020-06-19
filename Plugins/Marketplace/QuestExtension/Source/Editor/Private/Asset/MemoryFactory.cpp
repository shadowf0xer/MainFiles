// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "MemoryFactory.h"
#include "QuestMemory.h"

#define LOCTEXT_NAMESPACE "Memory"


UMemoryFactory::UMemoryFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClass = UQuestMemory::StaticClass();

	//bText = true;
	bCreateNew = true;
	bEditorImport = true;
	bEditAfterNew = true;
}

UObject* UMemoryFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UQuestMemory>(InParent, UQuestMemory::StaticClass(), Name, Flags);
}

#undef LOCTEXT_NAMESPACE
