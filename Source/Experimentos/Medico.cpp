// Fill out your copyright notice in the Description page of Project Settings.


#include "Medico.h"
#include "Boqueron.h"

// Sets default values
AMedico::AMedico()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMedico::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMedico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMedico::BuildBoqueron(FVector UbicacionBoqueron)
{
	Boqueron = GetWorld()->SpawnActor<ABoqueron>(ABoqueron::StaticClass(), UbicacionBoqueron, FRotator::ZeroRotator);
	Boqueron->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Estancia():Lodging is NULL, make sure it's initialized.")); return; } 
}

void AMedico::BuildMesh()
{
	Boqueron->MeshBoqueron->SetStaticMesh(CentroMedico);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("MallaBoqueron"));
}

void AMedico::BuildPowerUps()
{
	if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Debes contratar a un Medico")); return; }
	Boqueron->SetPowerUp("CentroMedico");
}

ABoqueron* AMedico::GetBoqueron()
{
	return Boqueron;
}

