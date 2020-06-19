// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "QGNodeOutput.generated.h"

class UQGNode;

/**
* Defines an output for a quest group node
*/
USTRUCT(BlueprintType)
struct QUESTEXTENSION_API FQGNodeOutput
{
	GENERATED_USTRUCT_BODY()

	FQGNodeOutput()
		: bUseDisplayName(false)
	{}

	FQGNodeOutput(FName InName, FName DisplayName = {})
		: Name(InName)
		, bUseDisplayName(!DisplayName.IsNone())
		, DisplayName(DisplayName)
	{}

	UPROPERTY(EditAnywhere, Category = Output)
	FName Name;

	UPROPERTY(EditAnywhere, Category = Output, meta = (PinHiddenByDefault, InlineEditConditionToggle))
	bool bUseDisplayName;

	UPROPERTY(EditAnywhere, Category = Output, AdvancedDisplay, meta = (EditCondition = "bUseDisplayName"))
	FName DisplayName;

	UPROPERTY(SaveGame)
	TArray<class UQGNode*> ExecNodes;

	UPROPERTY(SaveGame)
	TArray<class UQGNode*> RejectNodes;


	void Execute(UQGNode* Parent);

	FORCEINLINE bool IsValid() { return !Name.IsNone(); }

	FORCEINLINE bool operator==(const FQGNodeOutput& Other) const {
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
	UQGNode* FindSubNodeOfType(TSubclassOf<UQGNode> Class, const bool bFilterByCompleted = false) const;

	UQGNode* FindSubNodeById(FGuid Id) const;

	void GetAllConnectedNodes(TArray<UQGNode*>& QGNodes) const;

#if WITH_EDITOR
	/**
	* Set the entire Execution Node array directly, allows GraphNodes to fully control node layout.
	* Can be overwritten to set up additional parameters that are tied to children.
	*/
	void SetConnectedExecNodes(const TArray<UQGNode*>& InNodes) {
		ExecNodes = InNodes;
	}

	void SetConnectedRejectNodes(const TArray<UQGNode*>& InNodes) {
		RejectNodes = InNodes;
	}
#endif //WITH_EDITOR
};
