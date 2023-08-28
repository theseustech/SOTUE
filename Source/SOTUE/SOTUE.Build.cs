// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SOTUE : ModuleRules
{
	public SOTUE(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG", "Slate", "SlateCore"});

        PublicDependencyModuleNames.Add("SOTVM");

		bUseSOT = true;
	}
}
