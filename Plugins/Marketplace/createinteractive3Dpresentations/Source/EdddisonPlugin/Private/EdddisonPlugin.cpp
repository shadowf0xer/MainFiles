/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#include "EdddisonPlugin.h"
#include "EdddisonPluginPrivatePCH.h"
#include "EdddisonPluginStyle.h"
#include "EdddisonPluginUtility.h"
#include "EdddisonPluginEdMode.h"
#include "EdddisonSettings.h"
#include "Actors/EdddisonActorBBoxComponent.h"
#include "Actors/EdddisonActorCameraComponent.h"
#include "Actors/EdddisonActorMoveableComponent.h"
#include "Socket/EdddisonSocket.h"

#include "Runtime/Engine/Classes/Engine/World.h"




#define LOCTEXT_NAMESPACE "EdddisonPlugin"

TArray<TSharedPtr<PluginCamera>> FEdddisonPluginModule::_plugin_cameras;
TArray<TSharedPtr<PluginMoveableObject>> FEdddisonPluginModule::_plugin_moveables;
TArray<TSharedPtr<PluginBoundingbox>> FEdddisonPluginModule::_plugin_boundingboxes;

bool FEdddisonPluginModule::bNeedSaveConfig = false;

FString FEdddisonPluginModule::CurrentLevelPathname = "";





/*  -------------------------------------------------------------------------------------------  */
/*  plugin handling  --------------------------------------------------------------------------  */
/*  -------------------------------------------------------------------------------------------  */

//FEdddisonPluginModule::_delegate_helper{};

void FEdddisonPluginModule::StartupModule()
{


	EdddisonLoadLibrary();

	if (!FEdddisonSocket::_is_library_loaded())
	{
		return;
	}

	LoadEditorConfig();


#ifdef RESTART_EDDDISON_ON_WORLD_SWITCH

		// close edddison on a world switch to prevent the linking mess with the new world
		FWorldDelegates::OnPreWorldInitialization.AddStatic(&FEdddisonPluginModule::OnPreWorldInitialization);

		// open edddison on a world switch or start
		FWorldDelegates::OnPostWorldInitialization.AddStatic(&FEdddisonPluginModule::OnPostWorldInitialization);

#else
		RunEdddison();
#endif


#if WITH_EDITOR
		// listen on level changes, like deletion of an actor
		if (FEdddisonPluginUtility::GetWorld()) {
			FEdddisonPluginUtility::GetWorld()->OnLevelsChanged().AddStatic(&FEdddisonPluginModule::OnLevelsChanged);
		}
#endif


#if WITH_EDITOR

		SlateStyle = MakeShareable(new FEdddisonEditorStyle());
		FEditorModeRegistry::Get().RegisterMode<FEdddisonPluginEdMode>(
			FEdddisonPluginEdMode::EM_EdddisonPluginEdModeId,
			EDDDCLASS_EDIT_MODE_NAME,
			FSlateIcon(
				SlateStyle.Get()->GetStyleSetName(),
				"EdddisonEditor.MainBig",
				"EdddisonEditor.MainSmall"),
			true);
#endif


}



void FEdddisonPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module. 
	// For modules that support dynamic reloading, we call this function before unloading the module.

	/*if (UObjectInitialized()) {
		UnregisterSettings();
	}*/

	if (!FEdddisonSocket::_is_library_loaded())
	{
		// This should prevent closing unexisting GUI
		return;
	}

	EdddisonClose(true);
	EdddisonUnloadLibrary();

	SaveEditorConfig();

#if WITH_EDITOR
		FEditorModeRegistry::Get().UnregisterMode(FEdddisonPluginEdMode::EM_EdddisonPluginEdModeId);
#endif


}



void FEdddisonPluginModule::LoadEditorConfig()
{
	//  This method reads project settings and sets the indicator to change the settings.
	//  It deals with the CPU issue for updating the camera location.
	//  If the flag "Use Less CPU when in Background" was on, the actors locations were not updated
	//  during movement with edddison. The coordinates were actually triggered, but the viewport was not 
	//  refreshed.
	//
	//  The issue is described here too:
	//        https://forums.unrealengine.com/showthread.php?22515-m2u-interactive-sync-script-for-Maya-gt-UE4/page3&highlight=refresh
	//        Post from 02-12-2015, 04:45 PM:
	//
	//  This reads the property: Main menu --> Edit --> Editor Preferences --> General --> Miscellaneous --> Performance --> "Use Less CPU when in Background"
    // 
	//  We also tried to avoid this step with following, but no effect...
	//        GEditor->RedrawLevelEditingViewports();
	//        GEditor->RedrawAllViewports();
	//        GEditor->GetActiveViewport()->Invalidate();

	bNeedSaveConfig = false;

	if (GConfig)
	{
		// read the configuration

		// https://answers.unrealengine.com/questions/168736/461-custom-inis-files-read-write-problems.html
		// do we need this call?
		//GConfig->Flush(true, GEditorPerProjectIni);


#if WITH_EDITOR
		/* check and notify to disable ThrottleCPUWhenNotForeground in editor mode.
			These preferences are saved to an EditorPerProjectUserSettings.ini file 
			in the user's /<Game>/Saved/Config/ directory. */
		bool bThrottleCPUWhenNotForeground;
		bool found_it = GConfig->GetBool(
			TEXT("/Script/UnrealEd.EditorPerProjectUserSettings"),
			TEXT("bThrottleCPUWhenNotForeground"),
			bThrottleCPUWhenNotForeground,
			GEditorPerProjectIni);

		if(found_it == false) {

			found_it = GConfig->GetBool(
				TEXT("/Script/UnrealEd.EditorPerformanceSettings"),
				TEXT("bThrottleCPUWhenNotForeground"),
				bThrottleCPUWhenNotForeground,
				GEditorSettingsIni);
		}


		FEdddisonLog::Log(GEditorPerProjectIni);

		if (bThrottleCPUWhenNotForeground || !found_it)
		{
			// change the configuration
			bNeedSaveConfig = true;

			auto engine_version = FEngineVersion::Current();

			// dialog for unreal engine versions up to 4.16
			if (engine_version.GetMajor() >= 4) {
				if (engine_version.GetMinor() <= 16) {
					// inform the user
					FMessageDialog::Open(EAppMsgType::Ok, _eddd_less_cpu_msg_UE_4_16, &_eddd_less_cpu_title);
				}

				// dialog for unreal engine version 4.17 and above
				else {
					// inform the user
					FMessageDialog::Open(EAppMsgType::Ok, _eddd_less_cpu_msg_UE_4_17, &_eddd_less_cpu_title);
				}
			}				
		}
		else
		{
			FEdddisonLog::Log(EDDDLOG_LESS_CPU);
		}
#endif
	}

}



