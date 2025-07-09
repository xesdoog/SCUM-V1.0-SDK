// Class LevelSequence.LevelSequence
// Size: 0x1c8 (Inherited: 0x60)
struct ULevelSequence : UMovieSceneSequence {
	char pad_60[0x8]; // 0x60(0x08)
	struct UMovieScene* MovieScene; // 0x68(0x08)
	struct FLevelSequenceObjectReferenceMap ObjectReferences; // 0x70(0x50)
	struct FLevelSequenceBindingReferences BindingReferences; // 0xc0(0xa0)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; // 0x160(0x50)
	struct UObject* DirectorClass; // 0x1b0(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x1b8(0x10)

	void RemoveMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfe690
	struct UObject* FindOrAddMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfdbb0
	struct UObject* FindMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.FindMetaDataByClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dfdbb0
	struct UObject* CopyMetaData(struct UObject* InMetaData); // Function LevelSequence.LevelSequence.CopyMetaData // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfdbb0
};

// Class LevelSequence.AnimSequenceLevelSequenceLink
// Size: 0x50 (Inherited: 0x28)
struct UAnimSequenceLevelSequenceLink : UAssetUserData {
	struct FGuid SkelTrackGuid; // 0x28(0x10)
	struct FSoftObjectPath PathToLevelSequence; // 0x38(0x18)
};

// Class LevelSequence.DefaultLevelSequenceInstanceData
// Size: 0x70 (Inherited: 0x28)
struct UDefaultLevelSequenceInstanceData : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct AActor* TransformOriginActor; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform TransformOrigin; // 0x40(0x30)
};

// Class LevelSequence.LevelSequenceMetaData
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceMetaData : UInterface {
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x50 (Inherited: 0x28)
struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FSoftClassPath BurnInClass; // 0x30(0x18)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x48(0x08)

	void SetBurnIn(struct FSoftClassPath InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3dfea70
};

// Class LevelSequence.LevelSequenceActor
// Size: 0x2a8 (Inherited: 0x220)
struct ALevelSequenceActor : AActor {
	char pad_220[0x18]; // 0x220(0x18)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x238(0x14)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct ULevelSequencePlayer* SequencePlayer; // 0x250(0x08)
	struct FSoftObjectPath LevelSequence; // 0x258(0x18)
	struct FLevelSequenceCameraSettings CameraSettings; // 0x270(0x02)
	char pad_272[0x6]; // 0x272(0x06)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x278(0x08)
	struct UMovieSceneBindingOverrides* BindingOverrides; // 0x280(0x08)
	char bAutoPlay : 1; // 0x288(0x01)
	char bOverrideInstanceData : 1; // 0x288(0x01)
	char bReplicatePlayback : 1; // 0x288(0x01)
	char pad_288_3 : 5; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct UObject* DefaultInstanceData; // 0x290(0x08)
	struct ULevelSequenceBurnIn* BurnInInstance; // 0x298(0x08)
	bool bShowBurnin; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)

	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfec90
	void SetSequence(struct ULevelSequence* InSequence); // Function LevelSequence.LevelSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfec00
	void SetReplicatePlayback(bool ReplicatePlayback); // Function LevelSequence.LevelSequenceActor.SetReplicatePlayback // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfeb70
	void SetBindingByTag(struct FName BindingTag, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBindingByTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3dfe940
	void SetBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBinding // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3dfe7e0
	void ResetBindings(); // Function LevelSequence.LevelSequenceActor.ResetBindings // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfe7c0
	void ResetBinding(struct FMovieSceneObjectBindingID Binding); // Function LevelSequence.LevelSequenceActor.ResetBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfe700
	void RemoveBindingByTag(struct FName Tag, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBindingByTag // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfe5c0
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfe4c0
	void OnLevelSequenceLoaded__DelegateSignature(); // DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature // (Public|Delegate) // @ game+0x297fc00
	struct ULevelSequence* LoadSequence(); // Function LevelSequence.LevelSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dfe450
	void HideBurnin(); // Function LevelSequence.LevelSequenceActor.HideBurnin // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfe430
	struct ULevelSequencePlayer* GetSequencePlayer(); // Function LevelSequence.LevelSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dfe3c0
	struct ULevelSequence* GetSequence(); // Function LevelSequence.LevelSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dfe340
	struct TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBindings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dfde60
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBinding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dfddb0
	void AddBindingByTag(struct FName BindingTag, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBindingByTag // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfdaa0
	void AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfd950
};

// Class LevelSequence.LevelSequenceAnimSequenceLink
// Size: 0x38 (Inherited: 0x28)
struct ULevelSequenceAnimSequenceLink : UAssetUserData {
	struct TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks; // 0x28(0x10)
};

// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x328 (Inherited: 0x268)
struct ULevelSequenceBurnIn : UUserWidget {
	struct FLevelSequencePlayerSnapshot FrameInformation; // 0x268(0xb8)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x320(0x08)

	void SetSettings(struct UObject* InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	struct ULevelSequenceBurnInInitSettings* GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x3dfe3f0
};

// Class LevelSequence.LevelSequenceDirector
// Size: 0x38 (Inherited: 0x28)
struct ULevelSequenceDirector : UObject {
	struct ULevelSequencePlayer* Player; // 0x28(0x08)
	int32_t SubSequenceID; // 0x30(0x04)
	int32_t MovieScenePlayerIndex; // 0x34(0x04)

	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	struct UMovieSceneSequence* GetSequence(); // Function LevelSequence.LevelSequenceDirector.GetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfe390
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundObjects // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfe230
	struct UObject* GetBoundObject(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundObject // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfe160
	struct TArray<struct AActor*> GetBoundActors(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundActors // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfe050
	struct AActor* GetBoundActor(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundActor // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfdf80
};

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// Size: 0xa0 (Inherited: 0xa0)
struct ULegacyLevelSequenceDirectorBlueprint : UBlueprint {
};

// Class LevelSequence.LevelSequencePlayer
// Size: 0x600 (Inherited: 0x4e8)
struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	struct FMulticastInlineDelegate OnCameraCut; // 0x4e8(0x10)
	char pad_4F8[0x108]; // 0x4f8(0x108)

	struct UCameraComponent* GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dfdf40
	struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor*& OutActor); // Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3dfdc30
};

// Class LevelSequence.LevelSequenceProjectSettings
// Size: 0x68 (Inherited: 0x38)
struct ULevelSequenceProjectSettings : UDeveloperSettings {
	bool bDefaultLockEngineToDisplayRate; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString DefaultDisplayRate; // 0x40(0x10)
	struct FString DefaultTickResolution; // 0x50(0x10)
	enum class EUpdateClockSource DefaultClockSource; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class LevelSequence.LevelSequenceMediaController
// Size: 0x248 (Inherited: 0x220)
struct ALevelSequenceMediaController : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct ALevelSequenceActor* Sequence; // 0x228(0x08)
	struct UMediaComponent* MediaComponent; // 0x230(0x08)
	float ServerStartTimeSeconds; // 0x238(0x04)
	char pad_23C[0xc]; // 0x23c(0x0c)

	void SynchronizeToServer(float DesyncThresholdSeconds); // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfecb0
	void Play(); // Function LevelSequence.LevelSequenceMediaController.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x3dfe4a0
	void OnRep_ServerStartTimeSeconds(); // Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds // (Final|Native|Private) // @ game+0x3dfe480
	struct ALevelSequenceActor* GetSequence(); // Function LevelSequence.LevelSequenceMediaController.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dfe370
	struct UMediaComponent* GetMediaComponent(); // Function LevelSequence.LevelSequenceMediaController.GetMediaComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c8bc80
};

