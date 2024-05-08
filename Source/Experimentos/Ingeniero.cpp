// Fill out your copyright notice in the Description page of Project Settings.


#include "Ingeniero.h"
#include "Motor.h"
#include "Municion.h"
#include "Escudo.h"
#include "Disparador.h"
#include "MuroEspinas.h"
#include "Boqueron.h"

// Sets default values
AIngeniero::AIngeniero()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIngeniero::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AIngeniero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIngeniero::BuildBoqueron(FVector UbicacionBoqueron, FRotator Rotacion)
{
	Boqueron = GetWorld()->SpawnActor<ABoqueron>(ABoqueron::StaticClass(), UbicacionBoqueron, Rotacion);
	Boqueron->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Surtidor():Lodging is NULL, make sure it's initialized.")); return; }
}

void AIngeniero::BuildMesh()
{
	Boqueron->MeshBoqueron->SetStaticMesh(SuperBoqueron);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("MallaBoqueron"));
}

void AIngeniero::BuildSurtidor()
{
	Boqueron->SetSurtidor("SurtidorGasolina");
}

void AIngeniero::BuildMotor()
{
	Boqueron->SetMotor("MotorGrande");
}

void AIngeniero::BuildMunicion()
{
	//Boqueron->SetMunicion("Municion");
}

void AIngeniero::BuildCentroMedico()
{
	//Boqueron->SetCentroMedico("CentroMedico");
}
void AIngeniero::BuildComponenteChino()
{
	//Boqueron->SetComponenteChino("ComponenteChino");
}

void AIngeniero::BuildArmeria()
{
	//Boqueron->SetArmeria("Armeria");
}

void AIngeniero::FuncionEspecial()
{
	Boqueron->SetFuncionEspecial("Disparador");
}

void AIngeniero::BuildEscudo()
{
	Boqueron->SetEscudo("Escudo");
}

void AIngeniero::BuildMuroEspinas()
{
	Boqueron->SetMuroEspinas("MuroEspinas");
}

ABoqueron* AIngeniero::GetBoqueron()
{
	return Boqueron;
}



