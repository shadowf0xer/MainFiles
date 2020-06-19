// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestGraph/QuestGroupNode_Base.h"
#include "QuestGraph/QuestGroupGraphSchema.h"

#define LOCTEXT_NAMESPACE "QuestGroupNode_Base"


//////////////////////////////////////////////////////////////////////////
// QuestGroupNode_Base

UQuestGroupNode_Base::UQuestGroupNode_Base( const FObjectInitializer& ObjectInitializer )
	: Super( ObjectInitializer )
{
}

FLinearColor UQuestGroupNode_Base::GetNodeTitleColor() const
{
	return FColor(69, 104, 209);
}

void UQuestGroupNode_Base::AllocateDefaultPins()
{}

bool UQuestGroupNode_Base::CanCreateUnderSpecifiedSchema(const UEdGraphSchema* Schema) const
{
	return Schema->IsA<UQuestGroupGraphSchema>() && Super::CanCreateUnderSpecifiedSchema(Schema);
}

#undef LOCTEXT_NAMESPACE
