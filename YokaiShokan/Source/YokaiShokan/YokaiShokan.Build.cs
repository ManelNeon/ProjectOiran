// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class YokaiShokan : ModuleRules
{
	public YokaiShokan(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
