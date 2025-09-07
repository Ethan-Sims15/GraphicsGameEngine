// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GraphicsGameEngine : ModuleRules
{
	public GraphicsGameEngine(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
