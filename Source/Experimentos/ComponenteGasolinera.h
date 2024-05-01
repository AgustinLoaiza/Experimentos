// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Gasolinera.h"
#include "ComponenteGasolinera.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EXPERIMENTOS_API UComponenteGasolinera : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UComponenteGasolinera();

	UPROPERTY()
	TArray<AGasolinera*> CurrentInventory;
	UFUNCTION()
	int32 AddToInventory(AGasolinera* ActorToAdd);
	UFUNCTION()
	void RemoveFromInventory(AGasolinera* ActorToRemove);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
