/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#include "EdddisonPluginMoveable.h"
#include "EdddisonPluginPrivatePCH.h"
#include "Socket/EdddisonSocket.h"
#include "EdddisonPluginUtility.h"





PluginMoveableObject::PluginMoveableObject() : isSwitched(false)
{}



PluginMoveableObject::PluginMoveableObject(
	const std::string scene_id,
	const std::string gui_name,
	AActor* actor,
	const float po_x, const float po_y, const float po_z,
	const float vx_x, const float vx_y, const float vx_z,
	const float vy_x, const float vy_y, const float vy_z,
	const float vz_x, const float vz_y, const float vz_z)
	: SocketMoveableObject(
		scene_id, 
		gui_name, 
		po_x, po_y, po_z, 
		vx_x, vx_y, vx_z, 
		vy_x, vy_y, vy_z, 
		vz_x, vz_y, vz_z),
	  isSwitched(false)
{

	if (!actor)
		FEdddisonLog::Log(EDDDLOG_ACTOR_MISSING);

	MyActor = actor;
	if (!MyActor.IsValid() || !MyActor.Get())
		return;

#ifdef DEFAULT_COLLISION_OFF_FOR_BBOX_AND_MOVEABLE
	ActorInEditor.Get()->SetActorEnableCollision(false);
	UStaticMeshComponent* meshComp = Cast<UStaticMeshComponent>(ActorInEditor.Get()->GetComponentByClass(UStaticMeshComponent::StaticClass()));
	if (meshComp != NULL)
	{
		meshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		meshComp->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
		meshComp->SetCollisionProfileName(TEXT("NoCollision"));
		meshComp->SetMobility(EComponentMobility::Movable);
	}
#endif



#ifdef DEFAULT_MOVEABLE_ON_FOR_MOVEABLE
	UStaticMeshComponent* meshComp = Cast<UStaticMeshComponent>(MyActor.Get()->GetComponentByClass(UStaticMeshComponent::StaticClass()));
	if (meshComp != NULL)
	{
		meshComp->SetMobility(EComponentMobility::Movable);
	}
#endif
}



PluginMoveableObject::~PluginMoveableObject() {}



bool PluginMoveableObject::SyncMemberVarsWithActor()
{

	if (!MyActor.Get()) {
		return false;
	}

	FString name = MyActor->GetName();
#if WITH_EDITOR
	name = MyActor->GetActorLabel();
#endif
	_gui_name = TCHAR_TO_UTF8(*name);

	FVector po, vx, vy, vz;
	FEdddisonPluginUtility::GetActorBBox(MyActor.Get(), po, vx, vy, vz);
	_position_offset = Vec3f(po.X, po.Y, po.Z);
	_boundingbox_x = Vec3f(vx.X, vx.Y, vx.Z);
	_boundingbox_y = Vec3f(vy.X, vy.Y, vy.Z);
	_boundingbox_z = Vec3f(vz.X, vz.Y, vz.Z);

	return true;

}


/**
 * Set given actor as main and move existing to backup. This should be done on a mode change from editor edit to editor game mode. After changing mode back to editor edit call UnSwitchActor().
 *
 * Why this:
 * If switching from editor edit to editor play mode, the actors and
 * their components are recreated and registered which leads
 * to duplicated actors. In this case we want to
 * switch to the new Actor* pointer, but use the same
 * edddison objects and subscribe callbacks.
 * The search criteria is the object actor pointer.
 */
void PluginMoveableObject::SwitchActor(AActor* actor, FString name, FVector po, FVector vx, FVector vy, FVector vz)
{
	FEdddisonLog::Log(EDDDLOG_ACTOR_SWITCHED);

	if (!actor || !actor->IsValidLowLevel()) { return; }

	MyActorBackup = MyActor;
	MyActor = actor;

	this->SyncMemberVarsWithActor();

	isSwitched = true;
}



void PluginMoveableObject::UnSwitchActor()
{
	FEdddisonLog::Log(EDDDLOG_ACTOR_UNSWITCHED);

	MyActor = MyActorBackup;
	MyActorBackup = nullptr;
	isSwitched = false;
}



