// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ComponenteChino.h"
#include "MagiaChina.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EXPERIMENTOS_API UMagiaChina : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMagiaChina();

	UPROPERTY()
	TArray<AComponenteChino*> CurrentInventory;
	UFUNCTION()
	int32 AddToInventory(AComponenteChino* ActorToAdd);
	UFUNCTION()
	void RemoveFromInventory(AComponenteChino* ActorToRemove);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
