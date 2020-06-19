// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestGraph/QuestGroupNode_Root.h"

#include <Framework/MultiBox/MultiBoxBuilder.h>
#include <GraphEditorSettings.h>
#include <ToolMenu.h>

#include "QuestGraphEditorCommands.h"

#define LOCTEXT_NAMESPACE "QuestGroupNode_Root"


/////////////////////////////////////////////////////
// UQuestGroupGraphNode_Root

const FName UQuestGroupNode_Root::RootOutputPin { " " };

UQuestGroupNode_Root::UQuestGroupNode_Root(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FLinearColor UQuestGroupNode_Root::GetNodeTitleColor() const
{
	return FColor(63, 61, 92);
}

FText UQuestGroupNode_Root::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("RootTitle", "Start");
}

FText UQuestGroupNode_Root::GetTooltipText() const
{
	return LOCTEXT("RootToolTip", "Where Quest Group starts");
}

void UQuestGroupNode_Root::GetNodeContextMenuActions(UToolMenu* Menu, UGraphNodeContextMenuContext* Context) const
{
	if (Context->Pin)
	{
	}
	else if (Context->Node)
	{
	}
}

void UQuestGroupNode_Root::AllocateDefaultPins()
{
	Super::AllocateDefaultPins();
	CreatePin(EGPD_Output, FQGPins::PC_Exec, RootOutputPin);
}

#undef LOCTEXT_NAMESPACE
