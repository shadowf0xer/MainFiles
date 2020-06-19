// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QGNodes/Content/QGNode_Sequence.h"

#define LOCTEXT_NAMESPACE "QGNode_Sequence"


UQGNode_Sequence::UQGNode_Sequence()
	: Super()
{}

void UQGNode_Sequence::OnStart()
{
	if (SequenceActor.IsValid())
	{
		SequenceActor->SequencePlayer->Play();
		SequenceActor->SequencePlayer->OnStop.AddDynamic(this, &UQGNode_Sequence::OnSequenceStopped);
		SequenceActor->SequencePlayer->OnFinished.AddDynamic(this, &UQGNode_Sequence::OnSequenceStopped);
	}
	else
	{
		Finish(EQGNodeFinishReason::Fail);
	}
}

void UQGNode_Sequence::OnFinish(const EQGNodeFinishReason Reason)
{
	if (SequenceActor.IsValid())
	{
		if (Reason == EQGNodeFinishReason::Rejected)
		{
			// Node got rejected, stop sequence
			SequenceActor->SequencePlayer->Stop();
		}

		SequenceActor->SequencePlayer->OnStop.RemoveAll(this);
		SequenceActor->SequencePlayer->OnFinished.RemoveAll(this);
	}

	Super::OnFinish(Reason);
}

FText UQGNode_Sequence::GetTitle() const
{
	if (!DisplayName.IsNone())
		return FText::FromName(DisplayName);

#if WITH_EDITORONLY_DATA
	return FText::Format(LOCTEXT("Title", "Sequence: {0}"), FText::FromString(!SequenceAsset.IsNull() ? SequenceAsset.GetAssetName() : "None"));
#else
	return LOCTEXT("Title", "Play Sequence");
#endif //WITH_EDITORONLY_DATA
}

#if WITH_EDITORONLY_DATA
void UQGNode_Sequence::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.Property)
	{
		const FName MemberPropertyName = (PropertyChangedEvent.MemberProperty ? PropertyChangedEvent.MemberProperty->GetFName() : NAME_None);

		if (MemberPropertyName == GET_MEMBER_NAME_CHECKED(UQGNode_Sequence, SequenceActor))
		{
			// Cache asset for editor purposes
			SequenceAsset = SequenceActor.IsValid() ? SequenceActor->GetSequence() : nullptr;
		}
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif //WITH_EDITORONLY_DATA

void UQGNode_Sequence::OnSequenceStopped()
{
	Finish(EQGNodeFinishReason::Succeed);
}

#undef LOCTEXT_NAMESPACE
