// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class MyProjectModuleTestTarget : TargetRules
{
	public MyProjectModuleTestTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("MyProjectModuleTest");
		ExtraModuleNames.Add("BlueprintLibraryModule");
	}
}
