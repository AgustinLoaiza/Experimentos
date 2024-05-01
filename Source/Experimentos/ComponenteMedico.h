// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CentroMedico.h"
#include "ComponenteMedico.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EXPERIMENTOS_API UComponenteMedico : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UComponenteMedico();

	UPROPERTY()
	TArray<ACentroMedico*> CurrentInventory;
	UFUNCTION()
	int32 AddToInventory(ACentroMedico* ActorToAdd);
	UFUNCTION()
	void RemoveFromInventory(ACentroMedico* ActorToRemove);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
