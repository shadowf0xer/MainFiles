// Copyright 2015-2019 Piperift. All Rights Reserved.

//=============================================================================
// PhysicsVolume:  a bounding volume which affects actor physics
// Each  AActor  is affected at any time by one PhysicsVolume
//=============================================================================

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/PhysicsVolume.h"

#include "Quests/Quest.h"
#include "Quests/QuestManagerComponent.h"

#include "QuestVolume.generated.h"

/**
 * Volume that causes damage over time to any Actor that overlaps its collision.
 */
UCLASS()
class QUESTEXTENSION_API AQuestVolume : public APhysicsVolume
{
	GENERATED_UCLASS_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestVolume")
	TSubclassOf<AActor> FilterClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestVolume")
	bool bUseGlobalManager;

	/** Find manager in the colliding actor or its controller */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestVolume")
	bool bFindManagerInActor;

	/** Actor containing the Quest Manager to be used */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestVolume")
	AActor* ManagerOwner;

	/** Quest that will be started when entering this volume */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestVolume|Quests", meta = (DisplayThumbnail = false))
	UQuestBase* StartQuest;

	/** Quest that will be finished when entering this volume */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestVolume|Quests")
	FQuestStateData FinishQuest;

	/** Memory that will be registered when entering this volume */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestVolume|Memories", meta = (DisplayThumbnail = false))
	TSoftObjectPtr<UQuestMemory> RegistryMemory;


	//Being PhysicsVolume Interface
	virtual void ActorEnteredVolume(class AActor* Other) override;
	//End PhysicsVolume Interface

#if WITH_EDITOR
	//Begin AVolume Interface
	//virtual void CheckForErrors() override;
	virtual bool CanEditChange(const FProperty* InProperty) const override;
	//End AVolume Interface
#endif
};



