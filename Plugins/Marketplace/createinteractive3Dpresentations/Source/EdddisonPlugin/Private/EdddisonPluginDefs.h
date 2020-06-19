/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */

#pragma once

#include "EdddisonPluginPrivatePCH.h"

// ------- Behaviour flags ---------
// Nmake /YuEdddisonPluginPrivatePCH.h /YuEdddisonPlugin.h 

// - Log in editorview
//#define EDDDISON_LOG_OUTPUT

// - Log in gameview
//#define EDDDISON_LOG_3D

// - Log in Edddison
//#define EDDDISON_LOG_SOCKET

// - 16x16 if used for small, 32x32 otherwise. Can be changed how big is big and how small is small by changing IconTools variable.
#define USE_SMALL_ICONS

// - Force to load edddison editor on game/editor start. Ignores plugin config.
//#define FORCE_LOAD_EDDDISON_EDITOR_ON_START


// - To automatically close and start edddison on world switch
//#define RESTART_EDDDISON_ON_WORLD_SWITCH

// - To automatically turn on the mobility by assigned objects
#define DEFAULT_MOVEABLE_ON_FOR_MOVEABLE

// - To automatically turn on the collision by assigned objects
//#define DEFAULT_COLLISION_OFF_FOR_BBOX_AND_MOVEABLE

// - To automatically turn on the visibility by assigned objects
//#define DEFAULT_VISIBILITY_OFF_FOR_BBOX

// - To give the edddison some time for turning off when disconnecting (see EDDDSLEEP_SECS_WHEN_EDDDISON_DISCONNECT)
#define SLEEP_WHEN_EDDDISON_DISCONNECT

// - To empty the subscribed lists after start of edddison
//#define EMPTY_EDDDISON_LISTS_AFTER_START_EDDDISON

// - Should shown synchronize entire boundingbox button. For example when the scene changes.
#define USE_SUBSCRIBE_GLOBAL_BBOX_BUTTON

// - Should show close button.
#define USE_EDDDISON_CLOSE_BUTTON

// - Should show update (resubscribe all) button.
#define USE_EDDDISON_UPDATE_BUTTON

// - Should show clear (unsubscribe all) button.
#define USE_EDDDISON_CLEAR_BUTTON

// - Move object with teleport or move mode
//#define USE_MOVE_ACTOR_TELEPORT

// - Undo/Redo when moving
//#define USE_MOVE_ACTOR_TRANSACTIONS

// - Allow subscribing of just one camera.
// - TODO: Support for multiple cameras
#define EDDDISON_SOCKET_SINGLE_CAMERA

// Experimental boundingbox event handling
//#define EDDDISON_BBOX_EXP_EVENTS


// - TODO: Switch active camera in viewport. How to set "Pilot camera actor in viewport"?
//#define EDDDISON_CAMERA_SWITCH_IN_VIEWPORT

//
// ------- Behaviour flags ---------

//#define BB_FIX

// ---------- TODO -------------
//  - manchmal wir bei moveable nicht die gesamte geometrie verschoeben
// ---------- TODO -------------


// Helpful string conversion hints:
//  FString to std::string
//  std::string cstr(TCHAR_TO_UTF8(*UE4Str));
//  std::string to FString
//  FString(cstr.c_str());






/************************************************************************/
/* Folders                                                              */
/************************************************************************/
const FString UnrealPluginsFoldername = "Plugins";
const FString EdddisonPluginFoldername = "EdddisonPlugin";
const FString EdddisonSettingsFoldername = "Config";
const FString EdddisonResourceFoldername = "Resources";
const FString EdddisonContentFoldername = "Content";

#define LOCTEXT_NAMESPACE "EdddisonPlugin"

// --- Moving the actor transaction name (needed only if undo/redo is expected) ---
//
#ifdef USE_MOVE_ACTOR_TRANSACTIONS
#define EDDDTRANSACTION_MOVE     LOCTEXT("MoveActorsTransactionName", "MoveActors")
#endif
//
// --- Moving the actor transaction name (needed only if undo/redo is expected) ---

// --- GUI ---
//
#define EDDDGUI_HELPER           LOCTEXT("HelperLabel", "Add selected actor to edddison:")
#define EDDDGUI_EDDDISON         LOCTEXT("LabelEdddison", "edddison")
#define EDDDGUI_OPEN_EDDDISON    LOCTEXT("LabelOpen", "Open edddison")
#define EDDDGUI_CLOSE_EDDDISON   LOCTEXT("LabelClose", "Close edddison")
#define EDDDGUI_UPDATE_EDDDISON  LOCTEXT("LabelUpdate", "Update edddison")
#define EDDDGUI_CLEAR            LOCTEXT("LabelClear", "Clear")
#define EDDDGUI_REMOVE           LOCTEXT("LabelRemove", "Remove")
#define EDDDGUI_CAMERAS          LOCTEXT("LabelCameras", "Cameras")
#define EDDDGUI_BBOXES           LOCTEXT("LabelBBoxes", "Bounding boxes")
#define EDDDGUI_MOVEABLES        LOCTEXT("LabelMoveables", "Objects")
#define EDDDGUI_ADD_CAMERA       LOCTEXT("LabelAddCamera", "Add selected camera (CameraActor)")
#define EDDDGUI_ADD_BBOX         LOCTEXT("LabelAddBBox", "Add selected bounding box (StaticMeshActor)")
#define EDDDGUI_ADD_MOVEABLE     LOCTEXT("LabelAddMoveable", "Add selected object")
#define EDDDGUI_GLOBAL_BBOX      LOCTEXT("LabelGlobalBBox", "Update entire bounding box")
#define EDDDGUI_TOOLKIT_TOOLTIP  LOCTEXT("EdddisonTooltip", "edddison")
#define EDDDGUI_DLL_MISSING      LOCTEXT("SocketDLLMissing", "edddison Socket DLL is missing!\n\nPlease check if the edddison editor is installed.\nYou can download it from www.edddison.com.")
#define EDDDGUI_AUTOSTART_WITH_EDITOR_TOOLTIP LOCTEXT("AutostartWithEditorTooltip", "Start edddison automatically with the Unreal Editor.")
#define EDDDGUI_AUTOSTART_WITH_EDITOR_TEXT LOCTEXT("AutostartWithEditorText", "Autostart with editor")
#define EDDDGUI_AUTOSTART_WITH_GAME_TOOLTIP LOCTEXT("AutostartWithGameTooltip", "Start edddison automatically with the Unreal Game.")
#define EDDDGUI_AUTOSTART_WITH_GAME_TEXT LOCTEXT("AutostartWithGameText", "Autostart with game")

