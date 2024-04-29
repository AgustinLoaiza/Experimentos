// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteMotor.h"

// Sets default values for this component's properties
UComponenteMotor::UComponenteMotor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	Velocidad = 1500.0f;
	TiempoTranscurrido = 0;
}


// Called when the game starts
void UComponenteMotor::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UComponenteMotor::MostrarMovimiento(float DeltaTime)
{
	if (verificar)
	{
		TiempoTranscurrido++;
		if (TiempoTranscurrido < 300)
		{
			AActor* Parent = GetOwner();
			if (Parent)
			{
				auto NewPos = Parent->GetActorLocation() + FVector(FMath::RandRange(-100.0f, 100.0f) + Velocidad * DeltaTime, FMath::RandRange(-100.0f, 100.0f) + Velocidad * DeltaTime, 0.0f);
				Parent->SetActorLocation(NewPos);
			}
		}
		else
		{
			verificar = false;
		}
	}
}

void UComponenteMotor::ActivarMovimiento()
{
	verificar = true;
}

// Called every frame
void UComponenteMotor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	MostrarMovimiento(DeltaTime); 
}


