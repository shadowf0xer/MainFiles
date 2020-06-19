/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */




#pragma once

#include "EdddisonPluginPrivatePCH.h"
#include "GameFramework/Actor.h"
#include "EdddisonPluginActor.generated.h"



/************************************************************************/
/* Dummy actor to detect level and map switches.                        */
/************************************************************************/
UCLASS()
class EDDDISONPLUGIN_API AEdddisonPluginActor : public AActor {

	GENERATED_BODY()

public:
	AEdddisonPluginActor();

	bool bCloseEdddisonOnDestroy = true;
	static FName Name;

protected:
	
	// Called when the game starts or when spawned
    virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void PostActorCreated() override;
	virtual void Destroyed() override;
	virtual void BeginDestroy() override;
	//virtual void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) override;
	//virtual void PostEditChangeProperty(struct FPropertyChangedEvent & PropertyChangedEvent) override;
};