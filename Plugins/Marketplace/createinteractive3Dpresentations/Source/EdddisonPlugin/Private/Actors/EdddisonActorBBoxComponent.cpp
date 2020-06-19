/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#include "EdddisonActorBBoxComponent.h"
#include "EdddisonPluginPrivatePCH.h"
#include "EdddisonPlugin.h"
#include "EdddisonPluginUtility.h"

#include "Runtime/Engine/Public/ComponentReregisterContext.h"
#include "Runtime/CoreUObject/Public/UObject/UObjectGlobals.h"





#define LOCTEXT_NAMESPACE "EdddisonPlugin"



//https://forums.unrealengine.com/archive/index.php/t-114058.html
//https://answers.unrealengine.com/questions/238624/documentation-for-unreal-editor-events.html
//https://docs.unrealengine.com/latest/INT/Programming/UnrealArchitecture/Actors/Ticking/index.html#componentticking


UEdddisonActorBBoxComponent::UEdddisonActorBBoxComponent(/*const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer*/)
{
	FEdddisonLog::Log(EDDDLOG_ACTCOMP_CREATED);

	// Set this component to be initialized when the game starts, and to be ticked every frame.
	// You can turn these features off to improve performance if you don't need them.
	//bWantsBeginPlay = false; // for true use BeginPlay();
	PrimaryComponentTick.bCanEverTick = true;
}

UEdddisonActorBBoxComponent::~UEdddisonActorBBoxComponent()
{
	FEdddisonLog::Log(EDDDLOG_ACTCOMP_DESTROY);

}


void UEdddisonActorBBoxComponent::OnRegister()
{
	FEdddisonLog::Log(EDDDLOG_ACTOR_COMP_REG);
	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_ID, *ID));

	Super::OnRegister();

	if (0 == ID.Len())
	{
		FEdddisonLog::Log(EDDDLOG_ACTOR_COMP_NOID);
		ID = FGuid::NewGuid().ToString();
	}

	FEdddisonPluginModule::AddBBox(this->GetActor(), ID);


#ifdef EDDDISON_BBOX_EXP_EVENTS
#if WITH_EDITOR
	if (this->GetActor() != nullptr)
	{

		/* fires on this actor changes */
		FCoreUObjectDelegates::OnObjectPropertyChanged.AddUObject(this,&UEdddisonActorBBoxComponent::PostEditChangeDelegateBind);

		/* fires on all changes */
		/*FCoreUObjectDelegates::OnObjectModified.AddUObject(this, &UEdddisonActorBBoxComponent::ObjectModifiedBind);*/

		//onrelease_del = FScriptDelegate();
		//onrelease_del.BindUFunction(this, "OnReleaseBind");

		//this->GetActor()->OnReleased.Add(onrelease_del);
		//this->GetActor()->OnClicked.Add(onrelease_del);

		 //FCoreUObjectDelegates::apply
		onApply = FScriptDelegate();
		onApply.BindUFunction(this->GetActor(), "EditorApplyTranslation");

		

	}
#endif
#endif


}



/**
 * 
 */
/**
 * OnUnregister
 * This is called from unreal engine. Called when a component is unregistered. Called after DestroyRenderState_Concurrent and OnDestroyPhysicsState are called.
 *
 * @access 	virtual public 
 * @return 	void
 */
void UEdddisonActorBBoxComponent::OnUnregister()
{
	FEdddisonLog::Log(EDDDLOG_ACTOR_COMP_UNREG);

	Super::OnUnregister();

	/* this removes the link between the edddison object and this actor. do this in editor mode only for configuration purpose. do this not in game mode. on game exit this would delete the link to the edddison object, which would be missed on next start! */
#if WITH_EDITOR

#ifdef EDDDISON_BBOX_EXP_EVENTS
	/* remove delegate for PostEditChange() */
	FCoreUObjectDelegates::OnObjectPropertyChanged.RemoveAll(this);
#endif

#endif
}



/**
 * CreateInstance
 *
 * @access 	public static 
 * @param 	AActor * actor
 * @return 	UEdddisonActorBBoxComponent::UEdddisonActorBBoxComponent* nullptr if already an EdddisonPluginBBox with this actor exist or invalid.
 */
