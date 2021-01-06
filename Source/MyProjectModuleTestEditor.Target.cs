// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class MyProjectModuleTestEditorTarget : TargetRules
{
	public MyProjectModuleTestEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("MyProjectModuleTest");
		ExtraModuleNames.Add("BlueprintLibraryModule");		
	}
}
