/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */

#pragma once

	

DECLARE_LOG_CATEGORY_EXTERN(EdddisonLog,Log, All);



#define LOCTEXT_NAMESPACE "EdddisonPlugin"

#define EDDDLOG_ACTOR_BBOX        TEXT("Actor %s BBox: (%f %f %f) (%f %f %f)")
#define EDDDLOG_ACTOR_MISSING     TEXT("Actor missing!")
#define EDDDLOG_ACTOR_COMP_NOID   TEXT("Actor component id reset.")
#define EDDDLOG_ACTOR_COMP_REG    TEXT("Actor component registered.")
#define EDDDLOG_ACTOR_COMP_UNREG  TEXT("Actor component unregistered.")
#define EDDDLOG_ACTOR_SWITCHED    TEXT("Actor component switched.")
#define EDDDLOG_ACTOR_UNSWITCHED  TEXT("Actor component unswitched.")
#define EDDDLOG_BBOX_NAME         TEXT("BBox Name: %s")
#define EDDDLOG_BBOX_FULLNAME     TEXT("BBox Full Name: %s")
#define EDDDLOG_BBOX_LABEL        TEXT("BBox Label: %s")
#define EDDDLOG_BBOX_ID           TEXT("BBox ID: %s")
#define EDDDLOG_BBOX_ORIGIN       TEXT("BBox Origin(%f %f %f)")
#define EDDDLOG_BBOX_SCALE        TEXT("BBox Scale3d(%f %f %f)")
#define EDDDLOG_BBOX_FORWARD      TEXT("BBox Forward(%f %f %f)")
#define EDDDLOG_BBOX_RIGHT        TEXT("BBox Right(%f %f %f)")
#define EDDDLOG_BBOX_UP           TEXT("BBox Up(%f %f %f)")
#define EDDDLOG_BBOX_LOCAL_MIN    TEXT("BBox Local Min(%f %f %f)")
#define EDDDLOG_BBOX_LOCAL_MAX    TEXT("BBox Local Max(%f %f %f)")
#define EDDDLOG_BBOX_PO           TEXT("BBox PO(%f %f %f)")
#define EDDDLOG_BBOX_VX           TEXT("BBox VX(%f %f %f)")
#define EDDDLOG_BBOX_VY           TEXT("BBox VY(%f %f %f)")
#define EDDDLOG_BBOX_VZ           TEXT("BBox VZ(%f %f %f)")
#define EDDDLOG_CAMERA_NAME       TEXT("Camera Name: %s")
#define EDDDLOG_CAMERA_FULLNAME   TEXT("Camera Full Name: %s")
#define EDDDLOG_CAMERA_LABEL      TEXT("Camera Label: %s")
#define EDDDLOG_CAMERA_ID         TEXT("Camera ID: %s")
#define EDDDLOG_CAMERA            TEXT("Camera (%f,%f,%f) (%f,%f,%f) FOV(%f)")
#define EDDDLOG_CAMERA_CANT_MOVE  TEXT("Camera cannot move!")
#define EDDDLOG_MOVEABLE_NAME     TEXT("Moveable Name: %s")
#define EDDDLOG_MOVEABLE_FULLNAME TEXT("Moveable Full Name: %s")
#define EDDDLOG_MOVEABLE_LABEL    TEXT("Moveable Label: %s")
#define EDDDLOG_MOVEABLE_ID       TEXT("Moveable ID: %s")
#define EDDDLOG_MOVEABLE          TEXT("Moveable (%f,%f,%f)")
#define EDDDLOG_MOVEABLE_CANT     TEXT("Moveable cannot move!")
#define EDDDLOG_ACTOR_FOUND       TEXT("Found actor: %d")
#define EDDDLOG_ACTOR_FOUND_NAME  TEXT("Found actor: %s")
#define EDDDLOG_LIBRARY_PATH      TEXT("Library path: %s")
#define EDDDLOG_GLOBAL_BBOX       TEXT("Global BBox: (%f %f %f) (%f %f %f)")
#define EDDDLOG_OPEN_EDDDISON     TEXT("Open Edddison: %s")
#define EDDDLOG_LIB_NOT_LOADED    TEXT("Library is not loaded.")
#define EDDDLOG_ALREADY_CONNECT   TEXT("Connection to Edddison is already established.")
#define EDDDLOG_CONNECTING        TEXT("Edddison is running. Connecting Edddison...")
#define EDDDLOG_PROJECT_ID	      TEXT("Edddison project path: %s and id: %s")
#define EDDDLOG_CONNECTED         TEXT("Edddison is connected.")
#define EDDDLOG_CLOSING           TEXT("Closing Edddison...")
#define EDDDLOG_ALREADY_DISCONN   TEXT("Connection to Edddison is already terminated.")
#define EDDDLOG_DISCONNECTING     TEXT("Disconnecting Edddison...")
#define EDDDLOG_DISCONNECTED      TEXT("Edddison is disconnected and closed.")
#define EDDDLOG_CALLBACK_CONN     TEXT("Edddison event: OnConnect")
#define EDDDLOG_CALLBACK_DISCONN  TEXT("Edddison event: OnDisconnect")
#define EDDDLOG_WORLD_TYPE        TEXT("World type: %s")
#define EDDDLOG_WITH_EDITOR       TEXT("Is with editor.")
#define EDDDLOG_NOT_WITH_EDITOR   TEXT("Is not with editor.")
#define EDDDLOG_USING_EDITOR      TEXT("Is using editor.")
#define EDDDLOG_NOT_USING_EDITOR  TEXT("Is not using editor.")
#define EDDDLOG_LESS_CPU          TEXT("The setting for 'Use Less CPU when in Background' is correctly set to false.")
#define EDDDLOG_WORLD_MISSING     TEXT("The world is missing.")
#define EDDDLOG_ACTCOMP_CREATED   TEXT("The actor component is created.")
#define EDDDLOG_ACTCOMP_DESTROY   TEXT("The actor component is destroyed.")
#define EDDDLOG_ACTCOMPIN_CREATED TEXT("The actor component instance will be created.")
#define EDDDLOG_ACTCOMPIN_DESTROY TEXT("The actor component instance will be destroyed.")

#undef LOCTEXT_NAMESPACE

class FEdddisonLog
{



	public:

		static void Log(FString str);
		static void Warning(FString str);
		static void Error(FString str);
};