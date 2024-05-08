// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExperimentosGameMode.h"
#include "ExperimentosPawn.h"
#include "Surtidor.h"
#include "Medico.h"
#include "Mecanico.h"
#include "Pirata.h"
#include "Artillero.h"
#include "Armero.h"
#include "Ingeniero.h"
#include "HansKundt.h"
#include "Boqueron.h"
#include "Escudo.h"
#include "MuroEspinas.h"
#include "Disparador.h"
#include "ObjetoPrueba.h"

AExperimentosGameMode::AExperimentosGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AExperimentosPawn::StaticClass();
}

void AExperimentosGameMode::BeginPlay()
{
	Super::BeginPlay();

	HansKundt = GetWorld()->SpawnActor<AHansKundt>(AHansKundt::StaticClass()); //StaticCalss quiere decir que esto es una clase de Unreal, si no hay no va a saber de donde esta sacando

	/*Surtidor= GetWorld()->SpawnActor<ASurtidor>(ASurtidor::StaticClass());
	HansKundt->SetObrero(Surtidor);
	HansKundt->ConstruirBoqueron(FVector(1100.0f, 1300.0f, 215.0f), FRotator(0.0f, 180.0f, 90.0f));

	Medico= GetWorld()->SpawnActor<AMedico>(AMedico::StaticClass());
	HansKundt->SetObrero(Medico);
	HansKundt->ConstruirBoqueron(FVector(-1200.0f, 1200.0f, 215.0f), FRotator(0.0f, 180.0f, 90.0f));

	Mecanico = GetWorld()->SpawnActor<AMecanico>(AMecanico::StaticClass()); 
	HansKundt->SetObrero(Mecanico); 
	HansKundt->ConstruirBoqueron(FVector(-1300.0f, 1100.0f, 215.0f), FRotator(0.0f, 180.0f, 90.0f));

	Artillero= GetWorld()->SpawnActor<AArtillero>(AArtillero::StaticClass());
	HansKundt->SetObrero(Artillero);
	HansKundt->ConstruirBoqueron(FVector(-1400.0f, 1000.0f, 215.0f), FRotator(0.0f, 180.0f, 90.0f));

	Armero= GetWorld()->SpawnActor<AArmero>(AArmero::StaticClass());
	HansKundt->SetObrero(Armero);
	HansKundt->ConstruirBoqueron(FVector(-1500.0f, 900.0f, 215.0f), FRotator(0.0f, 180.0f, 90.0f));

	Pirata= GetWorld()->SpawnActor<APirata>(APirata::StaticClass());
	HansKundt->SetObrero(Pirata);
	HansKundt->ConstruirBoqueron(FVector(-1600.0f, 800.0f, 215.0f), FRotator(0.0f, 180.0f, 90.0f));*/

	Ingeniero= GetWorld()->SpawnActor<AIngeniero>(AIngeniero::StaticClass());
	HansKundt->SetObrero(Ingeniero);
	HansKundt->ConstruirBoqueron(FVector(300.0f, 500.0f, 215.0f), FRotator(0.0f, 180.0f, 90.0f));

	Medico= GetWorld()->SpawnActor<AMedico>(AMedico::StaticClass()); 
	HansKundt->SetObrero(Medico);
	HansKundt->ConstruirBoqueron(FVector(800.0f, -700.0f, 215.0f), FRotator(0.0f, 180.0f, 90.0f));

	Artillero= GetWorld()->SpawnActor<AArtillero>(AArtillero::StaticClass()); 
	HansKundt->SetObrero(Artillero);
	HansKundt->ConstruirBoqueron(FVector(-800.0f, 1200.0f, 215.0f), FRotator(0.0f, 180.0f, 90.0f));

	ABoqueron* Boqueron = HansKundt->GetBoqueron();
	Boqueron->Caracteristicas();

}

void AExperimentosGameMode::Tick(float DeltaTime)
{
}

