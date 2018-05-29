// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "cogentFrontendGameMode.h"
#include "cogentFrontendPawn.h"

AcogentFrontendGameMode::AcogentFrontendGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AcogentFrontendPawn::StaticClass();
}

