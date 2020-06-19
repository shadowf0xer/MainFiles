// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QGNodes/Content/QGNode_Quest.h"
#include "QuestExtensionModule.h"
#include "QuestGroup.h"
#include "QuestManagerComponent.h"


#define LOCTEXT_NAMESPACE "QGNode_Quest"

UQGNode_Quest::UQGNode_Quest()
	: Super()
{
	AddEvent({ "Completed" });
	AddEvent({ "Failed" });
}

FText UQGNode_Quest::GetTitle() const
{
	if (!DisplayName.IsNone())
		return FText::FromName(DisplayName);

	const FText OptionalTitle = bIsOptional ? LOCTEXT("OptionalTitle", "(Optional)") : FText::GetEmpty();
	return FText::Format(LOCTEXT("Title", "Quest {0}: {1}"), OptionalTitle, Quest? Quest->GetTitle() : LOCTEXT("TitleNoQuest", "None"));
}

void UQGNode_Quest::OnStart()
{
	UQuestManagerComponent* Manager = GetQuestGroup()->GetManager();

	// Nodes should only execute on runtime and attached to a manager!
	check(Manager);

	if (!Quest)
	{
		UE_LOG(LogNarrative, Warning, TEXT("Quest Node tried to start a null Quest"));
		Finish(EQGNodeFinishReason::Fail);
		return;
	}

	const FRuntimeQuest& RunningQuest = Manager->StartQuest(Quest);
	if (!RunningQuest.IsValid())
	{
		Finish(EQGNodeFinishReason::Fail);
		return;
	}

	//Add Observer
	RunningQuest.GetScript()->OnFinish.AddDynamic(this, &UQGNode_Quest::OnQuestFinished);
}

void UQGNode_Quest::OnFinish(const EQGNodeFinishReason Result)
{
	UQuestManagerComponent* Manager = GetQuestGroup()->GetManager();
	if (!Manager)
		return;

	//Clean old binding
	if (UQuestBase* RunningQuest = Manager->GetQuestScript(Quest))
	{
		RunningQuest->OnFinish.RemoveDynamic(this, &UQGNode_Quest::OnQuestFinished);
	}

	int32 I;
	if (Result == EQGNodeFinishReason::Rejected ||
		Manager->GetQuestStateAndIndex(Quest, I) == EQuestCompletionState::InProgress)
	{

		//If this node was rejected or quest is still running , finish quest failing
		Manager->FinishQuest(Quest, EQuestCompletionState::Failed);
	}
}

void UQGNode_Quest::OnQuestFinished(const EQuestCompletionState Result)
{
	if (Result == EQuestCompletionState::Success)
	{
		CallEvent("Completed");
		Finish(EQGNodeFinishReason::Succeed);
	}
	else
	{
		CallEvent("Failed");
		Finish(EQGNodeFinishReason::Fail);
	}
}

#if WITH_EDITOR
FLinearColor UQGNode_Quest::GetTitleColor() const
{
	FLinearColor Color = FColor(244, 175, 65);

	if (Quest && Quest->IsA<UQuestGroup>())
		Color = FColor(244, 145, 65);

	if (bIsOptional)
	{
		//Keep same opacity
		const float Opacity = Color.A;

		Color = Color.Desaturate(0.5f);
		Color.A = Opacity;
	}

	return Color;
}
#endif //WITH_EDITOR

#undef LOCTEXT_NAMESPACE
