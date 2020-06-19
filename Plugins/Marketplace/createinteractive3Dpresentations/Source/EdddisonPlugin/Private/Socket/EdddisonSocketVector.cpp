/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#include "EdddisonSocketVector.h"
#include "EdddisonPluginPrivatePCH.h"




Vec3f::Vec3f() : _x(0.0f), _y(0.0f), _z(0.0f)
{
}

Vec3f::Vec3f(float x, float y, float z)
{
	_x = x;
	_y = y;
	_z = z;
}
