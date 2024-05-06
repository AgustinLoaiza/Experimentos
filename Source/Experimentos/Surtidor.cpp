// Fill out your copyright notice in the Description page of Project Settings.


#include "Surtidor.h"
#include "Gasolinera.h"
#include "Boqueron.h"

// Sets default values
ASurtidor::ASurtidor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASurtidor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASurtidor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASurtidor::BuildBoqueron(FVector UbicacionBoqueron, FRotator Rotacion)
{
	Boqueron = GetWorld()->SpawnActor<ABoqueron>(ABoqueron::StaticClass(), UbicacionBoqueron, Rotacion);
	Boqueron->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Estancia():Lodging is NULL, make sure it's initialized.")); return; }
}

void ASurtidor::BuildMesh()
{
	Boqueron->MeshBoqueron->SetStaticMesh(Gasolinera); 
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("MallaBoqueron"));
}

void ASurtidor::BuildPowerUps()
{
	if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Debes contratar a un Surtidor")); return; }
	Boqueron->SetPowerUp("Gasolinera");
}

void ASurtidor::FuncionEspecial()
{
}

void ASurtidor::BuildEscudo()
{
}

ABoqueron* ASurtidor::GetBoqueron()
{
	return Boqueron;
}

