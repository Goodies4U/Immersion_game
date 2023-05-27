// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "ItemInfo.h"
#include "ItemObjectCore.generated.h"

class APickUpCore;
class AEquipClassCore;

UCLASS(Blueprintable,EditInlineNew,DefaultToInstanced)
class IMMERSION_GAME_API UItemObjectCore : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
		FDataTableRowHandle GetItemInfo() const {return ItemInfo;}
private:
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="ItemInfo",meta=(AllowPrivateAccess))
		FDataTableRowHandle ItemInfo;	
};