void PluginMoveableObject::move(
	const int v, 
	const float x, const float y, const float z,
	const float ya, const float pa, const float ra,
	const float fx, const float fy, const float fz,
	const float ux, const float uy, const float uz)
{
	FEdddisonLog::Log(FString::Printf(EDDDLOG_MOVEABLE, x, y, z));

	if (!MyActor.IsValid())	{ return; }

#ifdef USE_MOVE_ACTOR_TRANSACTIONS
	// Let editor know that we're about to do something that we want to undo/redo
	GEditor->BeginTransaction(EDDDTRANSACTION_MOVE);

	// Register actor in opened transaction (undo/redo)
	ActorInEditor.Get()->Modify();
#endif


	// test all values if NaN
	
	float x_new = x;
	if (FEdddisonPluginUtility::isNan(x)) {
		x_new = MyActor.Get()->GetActorLocation().X;
	}

	float y_new = y;
	if (FEdddisonPluginUtility::isNan(y)) {
		y_new = MyActor.Get()->GetActorLocation().Y;
	}

	float z_new = z;
	if (FEdddisonPluginUtility::isNan(z)) {
		z_new = MyActor.Get()->GetActorLocation().Z;
	}


	// Move actor to given location
	//float inv_ya_new = -ya_new;
	float ya_new = -ya;
	if (FEdddisonPluginUtility::isNan(ya)) {
		ya_new = MyActor.Get()->GetActorRotation().Yaw;
	}

	float pa_new = pa;
	if (FEdddisonPluginUtility::isNan(pa)) {
		pa_new = MyActor.Get()->GetActorRotation().Pitch;
	}

	float ra_new = ra;
	if (FEdddisonPluginUtility::isNan(ra)) {
		ra_new = MyActor.Get()->GetActorRotation().Roll;
	}



	
#ifdef USE_MOVE_ACTOR_TELEPORT
	bool moved = ActorInEditor.Get()->TeleportTo(FVector(x_new, y, z), FRotator(pa_new, inv_ya_new, ra_new, ));
#else
	bool moved = MyActor.Get()->SetActorLocationAndRotation(FVector(x_new, y_new, z_new ), FRotator(pa_new, ya_new, ra_new ));
#endif
	if (!moved)
	{
		FEdddisonLog::Log(EDDDLOG_MOVEABLE_CANT);
	}

	if (this->setVisible(v)) {
		FEdddisonPluginUtility::SetActorVisibility(MyActor, this->isVisible(), true);
	}

//	if (v)
//	{
//		
//		ActorInEditor.Get()->GetRootComponent()->SetHiddenInGame(false,true);
//#if WITH_EDITOR
//		ActorInEditor.Get()->SetIsTemporarilyHiddenInEditor(false);
//		//ActorInEditor.Get()->GetRootComponent()->SetHiddenInGame(false, true);
//#endif
//	}
//	else
//	{
////		ActorInEditor.Get()->SetActorHiddenInGame(true);
//		ActorInEditor.Get()->GetRootComponent()->SetHiddenInGame(true, true);
//#if WITH_EDITOR
//		ActorInEditor.Get()->SetIsTemporarilyHiddenInEditor(true);
//#endif
//	}

#ifdef USE_MOVE_ACTOR_TRANSACTIONS
	// We're done moving actors so close transaction
	GEditor->EndTransaction();
#endif
}




void PluginMoveableObject::subscribe()
{
	if (!FEdddisonSocket::_is_library_loaded())
	{
		FEdddisonLog::Log(EDDDLOG_LIB_NOT_LOADED);
		return;
	}

#if PLATFORM_WINDOWS
	subscribeModel_edddDll(
		_scene_id.c_str(),
		_gui_name.c_str(),
		_position_offset._x, _position_offset._y, _position_offset._z,
		_boundingbox_x._x, _boundingbox_x._y, _boundingbox_x._z,
		_boundingbox_y._x, _boundingbox_y._y, _boundingbox_y._z,
		_boundingbox_z._x, _boundingbox_z._y, _boundingbox_z._z,
		&FEdddisonPluginModule::MoveMoveableCallback);
#endif
}



void PluginMoveableObject::unsubscribe()
{
	if (!FEdddisonSocket::_is_library_loaded())
	{
		FEdddisonLog::Log(EDDDLOG_LIB_NOT_LOADED);
		return;
	}

#if PLATFORM_WINDOWS
	unSubscribeModel_edddDll(_scene_id.c_str());
#endif
}

