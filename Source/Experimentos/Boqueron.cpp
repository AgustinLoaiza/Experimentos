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
		BuildEscudo(); 
		BuildMuroEspinas(); 
		BuildFuncionEspecial();
		
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

//void ABoqueron::SetPowerUp(AGasolinera* _Gasolinera)
//{
//	Gasolinera = _Gasolinera;
//}
//
//void ABoqueron::SetFuncionEspecial(ADisparador* _Disparador)
//{
//	Disparador = _Disparador;
//}
//
//void ABoqueron::SetEscudo(AEscudo* _Escudo)
//{
//	Escudo = _Escudo;
//}
//
//void ABoqueron::SetMuroEspinas(AMuroEspinas* _MuroEspinas)
//{
//	MuroEspinas = _MuroEspinas;
//}


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
			FVector ubicacionCentroMedico1 = UbicacionBoqueron+FVector(100.0f, 200.0f, 0.0f);
			FVector ubicacionCentroMedico2 = UbicacionBoqueron+FVector(100.0f, -200.0f, 0.0f);
			FVector ubicacionCentroMedico3 = UbicacionBoqueron+FVector(200.0f, 200.0f, 0.0f);
			FVector ubicacionCentroMedico4 = UbicacionBoqueron+FVector(200.0f, -200.0f, 0.0f);
			//Campo minado de componentes chinos
			FVector ubicacionChino1 = UbicacionBoqueron + FVector(-500.0f, 200.0f, 0.0f);
			FVector ubicacionChino2 = UbicacionBoqueron + FVector(-300.0f, 350.0f, 0.0f);
			FVector ubicacionChino3 = UbicacionBoqueron + FVector(-400.0f, -350.0f, 0.0f);
			FVector ubicacionChino4 = UbicacionBoqueron + FVector(-500.0f, -500.0f, 0.0f);
			World->SpawnActor<ACentroMedico>(ubicacionCentroMedico1, FRotator::ZeroRotator);
			World->SpawnActor<ACentroMedico>(ubicacionCentroMedico2, FRotator::ZeroRotator);
			World->SpawnActor<ACentroMedico>(ubicacionCentroMedico3, FRotator::ZeroRotator);
			World->SpawnActor<ACentroMedico>(ubicacionCentroMedico4, FRotator::ZeroRotator); 
			World->SpawnActor<AComponenteChino>(ubicacionChino1, FRotator::ZeroRotator); 
			World->SpawnActor<AComponenteChino>(ubicacionChino2, FRotator::ZeroRotator);
			World->SpawnActor<AComponenteChino>(ubicacionChino3, FRotator::ZeroRotator);
			World->SpawnActor<AComponenteChino>(ubicacionChino4, FRotator::ZeroRotator); 
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
	else if (PowerUp=="MotorMunicion")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionMotor = UbicacionBoqueron + FVector(100.0f, 150.0f, 0.0f); 
			FVector ubicacionGasolinera = UbicacionBoqueron + FVector(100.0f, -150.0f, 0.0f);
			FVector ubicacionChino = UbicacionBoqueron + FVector(150.0f, 0.0f, 0.0f);
			World->SpawnActor<AMotor>(ubicacionMotor, FRotator::ZeroRotator); 
			World->SpawnActor<AGasolinera>(ubicacionGasolinera, FRotator::ZeroRotator); 
			World->SpawnActor<AComponenteChino>(ubicacionChino, FRotator::ZeroRotator); 
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo el Motor y la Municion")); 
		}
	}
	else if (PowerUp=="MunicionArma")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionMunicion1 = UbicacionBoqueron + FVector(100.0f, 150.0f, 0.0f); 
			FVector ubicacionMunicion2 = UbicacionBoqueron + FVector(100.0f, -150.0f, 0.0f);
			FVector ubicacionMunicion3 = UbicacionBoqueron + FVector(200.0f, 150.0f, 0.0f);
			FVector ubicacionMunicion4 = UbicacionBoqueron + FVector(200.0f, -150.0f, 0.0f);
			FVector ubicacionArmeria = UbicacionBoqueron + FVector(150.0f, 0.0f, 0.0f);
			World->SpawnActor<AMunicion>(ubicacionMunicion1, FRotator::ZeroRotator); 
			World->SpawnActor<AMunicion>(ubicacionMunicion2, FRotator::ZeroRotator);
			World->SpawnActor<AMunicion>(ubicacionMunicion3, FRotator::ZeroRotator);
			World->SpawnActor<AMunicion>(ubicacionMunicion4, FRotator::ZeroRotator);
			World->SpawnActor<AArmeria>(ubicacionArmeria, FRotator::ZeroRotator); 
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo la Municion"));
		}
	}
	else
	{
		nullptr;
	}
}

