/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#include "EdddisonPluginUtility.h"
#include "EdddisonPluginPrivatePCH.h"

#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/Engine/World.h"






UWorld* FEdddisonPluginUtility::GetWorld()
{
	UWorld* world = nullptr;

#if WITH_EDITOR
	if (!world && GEditor && GEditor->IsValidLowLevel())
		world = GEditor->GetEditorWorldContext().World();
#endif

	if (!world && GWorld && GWorld->IsValidLowLevel())
		world = GWorld;

	if (!world && GEngine && GEngine->IsValidLowLevel())
		world = GEngine->GetWorld();

	if (!world)
		FEdddisonLog::Log(EDDDLOG_WORLD_MISSING);

	return world;
}

AActor* FEdddisonPluginUtility::FindActor(int32 id)
{
	AActor *found = nullptr;
	if (GetWorld())
	{
		for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
		{
			if (ActorItr->GetUniqueID() == id)
			{
				FEdddisonLog::Log(FString::Printf(EDDDLOG_ACTOR_FOUND, id));

				found = *ActorItr;
				break;
			}
		}
	}
	return found;
}



/**
 * Find actor by name.
 *
 * @param name The FName of the actor.
 * @param compare_method Compare case or non-case sensitive.
 * @param compare_number Compare trailing numbers too.
 * @return Pointer to AActor.
 */
AActor* FEdddisonPluginUtility::FindActor(FName name, ENameCase compare_method, bool compare_number)
{
	AActor *found = nullptr;
	if (GetWorld())
	{
		for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
		{

			if (name.IsEqual(ActorItr->GetFName(), compare_method, compare_number))
			{
				//FEdddisonLog::Log(FString::Printf(EDDDLOG_ACTOR_FOUND, FText::FromName(name)));

				found = *ActorItr;
				break;
			}
		}
	}
	return found;
}


FBox FEdddisonPluginUtility::GetGlobalBBox()
{
	FBox bbox;
	bool first = true;
	if (GetWorld())
	{
		for (TActorIterator<AStaticMeshActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
		{
			AActor *actor = *ActorItr;
			FVector origin;
			FVector extent;
			actor->GetActorBounds(false, origin, extent);
			FBox actor_bbox = FBox::BuildAABB(origin, extent);

			FEdddisonLog::Log(
				FString::Printf(EDDDLOG_ACTOR_BBOX,
					*actor->GetName(),
					actor_bbox.GetCenter().X,
					actor_bbox.GetCenter().Y,
					actor_bbox.GetCenter().Z,
					actor_bbox.GetExtent().X,
					actor_bbox.GetExtent().Y,
					actor_bbox.GetExtent().Z));

			if (first)
			{
				bbox = actor_bbox;
				first = false;
			}
			else
			{
				bbox += actor_bbox;
			}
		}
	}

	FEdddisonLog::Log(FString::Printf(EDDDLOG_GLOBAL_BBOX,
		bbox.GetCenter().X,
		bbox.GetCenter().Y,
		bbox.GetCenter().Z,
		bbox.GetExtent().X,
		bbox.GetExtent().Y,
		bbox.GetExtent().Z));

	return bbox;
}


/**
 * Liefert offset und orientierte Seitenvektoren/kanten eines actors.
 *
 * Unreal hat ein linksseitiges Koordinatensystem
 */
void FEdddisonPluginUtility::GetActorBBox(
	AActor *actor, 
	FVector &po, 
	FVector &vx, FVector &vy, FVector &vz)
{

	
	// ------------------------------------------------------------------------
	// bounding box size in local cooridnates
	// ------------------------------------------------------------------------

	// scale werte, unabhaengig von der orientierung
	FVector scale3d = actor->GetActorScale3D();

	// lokale groesse der bounding box ohne child actors, keinen scale includiert, unabhaenging von der orientierung
	FBox localbox = actor->CalculateComponentsBoundingBoxInLocalSpace(true);

	// forward-, right- und up-vector sind einheitsvektoren, kein scale inkludiert, spiegeln die aktuelle orientierung wieder
	FVector forward = actor->GetActorForwardVector(); //x
	FVector up = actor->GetActorUpVector();//Z
	FVector right = actor->GetActorRightVector(); //y

	float forward_scale = (scale3d.X * (localbox.Max.X - localbox.Min.X));
	float right_scale = (scale3d.Y * (localbox.Max.Y - localbox.Min.Y));
	float up_scale = (scale3d.Z * (localbox.Max.Z - localbox.Min.Z));
	vx = forward * forward_scale;
	vy = right * right_scale;
	vz = up * up_scale;



	// ------------------------------------------------------------------------
	// bounding box offset in world coodinates 
	// ------------------------------------------------------------------------

	// GetActorBounds():
		// extend hat scale inkludiert, beruecksichtigt keinen pivot
		// origin: set to the center of the actor in world space
		// extend: set to half of the actors size in 3d space; also ein viertel der boundingbox.
		// hat scale inkludiert. ist in forward richtung orientiert; 
		// dh. bei einer actor drehung um 45° liefert es andere werte als bei 0°
	//FVector origin_b;
	//FVector extend_b;
	//actor->GetActorBounds(false, origin_b, extend_b);

	// liefert die position im center des object in world coodinates
	FVector origin = actor->GetActorLocation();

	// der pivot existiert nur im editor und ist somit fuer den edddison uninteressant
	//FVector privot_offset = actor->GetPivotOffset();

	po = origin - ((vx + vy + vz) * 0.5);
	//po = origin_b + privot_offset * scale3d;

	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_ORIGIN, origin.X, origin.Y, origin.Z));
	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_SCALE, scale3d.X, scale3d.Y, scale3d.Z));
	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_FORWARD, forward.X, forward.Y, forward.Z));
	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_RIGHT, right.X, right.Y, right.Z));
	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_UP, up.X, up.Y, up.Z));
	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_LOCAL_MIN, localbox.Min.X, localbox.Min.Y, localbox.Min.Z)); // not scaled bbox local
	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_LOCAL_MAX, localbox.Max.X, localbox.Max.Y, localbox.Max.Z)); // not scaled bbox local

	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_PO, po.X, po.Y, po.Z));
	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_VX, vx.X, vx.Y, vx.Z));
	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_VY, vy.X, vy.Y, vy.Z));
	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_VZ, vz.X, vz.Y, vz.Z));
}



