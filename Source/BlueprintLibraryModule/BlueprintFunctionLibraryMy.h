#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintFunctionLibraryMy.generated.h"


UCLASS()
class USimpleBlueprintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

    /** Starts an analytics session without any custom attributes specified */
    UFUNCTION(BlueprintCallable, Category = "MyCategory")
    static bool StartSession();
};