void ABoqueron::BuildFuncionEspecial()
{
	if (contador1>=1)
	{
		return;
	}
	if (Disparador=="Disparador")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionDisparador1 = UbicacionBoqueron + FVector(0.0f, 200.0f, 0.0f);
			FVector ubicacionDisparador2 = UbicacionBoqueron + FVector(0.0f, -200.0f, 0.0f);
			World->SpawnActor<ADisparador>(ubicacionDisparador1, FRotator::ZeroRotator);
			World->SpawnActor<ADisparador>(ubicacionDisparador2, FRotator::ZeroRotator);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo el Disparador"));
		}
		
	}
	else if (Disparador=="MuchosDisparadores")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionDisparador1 = UbicacionBoqueron + FVector(0.0f, 200.0f, 0.0f); 
			FVector ubicacionDisparador2 = UbicacionBoqueron + FVector(0.0f, -200.0f, 0.0f);
			FVector ubicacionDisparador3 = UbicacionBoqueron + FVector(-200.0f, 0.0f, 0.0f);
			FVector ubicacionDisparador4 = UbicacionBoqueron + FVector(-200.0f, 100.0f, 0.0f); 
			FVector ubicacionDisparador5 = UbicacionBoqueron + FVector(-200.0f, -100.0f, 0.0f); 
			World->SpawnActor<ADisparador>(ubicacionDisparador1, FRotator::ZeroRotator); 
			World->SpawnActor<ADisparador>(ubicacionDisparador2, FRotator::ZeroRotator);
			World->SpawnActor<ADisparador>(ubicacionDisparador3, FRotator::ZeroRotator);
			World->SpawnActor<ADisparador>(ubicacionDisparador4, FRotator::ZeroRotator);
			World->SpawnActor<ADisparador>(ubicacionDisparador5, FRotator::ZeroRotator); 
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se crearon los disparadores")); 
		}
	}
	contador1++;

}

void ABoqueron::BuildEscudo()
{
	if (contador2 >= 1)
	{
		return;
	}
	if (Escudo == "Escudo")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionEscudo1 = UbicacionBoqueron + FVector(-300.0f, -100.0f, 0.0f);
			FVector ubicacionEscudo2 = UbicacionBoqueron + FVector(-300.0f, 0.0f, 0.0f);
			FVector ubicacionEscudo3 = UbicacionBoqueron + FVector(-300.0f, 100.0f, 0.0f);
			World->SpawnActor<AEscudo>(ubicacionEscudo1, FRotator::ZeroRotator);
			World->SpawnActor<AEscudo>(ubicacionEscudo2, FRotator::ZeroRotator);
			World->SpawnActor<AEscudo>(ubicacionEscudo3, FRotator::ZeroRotator);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo el Escudo"));
		}
	}
	else if (Escudo=="MuchosEscudos")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionEscudo1 = UbicacionBoqueron + FVector(-200.0f, -300.0f, 0.0f);
			FVector ubicacionEscudo2 = UbicacionBoqueron + FVector(-200.0f, -200.0f, 0.0f);
			FVector ubicacionEscudo3 = UbicacionBoqueron + FVector(-200.0f, -100.0f, 0.0f);
			FVector ubicacionEscudo4 = UbicacionBoqueron + FVector(-200.0f, 0.0f, 0.0f);
			FVector ubicacionEscudo5 = UbicacionBoqueron + FVector(-200.0f, 100.0f, 0.0f);
			FVector ubicacionEscudo6 = UbicacionBoqueron + FVector(-200.0f, 200.0f, 0.0f);
			FVector ubicacionEscudo7 = UbicacionBoqueron + FVector(-200.0f, 300.0f, 0.0f);
			World->SpawnActor<AEscudo>(ubicacionEscudo1, FRotator::ZeroRotator); 
			World->SpawnActor<AEscudo>(ubicacionEscudo2, FRotator::ZeroRotator); 
			World->SpawnActor<AEscudo>(ubicacionEscudo3, FRotator::ZeroRotator); 
			World->SpawnActor<AEscudo>(ubicacionEscudo4, FRotator::ZeroRotator); 
			World->SpawnActor<AEscudo>(ubicacionEscudo5, FRotator::ZeroRotator);
			World->SpawnActor<AEscudo>(ubicacionEscudo6, FRotator::ZeroRotator);
			World->SpawnActor<AEscudo>(ubicacionEscudo7, FRotator::ZeroRotator);
		}

	}
	contador2++;
}

