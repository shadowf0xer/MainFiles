/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */

#pragma once

#include "EdddisonPluginPrivatePCH.h"

class FEdddisonPluginUtility
{
	public:

		static UWorld* GetWorld();

		static AActor* FindActor(int32 id);

		static AActor* FindActor(FName name, ENameCase compare_method, bool compare_number);

		static FBox GetGlobalBBox();

		static void GetActorBBox(
			AActor *actor, 
			FVector &po, 
			FVector &vx, FVector &vy, FVector &vz);

		static void SetActorVisibility(TWeakObjectPtr<AActor> actor, const bool new_visible, const bool propagate_to_children);

		static bool GetActorVisibility(TWeakObjectPtr<AActor> actor);
		
		static bool isEditorGameMode();

		//static bool isStandAlone();

		static void printEditorPlayType();

		static bool isNan(float value);
};
