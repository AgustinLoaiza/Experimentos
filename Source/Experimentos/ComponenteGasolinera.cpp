// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteGasolinera.h"

// Sets default values for this component's properties
UComponenteGasolinera::UComponenteGasolinera()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

int32 UComponenteGasolinera::AddToInventory(AGasolinera* ActorToAdd)
{
	return CurrentInventory.Add(ActorToAdd);
}

void UComponenteGasolinera::RemoveFromInventory(AGasolinera* ActorToRemove)
{
	CurrentInventory.Remove(ActorToRemove); 
}


// Called when the game starts
void UComponenteGasolinera::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UComponenteGasolinera::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

