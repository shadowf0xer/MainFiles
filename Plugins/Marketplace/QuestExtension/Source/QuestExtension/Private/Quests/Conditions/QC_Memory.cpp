// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "Conditions/QC_Memory.h"

UQC_Memory::UQC_Memory()
	: Super(),
	RequiredAmount(1)
{}

void UQC_Memory::Check()
{
	if(!GetQuestManager() || Memory.IsNull())
	{
		Complete(EConditionState::Failed);
		return;
	}

	if (CompleteIfNeeded())
		return;

}

bool UQC_Memory::CompleteIfNeeded()
{
	check(GetQuestManager());

	const int32 CurrentMemoryCount = GetQuestManager()->GetMemoryCount(Memory);

	const bool bShouldComplete = CurrentMemoryCount >= RequiredAmount;

	if(bShouldComplete)
	{
		Complete(EConditionState::Success);
	}
	return bShouldComplete;
}

FText UQC_Memory::GetDescription() const
{
	FString Guide = FString::Printf(TEXT("When %s is registered"), *Memory.GetAssetName());

	if (RequiredAmount > 1)
		Guide.Append(FString::Printf(TEXT(" %i times"), RequiredAmount));

	return FText::FromString(Guide);
}
