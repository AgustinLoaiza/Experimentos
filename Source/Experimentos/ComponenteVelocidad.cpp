// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteVelocidad.h"

// Sets default values for this component's properties
UComponenteVelocidad::UComponenteVelocidad()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	Velocidad = 1500.0f;
	TiempoTranscurrido = 0;
}


// Called when the game starts
void UComponenteVelocidad::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UComponenteVelocidad::MejorarVelocidad(float DeltaTime)
{
	if (verificar)
	{
		Velocidad += 100.0f * DeltaTime;


		verificar = false;

	}
}

void UComponenteVelocidad::ActivarVelocidad()
{
	verificar = true;
}

// Called every frame
void UComponenteVelocidad::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	MejorarVelocidad(DeltaTime);
}