void FEdddisonPluginModule::SaveEditorConfig()
{
	if (bNeedSaveConfig && GConfig)
	{
		GConfig->SetBool(
			TEXT("/Script/UnrealEd.EditorPerProjectUserSettings"),
			TEXT("bThrottleCPUWhenNotForeground"),
			false,
			GEditorPerProjectIni);

		GConfig->Flush(false, GEditorPerProjectIni);
	}
}



/**
 * Returns exactly if plugin is running in editor or in game.
 * @return True if running in editor.
 */
bool FEdddisonPluginModule::IsWithEditor()
{
#if WITH_EDITOR
	return true;
#else
	return false;
#endif
}



/**
 * 
 */
bool FEdddisonPluginModule::IsUsingEditor()
{
	const EWorldType::Type world_type = GetWorldType();
	const bool is_with_editor = IsWithEditor();

	// Combine these three:
	const bool is_using_editor =
		world_type == EWorldType::Type::Editor && is_with_editor;

	switch (world_type)
	{
		// if run from editor the world type is always Editor. Even if Play or Launch mode is used! 
		case EWorldType::Type::Editor:
			FEdddisonLog::Log(FString::Printf(EDDDLOG_WORLD_TYPE, TEXT("Editor")));
			break;
		case EWorldType::Type::Game:
			FEdddisonLog::Log(FString::Printf(EDDDLOG_WORLD_TYPE, TEXT("Game")));
			break;
		case EWorldType::Type::Inactive:
			FEdddisonLog::Log(FString::Printf(EDDDLOG_WORLD_TYPE, TEXT("Inactive")));
			break;
		case EWorldType::Type::None:
			FEdddisonLog::Log(FString::Printf(EDDDLOG_WORLD_TYPE, TEXT("None")));
			break;
		// Never had a world like this! Its always Editor if working in editor.
		case EWorldType::Type::PIE:
			FEdddisonLog::Log(FString::Printf(EDDDLOG_WORLD_TYPE, TEXT("PIE")));
			break;
		// Never had a world like this! Its always Editor if working in editor.
		case EWorldType::Type::EditorPreview:
			FEdddisonLog::Log(FString::Printf(EDDDLOG_WORLD_TYPE, TEXT("Preview")));
			break;
		case EWorldType::Type::GamePreview:
			FEdddisonLog::Log(FString::Printf(EDDDLOG_WORLD_TYPE, TEXT("Preview")));
			break;
		default:
			FEdddisonLog::Log(FString::Printf(EDDDLOG_WORLD_TYPE, TEXT("Unknown")));
			break;
	}

	if (is_with_editor)
		FEdddisonLog::Log(EDDDLOG_WITH_EDITOR);
	else
		FEdddisonLog::Log(EDDDLOG_NOT_WITH_EDITOR);

	if (is_using_editor)
		FEdddisonLog::Log(EDDDLOG_USING_EDITOR);
	else
		FEdddisonLog::Log(EDDDLOG_NOT_USING_EDITOR);

	return is_using_editor;
}



EWorldType::Type FEdddisonPluginModule::GetWorldType()
{
	//namespace EWorldType
	//{
	//	enum Type
	//	{
	//		None,       // An untyped world, in most cases this will be the vestigial worlds of streamed in sub-levels
	//		Game,       // The game world
	//		Editor,     // A world being edited in the editor
	//		PIE,        // A Play In Editor world
	//		EditorPreview or GamePreview,    // A preview world for an editor tool
	//		Inactive    // An editor world that was loaded but not currently being edited in the level editor
	//	};
	//}
	if (UWorld* world = FEdddisonPluginUtility::GetWorld()) {
		return world->WorldType;
	}
	// Is following prediction correct???
	return EWorldType::Editor;
}





