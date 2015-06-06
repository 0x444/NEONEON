// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameMode.h"
#include "neoneonGameMode.generated.h"

/** GameMode class to specify pawn and playercontroller */
UCLASS(minimalapi)
class AneoneonGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	AneoneonGameMode(const FObjectInitializer& ObjectInitializer);
};



