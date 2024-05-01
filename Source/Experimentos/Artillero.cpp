// Fill out your copyright notice in the Description page of Project Settings.


#include "Artillero.h"

// Sets default values
AArtillero::AArtillero()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArtillero::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArtillero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArtillero::BuildBoqueron(FVector UbicacionBoqueron)
{
}

void AArtillero::BuildMesh()
{
}

void AArtillero::BuildPowerUps()
{
}

ABoqueron* AArtillero::GetBoqueron()
{
	return nullptr;
}

