// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExperimentosGameMode.h"
#include "ExperimentosPawn.h"
#include "Surtidor.h"
#include "Mecanico.h"
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

	ABoqueron* Boqueron = HansKundt->GetBoqueron();
	Boqueron->Caracteristicas();

}

void AExperimentosGameMode::Tick(float DeltaTime)
{
}

