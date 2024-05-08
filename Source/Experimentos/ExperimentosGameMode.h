// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ExperimentosGameMode.generated.h"

UCLASS(MinimalAPI)
class AExperimentosGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AExperimentosGameMode();

private:

	//class ASurtidor* Surtidor; 
	//class AMecanico* Mecanico;
	//class AArmero* Armero;
	//class APirata* Pirata;
	class AMedico* Medico;
	class AArtillero* Artillero;  
	class AIngeniero* Ingeniero;
	class AHansKundt* HansKundt;

protected:
	virtual void BeginPlay() override;

private:
	virtual void Tick(float DeltaTime) override;
};