UEdddisonActorBBoxComponent* UEdddisonActorBBoxComponent::CreateInstance(AActor *actor)
{
	FEdddisonLog::Log(EDDDLOG_ACTCOMPIN_CREATED);

	if (!actor || !actor->IsValidLowLevel()) {
		return nullptr;
	}

	// no no create if this actor alreay is in one of our Moveables. 
	if (FEdddisonPluginModule::ExistBBox(actor)) {
		FMessageDialog::Open(EAppMsgType::Ok, EDDDGUI_ACTOR_ALREADY_ADDED);
		return nullptr;
	}

	// create an edddison component and add it to the actor
	UEdddisonActorBBoxComponent* createdComp =
		NewObject<UEdddisonActorBBoxComponent>(
			actor,
			TEXT("EdddisonBoundingBox"));

	if (createdComp)
	{
		actor->AddInstanceComponent(createdComp);
		createdComp->RegisterComponent();
		createdComp->MarkPackageDirty();

	}

	return createdComp;
}



#ifdef EDDDISON_BBOX_EXP_EVENTS
#if WITH_EDITOR
//https://answers.unrealengine.com/questions/238624/documentation-for-unreal-editor-events.html

void UEdddisonActorBBoxComponent::PostEditComponentMove(bool bFinished) {
	Super::PostEditComponentMove(bFinished);
	FEdddisonLog::Log("UEdddisonActorBBoxComponent::PostEditComponentMove");

}

void UEdddisonActorBBoxComponent::EditorApplyTranslation(const FVector &DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown) {
	FEdddisonLog::Log("UEdddisonActorBBoxComponent::EditorApplyTranslation");

}
//void UEdddisonActorBBoxComponent::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) {
//	FEdddisonLog::Log("UEdddisonActorBBoxComponent::PostEditChangeProperty");
//}



void UEdddisonActorBBoxComponent::PostEditChangeDelegateBind(UObject* Object, FPropertyChangedEvent& PropertyChangedEvent)
{
	// THIS WORKS!
	FEdddisonLog::Log("UEdddisonActorBBoxComponent::PostEditChangeDelegateBind");
	/*FPropertyChangedEvent EmptyPropertyUpdateStruct(NULL);
	this->PostEditChangeProperty(EmptyPropertyUpdateStruct);*/
}

//void UEdddisonActorBBoxComponent::OnReleaseBind(/*UObject* Object, FPropertyChangedEvent& PropertyChangedEvent*/) {
//	FEdddisonLog::Log("UEdddisonActorBBoxComponent::OnReleaseBind");
//}
void UEdddisonActorBBoxComponent::ObjectModifiedBind(UObject* Object) {
	//FEdddisonLog::Log("UEdddisonActorBBoxComponent::ObjectModifiedBind");
}

void UEdddisonActorBBoxComponent::OnReleaseDelegate(AActor* actor, FKey key) {
	FEdddisonLog::Log("UEdddisonActorBBoxComponent::OnReleaseDelegate");
}

//void UEdddisonActorBBoxComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) {
//
//
//	FEdddisonLog::Log("UEdddisonActorBBoxComponent::PostEditChangeProperty");
//	FCoreUObjectDelegates::OnObjectPropertyChanged.Broadcast(this, PropertyChangedEvent);
//	// Call the base class version  
//    Super::PostEditChangeProperty(PropertyChangedEvent); 
//}




#endif
#endif


bool UEdddisonActorBBoxComponent::DestroyInstance(AActor *actor)
{
	FEdddisonLog::Log(EDDDLOG_ACTCOMPIN_DESTROY);

	if (!actor || !actor->IsValidLowLevel()) {
		return false;
	}

//	/* this removes the link between the edddison object and this actor. do this in editor mode only for configuration purpose. do this not in game mode. on game exit this would delete the link to the edddison object, which would be missed on next start! */
//#if WITH_EDITOR
//	FEdddisonPluginModule::RemoveBBox(actor);
//#endif

	TArray<UEdddisonActorBBoxComponent*> comps;

	actor->GetComponents(comps);
	for (auto comp : comps)
	{
		comp->DestroyComponent();
	}

	if (UWorld* world = FEdddisonPluginUtility::GetWorld())
	{
		// force to call the destructor
		GEngine->ForceGarbageCollection(true);
		// deprectate since 4.18
		//world->ForceGarbageCollection(true); // full purge 
	}

	actor->MarkPackageDirty();

	return true;
}

AActor* UEdddisonActorBBoxComponent::GetActor()
{
	return this->GetOwner();
}
