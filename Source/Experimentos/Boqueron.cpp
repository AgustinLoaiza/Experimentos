// Fill out your copyright notice in the Description page of Project Settings.


#include "Boqueron.h"
#include "Gasolinera.h"
#include "CentroMedico.h"
#include "Motor.h"
#include "Municion.h"
#include "Armeria.h"
#include "Disparador.h"
#include "Escudo.h"
#include "MuroEspinas.h"
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

void ABoqueron::SetFuncionEspecial(FString _Disparador)
{
	Disparador = _Disparador;
}

void ABoqueron::SetEscudo(FString _Escudo)
{
	Escudo = _Escudo;
}

void ABoqueron::SetMuroEspinas(FString _MuroEspinas)
{
	MuroEspinas = _MuroEspinas;
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

void ABoqueron::BuildFuncionEspecial()
{
	if (Disparador=="Disparador")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionDisparador1 = UbicacionBoqueron + FVector(-300.0f, 300.0f, 0.0f);
			FVector ubicacionDisparador2 = UbicacionBoqueron + FVector(-800.0f, 300.0f, 0.0f);
			World->SpawnActor<ADisparador>(ubicacionDisparador1, FRotator::ZeroRotator);
			World->SpawnActor<ADisparador>(ubicacionDisparador2, FRotator::ZeroRotator);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo el Disparador"));
		}

	}
}

void ABoqueron::BuildEscudo()
{
	if (Escudo == "Escudo")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionEscudo1 = UbicacionBoqueron + FVector(-500.0f, 300.0f, 0.0f);
			FVector ubicacionEscudo2 = UbicacionBoqueron + FVector(-600.0f, 300.0f, 0.0f);
			FVector ubicacionEscudo3 = UbicacionBoqueron + FVector(-700.0f, 300.0f, 0.0f);
			World->SpawnActor<AEscudo>(ubicacionEscudo1, FRotator::ZeroRotator);
			World->SpawnActor<AEscudo>(ubicacionEscudo2, FRotator::ZeroRotator);
			World->SpawnActor<AEscudo>(ubicacionEscudo3, FRotator::ZeroRotator);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo el Escudo"));
		}
	}
}

void ABoqueron::BuildMuroEspinas()
{
	if (MuroEspinas == "MuroEspinas")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionMuroEspinas1 = UbicacionBoqueron + FVector(900.0f, 300.0f, 0.0f);
			FVector ubicacionMuroEspinas2 = UbicacionBoqueron + FVector(-1000.0f, 300.0f, 0.0f);
			FVector ubicacionMuroEspinas3 = UbicacionBoqueron + FVector(-1100.0f, 300.0f, 0.0f);
			World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas1, FRotator::ZeroRotator);
			World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas2, FRotator::ZeroRotator);
			World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas3, FRotator::ZeroRotator);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo el Muro de Espinas"));
		}
	}
}

void ABoqueron::Caracteristicas()
{
}

