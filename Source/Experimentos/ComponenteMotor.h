// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Motor.h" 
#include "ComponenteMotor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EXPERIMENTOS_API UComponenteMotor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UComponenteMotor();

	UPROPERTY()
	TArray<AMotor*> CurrentInventory;
	UFUNCTION()
	int32 AddToInventory(AMotor* ActorToAdd);
	UFUNCTION()
	void RemoveFromInventory(AMotor* ActorToRemove);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
		
};
