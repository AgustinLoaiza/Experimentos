// Fill out your copyright notice in the Description page of Project Settings.


#include "Boqueron.h"

// Sets default values
ABoqueron::ABoqueron()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABoqueron::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoqueron::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABoqueron::SetGasolinera(FString _Gasolinera)
{
	Gasolinera = _Gasolinera;

}

void ABoqueron::SetMesh(UStaticMeshComponent* _MeshBoqueron)
{
	MeshBoqueron = _MeshBoqueron; 
}

void ABoqueron::SetMotor(FString _Motor)
{
	Motor = _Motor; 
}

void ABoqueron::Caracteristicas()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("%s"), *Gasolinera));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%s"), *Motor));
}

