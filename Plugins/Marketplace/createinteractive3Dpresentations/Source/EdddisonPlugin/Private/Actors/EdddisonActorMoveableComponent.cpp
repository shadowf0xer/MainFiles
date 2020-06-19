/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#include "EdddisonActorMoveableComponent.h"
#include "EdddisonPluginPrivatePCH.h"
#include "EdddisonPlugin.h"
#include "EdddisonPluginUtility.h"





#define LOCTEXT_NAMESPACE "EdddisonPlugin"



UEdddisonActorMoveableComponent::UEdddisonActorMoveableComponent()
{
	FEdddisonLog::Log(EDDDLOG_ACTCOMP_CREATED);

	// Set this component to be initialized when the game starts, and to be ticked every frame.
	// You can turn these features off to improve performance if you don't need them.
	//bWantsBeginPlay = false; // for true use BeginPlay();
	PrimaryComponentTick.bCanEverTick = false;
}



UEdddisonActorMoveableComponent::~UEdddisonActorMoveableComponent()
{
	FEdddisonLog::Log(EDDDLOG_ACTCOMP_DESTROY);
}



void UEdddisonActorMoveableComponent::OnRegister()
{
	FEdddisonLog::Log(EDDDLOG_ACTOR_COMP_REG);
	FEdddisonLog::Log(FString::Printf(EDDDLOG_MOVEABLE_ID, *ID));

	Super::OnRegister();

	if (0 == ID.Len())
	{
		FEdddisonLog::Log(EDDDLOG_ACTOR_COMP_NOID);
		ID = FGuid::NewGuid().ToString();
	}

	FEdddisonPluginModule::AddMoveable(this->GetActor(), ID);

}



/**
* This is called from unreal engine. Called when a component is unregistered. Called after DestroyRenderState_Concurrent and OnDestroyPhysicsState are called.
*/
void UEdddisonActorMoveableComponent::OnUnregister()
{
	FEdddisonLog::Log(EDDDLOG_ACTOR_COMP_UNREG);

	Super::OnUnregister();

	// on switch from play mode to edit mode in editor
	



}



/**
 * Create edddison component and add it to the actor.
 *
 * @access 	public static 
 * @param 	AActor * actor
 * @return 	UEdddisonActorMoveableComponent::UEdddisonActorMoveableComponent* nullptr if already an EdddisonPluginMoveable with this actor exist or invalid.
 */
UEdddisonActorMoveableComponent* UEdddisonActorMoveableComponent::CreateInstance(AActor *actor)
{
	FEdddisonLog::Log(EDDDLOG_ACTCOMPIN_CREATED);

	if (!actor || !actor->IsValidLowLevel())
		return nullptr;

	// do not create if this actor already is in one of our Moveables. 
	if (FEdddisonPluginModule::ExistMoveable(actor)) {
		FMessageDialog::Open(EAppMsgType::Ok, EDDDGUI_ACTOR_ALREADY_ADDED);
		return nullptr;
	}

	// create an edddison component and add it to the actor
	UEdddisonActorMoveableComponent* createdComp =
		NewObject<UEdddisonActorMoveableComponent>(
			actor,
			TEXT("EdddisonMoveableObject"));

	if (createdComp)
	{
		actor->AddInstanceComponent(createdComp);
		createdComp->RegisterComponent();
		createdComp->MarkPackageDirty();
	}

	return createdComp;
}



bool UEdddisonActorMoveableComponent::DestroyInstance(AActor *actor)
{
	FEdddisonLog::Log(EDDDLOG_ACTCOMPIN_DESTROY);

	if (!actor || !actor->IsValidLowLevel()) {
		return false;
	}

//	/* this removes the link between the edddison object and this actor. do this in editor mode only for configuration purpose. do this not in game mode. on game exit this would delete the link to the edddison object, which would be missed on next start! */
//#if WITH_EDITOR
//	FEdddisonPluginModule::RemoveMoveable(actor);
//#endif


	TArray<UEdddisonActorMoveableComponent*> comps;

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



AActor* UEdddisonActorMoveableComponent::GetActor()
{
	return this->GetOwner();
}



//void UEdddisonActorMoveableComponent::VisiblityChangedToEvent_Implementation(bool visible) {
//	// default implementation
//}