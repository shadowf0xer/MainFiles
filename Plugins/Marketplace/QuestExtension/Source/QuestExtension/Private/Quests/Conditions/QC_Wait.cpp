// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "Conditions/QC_Wait.h"

UQC_Wait::UQC_Wait()
	: Super(),
	Delay(1.0f)
{}

void UQC_Wait::Check()
{
	if(Delay <= 0.f)
	{
		Complete(EConditionState::Success);
		return;
	}

	bWantsToTick = true;
	TickRate = Delay;
}

void UQC_Wait::OnTick(float DeltaTime)
{
	//Delay Tick finished
	Complete(EConditionState::Success);
}

FText UQC_Wait::GetDescription() const
{
	if (GetState() == EConditionState::Running)
	{
		return FText::Format(NSLOCTEXT("WaitCondition", "WaitDescriptionProgress", "{0} seconds left"), FText::AsNumber(Delay));
	}
	return FText::Format(NSLOCTEXT("WaitCondition", "WaitDescription", "{0} seconds"), FText::AsNumber(Delay));
}
