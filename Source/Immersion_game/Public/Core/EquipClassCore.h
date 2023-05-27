// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EquipClassCore.generated.h"

class UItemObjectCore;
UCLASS()
class IMMERSION_GAME_API AEquipClassCore : public AActor
{
	GENERATED_BODY()
	
public:	
	AEquipClassCore();

protected:

	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	// Functions
	UFUNCTION(BlueprintCallable)
		FName GetUseSocket() const {return UseSocketName;}
	UFUNCTION(BlueprintCallable,BlueprintPure)
		UItemObjectCore* GetItemObject() {return ItemObject;}
	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent)
	void StartPrimaryAction();
	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent)
	void StopPrimaryAction();
	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent)
	void StartSecondaryAction();
	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent)
	void StopSecondaryAction();
	// Variables
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ItemInfo",meta=(ExposeOnSpawn))
		TObjectPtr<UItemObjectCore> ItemObject;
private:
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="ItemInfo",meta=(AllowPrivateAccess))
		FName UseSocketName;
};
