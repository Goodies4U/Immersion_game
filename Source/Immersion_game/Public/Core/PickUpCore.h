// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickUpCore.generated.h"

class UItemObjectCore;

UCLASS()
class IMMERSION_GAME_API APickUpCore : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickUpCore();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
		UItemObjectCore* GetItemObject() const {return ItemInfo;};
private:
	UPROPERTY(Instanced,EditAnywhere,BlueprintReadOnly,meta=(ExposeOnSpawn,AllowPrivateAccess))
		TObjectPtr<UItemObjectCore> ItemInfo;
};
