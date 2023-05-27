// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/EquipClassCore.h"

// Sets default values
AEquipClassCore::AEquipClassCore()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEquipClassCore::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEquipClassCore::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

