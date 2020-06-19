/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */

#pragma once

#include "Socket/EdddisonSocketBBox.h"

class PluginBoundingbox : public SocketBoundingBox
{
	public:

		TWeakObjectPtr<AActor> MyActor;
		TWeakObjectPtr<AActor> MyActorBackup;
		bool isSwitched;

	public:

		PluginBoundingbox();
		PluginBoundingbox(std::string scene_id, std::string gui_name, AActor* actor, float po_x, float po_y, float po_z, float vx_x, float vx_y, float vx_z, float vy_x, float vy_y, float vy_z, float vz_x, float vz_y, float vz_z);

		virtual ~PluginBoundingbox();
		
		bool SyncMemberVarsWithActor();

		void SwitchActor(AActor* actor, FString name, FVector po, FVector vx, FVector vy, FVector vz);
		void UnSwitchActor();

		void subscribe();
		void unsubscribe();

};
