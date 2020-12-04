// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Megajam2020 : ModuleRules
{
	public Megajam2020(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
