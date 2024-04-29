// Fill out your copyright notice in the Description page of Project Settings.


#include "Mecanico.h"

// Sets default values
AMecanico::AMecanico()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMecanico::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMecanico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMecanico::BuildBoqueron(FVector UbicacionBoqueron)
{
}

void AMecanico::BuildMotor()
{
}

void AMecanico::BuildMesh()
{
}

void AMecanico::BuildGasolinera()
{
}

ABoqueron* AMecanico::GetBoqueron()
{
	return nullptr;
}

