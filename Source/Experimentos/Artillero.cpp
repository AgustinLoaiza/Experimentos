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

void AArtillero::BuildSurtidor()
{
	/*if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Debes contratar a un Artillero")); return; }
	Boqueron->SetSurtidor("Surtidor");*/
}

void AArtillero::BuildMotor()
{
	/*if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Debes contratar a un Artillero")); return; }
	Boqueron->SetMotor("Motor");*/
}

void AArtillero::BuildMunicion()
{
	/*if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Debes contratar a un Artillero")); return; }
	Boqueron->SetMunicion("Municion");*/
}

void AArtillero::BuildCentroMedico()
{
	//if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Debes contratar a un Artillero")); return; }
	//Boqueron->SetCentroMedico("CentroMedico");
}

void AArtillero::BuildComponenteChino()
{
	//if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Debes contratar a un Artillero")); return; }
	//Boqueron->SetComponenteChino("ComponenteChino");
}

void AArtillero::BuildArmeria()
{
	if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Debes contratar a un Artillero")); return; }
	Boqueron->SetArmeria("Armeria");
}

void AArtillero::FuncionEspecial()
{
	Boqueron->SetFuncionEspecial("MuchosDisparadores");
}

void AArtillero::BuildEscudo()
{
	//if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Debes contratar a un Artillero")); return; }
	//Boqueron->SetEscudo("Escudo");
}

void AArtillero::BuildMuroEspinas()
{
	if (!Boqueron) { UE_LOG(LogTemp, Error, TEXT("Debes contratar a un Artillero")); return; }
	Boqueron->SetMuroEspinas("MuroEspinas");
}

ABoqueron* AArtillero::GetBoqueron()
{
	return Boqueron;
}

