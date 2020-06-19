// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "Conditions/QC_AsyncMemory.h"

UQC_AsyncMemory::UQC_AsyncMemory()
	: Super(),
	bUseTotalAmount(true),
	Amount(1),
	TotalAmount(1)
{}

void UQC_AsyncMemory::Check()
{
	UQuestManagerComponent* Manager{ GetQuestManager() };
	if(!Manager || Memory.IsNull())
	{
		Complete(EConditionState::Failed);
		return;
	}

	if (CompleteIfNeeded())
		return;

	Manager->OnMemoryRegistered.RemoveAll(this);
	Manager->OnMemoryRegistered.AddDynamic(this, &UQC_AsyncMemory::OnMemoryRegistered);
}

void UQC_AsyncMemory::CancelCheck()
{
	UQuestManagerComponent* Manager{ GetQuestManager() };
	if (Manager)
	{
		Manager->OnMemoryRegistered.RemoveAll(this);
	}
	Super::CancelCheck();
}

void UQC_AsyncMemory::OnMemoryRegistered(const TSoftObjectPtr<UQuestMemory> NewMemory, int32 AddedAmount)
{
	if (Memory == NewMemory)
	{
		if(!bUseTotalAmount)
			CurrentAmount += AddedAmount;

		CompleteIfNeeded();
	}
}

bool UQC_AsyncMemory::CompleteIfNeeded()
{
	UQuestManagerComponent* Manager{ GetQuestManager() };

	bool bShouldComplete = false;

	if (bUseTotalAmount)
	{
		const int32 TotalMemoryCount = Manager->GetMemoryCount(Memory);

		bShouldComplete = TotalMemoryCount >= TotalAmount;
	}
	else
	{
		bShouldComplete = CurrentAmount >= Amount;
	}

	if(bShouldComplete)
	{
		//Unbind the event
		Manager->OnMemoryRegistered.RemoveDynamic(this, &UQC_AsyncMemory::OnMemoryRegistered);

		Complete(EConditionState::Success);
	}
	return bShouldComplete;
}

FText UQC_AsyncMemory::GetDescription() const
{
	FString Guide = FString::Printf(TEXT("When %s is registered"), *Memory.GetAssetName());

	const int32 DesiredAmount = bUseTotalAmount ? TotalAmount : Amount;
	if (DesiredAmount > 1)
		Guide.Append(FString::Printf(TEXT(" %i times"), DesiredAmount));

	if (!bUseTotalAmount)
		Guide.Append(" since check started");

	return FText::FromString(Guide);
}