/*  -------------------------------------------------------------------------------------------  */
/*  Add and remove edddison item  -------------------------------------------------------------  */
/*  -------------------------------------------------------------------------------------------  */


bool FEdddisonPluginModule::AddCamera(AActor *actor, FString id)
{
	if (!actor)
		return false;

	FString name = actor->GetName();
#if WITH_EDITOR
	name = actor->GetActorLabel();
#endif

	FEdddisonLog::Log(FString::Printf(EDDDLOG_CAMERA_NAME, *name));
	FEdddisonLog::Log(FString::Printf(EDDDLOG_CAMERA_ID, *id));

	// If switching from editor to playing mode, the actors and
	// their components are recreated and registered which leads
	// to duplicated actors. In this case we want to
	// switch to the new Actor* pointer, but use the same
	// edddison objects and subscribe callbacks.
	// The search criteria is the object ID.
	TSharedPtr<PluginCamera> found = FindCamera(id);
	if (found.IsValid() && found.Get())
	{
		found.Get()->SwitchActor(actor, name);
		found->subscribe();
	}
	else
	{
		// a camera to walk through the scene
		TSharedPtr<PluginCamera> cam = MakeShareable(new PluginCamera(
			TCHAR_TO_UTF8(*id),
			TCHAR_TO_UTF8(*name),
			actor));

		if (!isCameraInList(actor))
		{
			_plugin_cameras.Add(cam);
		}

		cam->subscribe();
	}

	return true;
}



bool FEdddisonPluginModule::AddBBox(AActor *actor, FString id)
{
	if (!actor)
		return false;

	FString name = actor->GetName();
#if WITH_EDITOR
	name = actor->GetActorLabel();
#endif

	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_NAME, *name));	
	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_ID, *id));

	FVector po, vx, vy, vz;
	FEdddisonPluginUtility::GetActorBBox(actor, po, vx, vy, vz);

	// If switching from editor to playing mode, the actors and
	// their components are recreated and registered which leads
	// to duplicated actors. In this case we want to
	// switch to the new Actor* pointer, but use the same
	// edddison objects and subscribe callbacks.
	// The search criteria is the object ID.
	TSharedPtr<PluginBoundingbox> found = FindBBox(id);
	if (found.IsValid() && found.Get())
	{
		found.Get()->SwitchActor(actor, name, po, vx, vy, vz);
		found->subscribe();
	}
	else
	{
		// a boundingbox defines the area/volume whithin the camera can move.
		TSharedPtr<PluginBoundingbox> bbox = MakeShareable(new PluginBoundingbox(
			TCHAR_TO_UTF8(*id),
			TCHAR_TO_UTF8(*name),
			actor,
			po.X, po.Y, po.Z,
			vx.X, vx.Y, vx.Z,
			vy.X, vy.Y, vy.Z,
			vz.X, vz.Y, vz.Z));

		if (!isBoundingBoxInList(actor))
		{
			_plugin_boundingboxes.Add(bbox);
		}

		bbox->subscribe();
	}

	return true;
}



bool FEdddisonPluginModule::AddMoveable(AActor *actor, FString id)
{
	if (!actor || actor == nullptr)
		return false;

	FString name = actor->GetName();
#if WITH_EDITOR
	name = actor->GetActorLabel();
#endif

	FEdddisonLog::Log(FString::Printf(EDDDLOG_MOVEABLE_NAME, *name));
	FEdddisonLog::Log(FString::Printf(EDDDLOG_MOVEABLE_ID, *id));

	FVector po, vx, vy, vz;
	FEdddisonPluginUtility::GetActorBBox(actor, po, vx, vy, vz);

	// If switching from editor to playing mode, the actors and
	// their components are recreated and registered which leads
	// to duplicated actors. In this case we want to
	// switch to the new Actor* pointer, but use the same
	// edddison objects and subscribe callbacks.
	// The search criteria is the object ID.
	TSharedPtr<PluginMoveableObject> found = FindMoveable(id);
	if (found.IsValid() && found.Get())
	{
		found.Get()->SwitchActor(actor, name, po, vx, vy, vz);
		found->subscribe();
	}
	else
	{
		TSharedPtr<PluginMoveableObject> moveable = MakeShareable(new PluginMoveableObject(
			TCHAR_TO_UTF8(*id),
			TCHAR_TO_UTF8(*name),
			actor,
			po.X, po.Y, po.Z,
			vx.X, vx.Y, vx.Z,
			vy.X, vy.Y, vy.Z,
			vz.X, vz.Y, vz.Z));

		if (!isMoveableInList(actor)) {
			_plugin_moveables.Add(moveable);
		}

		moveable->subscribe();
	}

	return true;
}



//bool FEdddisonPluginModule::RemoveCamera(AActor *actor)
//{
//	if (!actor) {
//		return false;
//	}
//
//	// If switching from editor to playing mode, the actors and
//	// their components are recreated and registered which leads
//	// to duplicated actors. In this case we want to
//	// switch to the new Actor* pointer, but use the same
//	// edddison objects and subscribe callbacks.
//	// The search criteria is the object actor pointer.
//	TSharedPtr<PluginCamera> camera = FindCamera(actor);
//
//	return RemoveCamera(camera);
//}



