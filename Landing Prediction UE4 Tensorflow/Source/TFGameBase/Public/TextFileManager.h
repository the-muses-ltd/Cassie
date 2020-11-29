// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextFileManager.generated.h"

/**
 * 
 */
UCLASS()
class TFGAMEBASE_API UTextFileManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "Save"))
	static bool SaveArrayText(FString SaveDirectory, FString FileName, TArray<FString> SaveText, bool AllowOverWriting);

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "String"))
	static void MakeFloatsToString(float VelocityX, float VelocityY, float LocationX, float LocationY, FString& VelocityXstr, FString& VelocityYstr, FString& LocationXstr, FString& LocationYstr);

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "String"))
	static void Float3ToString(float LocationX, float LocationY, float LocationZ, FString& StringArray);

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "String"))
	static void Float2ToString(float LocationX, float LocationY, FString& Floatstr);

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "String"))
	static void MultiToString(float LocationX, float LocationY, float LocationZ, float DirectionX, float DirectionY, float DirectionZ, float Speed, float Gravity, FString& Floatsstr);

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "String"))
	static void PVToString(float LocationX, float LocationY, float LocationZ, float VelocityX, float VelocityY, float VelocityZ, float Gravity, FString& Output);

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "String"))
	static void LVToString(float LocationX, float VelocityX, float LocationY, float VelocityY, FString& Output);

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "String"))
	static void InputsToString(float LocationX, float LocationY, float Angle, float Speed, FString& Floatsstr);
};



























