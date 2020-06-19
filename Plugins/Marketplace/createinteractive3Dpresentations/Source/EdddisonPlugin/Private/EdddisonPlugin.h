/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */

#ifndef __EDDD__EDDDISONPLUGIN_H__
#define __EDDD__EDDDISONPLUGIN_H__



#include "EdddisonPluginPrivatePCH.h"

#include "EdddisonPluginBBox.h"
#include "EdddisonPluginCamera.h"
#include "EdddisonPluginMoveable.h"


class FEdddisonPluginModule : public IModuleInterface
{

	private:

		
		static FString CurrentLevelPathname;

		// Holds the plug-ins style set
		TSharedPtr<ISlateStyle> SlateStyle;

		static bool bNeedSaveConfig;

		static EWorldType::Type GetWorldType();
		static bool IsWithEditor();
		
		static void RunEdddison();
		static void LoadEditorConfig();
		static void SaveEditorConfig();
		
		static void OnPreWorldInitialization(UWorld * world, UWorld::InitializationValues values);
		static void OnPostWorldInitialization(UWorld * world, UWorld::InitializationValues values);
#if WITH_EDITOR
		static void OnLevelsChanged();
#endif



public:
		static bool SetAllViewportsRealtime(bool bValue, bool for_the_active_only);
		static void RestoreViewportsRealtime(bool for_the_active_only);
		

		// IModuleInterface implementation
		virtual void StartupModule() override;
		virtual void ShutdownModule() override;

		static bool IsUsingEditor();

//#if WITH_EDITOR
		static bool AddCamera(AActor *actor, FString id);
		static bool AddBBox(AActor *actor, FString id);
		static bool AddMoveable(AActor *actor, FString id);
		
		//static bool RemoveCamera(AActor *actor);
		//static bool RemoveBBox(AActor *actor);
		//static bool RemoveMoveable(AActor *actor);

		static bool RemoveCamera(TSharedPtr<PluginCamera> camera);
		static bool RemoveBBox(TSharedPtr<PluginBoundingbox> bbox);
		static bool RemoveMoveable(TSharedPtr<PluginMoveableObject> moveable);
//#endif

		static TSharedPtr<PluginCamera> FindCamera(FString id);
		//static TSharedPtr<PluginCamera> FindCamera(AActor *actor);
		static bool ExistCamera(AActor *actor);

		static TSharedPtr<PluginBoundingbox> FindBBox(FString id);
		//static TSharedPtr<PluginBoundingbox> FindBBox(AActor *actor);
		static bool ExistBBox(AActor *actor);

		static TSharedPtr<PluginMoveableObject> FindMoveable(FString id);
		//static TSharedPtr<PluginMoveableObject> FindMoveable(AActor *actor);
		static bool ExistMoveable(AActor *actor);

		static bool isCameraInList(AActor* actor);
		static bool isMoveableInList(AActor* actor);
		static bool isBoundingBoxInList(AActor* actor);

		static TArray<TSharedPtr<PluginCamera>> _plugin_cameras;
		static TArray<TSharedPtr<PluginMoveableObject>> _plugin_moveables;
		static TArray<TSharedPtr<PluginBoundingbox>> _plugin_boundingboxes;
		


#if PLATFORM_WINDOWS
		static void MoveCameraCallback(
			LPCSTR id, 
			float x, float y, float z, 
			float ya, float pa, float ra,
			float fov, 
			float fx, float fy, float fz, 
			float ux, float uy, float uz);
		static void MoveMoveableCallback(
			LPCSTR id,
			int v,
			float x, float y, float z,
			float ya, float pa, float ra,
			float fx, float fy, float fz,
			float ux, float uy, float uz);
#endif
		

#if WITH_EDITOR
		static void EdddisonAddCamera();
		static void EdddisonAddBBox();
		static void EdddisonAddMoveable();

		static void EdddisonRemoveCamera(TSharedPtr<PluginCamera> camera);
		static void EdddisonRemoveBBox(TSharedPtr<PluginBoundingbox> bbox);
		static void EdddisonRemoveMoveable(TSharedPtr<PluginMoveableObject> moveable);

		static void EdddisonClear();
#endif

		static void EdddisonSubscribeGlobalBBox();
		static void EdddisonUpdate();

		static void EdddisonOpen(bool force);
		static void EdddisonClose(bool destroy_dummy_actor);
		static void EdddisonLoadLibrary();
		static void EdddisonUnloadLibrary();
};



#endif //__EDDD__EDDDISONPLUGIN_H__