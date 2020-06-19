// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Net/UnrealNetwork.h"

#include "Conditions/QuestCondition.h"
#include "ConditionContainer.generated.h"


UCLASS(DefaultToInstanced, EditInlineNew)
class QUESTEXTENSION_API UConditionContainer : public UObject
{
	GENERATED_BODY()
public:

	UConditionContainer();


	UPROPERTY(EditDefaultsOnly, Category = ConditionContainer)
	bool bAllowsLatentExecution;

	UPROPERTY(EditDefaultsOnly, Category = ConditionContainer)
	EConditionState EmptyResult;

	UPROPERTY(SaveGame)
	UQuestCondition* FirstCondition;

#if WITH_EDITORONLY_DATA
	UPROPERTY()
	TArray<UQuestCondition*> AllConditions;

private:

	UPROPERTY()
	class UEdGraph* Graph;
#endif

	UPROPERTY()
	UQuestManagerComponent* CustomManager;


public:

	UFUNCTION(BlueprintCallable, Category = ConditionContainer)
	EConditionState StartInstantCheck();

	UFUNCTION(BlueprintCallable, Category = ConditionContainer)
	void StartLatentCheck(const FConditionCompleteDel& InOnComplete);

	UFUNCTION(BlueprintCallable, Category = ConditionContainer)
	void CancelLatentCheck();


	UFUNCTION(BlueprintPure, Category = ConditionContainer)
	FORCEINLINE UQuestCondition* GetFirstCondition() const {
		return FirstCondition;
	}

	UFUNCTION(BlueprintPure,	 Category = ConditionContainer)
	FORCEINLINE EConditionState GetState() const {
		return FirstCondition? FirstCondition->GetState() : EConditionState::NotRunning;
	}

	/** Specifies a custom QuestManager. Can't be used while running the conditions */
	void SetCustomQuestManager(UQuestManagerComponent* Manager)
	{
		if (GetState() != EConditionState::Running)
		{
			CustomManager = Manager;
		}
	}

	virtual UQuestManagerComponent* GetQuestManager() const;

	FORCEINLINE virtual UQuestBase* GetOwnerQuest() const
	{ return Cast<UQuestBase>(GetOuter()); }

#if WITH_EDITOR
	/** Clears all nodes from the graph (for old editor's buffer quest group) */
	void ClearGraph();

	/** Get the EdGraph of QGNodes */
	class UEdGraph* GetGraph();

	/** Assign a new Graph */
	void SetGraph(UEdGraph* Graph);
#endif


	virtual bool IsSupportedForNetworking() const override
	{
		const UObject* Outer = GetOuter();
		return Outer && !Outer->IsAsset();
	}

	virtual UWorld* GetWorld() const override;
};
