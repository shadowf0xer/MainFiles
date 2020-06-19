/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */

#pragma once

#include "Runtime/CoreUObject/Public/UObject/ObjectMacros.h"
#include "Components/ActorComponent.h"
#include "EdddisonActorMoveableComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EDDDISONPLUGIN_API UEdddisonActorMoveableComponent : public UActorComponent
{
	GENERATED_BODY()

protected:

	UPROPERTY(VisibleAnywhere,Category="edddison")
		FString ID;

public:

	UEdddisonActorMoveableComponent();
	~UEdddisonActorMoveableComponent();

	virtual void OnRegister() override;
	virtual void OnUnregister() override;

	AActor* GetActor();

	static UEdddisonActorMoveableComponent* CreateInstance(AActor *actor);
	static bool DestroyInstance(AActor *actor);

	UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="on visible change of a 3d object"), Category = "edddison plugin")
	void VisiblityChangedToEvent(bool visible);
};
