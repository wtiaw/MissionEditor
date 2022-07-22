// Fill out your copyright notice in the Description page of Project Settings.


#include "MissionEditorFactory.h"
#include "MissionEditor.h"
#include "Kismet2/KismetEditorUtilities.h"

UMissionEditorFactory::UMissionEditorFactory(const FObjectInitializer& ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UMissionEditor::StaticClass();
}

UObject* UMissionEditorFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	return FactoryCreateNew(InClass, InParent, InName, Flags, Context, Warn,NAME_None);
}

UObject* UMissionEditorFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
                                                 UObject* Context, FFeedbackContext* Warn, FName CallingContext)
{
	check(InClass->IsChildOf(UMissionEditor::StaticClass()));
	
	// UMissionEditor* NewMissionEditor = CastChecked<UMissionEditor>(FKismetEditorUtilities::CreateBlueprint(InParent, InParent, InName, Flags, InClass, UBlueprintGeneratedClass::StaticClass(), CallingContext));
	return NewObject<UMissionEditor>(InParent, InClass, InName, Flags);;
}
