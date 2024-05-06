// Fill out your copyright notice in the Description page of Project Settings.


#include "Mecanico.h"
#include "Motor.h"
#include "Boqueron.h"

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

void AMecanico::BuildBoqueron(FVector UbicacionBoqueron, FRotator Rotacion)
{
	Boqueron = GetWorld()->SpawnActor<ABoqueron>(ABoqueron::StaticClass(), UbicacionBoqueron, Rotacion);
	Boqueron->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Estancia():Lodging is NULL, make sure it's initialized.")); return; }
}


void AMecanico::BuildMesh()
{
	Boqueron->MeshBoqueron->SetStaticMesh(Motor);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("MallaBoqueron"));
}

void AMecanico::BuildPowerUps()
{
	if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Debes contratar a un Mecanico")); return; }
	Boqueron->SetPowerUp("Motor");
}

void AMecanico::FuncionEspecial()
{
}

void AMecanico::BuildEscudo()
{
}

ABoqueron* AMecanico::GetBoqueron()
{
	return Boqueron;
}

