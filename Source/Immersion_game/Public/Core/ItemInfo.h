#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemInfo.generated.h"

class APickUpCore;
class AEquipClassCore;
USTRUCT(BlueprintType)
struct FItemInfo : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="ItemInfo")
	FName Name;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="ItemInfo")
	FName Description;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="ItemInfo")
	TObjectPtr<UTexture2D> ItemIcon = nullptr;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="ItemInfo")
	TSubclassOf<APickUpCore> PickUpClass = nullptr;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="ItemInfo")
	TSubclassOf<AEquipClassCore> EquipClass = nullptr;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="ItemInfo")
	TObjectPtr<UStaticMesh> Model = nullptr;
};