// Unreal 4.21 does not have GEditor->GetAllViewportClients()
#if ((ENGINE_MAJOR_VERSION < 5) && (ENGINE_MINOR_VERSION < 22))
#define EDDDGUI_ENABLE_VIEWPORT_REALTIME_TOOLTIP LOCTEXT("EnableViewportRealtimeTooltip","For the edddison interaction to be visible in a Unreal Engine Editor Viewport, the Realtime setting of the Viewport must be enabled. Allow edddison to enable this setting for the Viewport.")
#define EDDDGUI_ENABLE_VIEWPORT_REALTIME_TEXT LOCTEXT("EnableViewportRealtimeText","Enable Realtime in Viewport")
#else
#define EDDDGUI_ENABLE_VIEWPORT_REALTIME_TOOLTIP LOCTEXT("EnableViewportRealtimeTooltip","For the edddison interaction to be visible in all Unreal Engine Editor Viewports, the Realtime setting of the Viewports must be enabled. Allow edddison to enable this setting for all Viewports.")
#define EDDDGUI_ENABLE_VIEWPORT_REALTIME_TEXT LOCTEXT("EnableViewportRealtimeText","Enable Realtime in all Viewports")
#endif


const FText _eddd_less_cpu_title = LOCTEXT("eddd_less_cpu_title", "Warning: Disable 'Use Less CPU when in Background'");
const FText _eddd_less_cpu_msg_UE_4_16 = LOCTEXT("eddd_less_cpu_msg_UE_4_16", "edddison needs setting 'ThrottleCPUWhenNotForeground' disabled!\n\nRestart the Unreal Engine to automatically apply this change.\n\nOr uncheck 'Use Less CPU when in Background' at:\n Edit -> Editor Preferences -> General -> Miscellaneous -> Performance");
const FText _eddd_less_cpu_msg_UE_4_17 = LOCTEXT("eddd_less_cpu_msg_UE_4_17", "edddison needs setting 'ThrottleCPUWhenNotForeground' disabled!\n\nRestart the Unreal Engine to automatically apply this change.\n\nOr uncheck 'Use Less CPU when in Background' at:\n Edit -> Editor Preferences -> General -> Performance");
//#define EDDDGUI_LESS_CPU_INFO    LOCTEXT("EditorLessCPU", "The setting for 'Use Less CPU when in Background' should be turned off. Please restart the plugin to automatically apply the changes.\n\nIf the same message appears after restart, try to change the setting manually. The setting can be found in the editor main menu:\nEdit --> Editor Preferences --> General --> Miscellaneous --> Performance\n\nor change the setting bThrottleCPUWhenNotForeground in the file EditorPerProjectUserSettings.ini")
#define EDDDGUI_SINGLE_CAM_ALLOW LOCTEXT("EdddisonSingleCamAllowed", "Multiple cameras are not supported in this version!")
#define EDDDGUI_SOCKET_FUNC_MISS LOCTEXT("EdddisonSocketFuncMissing", "edddison Socket DLL is missing important functionalities, which can lead to unexpected behavior or crashes!\n\nPlease check if the edddison editor version is up-to-date..\nYou can download it from www.edddison.com.")
#define EDDDGUI_ACTOR_ALREADY_ADDED LOCTEXT("EdddisonActorAlreadyAdded", "The selected actor has already been added!")

//
// --- GUI ---


// --- Class names ---
//
#define EDDDCLASS_EDIT_MODE_ID    TEXT("EM_EdddisonPluginEdMode")
#define EDDDCLASS_EDIT_MODE_NAME  LOCTEXT("EdddisonPluginEdModeName", "edddison plugin") // Tooltip of Tool Button
#define EDDDCLASS_TOOLKIT_FNAME   "EdddisonPluginEdMode"
#define EDDDCLASS_TOOLKIT_NAME    NSLOCTEXT("EdddisonPluginEdModeToolkit", "DisplayName", "EdddisonPlugin Tool")
//
// --- Class names ---


// --- Global BBox sent to edddison ---
//
#define EDDDSUBSCRIBE_BBOX_LABEL  TEXT("Entire bounding box")
#define EDDDSUBSCRIBE_BBOX_ID     TEXT("0")
//
// --- Global BBox sent to edddison ---


// --- Start edddison delayed on map switch. On map switch edddison is closed and restarted. A imediate restart would probably blocked by the just in shutdown process previous edddison. ---
#define EDDDSLEEP_SECS_START_DELAY 3
// --- Start edddison delayed on map switch. ---


// --- Let edddison enough time to disconnect ---
//
#ifdef SLEEP_WHEN_EDDDISON_DISCONNECT
#define EDDDSLEEP_SECS_WHEN_EDDDISON_DISCONNECT 1.5  // disconnect sleep time
#endif
//
// --- Let edddison enough time to disconnect ---

#undef LOCTEXT_NAMESPACE
