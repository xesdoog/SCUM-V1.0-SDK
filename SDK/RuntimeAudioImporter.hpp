#ifndef UE4SS_SDK_RuntimeAudioImporter_HPP
#define UE4SS_SDK_RuntimeAudioImporter_HPP

#include "RuntimeAudioImporter_enums.hpp"

struct FCompressedSoundWaveInfo
{
    TEnumAsByte<ESoundGroup> SoundGroup;                                              // 0x0000 (size: 0x1)
    bool bLooping;                                                                    // 0x0001 (size: 0x1)
    float Volume;                                                                     // 0x0004 (size: 0x4)
    float Pitch;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FPCMStruct
{
}; // Size: 0x18

class UImportedSoundWave : public USoundWaveProcedural
{
    int32 SamplingRate;                                                               // 0x03C0 (size: 0x4)
    FImportedSoundWaveOnAudioPlaybackFinished OnAudioPlaybackFinished;                // 0x03E0 (size: 0x10)
    void OnAudioPlaybackFinished();
    FImportedSoundWaveOnGeneratePCMData OnGeneratePCMData;                            // 0x0408 (size: 0x10)
    void OnGeneratePCMData(const TArray<float>& PCMData);
    int32 CurrentNumOfFrames;                                                         // 0x041C (size: 0x4)

    bool RewindPlaybackTime(const float PlaybackTime);
    void ReleaseMemory();
    bool IsPlaybackFinished();
    float GetPlaybackTime();
    float GetPlaybackPercentage();
    float GetDurationConst();
    float GetDuration();
}; // Size: 0x440

class UPreImportedSoundAsset : public UObject
{
    TArray<uint8> AudioDataArray;                                                     // 0x0028 (size: 0x10)
    EAudioFormat AudioFormat;                                                         // 0x0038 (size: 0x1)

}; // Size: 0x40

class URuntimeAudioCompressor : public UObject
{
    FRuntimeAudioCompressorOnResult OnResult;                                         // 0x0040 (size: 0x10)
    void OnSoundWaveCompressedResult(bool bSuccess, class USoundWave* SoundWaveRef);

    class URuntimeAudioCompressor* CreateRuntimeAudioCompressor();
    void CompressSoundWave(class UImportedSoundWave* ImportedSoundWaveRef, FCompressedSoundWaveInfo CompressedSoundWaveInfo, uint8 Quality, bool bFillCompressedBuffer, bool bFillPCMBuffer, bool bFillRAWWaveBuffer);
}; // Size: 0x50

class URuntimeAudioImporterLibrary : public UObject
{
    FRuntimeAudioImporterLibraryOnProgress OnProgress;                                // 0x0040 (size: 0x10)
    void OnAudioImporterProgress(const int32 Percentage);
    FRuntimeAudioImporterLibraryOnResult OnResult;                                    // 0x0068 (size: 0x10)
    void OnAudioImporterResult(class URuntimeAudioImporterLibrary* RuntimeAudioImporterObjectRef, class UImportedSoundWave* SoundWaveRef, ETranscodingStatus Status);

    bool TranscodeRAWDataFromFile(FString FilePathFrom, ERAWAudioFormat FormatFrom, FString FilePathTo, ERAWAudioFormat FormatTo);
    void TranscodeRAWDataFromBuffer(TArray<uint8> RAWData_From, ERAWAudioFormat FormatFrom, TArray<uint8>& RAWData_To, ERAWAudioFormat FormatTo);
    void ImportAudioFromRAWFile(FString FilePath, ERAWAudioFormat Format, int32 SampleRate, int32 NumOfChannels);
    void ImportAudioFromRAWBuffer(TArray<uint8> RAWBuffer, ERAWAudioFormat Format, int32 SampleRate, int32 NumOfChannels);
    void ImportAudioFromPreImportedSound(class UPreImportedSoundAsset* PreImportedSoundAssetRef);
    void ImportAudioFromFile(FString FilePath, EAudioFormat Format);
    void ImportAudioFromBuffer(TArray<uint8> AudioData, EAudioFormat Format);
    EAudioFormat GetAudioFormatAdvanced(const TArray<uint8>& AudioData);
    EAudioFormat GetAudioFormat(FString FilePath);
    bool ExportSoundWaveToFile(class UImportedSoundWave* ImporterSoundWave, FString SavePath, EAudioFormat AudioFormat, uint8 Quality);
    bool ExportSoundWaveToBuffer(class UImportedSoundWave* ImporterSoundWave, TArray<uint8>& AudioData, EAudioFormat AudioFormat, uint8 Quality);
    class URuntimeAudioImporterLibrary* CreateRuntimeAudioImporter();
    FString ConvertSecondsToString(int32 Seconds);
}; // Size: 0x78

#endif
