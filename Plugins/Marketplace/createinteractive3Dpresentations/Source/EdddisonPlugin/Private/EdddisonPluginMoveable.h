/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */

#pragma once

#include "Socket/EdddisonSocketMoveable.h"

class PluginMoveableObject : public SocketMoveableObject
{
	public:

		TWeakObjectPtr<AActor> MyActor;
		TWeakObjectPtr<AActor> MyActorBackup;
		bool isSwitched;

	public:

		PluginMoveableObject();
		PluginMoveableObject(
			const std::string scene_id, 
			const std::string gui_name, 
			AActor* actor, 
			const float po_x, const float po_y, const float po_z,
			const float vx_x, const float vx_y, const float vx_z,
			const float vy_x, const float vy_y, const float vy_z,
			const float vz_x, const float vz_y, const float vz_z);

		virtual ~PluginMoveableObject();

		bool SyncMemberVarsWithActor();

		void SwitchActor(AActor* actor, FString name, FVector po, FVector vx, FVector vy, FVector vz);
		void UnSwitchActor();

		void subscribe();
		void unsubscribe();

		void move(
			const int v,
			const float x, const float y, const float z,
			const float ya, const float pa, const float ra,
			const float fx, const float fy, const float fz,
			const float ux, const float uy, const float uz);


		UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "OnVisibleChangePlugin"))
			void VisiblityChangedPluginToEvent(bool visible);
};