bool FEdddisonPluginModule::RemoveCamera(TSharedPtr<PluginCamera> camera)
{
	if (!camera.IsValid()) {
		return false;
	}

	if (camera.Get()->isSwitched)
	{
		camera.Get()->UnSwitchActor();
		//return true;
	}

	// remove
	_plugin_cameras.Remove(camera);

	// unsubscribe
	camera->unsubscribe();

	return true;
}



//bool FEdddisonPluginModule::RemoveBBox(AActor *actor)
//{
//	if (!actor) {
//		return false;
//	}
//
//	// If switching from editor to playing mode, the actors and
//	// their components are recreated and registered which leads
//	// to duplicated actors. In this case we want to
//	// switch to the new Actor* pointer, but use the same
//	// edddison objects and subscribe callbacks.
//	// The search criteria is the object actor pointer.
//	TSharedPtr<PluginBoundingbox> bbox = FindBBox(actor);
//
//	return RemoveBBox(bbox);
//}



bool FEdddisonPluginModule::RemoveBBox(TSharedPtr<PluginBoundingbox> bbox)
{
	if (!bbox.IsValid()) {
		return false;
	}

	
	if (bbox.Get()->isSwitched)
	{
		bbox.Get()->UnSwitchActor();
		//return true;
	}


	// remove
	_plugin_boundingboxes.Remove(bbox);

	// unsubscribe
	bbox->unsubscribe();

	return true;
}




//bool FEdddisonPluginModule::RemoveMoveable(AActor *actor)
//{
//	if (!actor) {
//		return false;
//	}
//
//	
//	TSharedPtr<PluginMoveableObject> moveable = FindMoveable(actor);
//
//	return RemoveMoveable(moveable);
//}



bool FEdddisonPluginModule::RemoveMoveable(TSharedPtr<PluginMoveableObject> moveable)
{
	if (!moveable.IsValid()) {
		return false;
	}

	// TODO: do we still need this. Has this side effects?
	if (moveable.Get()->isSwitched)
	{
		moveable.Get()->UnSwitchActor();
		// return true;
	}
	
	// remove
	_plugin_moveables.Remove(moveable);

	// unsubscribe
	moveable->unsubscribe();

	return true;
}





/*  -------------------------------------------------------------------------------------------  */
/*  Find edddison item  -----------------------------------------------------------------------  */
/*  -------------------------------------------------------------------------------------------  */


TSharedPtr<PluginCamera> FEdddisonPluginModule::FindCamera(FString id)
{

	for (TSharedPtr<PluginCamera> it : _plugin_cameras)
	{
		if (it.IsValid()) {

			if (0 == it->getSceneId().compare(TCHAR_TO_UTF8(*id))) {

				if (it->MyActor.IsValid()) {
					return it;
				}

#if WITH_EDITOR
				if (it->isSwitched)
				{
					it->UnSwitchActor();
					if (it->MyActor.IsValid()) {
						return it;
					}
				}
#endif
			}
		}
	}


	return nullptr;
}



//TSharedPtr<PluginCamera> FEdddisonPluginModule::FindCamera(AActor *actor)
//{
//	for (TSharedPtr<PluginCamera> camera : _plugin_cameras)
//	{
//		if (camera.IsValid() && camera->ActorInEditor.IsValid() && camera->ActorInEditor.Get() == actor)
//			return camera;
//	}
//	return nullptr;
//}



bool FEdddisonPluginModule::ExistCamera(AActor *actor)
{
	for (TSharedPtr<PluginCamera> camera : _plugin_cameras)
	{
		if (camera.IsValid() && camera->MyActor.IsValid() && camera->MyActor.Get() == actor) {
				return true;
			
		}
	}
	return false;
}



TSharedPtr<PluginBoundingbox> FEdddisonPluginModule::FindBBox(FString id)
{

	for (TSharedPtr<PluginBoundingbox> it : _plugin_boundingboxes)
	{
		if (it.IsValid()) {

			if (0 == it->getSceneId().compare(TCHAR_TO_UTF8(*id))) {

				if (it->MyActor.IsValid()) {
					return it;
				}

#if WITH_EDITOR
				if (it->isSwitched)
				{
					it->UnSwitchActor();
					if (it->MyActor.IsValid()) {
						return it;
					}
				}
#endif
			}
		}
	}


	return nullptr;
}



//TSharedPtr<PluginBoundingbox> FEdddisonPluginModule::FindBBox(AActor *actor)
//{
//	for (TSharedPtr<PluginBoundingbox> bbox : _plugin_boundingboxes)
//	{
//		if (bbox.IsValid() && bbox->ActorInEditor.IsValid() && bbox->ActorInEditor.Get() == actor)
//			return bbox;
//	}
//	return nullptr;
//}



bool FEdddisonPluginModule::ExistBBox(AActor *actor)
{
	for (TSharedPtr<PluginBoundingbox> bbox : _plugin_boundingboxes)
	{
		if (bbox.IsValid() && bbox->MyActor.IsValid() && bbox->MyActor.Get() == actor) {
				return true;
			
		}
	}
	return false;
}



