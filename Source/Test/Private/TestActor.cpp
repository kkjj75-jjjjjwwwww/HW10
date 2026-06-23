// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestActor.h"
#include "Engine/Engine.h"

ATestActor::ATestActor()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ATestActor::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Warning, TEXT("TestActor BeginPlay - Test Module Works!"));

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(
            -1,
            5.0f,
            FColor::Green,
            TEXT("TestActor BeginPlay - Test Module Works!")
        );
    }
}
 