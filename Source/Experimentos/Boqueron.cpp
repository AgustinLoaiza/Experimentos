// Fill out your copyright notice in the Description page of Project Settings.


#include "Boqueron.h"
#include "Gasolinera.h"
#include "CentroMedico.h"
#include "Motor.h"
#include "Municion.h"
#include "Armeria.h"
#include "ComponenteChino.h"

// Sets default values
ABoqueron::ABoqueron()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshBoqueron = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Boqueron"));
	MeshBoqueron->SetupAttachment(RootComponent);
	RootComponent = MeshBoqueron;
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
	TiempoTranscurrido += DeltaTime;
	if (TiempoTranscurrido>=5)
	{
		BuildPowerUp(); 
		TiempoTranscurrido = 0;
	}
	UbicacionBoqueron = GetActorLocation();
	
}

void ABoqueron::SetMesh(UStaticMeshComponent* _MeshBoqueron)
{
	MeshBoqueron = _MeshBoqueron; 
}

void ABoqueron::SetPowerUp(FString _PowerUp)
{
	PowerUp = _PowerUp; 
}

void ABoqueron::SetFuncionEspecial()
{
}

void ABoqueron::SetEscudo()
{
}

void ABoqueron::BuildPowerUp()
{
	if (PowerUp == "Gasolinera")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionGasolinera = UbicacionBoqueron+FVector(-100.0f, 300.0f, 0.0f);
			World->SpawnActor<AGasolinera>(ubicacionGasolinera, FRotator::ZeroRotator);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo la Gasolinera"));
		}
	}
	else if (PowerUp == "CentroMedico")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionCentroMedico = UbicacionBoqueron+FVector(-100.0f, 300.0f, 0.0f);
			World->SpawnActor<ACentroMedico>(ubicacionCentroMedico, FRotator::ZeroRotator);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo el Centro Medico"));
		}
	}
	else if (PowerUp == "Motor")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionMotor = UbicacionBoqueron+FVector(-100.0f, 300.0f, 0.0f);
			World->SpawnActor<AMotor>(ubicacionMotor, FRotator::ZeroRotator);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo el Motor"));
		}
	}
	else if (PowerUp == "Municion")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionMunicion = UbicacionBoqueron + FVector(-100.0f, 300.0f, 0.0f);
			World->SpawnActor<AMunicion>(ubicacionMunicion, FRotator::ZeroRotator);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo la Municion"));
		}
	}
	else if (PowerUp == "Armeria")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionArmeria = UbicacionBoqueron + FVector(-100.0f, 300.0f, 0.0f);
			World->SpawnActor<AArmeria>(ubicacionArmeria, FRotator::ZeroRotator);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo la Armeria"));
		}

	}
	else if (PowerUp == "ComponenteChino")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionCompChino = UbicacionBoqueron + FVector(-100.0f, 300.0f, 0.0f);  
			World->SpawnActor<AComponenteChino>(ubicacionCompChino, FRotator::ZeroRotator);  
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo el ComponenteChino"));
		}
	}
	else
	{
		nullptr;
	}
}

void ABoqueron::Caracteristicas()
{
}

