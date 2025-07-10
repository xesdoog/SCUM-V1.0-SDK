// Class StreamlineRHI.StreamlineOverrideSettings
// Size: 0x30 (Inherited: 0x28)
struct UStreamlineOverrideSettings : UObject {
	enum class EStreamlineSettingOverride EnableDLSSFGInPlayInEditorViewportsOverride; // 0x28(0x01)
	enum class EStreamlineSettingOverride LoadDebugOverlayOverride; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// Class StreamlineRHI.StreamlineSettings
// Size: 0x38 (Inherited: 0x28)
struct UStreamlineSettings : UObject {
	bool bEnableStreamlineD3D12; // 0x28(0x01)
	bool bEnableStreamlineD3D11; // 0x29(0x01)
	bool bEnableDLSSFGInPlayInEditorViewports; // 0x2a(0x01)
	bool bLoadDebugOverlay; // 0x2b(0x01)
	bool bAllowOTAUpdate; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t NVIDIANGXApplicationId; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

