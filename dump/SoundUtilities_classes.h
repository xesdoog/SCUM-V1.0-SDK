// Class SoundUtilities.SoundSimple
// Size: 0x188 (Inherited: 0x170)
struct USoundSimple : USoundBase {
	struct TArray<struct FSoundVariation> Variations; // 0x170(0x10)
	struct USoundWave* SoundWave; // 0x180(0x08)
};

// Class SoundUtilities.SoundUtilitiesBPFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USoundUtilitiesBPFunctionLibrary : UBlueprintFunctionLibrary {

	float GetQFromBandwidth(float InBandwidth); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetQFromBandwidth // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x139a760
	float GetPitchScaleFromMIDIPitch(int32_t BaseMidiNote, int32_t TargetMidiNote); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x139a690
	int32_t GetMIDIPitchFromFrequency(float Frequency); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x139a610
	float GetLogFrequencyClamped(float InValue, struct FVector2D& InDomain, struct FVector2D& InRange); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLogFrequencyClamped // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x139a4f0
	float GetLinearFrequencyClamped(float InValue, struct FVector2D& InDomain, struct FVector2D& InRange); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLinearFrequencyClamped // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x139a3d0
	float GetGainFromMidiVelocity(int32_t InVelocity); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetGainFromMidiVelocity // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x139a340
	float GetFrequencyMultiplierFromSemitones(float InPitchSemitones); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyMultiplierFromSemitones // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x139a2b0
	float GetFrequencyFromMIDIPitch(int32_t MidiNote); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x139a220
	float GetBeatTempo(float BeatsPerMinute, int32_t BeatMultiplier, int32_t DivisionsOfWholeNote); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x139a110
	float GetBandwidthFromQ(float InQ); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBandwidthFromQ // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x139a080
	float ConvertLinearToDecibels(float InLinear, float InFloor); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertLinearToDecibels // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x1399fb0
	float ConvertDecibelsToLinear(float InDecibels); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertDecibelsToLinear // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x1399f20
};

