// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "ConditionOutput.generated.h"

class FConditionCompleteDel;
class UQuestCondition;
class UQuestManagerComponent;


/**
* Defines an output for a quest group node
*/
USTRUCT(BlueprintType)
struct QUESTEXTENSION_API FConditionOutput
{
	GENERATED_USTRUCT_BODY()

	FConditionOutput()
		: bUseDisplayName(false)
	{}

	FConditionOutput(FName InName) 
		: Name(InName),
		  bUseDisplayName(false)
	{}

	FConditionOutput(FName InName, FName InDisplayName)
		: Name(InName),
		DisplayName(InDisplayName)
	{
		bUseDisplayName = !InDisplayName.IsNone();
	}

	UPROPERTY(EditAnywhere, Category = Output)
	FName Name;

	UPROPERTY(EditAnywhere, Category = Output, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	bool bUseDisplayName;

	UPROPERTY(EditAnywhere, Category = Output, AdvancedDisplay, meta = (EditCondition = "bUseDisplayName"))
	FName DisplayName;

	UPROPERTY(SaveGame)
	TArray<UQuestCondition*> Connections;


	void StartCheck(const FConditionCompleteDel& InOnComplete);

	void CancelCheck();


	FORCEINLINE bool IsValid() const { return !Name.IsNone(); }
	FORCEINLINE bool IsConnected() const { return IsValid() && Connections.Num() > 0; }

	FORCEINLINE UQuestCondition* GetFirstConnection() const {
		return IsConnected()? Connections[0] : nullptr;
	}

	FORCEINLINE bool operator==(const FConditionOutput& Other) const {
		return Name == Other.Name;
	}
	FORCEINLINE bool operator==(const FName& Other) const {
		return Name == Other;
	}

	const FName GetDisplayName() const
	{
		if (bUseDisplayName && !DisplayName.IsNone())
			return DisplayName;

		return Name;
	}

	/**
	* Find a node of a defined type T
	* @return the node found or null
	*/
	UQuestCondition* FindSubNodeOfType(TSubclassOf<UQuestCondition> Class, const bool bFilterByCompleted = false) const;
	
	/**
	* Called by the Quest Group Editor for nodes which allow children.  The default behavior is to
	* attach a single connector. Derived classes can override to e.g. add multiple connectors.
	*/
	void CreateStartingConnectors() {
		ConnectNode(Connections.Num());
	}

	void ConnectNode(int32 Index) {
		check(Index >= 0 && Index <= Connections.Num());

		if (GetMaxConnections() > Index)
		{
			Connections.InsertZeroed(Index);
		}
	}

	void DisconnectNode(int32 Index) {
		check(Index >= 0 && Index < Connections.Num());

		if (Connections.Num() > 0)
		{
			Connections.RemoveAt(Index);
		}
	}

	void GetConnectedNodes(TArray<UQuestCondition*>& OutConnections) const;

	void GetAllConnectedNodes(TArray<UQuestCondition*>& OutConnections) const;

	/**
	* Returns the maximum number of child nodes this node can possibly have
	*/
	const int32 GetMaxConnections() const { return 1; }

#if WITH_EDITOR
	/**
	* Set the entire Execution Node array directly, allows GraphNodes to fully control node layout.
	* Can be overwritten to set up additional parameters that are tied to children.
	*/
	void SetConnectedNodes(TArray<UQuestCondition*>& InNodes) {
		if (GetMaxConnections() >= InNodes.Num())
		{
			Connections = InNodes;
		}
	}
#endif //WITH_EDITOR
};

