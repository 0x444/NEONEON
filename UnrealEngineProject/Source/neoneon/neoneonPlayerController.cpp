// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "neoneon.h"
#include "neoneonPlayerController.h"

AneoneonPlayerController::AneoneonPlayerController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
