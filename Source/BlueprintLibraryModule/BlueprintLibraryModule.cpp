// Copyright Epic Games, Inc. All Rights Reserved.

#include "BlueprintLibraryModule.h"
#include "Modules/ModuleManager.h"

DEFINE_LOG_CATEGORY(MyModule)

void BlueprintLibraryModule::StartupModule()
{
    UE_LOG(MyModule, Warning, TEXT("Module Started"));

}

void BlueprintLibraryModule::ShutdownModule()
{
    UE_LOG(MyModule, Warning, TEXT("Module Stopped"));
}

IMPLEMENT_GAME_MODULE( BlueprintLibraryModule, BlueprintLibraryModule );

