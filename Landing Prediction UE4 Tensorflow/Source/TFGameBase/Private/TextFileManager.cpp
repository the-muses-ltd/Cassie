// Fill out your copyright notice in the Description page of Project Settings.


#include "TextFileManager.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"
#include "Math/Vector4.h"



bool UTextFileManager::SaveArrayText(FString SaveDirectory, FString FileName, TArray<FString> SaveText, bool AllowOverWriting) 
{
	SaveDirectory += "\\";
    SaveDirectory += FileName;

    if(!AllowOverWriting)
    {
        if(FPlatformFileManager::Get().GetPlatformFile().FileExists(*SaveDirectory))
        {
            return false;
        }
    }

    FString FinalString = "";
    for(FString& Each : SaveText)
    {
        FinalString += Each;
        FinalString += LINE_TERMINATOR;
    }

    return FFileHelper::SaveStringToFile(FinalString, *SaveDirectory); 
}

void UTextFileManager::MakeFloatsToString(float VelocityX, float VelocityY, float LocationX, float LocationY, FString& VelocityXstr, FString& VelocityYstr, FString& LocationXstr, FString& LocationYstr) 
{
	VelocityXstr = FString::SanitizeFloat(VelocityX);
    VelocityYstr = FString::SanitizeFloat(VelocityY);
    LocationXstr = FString::SanitizeFloat(LocationX);
    LocationYstr = FString::SanitizeFloat(LocationY);
}

void UTextFileManager::Float3ToString(float LocationX, float LocationY, float LocationZ, FString& StringArray) 
{
    StringArray = FString::Printf(TEXT("%f, %f, %f"), LocationX, LocationY, LocationZ);
}

void UTextFileManager::Float2ToString(float LocationX, float LocationY, FString& Floatstr) 
{
	Floatstr = FString::Printf(TEXT("%f, %f"), LocationX, LocationY);
}

void UTextFileManager::MultiToString(float LocationX, float LocationY, float LocationZ, float DirectionX, float DirectionY, float DirectionZ, float Speed, float Gravity, FString& Floatsstr) 
{
	Floatsstr = FString::Printf(TEXT("%f, %f, %f, %f, %f, %f, %f, %f"), LocationX, LocationY, LocationZ, DirectionX, DirectionY, DirectionZ, Speed, Gravity);
}

void UTextFileManager::InputsToString(float LocationX, float LocationY, float Angle, float Speed, FString& Floatsstr) 
{
	Floatsstr = FString::Printf(TEXT("%f, %f, %f, %f"), LocationX, LocationY, Angle, Speed);
}

void UTextFileManager::PVToString(float LocationX, float LocationY, float LocationZ, float VelocityX, float VelocityY, float VelocityZ, float Gravity, FString& Output) 
{
	Output =  FString::Printf(TEXT("%f, %f, %f, %f, %f, %f, %f"), LocationX, LocationY, LocationZ, VelocityX, VelocityY, VelocityZ, Gravity);
}

void UTextFileManager::LVToString(float LocationX, float VelocityX, float LocationY, float VelocityY, FString& Output) 
{
	Output =  FString::Printf(TEXT("%f, %f, %f, %f"), LocationX, VelocityX, LocationY, VelocityY);
}