// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WuBiLiBiLiSDK : ModuleRules
{
	public WuBiLiBiLiSDK(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"HTTP", //引擎自带HTTP模块
				"WebSockets",
				"Json", //这个需要添加，需要用到其提供的FJsonObject，这个是引擎自带的。不需要启用插件
				"JsonUtilities",//这个需要添加需要用到其提供的FJsonObjectWrapper。使用这个方便管理
				//"LowEntryExtendedStandardLibrary",
				"zlib",
                "OpenSSL",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
