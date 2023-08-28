// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;
using System.IO;

public class SOTUETarget : TargetRules
{
	public SOTUETarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("SOTUE");

		bEnableSot = true;
		bGenerateSotPatch = false;
		SotPatchVer = "1.0";
        SotSavedDir = Path.Combine(ProjectFile.Directory.FullName, "sotsaved");
    }
}
