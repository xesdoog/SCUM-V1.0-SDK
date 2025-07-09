// Class TemplateSequence.TemplateSequence
// Size: 0x108 (Inherited: 0x60)
struct UTemplateSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x60(0x08)
	struct TSoftClassPtr<UObject> BoundActorClass; // 0x68(0x28)
	struct TSoftObjectPtr<AActor> BoundPreviewActor; // 0x90(0x28)
	struct TMap<struct FGuid, struct FName> BoundActorComponents; // 0xb8(0x50)
};

// Class TemplateSequence.CameraAnimationSequence
// Size: 0x108 (Inherited: 0x108)
struct UCameraAnimationSequence : UTemplateSequence {
};

// Class TemplateSequence.SequenceCameraShakeCameraStandIn
// Size: 0x670 (Inherited: 0x28)
struct USequenceCameraShakeCameraStandIn : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	float FieldOfView; // 0x30(0x04)
	char bConstrainAspectRatio : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float AspectRatio; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x40(0x560)
	float PostProcessBlendWeight; // 0x5a0(0x04)
	struct FCameraFilmbackSettings Filmback; // 0x5a4(0x0c)
	struct FCameraLensSettings LensSettings; // 0x5b0(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x5c8(0x58)
	float CurrentFocalLength; // 0x620(0x04)
	float CurrentAperture; // 0x624(0x04)
	float CurrentFocusDistance; // 0x628(0x04)
	char pad_62C[0x44]; // 0x62c(0x44)
};

// Class TemplateSequence.SequenceCameraShakePattern
// Size: 0x58 (Inherited: 0x28)
struct USequenceCameraShakePattern : UCameraShakePattern {
	struct UCameraAnimationSequence* Sequence; // 0x28(0x08)
	float PlayRate; // 0x30(0x04)
	float Scale; // 0x34(0x04)
	float BlendInTime; // 0x38(0x04)
	float BlendOutTime; // 0x3c(0x04)
	float RandomSegmentDuration; // 0x40(0x04)
	bool bRandomSegment; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct USequenceCameraShakeSequencePlayer* Player; // 0x48(0x08)
	struct USequenceCameraShakeCameraStandIn* CameraStandIn; // 0x50(0x08)
};

// Class TemplateSequence.SequenceCameraShakeSequencePlayer
// Size: 0x428 (Inherited: 0x28)
struct USequenceCameraShakeSequencePlayer : UObject {
	char pad_28[0x2a8]; // 0x28(0x2a8)
	struct UObject* BoundObjectOverride; // 0x2d0(0x08)
	struct UMovieSceneSequence* Sequence; // 0x2d8(0x08)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x2e0(0xe8)
	char pad_3C8[0x60]; // 0x3c8(0x60)
};

// Class TemplateSequence.TemplateSequenceActor
// Size: 0x278 (Inherited: 0x220)
struct ATemplateSequenceActor : AActor {
	char pad_220[0x10]; // 0x220(0x10)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x230(0x14)
	char pad_244[0x4]; // 0x244(0x04)
	struct UTemplateSequencePlayer* SequencePlayer; // 0x248(0x08)
	struct FSoftObjectPath TemplateSequence; // 0x250(0x18)
	struct FTemplateSequenceBindingOverrideData BindingOverride; // 0x268(0x0c)
	char pad_274[0x4]; // 0x274(0x04)

	void SetSequence(struct UTemplateSequence* InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x9b88b0
	void SetBinding(struct AActor* Actor, bool bOverridesDefault); // Function TemplateSequence.TemplateSequenceActor.SetBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x9b87e0
	struct UTemplateSequence* LoadSequence(); // Function TemplateSequence.TemplateSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9b87b0
	struct UTemplateSequencePlayer* GetSequencePlayer(); // Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9b8780
	struct UTemplateSequence* GetSequence(); // Function TemplateSequence.TemplateSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9b8750
};

// Class TemplateSequence.TemplateSequencePlayer
// Size: 0x4f0 (Inherited: 0x4e8)
struct UTemplateSequencePlayer : UMovieSceneSequencePlayer {
	char pad_4E8[0x8]; // 0x4e8(0x08)

	struct UTemplateSequencePlayer* CreateTemplateSequencePlayer(struct UObject* WorldContextObject, struct UTemplateSequence* TemplateSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ATemplateSequenceActor*& OutActor); // Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9b85d0
};

// Class TemplateSequence.TemplateSequenceSection
// Size: 0x180 (Inherited: 0x168)
struct UTemplateSequenceSection : UMovieSceneSubSection {
	char pad_168[0x8]; // 0x168(0x08)
	struct TArray<struct FTemplateSectionPropertyScale> PropertyScales; // 0x170(0x10)
};

// Class TemplateSequence.TemplateSequenceSystem
// Size: 0xb0 (Inherited: 0x40)
struct UTemplateSequenceSystem : UMovieSceneEntitySystem {
	char pad_40[0x70]; // 0x40(0x70)
};

// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
// Size: 0x98 (Inherited: 0x40)
struct UTemplateSequencePropertyScalingInstantiatorSystem : UMovieSceneEntitySystem {
	char pad_40[0x58]; // 0x40(0x58)
};

// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
// Size: 0x90 (Inherited: 0x40)
struct UTemplateSequencePropertyScalingEvaluatorSystem : UMovieSceneEntitySystem {
	char pad_40[0x50]; // 0x40(0x50)
};

// Class TemplateSequence.TemplateSequenceTrack
// Size: 0xa0 (Inherited: 0xa0)
struct UTemplateSequenceTrack : UMovieSceneSubTrack {
};

