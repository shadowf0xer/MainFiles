// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QGNodes/Content/QGNode_QuestFromAsset.h"
#include "QuestExtensionModule.h"
#include "QuestManagerComponent.h"


#define LOCTEXT_NAMESPACE "QGNode_QuestFromAsset"

UQGNode_QuestFromAsset::UQGNode_QuestFromAsset()
	: Super()
{
	AddEvent({ "Completed" });
	AddEvent({ "Failed" });
}

FText UQGNode_QuestFromAsset::GetTitle() const
{
	if (!DisplayName.IsNone())
		return FText::FromName(DisplayName);

	const FText OptionalTitle = bIsOptional ? LOCTEXT("OptionalTitle", "(Optional)") : FText::GetEmpty();
	return FText::Format(LOCTEXT("Title", "Quest {0}: {1}"), OptionalTitle, QuestAsset ? QuestAsset->GetTitle() : LOCTEXT("TitleNoQuest", "None"));
}

void UQGNode_QuestFromAsset::OnStart()
{
	UQuestManagerComponent* Manager = GetQuestGroup()->GetManager();

	// Nodes should only execute on runtime and attached to a manager!
	check(Manager);

	if (!QuestAsset)
	{
		UE_LOG(LogNarrative, Warning, TEXT("Quest Node tried to start a null Quest"));
		Finish(EQGNodeFinishReason::Fail);
		return;
	}

	const FRuntimeQuest& RunningQuest = Manager->StartQuest(QuestAsset, GetQuestGroup());
	if (!RunningQuest.IsValid())
	{
		Finish(EQGNodeFinishReason::Fail);
		return;
	}

	//AddObserver
	RunningQuest.GetScript()->OnFinish.AddDynamic(this, &UQGNode_QuestFromAsset::OnQuestFinished);
}

void UQGNode_QuestFromAsset::OnFinish(const EQGNodeFinishReason Result)
{
	UQuestManagerComponent* Manager = GetQuestGroup()->GetManager();
	if (!Manager)
		return;

	int32 I;
	if (Result == EQGNodeFinishReason::Rejected ||
		Manager->GetQuestStateAndIndex(QuestAsset, I) == EQuestCompletionState::InProgress)
	{

		//If this node was rejected or quest is still running , finish quest failing
		Manager->FinishQuest(QuestAsset->GetAsset(), EQuestCompletionState::Failed);
	}
}

void UQGNode_QuestFromAsset::OnQuestFinished(const EQuestCompletionState Result)
{
	if(Result == EQuestCompletionState::Success)
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
FLinearColor UQGNode_QuestFromAsset::GetTitleColor() const
{
	FLinearColor Color = FColor(244, 175, 65);

	if (QuestAsset && QuestAsset->IsA<UQuestGroup>())
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
