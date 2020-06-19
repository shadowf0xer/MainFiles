/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */

#pragma once

#include "Components/ActorComponent.h"
#include "EdddisonActorCameraComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EDDDISONPLUGIN_API UEdddisonActorCameraComponent : public UActorComponent
{
	GENERATED_BODY()

protected:

	UPROPERTY(VisibleAnywhere, Category = "edddison")
		FString ID;

public:

	UEdddisonActorCameraComponent();
	~UEdddisonActorCameraComponent();

	virtual void OnRegister() override;
	virtual void OnUnregister() override;

	AActor* GetActor();

	static UEdddisonActorCameraComponent* CreateInstance(AActor *actor);
	static bool DestroyInstance(AActor *actor);
};
