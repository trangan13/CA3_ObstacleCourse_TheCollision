// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class CA3_ObstacleCourse_GBTarget : TargetRules
{
	public CA3_ObstacleCourse_GBTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "CA3_ObstacleCourse_GB" } );
	}
}
