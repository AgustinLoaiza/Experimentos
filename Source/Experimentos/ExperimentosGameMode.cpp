// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExperimentosGameMode.h"
#include "ExperimentosPawn.h"

AExperimentosGameMode::AExperimentosGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AExperimentosPawn::StaticClass();
}

