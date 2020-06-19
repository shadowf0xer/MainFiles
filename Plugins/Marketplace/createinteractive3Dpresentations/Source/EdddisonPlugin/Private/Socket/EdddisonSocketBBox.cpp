/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#include "EdddisonSocketBBox.h"
#include "EdddisonPluginPrivatePCH.h"
#include "EdddisonSocket.h"






SocketBoundingBox::SocketBoundingBox() : _scene_id(""), _gui_name(""),
										_position_offset(Vec3f(0.0f, 0.0f, 0.0f)),
										_boundingbox_x(Vec3f(100.0f, 0.0f, 0.0f)),
										_boundingbox_y(Vec3f(0.0f, 100.0f, 0.0f)),
										_boundingbox_z(Vec3f(0.0f, 0.0f, 100.0f))
{
}

/**
 * CTOR Boundingbox. Right handed coordinate system.
 *
 * @param scene_id Id in your scene. Has to be unique.
 * @param gui_name The name which is shown in the edddison gui.
 * @param po_x x offset from world origin
 * @param po_y y offset from world origin.
 * @param po_z z offset from world origin.
 * @param vx_x x coordinate of vector defining boundingbox lenght in a direction.
 * @param vx_y y coordinate of vector defining boundingbox lenght in a direction.
 * @param vx_z z coordinate of vector defining boundingbox lenght in a direction.
 * @param vy_x x coordinate of vector defining boundingbox lenght in a direction.
 * @param vy_y y coordinate of vector defining boundingbox lenght in a direction.
 * @param vy_z z coordinate of vector defining boundingbox lenght in a direction.
 * @param vz_x x coordinate of vector defining boundingbox lenght in a direction.
 * @param vz_y y coordinate of vector defining boundingbox lenght in a direction.
 * @param vz_z z coordinate of vector defining boundingbox lenght in a direction.
*/
SocketBoundingBox::SocketBoundingBox(std::string scene_id, std::string gui_name, float po_x, float po_y, float po_z, float vx_x, float vx_y, float vx_z, float vy_x, float vy_y, float vy_z, float vz_x, float vz_y, float vz_z) :
	_scene_id(scene_id),
	_gui_name(gui_name),
	_position_offset{ po_x, po_y, po_z },
	_boundingbox_x{ vx_x, vx_y, vx_z },
	_boundingbox_y{ vy_x, vy_y, vy_z },
	_boundingbox_z{ vz_x, vz_y, vz_z }
{
}



SocketBoundingBox::~SocketBoundingBox(){}

