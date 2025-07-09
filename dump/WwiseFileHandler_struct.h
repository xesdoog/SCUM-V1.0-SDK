// Enum WwiseFileHandler.EWwiseLanguageRequirement
enum class EWwiseLanguageRequirement : uint8 {
	IsDefault = 0,
	IsOptional = 1,
	SFX = 2,
	EWwiseLanguageRequirement_MAX = 3
};

// Enum WwiseFileHandler.EWwiseSoundBankType
enum class EWwiseSoundBankType : uint8 {
	User = 0,
	Event = 30,
	Bus = 31,
	EWwiseSoundBankType_MAX = 32
};

// ScriptStruct WwiseFileHandler.WwiseExternalSourceCookedData
// Size: 0x0c (Inherited: 0x00)
struct FWwiseExternalSourceCookedData {
	int32_t Cookie; // 0x00(0x04)
	struct FName DebugName; // 0x04(0x08)
};

// ScriptStruct WwiseFileHandler.WwiseLanguageCookedData
// Size: 0x10 (Inherited: 0x00)
struct FWwiseLanguageCookedData {
	int32_t LanguageId; // 0x00(0x04)
	struct FName LanguageName; // 0x04(0x08)
	enum class EWwiseLanguageRequirement LanguageRequirement; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct WwiseFileHandler.WwiseMediaCookedData
// Size: 0x20 (Inherited: 0x00)
struct FWwiseMediaCookedData {
	int32_t MediaId; // 0x00(0x04)
	struct FName MediaPathName; // 0x04(0x08)
	int32_t PrefetchSize; // 0x0c(0x04)
	int32_t MemoryAlignment; // 0x10(0x04)
	bool bDeviceMemory; // 0x14(0x01)
	bool bStreaming; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FName DebugName; // 0x18(0x08)
};

// ScriptStruct WwiseFileHandler.WwiseSoundBankCookedData
// Size: 0x1c (Inherited: 0x00)
struct FWwiseSoundBankCookedData {
	int32_t SoundBankId; // 0x00(0x04)
	struct FName SoundBankPathName; // 0x04(0x08)
	int32_t MemoryAlignment; // 0x0c(0x04)
	bool bDeviceMemory; // 0x10(0x01)
	bool bContainsMedia; // 0x11(0x01)
	enum class EWwiseSoundBankType SoundBankType; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	struct FName DebugName; // 0x14(0x08)
};

