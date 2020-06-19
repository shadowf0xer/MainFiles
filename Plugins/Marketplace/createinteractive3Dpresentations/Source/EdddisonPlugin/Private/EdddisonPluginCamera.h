/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */

#pragma once

#include "Socket/EdddisonSocketCamera.h"

class PluginCamera : public SocketCamera
{
	public:

		//UPROPERTY(EditAnywhere) AActor* _eddd_static_cam;
		TWeakObjectPtr<AActor> MyActor;
		TWeakObjectPtr<AActor> MyActorBackup;
		bool isSwitched;

	public:

		PluginCamera();
		PluginCamera(
			std::string scene_id, 
			std::string gui_name, 
			AActor* actor);

		virtual ~PluginCamera();

		bool SyncMemberVarsWithActor();

		void SwitchActor(AActor* actor, FString name);
		void UnSwitchActor();

		void subscribe();
		void unsubscribe();

		void move(
			const float x, const float y, const float z,
			const float ya, const float pa, const float ra,
			const float fov,
			const float fx, const float fy, const float fz,
			const float ux, const float uy, const float uz);
};
