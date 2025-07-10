// Class ImgMedia.ImgMediaSource
// Size: 0xc8 (Inherited: 0x88)
struct UImgMediaSource : UBaseMediaSource {
	bool IsPathRelativeToProjectRoot; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	struct FFrameRate FrameRateOverride; // 0x8c(0x08)
	char pad_94[0x4]; // 0x94(0x04)
	struct FString ProxyOverride; // 0x98(0x10)
	struct FDirectoryPath SequencePath; // 0xa8(0x10)
	char pad_B8[0x10]; // 0xb8(0x10)

	void SetSequencePath(struct FString Path); // Function ImgMedia.ImgMediaSource.SetSequencePath // (Final|Native|Public|BlueprintCallable) // @ game+0x1608900
	void SetMipLevelDistance(float Distance); // Function ImgMedia.ImgMediaSource.SetMipLevelDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x1608880
	void RemoveTargetObject(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.RemoveTargetObject // (Final|Native|Public|BlueprintCallable) // @ game+0x16087f0
	void RemoveGlobalCamera(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.RemoveGlobalCamera // (Final|Native|Public|BlueprintCallable) // @ game+0x1608760
	struct FString GetSequencePath(); // Function ImgMedia.ImgMediaSource.GetSequencePath // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16086a0
	void GetProxies(struct TArray<struct FString>& OutProxies); // Function ImgMedia.ImgMediaSource.GetProxies // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x16085d0
	void AddTargetObject(struct AActor* InActor, float Width); // Function ImgMedia.ImgMediaSource.AddTargetObject // (Final|Native|Public|BlueprintCallable) // @ game+0x1608500
	void AddGlobalCamera(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.AddGlobalCamera // (Final|Native|Public|BlueprintCallable) // @ game+0x1608470
};