TSharedPtr<PluginMoveableObject> FEdddisonPluginModule::FindMoveable(FString id)
{
	
	for (TSharedPtr<PluginMoveableObject> it : _plugin_moveables)
	{
		if (it.IsValid()) {

			if (0 == it->getSceneId().compare(TCHAR_TO_UTF8(*id))) {

				if (it->MyActor.IsValid()) {
					return it;
				}

#if WITH_EDITOR
				if (it->isSwitched)
				{
					if (it->MyActorBackup.IsValid()) {
						it->UnSwitchActor();
							return it;
						
					}
				}
#endif
			}
		}
	}


	return nullptr;
}



//TSharedPtr<PluginMoveableObject> FEdddisonPluginModule::FindMoveable(AActor *actor)
//{
//	for (TSharedPtr<PluginMoveableObject> moveable : _plugin_moveables)
//	{
//		if (moveable.IsValid() && moveable->ActorInEditor.IsValid() && moveable->ActorInEditor.Get() == actor) {
//			return moveable;
//		}
//	}
//	return nullptr;
//}


bool FEdddisonPluginModule::ExistMoveable(AActor *actor)
{
	for (TSharedPtr<PluginMoveableObject> moveable : _plugin_moveables)
	{
		if (moveable.IsValid() && moveable->MyActor.IsValid() && moveable->MyActor.Get() == actor) {
				return true;
		}
	}
	return false;
}









/*  -------------------------------------------------------------------------------------------  */
/*  Exist edddison item  ----------------------------------------------------------------------  */
/*  -------------------------------------------------------------------------------------------  */


bool FEdddisonPluginModule::isCameraInList(AActor* actor)
{
	for (TSharedPtr<PluginCamera> camera : _plugin_cameras)
	{
		if (camera.IsValid() && camera->MyActor.IsValid()) {
			if (camera->MyActor->GetUniqueID() == actor->GetUniqueID()) {
				return true;
			}
		}
	}
	return false;
}



bool FEdddisonPluginModule::isBoundingBoxInList(AActor* actor)
{
	for (TSharedPtr<PluginBoundingbox> bbox : _plugin_boundingboxes)
	{
		if (bbox.IsValid() && bbox->MyActor.IsValid()) {//&& bbox->ActorInEditor.Get() == actor) {
			if (bbox->MyActor->GetUniqueID() == actor->GetUniqueID()) {
				return true;
			}
		}
	}
	return false;
}



bool FEdddisonPluginModule::isMoveableInList(AActor* actor)
{
	for (TSharedPtr<PluginMoveableObject> moveable : _plugin_moveables)
	{
		if (moveable.IsValid() && moveable->MyActor.IsValid()) {// && moveable->ActorInEditor.Get() == actor) {
			if (moveable->MyActor->GetUniqueID() == actor->GetUniqueID()) {
				return true;
			}
		}
	}
	return false;
}





/*  -------------------------------------------------------------------------------------------  */
/*  Callbacks on edddison items  --------------------------------------------------------------  */
/*  -------------------------------------------------------------------------------------------  */

#if PLATFORM_WINDOWS

void FEdddisonPluginModule::MoveCameraCallback(
	LPCSTR id, 
	float x, float y, float z, 
	float ya, float pa, float ra,
	float fov, 
	float fx, float fy, float fz, 
	float ux, float uy, float uz)
{
	
	FString sid(id);
	//FEdddisonLog::Log(FString::Printf(TEXT("Callback Camera ID: %s"), *sid));

	TSharedPtr<PluginCamera> camera = FindCamera(sid);
	if (camera.IsValid() && camera.Get())
		camera.Get()->move(x, y, z, ya, pa, ra, fov, fx, fy, fz, ux, uy, uz);
}



void FEdddisonPluginModule::MoveMoveableCallback(
	LPCSTR id,
	int v,
	float x, float y, float z,
	float ya, float pa, float ra,
	float fx, float fy, float fz,
	float ux, float uy, float uz)
{


	FString sid(id);
	//FEdddisonLog::Log(FString::Printf(TEXT("Callback Moveable ID: %s"), *sid));

	TSharedPtr<PluginMoveableObject> moveable = FindMoveable(sid);
	if (moveable.IsValid() && moveable.Get())
		moveable.Get()->move(v, x, y, z, ya, pa, ra, fx, fy, fz, ux, uy, uz);
}

#endif





/*  -------------------------------------------------------------------------------------------  */
/*  Set minimal scene descriptions  -----------------------------------------------------------  */
/*  -------------------------------------------------------------------------------------------  */


/**
 * edddison needs a boundingbox definition to move items. Subscribe to edddison the bounding box spanning the whole scene.
 */
void FEdddisonPluginModule::EdddisonSubscribeGlobalBBox()
{
	FBox globalBBox = FEdddisonPluginUtility::GetGlobalBBox();
	FVector globalOrigin = globalBBox.GetCenter();
	FVector globalExtent = globalBBox.GetExtent();

	FVector po = globalOrigin - globalExtent;
	FVector vx(2 * globalExtent.X, 0, 0);
	FVector vy(0, 2 * globalExtent.Y, 0);
	FVector vz(0, 0, 2 * globalExtent.Z);

	FEdddisonSocket::SubscribeGlobalBBox(
		TCHAR_TO_UTF8(EDDDSUBSCRIBE_BBOX_ID),
		TCHAR_TO_UTF8(EDDDSUBSCRIBE_BBOX_LABEL),
		po.X, po.Y, po.Z,
		vx.X, vx.Y, vx.Z,
		vy.X, vy.Y, vy.Z,
		vz.X, vz.Y, vz.Z);

	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_LABEL, EDDDSUBSCRIBE_BBOX_LABEL));
	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_ID, EDDDSUBSCRIBE_BBOX_ID));

	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_PO, po.X, po.Y, po.Z));
	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_VX, vx.X, vx.Y, vx.Z));
	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_VY, vy.X, vy.Y, vy.Z));
	FEdddisonLog::Log(FString::Printf(EDDDLOG_BBOX_VZ, vz.X, vz.Y, vz.Z));
}





