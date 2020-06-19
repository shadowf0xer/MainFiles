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

class SocketMoveableObject
{
	protected:

		std::string _scene_id;
		std::string _gui_name;
		
		Vec3f _position_offset;
		Vec3f _boundingbox_x;
		Vec3f _boundingbox_y;
		Vec3f _boundingbox_z;

		int _visible;

	private:
		bool _visible_initialized;


	public:

		SocketMoveableObject();
		SocketMoveableObject(
			std::string scene_id, 
			std::string gui_name, 
			float po_x, float po_y, float po_z, 
			float vx_x, float vx_y, float vx_z, 
			float vy_x, float vy_y, float vy_z, 
			float vz_x, float vz_y, float vz_z);

		virtual ~SocketMoveableObject();

		virtual void move(
			int v, 
			float x, float y, float z, 
			float ya, float pa, float ra, 
			float fx, float fy, float fz, 
			float ux, float uy, float uz) {
			setVisible(v);
		}

		virtual void subscribe() = 0;
		virtual void unsubscribe() = 0;


		inline void setGuiName(std::string gui_name) { _gui_name = gui_name; }
		inline std::string getGuiName() { return _gui_name; }

		inline std::string getSceneId() { return _scene_id; }

		inline Vec3f getOffset() { return _position_offset; }
		inline Vec3f getBoundingboxXVec() { return _boundingbox_x; }
		inline Vec3f getBoundingboxYVec() { return _boundingbox_y; }
		inline Vec3f getBoundingboxZVec() { return _boundingbox_z; }

		bool isVisible();
		inline int getVisible() { return _visible; }

	protected:
		bool setVisible(const int visible);

	private:
		inline bool castVisibleIntegerValueToBool(const int visible) { return visible > 0; }
};
