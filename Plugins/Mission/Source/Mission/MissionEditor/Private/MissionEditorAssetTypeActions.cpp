// Fill out your copyright notice in the Description page of Project Settings.


#include "MissionEditorAssetTypeActions.h"

void FMissionEditorAssetTypeActions::OpenAssetEditor(const TArray<UObject*>& InObjects,
	TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
	FAssetTypeActions_Base::OpenAssetEditor(InObjects, EditWithinLevelEditor);
}
