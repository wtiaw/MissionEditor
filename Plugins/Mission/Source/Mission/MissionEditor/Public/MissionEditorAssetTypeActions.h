// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "MissionEditor.h"

/**
 * 
 */
class MISSIONEDITOR_API FMissionEditorAssetTypeActions : public FAssetTypeActions_Base
{
public:
	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "MissionEditorAssetTypeActions", "Mission Editor"); }
	virtual FColor GetTypeColor() const override { return FColor(139, 119, 101); }
	virtual UClass* GetSupportedClass() const override { return UMissionEditor::StaticClass(); }
	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;
	virtual uint32 GetCategories() override { return EAssetTypeCategories::Gameplay; }
};
