// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "neoneon.h"
#include "neoneonGameMode.h"
#include "neoneonPlayerController.h"

AneoneonGameMode::AneoneonGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// no pawn by default
	DefaultPawnClass = NULL;
	// use our own player controller class
	PlayerControllerClass = AneoneonPlayerController::StaticClass();
}
