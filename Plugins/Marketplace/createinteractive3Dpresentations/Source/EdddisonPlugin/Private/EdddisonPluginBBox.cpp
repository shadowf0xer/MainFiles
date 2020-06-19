/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#include "EdddisonPluginBBox.h"
#include "EdddisonPluginPrivatePCH.h"
#include "Socket/EdddisonSocket.h"
#include "EdddisonPluginUtility.h"
#include "EdddisonPluginDefs.h"





PluginBoundingbox::PluginBoundingbox() : isSwitched(false)
{		
}



PluginBoundingbox::PluginBoundingbox(
	std::string scene_id, 
	std::string gui_name, 
	AActor* actor, 
	float po_x, float po_y, float po_z, 
	float vx_x, float vx_y, float vx_z, 
	float vy_x, float vy_y, float vy_z, 
	float vz_x, float vz_y, float vz_z)
	: SocketBoundingBox(
		scene_id, 
		gui_name, 
		po_x, po_y, po_z, 
		vx_x, vx_y, vx_z, 
		vy_x, vy_y, vy_z, 
		vz_x, vz_y, vz_z), isSwitched(false)
{	

	if (!actor) {
		FEdddisonLog::Log(EDDDLOG_ACTOR_MISSING);
	}


	MyActor = actor;
	if (!MyActor.IsValid() || !MyActor.Get()) { return; }


#ifdef DEFAULT_COLLISION_OFF_FOR_BBOX_AND_MOVEABLE
	ActorInEditor.Get()->SetActorEnableCollision(false);
	UStaticMeshComponent* meshComp = Cast<UStaticMeshComponent>(ActorInEditor.Get()->GetComponentByClass(UStaticMeshComponent::StaticClass()));
	if (meshComp != NULL)
	{
		meshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		meshComp->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
		meshComp->SetCollisionProfileName(TEXT("NoCollision"));
	}
#endif

#ifdef DEFAULT_VISIBILITY_OFF_FOR_BBOX
	ActorInEditor.Get()->SetActorHiddenInGame(false);
	ActorInEditor.Get()->SetIsTemporarilyHiddenInEditor(false);
#endif
}



PluginBoundingbox::~PluginBoundingbox(){}



bool PluginBoundingbox::SyncMemberVarsWithActor()
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
	FEdddisonPluginUtility::GetActorBBox(MyActor.Get(),po, vx, vy, vz);
	_position_offset = Vec3f(po.X, po.Y, po.Z);
	_boundingbox_x = Vec3f(vx.X, vx.Y, vx.Z);
	_boundingbox_y = Vec3f(vy.X, vy.Y, vy.Z);
	_boundingbox_z = Vec3f(vz.X, vz.Y, vz.Z);

	return true;

}



void PluginBoundingbox::SwitchActor(AActor* actor, FString name, FVector po, FVector vx, FVector vy, FVector vz)
{
	FEdddisonLog::Log(EDDDLOG_ACTOR_SWITCHED);

	if (!actor || !actor->IsValidLowLevel()) { return; }

	MyActorBackup = MyActor;
	MyActor = actor;

	this->SyncMemberVarsWithActor();

	isSwitched = true;
}



void PluginBoundingbox::UnSwitchActor()
{
	FEdddisonLog::Log(EDDDLOG_ACTOR_UNSWITCHED);

	MyActor = MyActorBackup;
	MyActorBackup = nullptr;
	isSwitched = false;
}



/**
 * Subscribe boundingbox to edddison.
 */
void PluginBoundingbox::subscribe()
{
	if (!FEdddisonSocket::_is_library_loaded())
	{
		FEdddisonLog::Log(EDDDLOG_LIB_NOT_LOADED);
		return;
	}


#if PLATFORM_WINDOWS
#ifdef BB_FIX
	subscribeBoundingBox_edddDll(
		_scene_id.c_str(),
		_gui_name.c_str(),
		_position_offset._x + _boundingbox_x._x, _position_offset._y, _position_offset._z,
		_boundingbox_x._x, _boundingbox_x._y, _boundingbox_x._z,
		_boundingbox_y._x, _boundingbox_y._y, _boundingbox_y._z,
		_boundingbox_z._x, _boundingbox_z._y, _boundingbox_z._z);

#else
	subscribeBoundingBox_edddDll(
		_scene_id.c_str(),
		_gui_name.c_str(),
		_position_offset._x, _position_offset._y, _position_offset._z,
		_boundingbox_x._x, _boundingbox_x._y, _boundingbox_x._z,
		_boundingbox_y._x, _boundingbox_y._y, _boundingbox_y._z,
		_boundingbox_z._x, _boundingbox_z._y, _boundingbox_z._z);
#endif
#endif
}



void PluginBoundingbox::unsubscribe()
{
	if (!FEdddisonSocket::_is_library_loaded())
	{
		FEdddisonLog::Log(EDDDLOG_LIB_NOT_LOADED);
		return;
	}
	
	#if PLATFORM_WINDOWS
	unSubscribeBoundingBox_edddDll(_scene_id.c_str());
#endif
}

