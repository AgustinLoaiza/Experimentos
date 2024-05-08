// Fill out your copyright notice in the Description page of Project Settings.


#include "Armero.h"
#include "Armeria.h"
#include "Boqueron.h"

// Sets default values
AArmero::AArmero()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArmero::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArmero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArmero::BuildBoqueron(FVector UbicacionBoqueron, FRotator Rotacion)
{
	Boqueron = GetWorld()->SpawnActor<ABoqueron>(ABoqueron::StaticClass(), UbicacionBoqueron, Rotacion);
	Boqueron->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Estancia():Lodging is NULL, make sure it's initialized.")); return; }
}

void AArmero::BuildMesh()
{
	Boqueron->MeshBoqueron->SetStaticMesh(Armeria);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("MallaBoqueron"));
}

void AArmero::BuildSurtidor()
{
}

void AArmero::BuildMotor()
{
}

void AArmero::BuildMunicion()
{
}

void AArmero::BuildCentroMedico()
{
}

void AArmero::BuildComponenteChino()
{
}

void AArmero::BuildArmeria()
{
}

void AArmero::FuncionEspecial()
{
}

void AArmero::BuildEscudo()
{
}

void AArmero::BuildMuroEspinas()
{
}

ABoqueron* AArmero::GetBoqueron()
{
	return Boqueron;
}

