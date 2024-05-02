// Fill out your copyright notice in the Description page of Project Settings.


#include "Motor.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Engine/CollisionProfile.h"
#include "ExperimentosPawn.h"
#include "TimerManager.h"

AMotor::AMotor()
{
	PrimaryActorTick.bCanEverTick = true;
	auto MeshAsset =
		ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (MeshAsset.Object != nullptr)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	SetActorEnableCollision(true);
}

void AMotor::PickUp()
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);

	/*AExperimentosPawn* Pawn = Cast<AExperimentosPawn>(GetOwner()); 
	if (Pawn)
	{
		UE_LOG(LogTemp, Warning, TEXT("Pawn Found")); 
		Pawn->MoveSpeed=3500.0f;

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No Pawn"));
	}*/
}

void AMotor::PutDown(FTransform TargetLocation)
{
	SetActorTickEnabled(true);
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorLocation(TargetLocation.GetLocation());
}
