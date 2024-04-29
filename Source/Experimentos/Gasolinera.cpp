// Fill out your copyright notice in the Description page of Project Settings.


#include "Gasolinera.h"

// Sets default values
AGasolinera::AGasolinera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	// Create the mesh component
	mallaGasolinera = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Gasolinera"));
//	mallaGasolinera->SetStaticMesh(ShipMesh.Object);
	mallaGasolinera->SetupAttachment(RootComponent);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
	RootComponent = mallaGasolinera;
}

// Called when the game starts or when spawned
void AGasolinera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGasolinera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

