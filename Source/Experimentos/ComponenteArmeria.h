// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Armeria.h"
#include "ComponenteArmeria.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EXPERIMENTOS_API UComponenteArmeria : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UComponenteArmeria();

	UPROPERTY()
	TArray<AArmeria*> CurrentInventory;
	UFUNCTION()
	int32 AddToInventory(AArmeria* ActorToAdd);
	UFUNCTION()
	void RemoveFromInventory(AArmeria* ActorToRemove);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
