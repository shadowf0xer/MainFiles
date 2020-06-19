/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */

#pragma once

#include "Engine.h"
#if WITH_EDITOR
#include "Editor.h"
#include "Editor/EditorStyle/Public/EditorStyle.h"
#include "Editor/UnrealEd/Public/UnrealEd.h"
#include "Editor/UnrealEd/Public/Toolkits/BaseToolkit.h"
#include "Editor/UnrealEd/Public/Toolkits/ToolkitManager.h"
#endif

#include "Runtime/Core/Public/Modules/ModuleManager.h"
#include "Runtime/Projects/Public/Interfaces/IPluginManager.h"
#include "Runtime/Projects/Public/Interfaces/IProjectManager.h"



// You should place include statements to your module's private header files here.  You only need to
// add includes for headers that are used in most of your module's source files though.

#include "EdddisonPluginDefs.h"
#include "EdddisonPluginLog.h"
