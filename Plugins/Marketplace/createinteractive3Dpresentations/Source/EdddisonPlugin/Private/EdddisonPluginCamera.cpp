/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#include "EdddisonPluginCamera.h"
#include "EdddisonPluginPrivatePCH.h"
#include "EdddisonPlugin.h"
#include "EdddisonPluginUtility.h"
#include "Socket/EdddisonSocket.h"
#include "Kismet/GameplayStatics.h"





PluginCamera::PluginCamera() : isSwitched(false)
{}

PluginCamera::PluginCamera(
	std::string scene_id, 
	std::string gui_name, 
	AActor* actor)
	: SocketCamera(
		scene_id, 
		gui_name), isSwitched(false)
{
	if (!actor) { FEdddisonLog::Log(EDDDLOG_ACTOR_MISSING);	}
	
	MyActor = actor;
	if (!MyActor.IsValid() || !MyActor.Get()) { return; }

	//APlayerController* player_controller = UGameplayStatics::GetPlayerController(ActorInEditor.Get(), 0);
	//if (player_controller) {
	//	player_controller->SetViewTarget(ActorInEditor.Get());
	//}
}



bool PluginCamera::SyncMemberVarsWithActor()
{

	if (!MyActor.Get()) { return false;	}

	FString name = MyActor->GetName();
#if WITH_EDITOR
	name = MyActor->GetActorLabel();
#endif
	_gui_name = TCHAR_TO_UTF8(*name);

	return true;

}



void PluginCamera::SwitchActor(AActor* actor, FString name)
{
	FEdddisonLog::Log(EDDDLOG_ACTOR_SWITCHED);

	if (!actor || !actor->IsValidLowLevel()) { return; }

	MyActorBackup = MyActor;
	MyActor = actor;

	this->SyncMemberVarsWithActor();

	isSwitched = true;
}



void PluginCamera::UnSwitchActor()
{
	FEdddisonLog::Log(EDDDLOG_ACTOR_UNSWITCHED);

	MyActor = MyActorBackup;
	MyActorBackup = nullptr;
	isSwitched = false;
}



void PluginCamera::move(
	const float x, const float y, const float z, 
	const float ya, const float pa, const float ra, 
	const float fov, 
	const float fx, const float fy, const float fz, 
	const float ux, const float uy, const float uz)
{
	FEdddisonLog::Log(FString::Printf(EDDDLOG_CAMERA, x, y, z, ya, pa, ra, fov));

	if (!MyActor.IsValid())	{ return; }

	// get game instance
	//((UGameEngine*)GEngine)->GameInstance


#ifdef USE_MOVE_ACTOR_TRANSACTIONS
	// Let editor know that we're about to do something that we want to undo/redo
	GEditor->BeginTransaction(EDDDTRANSACTION_MOVE);

	// Register actor in opened transaction (undo/redo)
	ActorInEditor.Get()->Modify();
#endif


	// test arguments if NaN
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

	float ya_new = ya;
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
	

	// Move actor to given location
	bool moved = false;
	float inv_ya_new =- (ya_new);

#ifdef USE_MOVE_ACTOR_TELEPORT
	moved = ActorInEditor.Get()->TeleportTo(FVector(x_new, y_new, z_new), FRotator(pa_new, inv_ya_new, ra_new));
#else

	moved = MyActor.Get()->SetActorLocationAndRotation(FVector(x_new, y_new, z_new), FRotator(pa_new, inv_ya_new, ra_new));
#endif


	// set current view target in game mode to the edddison camera
	APlayerController* player_controller = UGameplayStatics::GetPlayerController(MyActor.Get(), 0);
	if (player_controller) {
		player_controller->SetViewTarget(MyActor.Get());
	}

	if (!moved) { FEdddisonLog::Log(EDDDLOG_CAMERA_CANT_MOVE); }

	// TODO: check if this is really a camera actor!!!
	ACameraActor* CameraActor = (ACameraActor*)MyActor.Get();
	if (CameraActor)
	{
#ifdef EDDDISON_CAMERA_SWITCH_IN_VIEWPORT
		// TODO: How to set "Pilot camera actor in viewport"?
		if (GEditor) {
			FViewport* viewPort = GEditor->GetActiveViewport();
			if (viewPort)
			{
				FViewportClient* client = viewPort->GetClient();
				if (client)
				{
					// --> works only in editor???
					FEditorViewportClient* vpClient = (FEditorViewportClient*)client;
					if (vpClient)
					{
						vpClient->SetViewLocation(FVector(x_new, y_new, z_new));
						vpClient->SetViewRotation(FRotator(pa_new, inv_ya_new, ra_new));
						if (!std::isnan(fov)) {
							vpClient->ViewFOV = fov;
						}
						//vpClient->SetCameraLock();
					}
				}
			}
		}

		if (UWorld* world = FEdddisonPluginUtility::GetWorld())
		{
			//world->RegisterAutoActivateCamera(CameraActor, 0);

			FWorldContext* worldContext = GEngine->GetWorldContextFromWorld(world);
			if (worldContext)
			{
			}

			ULocalPlayer* localPlayer = world->GetFirstLocalPlayerFromController();
			if (localPlayer)
			{
				localPlayer->PlayerController->SetViewTarget(CameraActor);
			}

			APlayerController* player = GEngine->GetFirstLocalPlayerController(world);
			//APlayerController* player = world->GetFirstPlayerController();
			if (player)
			{
				player->PlayerCameraManager->SetViewTarget(CameraActor);
				// Blend smoothly to camera.
				player->SetViewTargetWithBlend(CameraActor/*, SmoothBlendTime*/);
				// Cut instantly to camera.
				player->SetViewTarget(CameraActor);
			}
		}
#endif

		if (!FEdddisonPluginUtility::isNan(fov)) {
			UCameraComponent* CameraComponent = CameraActor->GetCameraComponent();
			if (CameraComponent)
			{
				CameraComponent->SetFieldOfView(fov);
			}
		}
	}

#ifdef USE_MOVE_ACTOR_TRANSACTIONS
	// We're done moving actors so close transaction
	GEditor->EndTransaction();
#endif
}



PluginCamera::~PluginCamera(){}

void PluginCamera::subscribe()
{
	if (!FEdddisonSocket::_is_library_loaded())
	{
		FEdddisonLog::Log(EDDDLOG_LIB_NOT_LOADED);
		return;
	}

	#if PLATFORM_WINDOWS
	subscribeCamera_edddDll(
		_scene_id.c_str(),
		_gui_name.c_str(),
		&FEdddisonPluginModule::MoveCameraCallback);
#endif
}

void PluginCamera::unsubscribe()
{
	if (!FEdddisonSocket::_is_library_loaded())
	{
		FEdddisonLog::Log(EDDDLOG_LIB_NOT_LOADED);
		return;
	}

	#if PLATFORM_WINDOWS
	unSubscribeCamera_edddDll(_scene_id.c_str());
#endif
}