/**
*
*/
void FEdddisonPluginUtility::SetActorVisibility(TWeakObjectPtr<AActor> actor, 
	const bool new_visible, const bool propagate_to_children) {


	if (!actor->IsValidLowLevel()) {
		return;
	}

		
#if WITH_EDITOR	

	if (isEditorGameMode()) {
		actor.Get()->GetRootComponent()->SetHiddenInGame(!new_visible, propagate_to_children);
	}
	else {

		actor.Get()->SetIsTemporarilyHiddenInEditor(!new_visible);

		if (propagate_to_children) {

			// do not use actor.Get()->Children. They are most likely empty.
			for (auto component : actor.Get()->GetComponents()) {
				if (component->IsA(UStaticMeshComponent::StaticClass())) {
					((UStaticMeshComponent*)component)->SetVisibility(new_visible, propagate_to_children);
				}
			}

		}
	}

#else 

	actor.Get()->GetRootComponent()->SetHiddenInGame(!new_visible, propagate_to_children);

#endif

}



/** 
 *
 */
bool FEdddisonPluginUtility::GetActorVisibility(TWeakObjectPtr<AActor> actor) {
	if (!actor->IsValidLowLevel()) {
		return false;
	}


#if WITH_EDITOR	

	if (isEditorGameMode()) {
		return (actor.Get()->GetRootComponent()->bHiddenInGame == 1) ? true : false;
	}
	else {

		return actor.Get()->IsTemporarilyHiddenInEditor(false);
	}

#else 

	return (actor.Get()->GetRootComponent()->bHiddenInGame == 1) ? true : false;

#endif
}



/**
* Is the Editor in a Play Mode. Editor Only!
*
* @return True if Editor is in a Play Mode.
*/
bool FEdddisonPluginUtility::isEditorGameMode() {
	
#if WITH_EDITOR

	if (GEditor == nullptr) {
		return false;
	}

	UWorld* world = GEditor->GetActiveViewport()->GetClient()->GetWorld();

	if (world->IsPlayInPreview() || world->IsPlayInMobilePreview() || world->IsPlayInVulkanPreview() || world->IsPlayInEditor()) {
		return true;
	}

	//namespace EWorldType
	//{
	//	enum Type
	//	{
	//		None,        // An untyped world, in most cases this will be the vestigial worlds of streamed in sub-levels
	//		Game,        // The game world
	//		Editor,        // A world being edited in the editor
	//		PIE,        // A Play In Editor world
	//		Preview,    // A preview world for an editor tool
	//		Inactive    // An editor world that was loaded but not currently being edited in the level editor
	//	};
	//}
		
#endif
	return false;

}



/** 
 * Print the Play Mode of the Editor. Editor Only!
 */
void FEdddisonPluginUtility::printEditorPlayType() {

#if WITH_EDITOR
	if (GEditor == nullptr) {
		return;
	}

	UWorld* world = GEditor->GetActiveViewport()->GetClient()->GetWorld();

	if (world->IsPlayInVulkanPreview()) {
		FEdddisonLog::Log("IsPlayInVlukanPreview");
	}
	else if (world->IsPlayInEditor()) {
		FEdddisonLog::Log("IsPlayInEditor");
	}
	else if (world->IsPlayInPreview()) {
		FEdddisonLog::Log("IsPlayInPreview");
	}
	else if (world->IsPlayInMobilePreview()) {
		FEdddisonLog::Log("IsPlayInMobilePreview");
	}
	else {
		FEdddisonLog::Log("Not a known Editor Play Type!");
	}

#endif
	

}

bool FEdddisonPluginUtility::isNan(float value)
{
#if ((ENGINE_MAJOR_VERSION < 5) && (ENGINE_MINOR_VERSION < 22))
	return isnan(value);
#else
	return std::isnan(value);
#endif
	
}