/*  -------------------------------------------------------------------------------------------  */
/*  add and remove unreal actors to edddison plugin  ------------------------------------------  */
/*  -------------------------------------------------------------------------------------------  */


#if WITH_EDITOR
/**
 * Add the CameraActor(other camera actor types work too) selected in unreal editor to the edddison plugin.
 */
void FEdddisonPluginModule::EdddisonAddCamera()
{
#ifdef EDDDISON_SOCKET_SINGLE_CAMERA
	if (_plugin_cameras.Num() >= 1)
	{
		// inform the user
		FMessageDialog::Open(EAppMsgType::Ok, EDDDGUI_SINGLE_CAM_ALLOW);

		return;
	}
#endif

	USelection* SelectedActors = GEditor->GetSelectedActors();

	// For each selected actor
	for (FSelectionIterator Iter(*SelectedActors); Iter; ++Iter)
	{
		if (AActor* actor = Cast<AActor>(*Iter))
		{
			UEdddisonActorCameraComponent* component = UEdddisonActorCameraComponent::CreateInstance(actor);
		}
	}
}



/**
 * Add the StaticMeshActor cube selected in unreal engine to the edddison plugin. 
 */
void FEdddisonPluginModule::EdddisonAddBBox()
{
	USelection* SelectedActors = GEditor->GetSelectedActors();

	// For each selected actor
	for (FSelectionIterator Iter(*SelectedActors); Iter; ++Iter)
	{
		if (AActor* actor = Cast<AActor>(*Iter))
		{
			UEdddisonActorBBoxComponent* component = UEdddisonActorBBoxComponent::CreateInstance(actor);
		}
	}
}



/**
* Add an Actor item selected in unreal engine to the edddison plugin.
*/
void FEdddisonPluginModule::EdddisonAddMoveable()
{
	USelection* SelectedActors = GEditor->GetSelectedActors();

	// For each selected actor
	for (FSelectionIterator Iter(*SelectedActors); Iter; ++Iter)
	{
		if (AActor* actor = Cast<AActor>(*Iter))
		{
			UEdddisonActorMoveableComponent* component = UEdddisonActorMoveableComponent::CreateInstance(actor);
		}
	}
}



/**
* Remove a camera from the edddison plugin.
*/
void FEdddisonPluginModule::EdddisonRemoveCamera(TSharedPtr<PluginCamera> camera)
{
	if (!camera.IsValid()) {
		return;
	}

	/* this removes the link between the edddison object and this actor. do this in editor mode only for configuration purpose. do this not in game mode. on game exit this would delete the link to the edddison object, which would be missed on next start! */
#if WITH_EDITOR
	FEdddisonPluginModule::RemoveCamera(camera);
#endif

	UEdddisonActorCameraComponent::DestroyInstance(camera.Get()->MyActor.Get());
}



/**
* Remove a boundingbox from the edddison plugin.
*/
void FEdddisonPluginModule::EdddisonRemoveBBox(TSharedPtr<PluginBoundingbox> bbox)
{
	if (!bbox.IsValid()) {
		return;
	}

	/* this removes the link between the edddison object and this actor. do this in editor mode only for configuration purpose. do this not in game mode. on game exit this would delete the link to the edddison object, which would be missed on next start! */
#if WITH_EDITOR
	FEdddisonPluginModule::RemoveBBox(bbox);
#endif

	UEdddisonActorBBoxComponent::DestroyInstance(bbox.Get()->MyActor.Get());
}



/**
* Remove a moveable from the edddison plugin.
*/
void FEdddisonPluginModule::EdddisonRemoveMoveable(TSharedPtr<PluginMoveableObject> moveable)
{
	if (!moveable.IsValid()) {
		return;
	}

	/* this removes the link between the edddison object and this actor. do this in editor mode only for configuration purpose. do this not in game mode. on game exit this would delete the link to the edddison object, which would be missed on next start! */
#if WITH_EDITOR
	FEdddisonPluginModule::RemoveMoveable(moveable);
#endif

	UEdddisonActorMoveableComponent::DestroyInstance(moveable.Get()->MyActor.Get());
}



