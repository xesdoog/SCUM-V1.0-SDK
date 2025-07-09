// Class StreamlineBlueprint.StreamlineLibrary
// Size: 0x28 (Inherited: 0x28)
struct UStreamlineLibrary : UBlueprintFunctionLibrary {

	enum class UStreamlineFeatureSupport QueryStreamlineFeatureSupport(enum class UStreamlineFeature Feature); // Function StreamlineBlueprint.StreamlineLibrary.QueryStreamlineFeatureSupport // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14f92d0
	bool IsStreamlineFeatureSupported(enum class UStreamlineFeature Feature); // Function StreamlineBlueprint.StreamlineLibrary.IsStreamlineFeatureSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14f91f0
	struct FStreamlineFeatureRequirements GetStreamlineFeatureInformation(enum class UStreamlineFeature Feature); // Function StreamlineBlueprint.StreamlineLibrary.GetStreamlineFeatureInformation // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14f8ff0
	void BreakStreamlineFeatureRequirements(enum class UStreamlineFeatureRequirementsFlags Requirements, bool& D3D11Supported, bool& D3D12Supported, bool& VulkanSupported, bool& VSyncOffRequired, bool& HardwareSchedulingRequired); // Function StreamlineBlueprint.StreamlineLibrary.BreakStreamlineFeatureRequirements // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x14f8ba0
};

// Class StreamlineBlueprint.StreamlineLibraryDLSSG
// Size: 0x28 (Inherited: 0x28)
struct UStreamlineLibraryDLSSG : UBlueprintFunctionLibrary {

	void SetDLSSGMode(enum class UStreamlineDLSSGMode DLSSGMode); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x14f9350
	enum class UStreamlineFeatureSupport QueryDLSSGSupport(); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14f9270
	bool IsDLSSGSupported(); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14f9190
	bool IsDLSSGModeSupported(enum class UStreamlineDLSSGMode DLSSGMode); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14f9110
	struct TArray<enum class UStreamlineDLSSGMode> GetSupportedDLSSGModes(); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14f9090
	enum class UStreamlineDLSSGMode GetDLSSGMode(); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14f8ea0
	void GetDLSSGFrameTiming(float& FrameRateInHertz, int32_t& FramesPresented); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrameTiming // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x14f8dc0
	enum class UStreamlineDLSSGMode GetDefaultDLSSGMode(); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14f8ed0
};

// Class StreamlineBlueprint.StreamlineLibraryReflex
// Size: 0x28 (Inherited: 0x28)
struct UStreamlineLibraryReflex : UBlueprintFunctionLibrary {

	void SetReflexMode(enum class UStreamlineReflexMode mode); // Function StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x14f93c0
	enum class UStreamlineFeatureSupport QueryReflexSupport(); // Function StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14f92a0
	bool IsReflexSupported(); // Function StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14f91c0
	float GetRenderLatencyInMs(); // Function StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14f8fc0
	enum class UStreamlineReflexMode GetReflexMode(); // Function StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14f8f90
	float GetGameToRenderLatencyInMs(); // Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14f8f60
	float GetGameLatencyInMs(); // Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14f8f30
	enum class UStreamlineReflexMode GetDefaultReflexMode(); // Function StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14f8f00
};