void ABoqueron::BuildMuroEspinas()
{
	if (contador3 >= 1)
	{
		return;
	}
	if (MuroEspinas == "MuroEspinas")
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector ubicacionMuroEspinas1 = UbicacionBoqueron + FVector(300.0f, -300.0f, 0.0f);
			FVector ubicacionMuroEspinas2 = UbicacionBoqueron + FVector(300.0f, -200.0f, 0.0f);
			FVector ubicacionMuroEspinas3 = UbicacionBoqueron + FVector(300.0f, -100.0f, 0.0f);
			FVector ubicacionMuroEspinas4 = UbicacionBoqueron + FVector(300.0f, 0.0f, 0.0f);
			FVector ubicacionMuroEspinas5 = UbicacionBoqueron + FVector(300.0f, 100.0f, 0.0f);
			FVector ubicacionMuroEspinas6 = UbicacionBoqueron + FVector(300.0f, 200.0f, 0.0f);
			FVector ubicacionMuroEspinas7 = UbicacionBoqueron + FVector(300.0f, 300.0f, 0.0f);

			FVector ubicacionMuroEspinas8 = UbicacionBoqueron + FVector(200.0f, -300.0f, 0.0f);
			FVector ubicacionMuroEspinas9 = UbicacionBoqueron + FVector(100.0f, -300.0f, 0.0f);
			FVector ubicacionMuroEspinas10 = UbicacionBoqueron + FVector(0.0f, -300.0f, 0.0f);
			FVector ubicacionMuroEspinas11 = UbicacionBoqueron + FVector(-100.0f, -300.0f, 0.0f);
			FVector ubicacionMuroEspinas12 = UbicacionBoqueron + FVector(200.0f, 300.0f, 0.0f);
			FVector ubicacionMuroEspinas13 = UbicacionBoqueron + FVector(100.0f, 300.0f, 0.0f);
			FVector ubicacionMuroEspinas14 = UbicacionBoqueron + FVector(0.0f, 300.0f, 0.0f); 
			FVector ubicacionMuroEspinas15 = UbicacionBoqueron + FVector(-100.0f, 300.0f, 0.0f);

			World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas1, FRotator::ZeroRotator);
			World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas2, FRotator::ZeroRotator); 
			World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas3, FRotator::ZeroRotator);
			World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas4, FRotator::ZeroRotator); 
			World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas5, FRotator::ZeroRotator);
			World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas6, FRotator::ZeroRotator);
			World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas7, FRotator::ZeroRotator); 

			World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas8, FRotator::ZeroRotator); 
			World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas9, FRotator::ZeroRotator); 
			World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas10, FRotator::ZeroRotator); 
			World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas11, FRotator::ZeroRotator); 
			World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas12, FRotator::ZeroRotator); 
			World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas13, FRotator::ZeroRotator); 
			World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas14, FRotator::ZeroRotator); 
			World->SpawnActor<AMuroEspinas>(ubicacionMuroEspinas15, FRotator::ZeroRotator); 

			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Se creo el Muro de Espinas"));
		}
	}
	contador3++;
}

void ABoqueron::Caracteristicas()
{
}