/**
* Remove all items from the edddison plugin.
*/
void FEdddisonPluginModule::EdddisonClear()
{
	// walk through the copy of the lists and delete from original lists
	TArray<TSharedPtr<PluginCamera>> cameras(_plugin_cameras);
	TArray<TSharedPtr<PluginMoveableObject>> moveables(_plugin_moveables);
	TArray<TSharedPtr<PluginBoundingbox>> boundingboxes(_plugin_boundingboxes);

	// empty unreal lists and delete actor components
	for (TSharedPtr<PluginCamera> camera : cameras)
	{
		if (camera.IsValid() && camera->MyActor.IsValid())
			UEdddisonActorCameraComponent::DestroyInstance(camera->MyActor.Get());
	}
	for (TSharedPtr<PluginBoundingbox> bbox : boundingboxes)
	{
		if (bbox.IsValid() && bbox->MyActor.IsValid())
			UEdddisonActorBBoxComponent::DestroyInstance(bbox->MyActor.Get());
	}
	for (TSharedPtr<PluginMoveableObject> moveable : moveables)
	{
		if (moveable.IsValid() && moveable->MyActor.IsValid())
			UEdddisonActorMoveableComponent::DestroyInstance(moveable->MyActor.Get());
	}

	EdddisonSubscribeGlobalBBox();
}

#endif





/*  -------------------------------------------------------------------------------------------  */
/*  plugin handling  --------------------------------------------------------------------------  */
/*  -------------------------------------------------------------------------------------------  */


/**
 * Put objects up-to-date with Unreal actors. Use this if the Actors in Unreal change the geometry
 */
void FEdddisonPluginModule::EdddisonUpdate()
{
	// resubscribe all
	for (TSharedPtr<PluginCamera> _camera : _plugin_cameras)
	{
		if (_camera.IsValid() && _camera->MyActor.IsValid())
		{
			// sync and resubscribe
			if (_camera->SyncMemberVarsWithActor()) {
				_camera->subscribe();
			}
		}
	}
	for (TSharedPtr<PluginBoundingbox> _bbox : _plugin_boundingboxes)
	{
		if (_bbox.IsValid() && _bbox->MyActor.IsValid())
		{
			// sync and resubscribe
			if (_bbox->SyncMemberVarsWithActor()) {
				_bbox->subscribe();
			}
		}
	}
	for (TSharedPtr<PluginMoveableObject> _moveable : _plugin_moveables)
	{
		if (_moveable.IsValid() && _moveable->MyActor.IsValid())
		{
			// sync and resubscribe
			if (_moveable->SyncMemberVarsWithActor()) {
				_moveable->subscribe();
			}
		}
	}

	EdddisonSubscribeGlobalBBox();
}



/**
 * Start edddison.
 *
 * @param force Start edddison without check if already running.
 */
void FEdddisonPluginModule::EdddisonOpen(bool force)
{
	
	FEdddisonLog::Log("EdddisonOpen");
	UWorld* world = FEdddisonPluginUtility::GetWorld();
	if (world != nullptr) {
		ULevel*  level = world->GetCurrentLevel();
		if (level != nullptr) {

			const FString level_path = level->GetPathName();
			CurrentLevelPathname = level_path;
		}
	}


	// do not check on path names! this is not save. EdddisonOpen may gets interrupted on world switch just after CurrentLevelPathname set
	//if (!level_path.Equals(CurrentLevelPathname) || force) {

	FEdddisonSocket::Open(/*CurrentLevelPathname*/);

	EdddisonSubscribeGlobalBBox();


}



/**
 * Use this method to open edddison by code (events). It takes all start settings in account.
 * Do not use it to start edddison by start button in plugin; therefore use EdddisonOpen() directly.
 */
void FEdddisonPluginModule::RunEdddison() {

#ifdef FORCE_LOAD_EDDDISON_EDITOR_ON_START
		EdddisonOpen(false);


#else

	UEdddisonSettings* settings = GetMutableDefault<UEdddisonSettings>();
	bool do_autostart_with_editor = settings->GetAutostartWithEditor();
	bool do_autostart_with_game = settings->GetAutostartWithGame();

#if WITH_EDITOR
	if (do_autostart_with_editor) {
		EdddisonOpen(false);
	}
#else
	if (do_autostart_with_game) {
		EdddisonOpen(false);
	}
#endif

		
#endif
}



/**
 * \brief Restore Viewport Realtime and close edddison editor.
 */
void FEdddisonPluginModule::EdddisonClose(bool destroy_dummy_actor)
{
	FEdddisonLog::Log("EdddisonClose");

#if WITH_EDITOR
	FEdddisonPluginModule::RestoreViewportsRealtime(false);
#endif
	
	FEdddisonSocket::Close();

}



/**
 * Load edddison library.
 */
void FEdddisonPluginModule::EdddisonLoadLibrary()
{
	FEdddisonSocket::loadLibrary();
}



/**
 * Unload edddison library.
 */
void FEdddisonPluginModule::EdddisonUnloadLibrary()
{
	FEdddisonSocket::unloadLibrary();
}





/*  -------------------------------------------------------------------------------------------  */
/*  unreal event handling  --------------------------------------------------------------------  */
/*  -------------------------------------------------------------------------------------------  */

#ifdef RESTART_EDDDISON_ON_WORLD_SWITCH
/**
 * Delegate to close edddison on pre initialization of a new world.
 * If edddison is active, the subscription of the new world items would damage the configuration
 * of the active edddison configuration (which is from previous world).
 */
void FEdddisonPluginModule::OnPreWorldInitialization(UWorld * world, UWorld::InitializationValues values) {

	FEdddisonLog::Log("OnPreWorldInitialization fired -> closing edddison");
	EdddisonClose(false);	
}
#endif


