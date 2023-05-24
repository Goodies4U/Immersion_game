// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/TimelineComponent.h"
#include "ActionSceneCore.generated.h"

class UTimelineComponent;
class UCurveFloat;

UCLASS(Blueprintable,ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AZOMBIE_API UActionSceneCore : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UActionSceneCore();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	FTimeline AnimTimeline;
	UFUNCTION(BlueprintImplementableEvent)
		void TimelineProgress(float Value);
	UFUNCTION(BlueprintImplementableEvent)
		void TimelineStop();
	UFUNCTION(BlueprintCallable)
		void PlayTimeline();
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UPROPERTY(EditAnywhere,meta=(AllowPrivateAccess))
		TObjectPtr<UCurveFloat> AnimCurve;
};
