// Fill out your copyright notice in the Description page of Project Settings.


#include "Pirata.h"
#include "ComponenteChino.h"
#include "Boqueron.h"

// Sets default values
APirata::APirata()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APirata::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APirata::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APirata::BuildBoqueron(FVector UbicacionBoqueron, FRotator Rotacion)
{
	Boqueron = GetWorld()->SpawnActor<ABoqueron>(ABoqueron::StaticClass(), UbicacionBoqueron, Rotacion);
	Boqueron->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Estancia():Lodging is NULL, make sure it's initialized.")); return; }
}

void APirata::BuildMesh()
{
	Boqueron->MeshBoqueron->SetStaticMesh(ComponenteChino);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("MallaBoqueron"));
}

void APirata::BuildSurtidor()
{
}

void APirata::BuildMotor()
{
}

void APirata::BuildMunicion()
{
}

void APirata::BuildCentroMedico()
{
}

void APirata::BuildComponenteChino()
{
}

void APirata::BuildArmeria()
{
}

void APirata::FuncionEspecial()
{
}

void APirata::BuildEscudo()
{
}

void APirata::BuildMuroEspinas()
{
}

ABoqueron* APirata::GetBoqueron()
{
	return Boqueron;
}

