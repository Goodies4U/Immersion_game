// Fill out your copyright notice in the Description page of Project Settings.

#include "Core/ActionSceneCore.h"

#include "Components/TimelineComponent.h"

UActionSceneCore::UActionSceneCore()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UActionSceneCore::BeginPlay()
{
	Super::BeginPlay();
	if(!AnimCurve) return;
	FOnTimelineFloat TimelineProgress;
	FOnTimelineEvent TimelineStop;
	TimelineProgress.BindUFunction(this,FName("TimelineProgress"));
	TimelineStop.BindUFunction(this,FName("TimelineStop"));
	AnimTimeline.SetTimelineFinishedFunc(TimelineStop);
	AnimTimeline.AddInterpFloat(AnimCurve,TimelineProgress);
}

void UActionSceneCore::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	AnimTimeline.TickTimeline(DeltaTime);
}

void UActionSceneCore::PlayTimeline()
{
	if(AnimTimeline.IsPlaying()) return; 
	AnimTimeline.PlayFromStart();
}

