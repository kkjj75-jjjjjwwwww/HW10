// Copyright Epic Games, Inc. All Rights Reserved.

#include "TemporaryPluginActor.h"
#include "Engine/Engine.h"

ATemporaryPluginActor::ATemporaryPluginActor()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ATemporaryPluginActor::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Warning, TEXT("TemporaryPluginActor BeginPlay - Plugin Works!"));

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(
            -1,
            5.0f,
            FColor::Yellow,
            TEXT("TemporaryPluginActor BeginPlay - Plugin Works!")
        );
    }
}