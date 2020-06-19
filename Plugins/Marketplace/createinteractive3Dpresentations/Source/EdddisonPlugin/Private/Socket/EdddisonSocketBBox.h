/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */

#pragma once

#include "EdddisonSocketVector.h"
#include "EdddisonSocketInterface.h"

class SocketBoundingBox
{
	public:

		std::string _scene_id;
		std::string _gui_name;		

		Vec3f _position_offset;
		Vec3f _boundingbox_x;
		Vec3f _boundingbox_y;
		Vec3f _boundingbox_z;

	public:

		SocketBoundingBox();
		SocketBoundingBox(
			std::string scene_id, 
			std::string gui_name, 
			float po_x, float po_y, float po_z, 
			float vx_x, float vx_y, float vx_z, 
			float vy_x, float vy_y, float vy_z, 
			float vz_x, float vz_y, float vz_z);

		virtual ~SocketBoundingBox();


		virtual void subscribe() = 0;
		virtual void unsubscribe() = 0;


		inline std::string getSceneId() { return _scene_id; }
};
