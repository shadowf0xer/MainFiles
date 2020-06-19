/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#include "EdddisonActorCameraComponent.h"
#include "EdddisonPluginPrivatePCH.h"
#include "EdddisonPlugin.h"
#include "EdddisonPluginUtility.h"





#define LOCTEXT_NAMESPACE "EdddisonPlugin"



UEdddisonActorCameraComponent::UEdddisonActorCameraComponent()
{
	FEdddisonLog::Log(EDDDLOG_ACTCOMP_CREATED);

	// Set this component to be initialized when the game starts, and to be ticked every frame.
	// You can turn these features off to improve performance if you don't need them.
	//bWantsBeginPlay = false; // for true use BeginPlay();
	PrimaryComponentTick.bCanEverTick = false;
}



UEdddisonActorCameraComponent::~UEdddisonActorCameraComponent()
{
	FEdddisonLog::Log(EDDDLOG_ACTCOMP_DESTROY);
}



void UEdddisonActorCameraComponent::OnRegister()
{
	FEdddisonLog::Log(EDDDLOG_ACTOR_COMP_REG);
	FEdddisonLog::Log(FString::Printf(EDDDLOG_CAMERA_ID, *ID));

	Super::OnRegister();

	if (0 == ID.Len())
	{
		FEdddisonLog::Log(EDDDLOG_ACTOR_COMP_NOID);
		ID = FGuid::NewGuid().ToString();
	}

	FEdddisonPluginModule::AddCamera(this->GetActor(), ID);
}



/**
* This is called from unreal engine. Called when a component is unregistered. Called after DestroyRenderState_Concurrent and OnDestroyPhysicsState are called.
*/
void UEdddisonActorCameraComponent::OnUnregister()
{
	FEdddisonLog::Log(EDDDLOG_ACTOR_COMP_UNREG);

	Super::OnUnregister();

}



/**
 * CreateInstance
 *
 * @access 	public static 
 * @param 	AActor * actor
 * @return 	UEdddisonActorCameraComponent::UEdddisonActorCameraComponent* nullptr if already an EdddisonPluginCamera with this actor exist or invalid.
 */
UEdddisonActorCameraComponent* UEdddisonActorCameraComponent::CreateInstance(AActor *actor)
{
	FEdddisonLog::Log(EDDDLOG_ACTCOMPIN_CREATED);

	if (!actor || !actor->IsValidLowLevel()) {
		return nullptr;
	}

	// no no create if this actor alreay is in one of our EdddisonPluginCamera. 
	if (FEdddisonPluginModule::ExistCamera(actor)) {
		FMessageDialog::Open(EAppMsgType::Ok, EDDDGUI_ACTOR_ALREADY_ADDED);
		return nullptr;
	}

	// create an edddison component and add it to the actor
	UEdddisonActorCameraComponent* createdComp =
		NewObject<UEdddisonActorCameraComponent>(
			actor,
			TEXT("EdddisonCamera"));

	if (createdComp)
	{
		actor->AddInstanceComponent(createdComp);
		createdComp->RegisterComponent();
		createdComp->MarkPackageDirty();
	}

	return createdComp;
}



bool UEdddisonActorCameraComponent::DestroyInstance(AActor *actor)
{
	FEdddisonLog::Log(EDDDLOG_ACTCOMPIN_DESTROY);

	if (!actor || !actor->IsValidLowLevel()) {
		return false;
	}

//	/* this removes the link between the edddison object and this actor. do this in editor mode only for configuration purpose. do this not in game mode. on game exit this would delete the link to the edddison object, which would be missed on next start! */
//#if WITH_EDITOR
//	FEdddisonPluginModule::RemoveCamera(actor);
//#endif

	TArray<UEdddisonActorCameraComponent*> comps;

	actor->GetComponents(comps);
	for (auto comp : comps)
	{
		comp->DestroyComponent();
	}

	if (UWorld* world = FEdddisonPluginUtility::GetWorld())
	{
		// force to call the destructor
		GEngine->ForceGarbageCollection(true);
		// deprecated since 4.18
		//world->ForceGarbageCollection(true); // full purge 
	}

	actor->MarkPackageDirty();

	return true;
}

AActor* UEdddisonActorCameraComponent::GetActor()
{
	return this->GetOwner();
}
