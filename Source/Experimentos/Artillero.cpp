// Fill out your copyright notice in the Description page of Project Settings.


#include "Artillero.h"
#include "Municion.h"
#include "Boqueron.h"

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

void AArtillero::BuildBoqueron(FVector UbicacionBoqueron, FRotator Rotacion)
{
	Boqueron = GetWorld()->SpawnActor<ABoqueron>(ABoqueron::StaticClass(), UbicacionBoqueron, Rotacion);
	Boqueron->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Estancia():Lodging is NULL, make sure it's initialized.")); return; }
}

void AArtillero::BuildMesh()
{
	Boqueron->MeshBoqueron->SetStaticMesh(Municion);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("MallaBoqueron"));
}

void AArtillero::BuildPowerUps()
{
	if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Debes contratar a un Artillero")); return; }
	Boqueron->SetPowerUp("Municion");
}

void AArtillero::FuncionEspecial()
{
}

void AArtillero::BuildEscudo()
{
}

void AArtillero::BuildMuroEspinas()
{
}

ABoqueron* AArtillero::GetBoqueron()
{
	return Boqueron;
}

