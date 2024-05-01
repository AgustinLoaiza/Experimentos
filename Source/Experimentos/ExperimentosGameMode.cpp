// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExperimentosGameMode.h"
#include "ExperimentosPawn.h"
#include "Surtidor.h"
#include "Mecanico.h"
#include "Pirata.h"
#include "Artillero.h"
#include "Armero.h"
#include "HansKundt.h"
#include "Boqueron.h"

AExperimentosGameMode::AExperimentosGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AExperimentosPawn::StaticClass();
}

void AExperimentosGameMode::BeginPlay()
{
	Super::BeginPlay();

	HansKundt = GetWorld()->SpawnActor<AHansKundt>(AHansKundt::StaticClass());

	Surtidor= GetWorld()->SpawnActor<ASurtidor>(ASurtidor::StaticClass());
	HansKundt->SetObrero(Surtidor);
	HansKundt->ConstruirBoqueron(FVector(-1100.0f, 1300.0f, 215.0f));

	Mecanico = GetWorld()->SpawnActor<AMecanico>(AMecanico::StaticClass()); 
	HansKundt->SetObrero(Mecanico); 
	HansKundt->ConstruirBoqueron(FVector(-1300.0f, 1100.0f, 215.0f));

	Artillero= GetWorld()->SpawnActor<AArtillero>(AArtillero::StaticClass());
	HansKundt->SetObrero(Artillero);
	HansKundt->ConstruirBoqueron(FVector(-1400.0f, 1000.0f, 215.0f));

	Armero= GetWorld()->SpawnActor<AArmero>(AArmero::StaticClass());
	HansKundt->SetObrero(Armero);
	HansKundt->ConstruirBoqueron(FVector(-1500.0f, 900.0f, 215.0f));

	Pirata= GetWorld()->SpawnActor<APirata>(APirata::StaticClass());
	HansKundt->SetObrero(Pirata);
	HansKundt->ConstruirBoqueron(FVector(-1600.0f, 800.0f, 215.0f));

	ABoqueron* Boqueron = HansKundt->GetBoqueron();
	Boqueron->Caracteristicas();

}

void AExperimentosGameMode::Tick(float DeltaTime)
{
}

