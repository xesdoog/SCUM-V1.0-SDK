// Enum StreamlineBlueprint.UStreamlineFeatureRequirementsFlags
enum class UStreamlineFeatureRequirementsFlags : uint8 {
	None = 0,
	D3D11Supported = 1,
	D3D12Supported = 2,
	VulkanSupported = 4,
	VSyncOffRequired = 8,
	HardwareSchedulingRequired = 16,
	UStreamlineFeatureRequirementsFlags_MAX = 17
};

// Enum StreamlineBlueprint.UStreamlineFeatureSupport
enum class UStreamlineFeatureSupport : uint8 {
	Supported = 0,
	NotSupported = 1,
	NotSupportedIncompatibleHardware = 2,
	NotSupportedDriverOutOfDate = 3,
	NotSupportedOperatingSystemOutOfDate = 4,
	NotSupportedHardewareSchedulingDisabled = 5,
	NotSupportedByRHI = 6,
	NotSupportedByPlatformAtBuildTime = 7,
	NotSupportedIncompatibleAPICaptureToolActive = 8,
	UStreamlineFeatureSupport_MAX = 9
};

// Enum StreamlineBlueprint.UStreamlineFeature
enum class UStreamlineFeature : uint8 {
	DLSSG = 0,
	Reflex = 1,
	Count = 2,
	UStreamlineFeature_MAX = 3
};

// Enum StreamlineBlueprint.UStreamlineDLSSGMode
enum class UStreamlineDLSSGMode : uint8 {
	Off = 0,
	On = 1,
	Auto = 2,
	UStreamlineDLSSGMode_MAX = 3
};

// Enum StreamlineBlueprint.UStreamlineReflexMode
enum class UStreamlineReflexMode : uint8 {
	Disabled = 0,
	Enabled = 1,
	EnabledPlusBoost = 3,
	UStreamlineReflexMode_MAX = 4
};

// ScriptStruct StreamlineBlueprint.StreamlineFeatureRequirements
// Size: 0x34 (Inherited: 0x00)
struct FStreamlineFeatureRequirements {
	enum class UStreamlineFeatureSupport support; // 0x00(0x01)
	enum class UStreamlineFeatureRequirementsFlags Requirements; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FStreamlineVersion RequiredOperatingSystemVersion; // 0x04(0x0c)
	struct FStreamlineVersion DetectedOperatingSystemVersion; // 0x10(0x0c)
	struct FStreamlineVersion RequiredDriverVersion; // 0x1c(0x0c)
	struct FStreamlineVersion DetectedDriverVersion; // 0x28(0x0c)
};

// ScriptStruct StreamlineBlueprint.StreamlineVersion
// Size: 0x0c (Inherited: 0x00)
struct FStreamlineVersion {
	int32_t Major; // 0x00(0x04)
	int32_t Minor; // 0x04(0x04)
	int32_t Build; // 0x08(0x04)
};

