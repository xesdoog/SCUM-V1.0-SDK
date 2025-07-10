// Class RuntimeAudioImporter.ImportedSoundWave
// Size: 0x440 (Inherited: 0x3c0)
struct UImportedSoundWave : USoundWaveProcedural {
	int32_t SamplingRate; // 0x3c0(0x04)
	char pad_3C4[0x1c]; // 0x3c4(0x1c)
	struct FMulticastInlineDelegate OnAudioPlaybackFinished; // 0x3e0(0x10)
	char pad_3F0[0x18]; // 0x3f0(0x18)
	struct FMulticastInlineDelegate OnGeneratePCMData; // 0x408(0x10)
	char pad_418[0x4]; // 0x418(0x04)
	int32_t CurrentNumOfFrames; // 0x41c(0x04)
	char pad_420[0x20]; // 0x420(0x20)

	bool RewindPlaybackTime(float PlaybackTime); // Function RuntimeAudioImporter.ImportedSoundWave.RewindPlaybackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x137cb80
	void ReleaseMemory(); // Function RuntimeAudioImporter.ImportedSoundWave.ReleaseMemory // (Final|Native|Public|BlueprintCallable) // @ game+0x137cb60
	bool IsPlaybackFinished(); // Function RuntimeAudioImporter.ImportedSoundWave.IsPlaybackFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x137cb30
	float GetPlaybackTime(); // Function RuntimeAudioImporter.ImportedSoundWave.GetPlaybackTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x137c550
	float GetPlaybackPercentage(); // Function RuntimeAudioImporter.ImportedSoundWave.GetPlaybackPercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x137c520
	float GetDurationConst(); // Function RuntimeAudioImporter.ImportedSoundWave.GetDurationConst // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x137c4f0
	float GetDuration(); // Function RuntimeAudioImporter.ImportedSoundWave.GetDuration // (Native|Public|BlueprintCallable) // @ game+0x137c4b0
};

// Class RuntimeAudioImporter.PreImportedSoundAsset
// Size: 0x40 (Inherited: 0x28)
struct UPreImportedSoundAsset : UObject {
	struct TArray<char> AudioDataArray; // 0x28(0x10)
	enum class EAudioFormat AudioFormat; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class RuntimeAudioImporter.RuntimeAudioCompressor
// Size: 0x50 (Inherited: 0x28)
struct URuntimeAudioCompressor : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	struct FMulticastInlineDelegate OnResult; // 0x40(0x10)

	struct URuntimeAudioCompressor* CreateRuntimeAudioCompressor(); // Function RuntimeAudioImporter.RuntimeAudioCompressor.CreateRuntimeAudioCompressor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x137c030
	void CompressSoundWave(struct UImportedSoundWave* ImportedSoundWaveRef, struct FCompressedSoundWaveInfo CompressedSoundWaveInfo, char Quality, bool bFillCompressedBuffer, bool bFillPCMBuffer, bool bFillRAWWaveBuffer); // Function RuntimeAudioImporter.RuntimeAudioCompressor.CompressSoundWave // (Final|Native|Public|BlueprintCallable) // @ game+0x137bd60
};

// Class RuntimeAudioImporter.RuntimeAudioImporterLibrary
// Size: 0x78 (Inherited: 0x28)
struct URuntimeAudioImporterLibrary : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	struct FMulticastInlineDelegate OnProgress; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)
	struct FMulticastInlineDelegate OnResult; // 0x68(0x10)

	bool TranscodeRAWDataFromFile(struct FString FilePathFrom, enum class ERAWAudioFormat FormatFrom, struct FString FilePathTo, enum class ERAWAudioFormat FormatTo); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.TranscodeRAWDataFromFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x137cdd0
	void TranscodeRAWDataFromBuffer(struct TArray<char> RAWData_From, enum class ERAWAudioFormat FormatFrom, struct TArray<char>& RAWData_To, enum class ERAWAudioFormat FormatTo); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.TranscodeRAWDataFromBuffer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x137cc10
	void ImportAudioFromRAWFile(struct FString FilePath, enum class ERAWAudioFormat Format, int32_t SampleRate, int32_t NumOfChannels); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromRAWFile // (Final|Native|Public|BlueprintCallable) // @ game+0x137c9c0
	void ImportAudioFromRAWBuffer(struct TArray<char> RAWBuffer, enum class ERAWAudioFormat Format, int32_t SampleRate, int32_t NumOfChannels); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromRAWBuffer // (Final|Native|Public|BlueprintCallable) // @ game+0x137c820
	void ImportAudioFromPreImportedSound(struct UPreImportedSoundAsset* PreImportedSoundAssetRef); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromPreImportedSound // (Final|Native|Public|BlueprintCallable) // @ game+0x137c790
	void ImportAudioFromFile(struct FString FilePath, enum class EAudioFormat Format); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromFile // (Final|Native|Public|BlueprintCallable) // @ game+0x137c6b0
	void ImportAudioFromBuffer(struct TArray<char> AudioData, enum class EAudioFormat Format); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromBuffer // (Final|Native|Public|BlueprintCallable) // @ game+0x137c580
	enum class EAudioFormat GetAudioFormatAdvanced(struct TArray<char>& AudioData); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.GetAudioFormatAdvanced // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x137c400
	enum class EAudioFormat GetAudioFormat(struct FString FilePath); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.GetAudioFormat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x137c360
	bool ExportSoundWaveToFile(struct UImportedSoundWave* ImporterSoundWave, struct FString SavePath, enum class EAudioFormat AudioFormat, char Quality); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ExportSoundWaveToFile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x137c200
	bool ExportSoundWaveToBuffer(struct UImportedSoundWave* ImporterSoundWave, struct TArray<char>& AudioData, enum class EAudioFormat AudioFormat, char Quality); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ExportSoundWaveToBuffer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x137c090
	struct URuntimeAudioImporterLibrary* CreateRuntimeAudioImporter(); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.CreateRuntimeAudioImporter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x137c060
	struct FString ConvertSecondsToString(int32_t Seconds); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ConvertSecondsToString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x137bf60
};

