/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#include "EdddisonPluginActor.h"
#include "EdddisonPluginPrivatePCH.h"
#include "EdddisonPlugin.h"





FName AEdddisonPluginActor::Name = FName(TEXT("EdddisonPluginActor"));


AEdddisonPluginActor::AEdddisonPluginActor() {

	// hide this actor from all
	//bEditable = 0;
	//bHidden = 1;
	//bHiddenEd = 1;
	//bHiddenEdLayer = 1;
	//bHiddenEdLevel = 1;

	// Disable this actor to call Tick() every frame
	// and save performance. We use callbacks to wake it up.
	PrimaryActorTick.bCanEverTick = false;
}



/**
 * We use this event to detect if a level is unload or switched
 */
void AEdddisonPluginActor::BeginDestroy() {
	Super::BeginDestroy();

	FEdddisonLog::Log("BeginDestroy 1");
	if (bCloseEdddisonOnDestroy) {
		FEdddisonLog::Log("BeginDestroy 2");
		FEdddisonPluginModule::EdddisonClose(false);
	}
}



void AEdddisonPluginActor::BeginPlay() {
	Super::BeginPlay();
}



void AEdddisonPluginActor::EndPlay(const EEndPlayReason::Type EndPlayReason) {
	Super::EndPlay(EndPlayReason);
}



//void AEdddisonPluginActor::PostEditChangeProperty(struct FPropertyChangedEvent & PropertyChangedEvent) {
//	Super::PostEditChangeProperty(PropertyChangedEvent);
//}



void AEdddisonPluginActor::PostActorCreated() {
	Super::PostActorCreated();
}



void AEdddisonPluginActor::Destroyed() {
	Super::Destroyed();
}


