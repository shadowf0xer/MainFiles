/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#include "EdddisonSocketMoveable.h"
#include "EdddisonPluginPrivatePCH.h"
#include "EdddisonSocket.h"





SocketMoveableObject::SocketMoveableObject() : _scene_id(""), _gui_name(""),
												_position_offset(Vec3f(0.0f, 0.0f, 0.0f)),
												_boundingbox_x(Vec3f(100.0f, 0.0f, 0.0f)),
												_boundingbox_y(Vec3f(0.0f, 100.0f, 0.0f)),
												_boundingbox_z(Vec3f(0.0f, 0.0f, 100.0f)),
												_visible(false), _visible_initialized(false)
{
}

SocketMoveableObject::SocketMoveableObject(
	std::string scene_id, std::string gui_name, 
	float po_x, float po_y, float po_z, 
	float vx_x, float vx_y, float vx_z, 
	float vy_x, float vy_y, float vy_z, 
	float vz_x, float vz_y, float vz_z) :
	_scene_id(scene_id), _gui_name(gui_name),
	_position_offset{ po_x, po_y, po_z },
	_boundingbox_x{ vx_x, vx_y, vx_z },
	_boundingbox_y{ vy_x, vy_y, vy_z },
	_boundingbox_z{ vz_x, vz_y, vz_z },
	_visible(false), _visible_initialized(false)
{
}



SocketMoveableObject::~SocketMoveableObject(){}



/**
* Get the visible state of the Object. Values greater 0 are interpreted as visible. Values 0 or less are interpreted as non-visible.
*/
bool SocketMoveableObject::isVisible() {

	return SocketMoveableObject::castVisibleIntegerValueToBool(_visible);
}


/**
 * Set visible value of the Object.
 * @param visible New visible value. Values greater 0 are interpreted as visible. Values 0 or less are interpreted as non-visible.
 * @return True if value of the parameter visible is different from member _visible, and the member is updated. False if the value of the parameter visible is equal to the member _visible.
 */
bool SocketMoveableObject::setVisible(const int visible) {

	if (!_visible_initialized) {
		_visible = visible;
		_visible_initialized = true;
		return true;
	}


	if (_visible != visible) {
		_visible = visible;
		return true;
	}
	else {
		return false;
	}

}



