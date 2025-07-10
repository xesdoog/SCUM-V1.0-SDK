// Enum RuntimeAudioImporter.ETranscodingStatus
enum class ETranscodingStatus : uint8 {
	SuccessfulImport = 0,
	FailedToReadAudioDataArray = 1,
	SoundWaveDeclarationError = 2,
	InvalidAudioFormat = 3,
	AudioDoesNotExist = 4,
	LoadFileToArrayError = 5,
	ETranscodingStatus_MAX = 6
};

// Enum RuntimeAudioImporter.ERAWAudioFormat
enum class ERAWAudioFormat : uint8 {
	Int16 = 0,
	Int32 = 1,
	UInt8 = 2,
	Float32 = 3,
	ERAWAudioFormat_MAX = 4
};

// Enum RuntimeAudioImporter.EAudioFormat
enum class EAudioFormat : uint8 {
	Auto = 0,
	Mp3 = 1,
	Wav = 2,
	Flac = 3,
	OggVorbis = 4,
	Invalid = 5,
	EAudioFormat_MAX = 6
};

// Enum RuntimeAudioImporter.EWAVEncodingFormat
enum class EWAVEncodingFormat : uint8 {
	FORMAT_PCM = 0,
	FORMAT_ADPCM = 1,
	FORMAT_IEEE_FLOAT = 2,
	FORMAT_ALAW = 3,
	FORMAT_MULAW = 4,
	FORMAT_DVI_ADPCM = 5,
	FORMAT_EXTENSIBLE = 6,
	FORMAT_MAX = 7
};

// ScriptStruct RuntimeAudioImporter.CompressedSoundWaveInfo
// Size: 0x0c (Inherited: 0x00)
struct FCompressedSoundWaveInfo {
	enum class ESoundGroup SoundGroup; // 0x00(0x01)
	bool bLooping; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Volume; // 0x04(0x04)
	float Pitch; // 0x08(0x04)
};

// ScriptStruct RuntimeAudioImporter.PCMStruct
// Size: 0x18 (Inherited: 0x00)
struct FPCMStruct {
	char pad_0[0x18]; // 0x00(0x18)
};

