// Fill out your copyright notice in the Description page of Project Settings.


#include "MagiaChina.h"

// Sets default values for this component's properties
UMagiaChina::UMagiaChina()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

int32 UMagiaChina::AddToInventory(AComponenteChino* ActorToAdd)
{
	return CurrentInventory.Add(ActorToAdd);
}

void UMagiaChina::RemoveFromInventory(AComponenteChino* ActorToRemove)
{
	CurrentInventory.Remove(ActorToRemove);
}


// Called when the game starts
void UMagiaChina::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMagiaChina::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

