// Copyright Epic Games, Inc. All Rights Reserved.

#include "MissionEditorModule.h"

#include "AssetToolsModule.h"
#include "MissionEditorAssetTypeActions.h"

#define LOCTEXT_NAMESPACE "MissionEditorModule"

void FMissionEditorModule::StartupModule()
{
	IAssetTools& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	TSharedPtr<FMissionEditorAssetTypeActions> AssetTypeAction = MakeShareable(new FMissionEditorAssetTypeActions());
	AssetToolsModule.RegisterAssetTypeActions(AssetTypeAction.ToSharedRef());
}

void FMissionEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMissionEditorModule, MissionEditor)