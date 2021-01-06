// Copyright Epic Games, Inc. All Rights Reserved.

#include "BlueprintFunctionLibraryMy.h"

DECLARE_LOG_CATEGORY_EXTERN(MyModule, All, All)

bool USimpleBlueprintLibrary::StartSession()
{
    UE_LOG(MyModule, Warning, TEXT("USimpleBlueprintLibrary::StartSession() called"));
    return true;
}