/**
 * Delegate to start edddison on post initialization of a new world.
 */
void FEdddisonPluginModule::OnPostWorldInitialization(UWorld * world, UWorld::InitializationValues values) {

	FEdddisonLog::Log("OnPostWorldInitialization fired -> starting edddison");
	FPlatformProcess::Sleep(EDDDSLEEP_SECS_START_DELAY);

	RunEdddison();
}



#if WITH_EDITOR
/**
 * Delegate to react on level changes, like deletion of an actor.
 */
void FEdddisonPluginModule::OnLevelsChanged() {
	FEdddisonLog::Log("OnLevelsChanged");
}
#endif





/*  -------------------------------------------------------------------------------------------  */
/*  Viewport Realtime handling  ---------------------------------------------------------------  */
/*  -------------------------------------------------------------------------------------------  */

/**
 * \brief Enable or disable the Realtime feature of all Viewports.
 * NOTE: If realtime is false, edddison interaction is not shown!
 * \param value True to enable Viewport Realtime. False to disable.
 * \param for_the_active_only Do this for the active Viewport only.
 * \return False on error.
 */
bool FEdddisonPluginModule::SetAllViewportsRealtime(bool value, bool for_the_active_only)
{
	bool retval = false;
#if WITH_EDITOR

	// Unreal 4.21 does not have GEditor->GetAllViewportClients()
#if ((ENGINE_MAJOR_VERSION < 5) && (ENGINE_MINOR_VERSION < 22))

	if (GEditor != nullptr) {


		// set the active viewport only
		if (GEditor->GetActiveViewport() != nullptr)
		{
			auto client = (FEditorViewportClient*)GEditor->GetActiveViewport()->GetClient();
			if (client != nullptr) {
				if (value)
				{
					client->SetRealtime(true, false);
				}
				else
				{
					client->RestoreRealtime(true);
				}
				retval = true;
			}
		}


	}
#else // UE version > 4.21
	if (GEditor != nullptr) {

		if (for_the_active_only)
		{
			// set the active viewport only
			if (GEditor->GetActiveViewport() != nullptr)
			{

				auto client = (FEditorViewportClient*)GEditor->GetActiveViewport()->GetClient();
				if (client != nullptr) {
#if ((ENGINE_MAJOR_VERSION < 5) && (ENGINE_MINOR_VERSION < 25))
					if (value)
					{
						client->SetRealtime(true, false);
					}
					else
					{
						client->RestoreRealtime(true);
					}
#else
					if (value)
					{
						client->SetRealtimeOverride(true, FText::FromString("edddison"));
					}
					else
					{
						client->RemoveRealtimeOverride();
					}
#endif
					retval = true;
				}
			}
		}
		else {
			for (FEditorViewportClient* client : GEditor->GetAllViewportClients())
			{
				if (client != nullptr) {
#if ((ENGINE_MAJOR_VERSION < 5) && (ENGINE_MINOR_VERSION < 25))
					if (value)
					{
						client->SetRealtime(true, false);
					}
					else
					{
						client->RestoreRealtime(true);
					}
#else
					if (value)
					{
						client->SetRealtimeOverride(true, FText::FromString("edddison"));
					}
					else
					{
						client->RemoveRealtimeOverride();
					}
#endif
					retval = true;
				}
			}
		}
	}
#endif
#endif

	return retval;
}



/**
 * \brief Restore the Viewports Realtime feature to the stored value.
 * \param for_the_active_only Do this for the active Viewport only.
 */
void FEdddisonPluginModule::RestoreViewportsRealtime(bool for_the_active_only)
{
	// restore Client Viewport realtime setting
#if WITH_EDITOR



	// Unreal 4.21 does not have GEditor->GetAllViewportClients()
#if ((ENGINE_MAJOR_VERSION < 5) && (ENGINE_MINOR_VERSION < 22))

	if (GEditor != nullptr) {
		if (GEditor->GetActiveViewport() != nullptr)
		{
			auto client = (FEditorViewportClient*)GEditor->GetActiveViewport()->GetClient();
			if (client != nullptr) {
				client->RestoreRealtime(true);
			}
		}

	}

#else

	if (GEditor != nullptr) {
		if (for_the_active_only) {
			if (GEditor->GetActiveViewport() != nullptr)
			{
				auto client = (FEditorViewportClient*)GEditor->GetActiveViewport()->GetClient();
				if (client != nullptr) {
#if ((ENGINE_MAJOR_VERSION < 5) && (ENGINE_MINOR_VERSION < 25))
					client->RestoreRealtime(true);
#else
					client->RemoveRealtimeOverride();
#endif

				}
			}
		}
		else
		{
			for (FEditorViewportClient* client : GEditor->GetAllViewportClients())
			{
				if (client != nullptr) {

#if ((ENGINE_MAJOR_VERSION < 5) && (ENGINE_MINOR_VERSION < 25))
					client->RestoreRealtime(true);
#else
					client->RemoveRealtimeOverride();
#endif

				}
			}
		}
	}

#endif
#endif
}




#undef LOCTEXT_NAMESPACE	
IMPLEMENT_GAME_MODULE(FEdddisonPluginModule, EdddisonPlugin)
