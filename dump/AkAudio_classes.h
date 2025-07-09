// Class AkAudio.AkPortalComponent
// Size: 0x2c0 (Inherited: 0x200)
struct UAkPortalComponent : USceneComponent {
	bool bDynamic; // 0x1f8(0x01)
	enum class AkAcousticPortalState InitialState; // 0x1f9(0x01)
	float ObstructionRefreshInterval; // 0x1fc(0x04)
	enum class ECollisionChannel ObstructionCollisionChannel; // 0x200(0x01)
	char pad_207[0xb9]; // 0x207(0xb9)

	void SetDynamic(bool bInDynamic); // Function AkAudio.AkPortalComponent.SetDynamic // (Final|Native|Public|BlueprintCallable) // @ game+0x1471950
	bool PortalPlacementValid(); // Function AkAudio.AkPortalComponent.PortalPlacementValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x14706a0
	void OpenPortal(); // Function AkAudio.AkPortalComponent.OpenPortal // (Final|Native|Public|BlueprintCallable) // @ game+0x1470680
	struct UPrimitiveComponent* GetPrimitiveParent(); // Function AkAudio.AkPortalComponent.GetPrimitiveParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x14704f0
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkPortalComponent.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1470490
	void ClosePortal(); // Function AkAudio.AkPortalComponent.ClosePortal // (Final|Native|Public|BlueprintCallable) // @ game+0x14701b0
};

// Class AkAudio.AkAcousticPortal
// Size: 0x268 (Inherited: 0x258)
struct AAkAcousticPortal : AVolume {
	struct UAkPortalComponent* Portal; // 0x258(0x08)
	enum class AkAcousticPortalState InitialState; // 0x260(0x01)
	bool bRequiresStateMigration; // 0x261(0x01)
	char pad_262[0x6]; // 0x262(0x06)

	void OpenPortal(); // Function AkAudio.AkAcousticPortal.OpenPortal // (Final|Native|Public|BlueprintCallable) // @ game+0x1470660
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkAcousticPortal.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1470460
	void ClosePortal(); // Function AkAudio.AkAcousticPortal.ClosePortal // (Final|Native|Public|BlueprintCallable) // @ game+0x1470190
};

// Class AkAudio.AkAudioType
// Size: 0x50 (Inherited: 0x28)
struct UAkAudioType : UObject {
	bool bAutoLoad; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct UObject*> UserData; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)

	void UnloadData(bool bAsync); // Function AkAudio.AkAudioType.UnloadData // (Native|Public|BlueprintCallable) // @ game+0x14720a0
	void LoadData(); // Function AkAudio.AkAudioType.LoadData // (Native|Public|BlueprintCallable) // @ game+0x14705b0
	int32_t GetWwiseShortID(); // Function AkAudio.AkAudioType.GetWwiseShortID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1470520
};

// Class AkAudio.AkAcousticTexture
// Size: 0x60 (Inherited: 0x50)
struct UAkAcousticTexture : UAkAudioType {
	struct FWwiseAcousticTextureCookedData AcousticTextureCookedData; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class AkAudio.AkAcousticTextureSetComponent
// Size: 0x210 (Inherited: 0x200)
struct UAkAcousticTextureSetComponent : USceneComponent {
	char pad_200[0x10]; // 0x200(0x10)
};

// Class AkAudio.AkAmbientSound
// Size: 0x260 (Inherited: 0x220)
struct AAkAmbientSound : AActor {
	struct UAkAudioEvent* AkAudioEvent; // 0x220(0x08)
	struct UAkComponent* AkComponent; // 0x228(0x08)
	bool StopWhenOwnerIsDestroyed; // 0x230(0x01)
	bool AutoPost; // 0x231(0x01)
	char pad_232[0x2e]; // 0x232(0x2e)

	void StopAmbientSound(); // Function AkAudio.AkAmbientSound.StopAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1472080
	void StartAmbientSound(); // Function AkAudio.AkAmbientSound.StartAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1472060
};

// Class AkAudio.AkAndroidInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkAndroidInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x70)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x20)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x14705d0
};

// Class AkAudio.AkPlatformInfo
// Size: 0x70 (Inherited: 0x28)
struct UAkPlatformInfo : UObject {
	char pad_28[0x48]; // 0x28(0x48)
};

// Class AkAudio.AkAndroidPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkAndroidPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkAudioBank
// Size: 0x58 (Inherited: 0x50)
struct UAkAudioBank : UAkAudioType {
	bool AutoLoad; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AkAudio.AkAudioEvent
// Size: 0xd0 (Inherited: 0x50)
struct UAkAudioEvent : UAkAudioType {
	float MaxAttenuationRadius; // 0x50(0x04)
	bool IsInfinite; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float MinimumDuration; // 0x58(0x04)
	float MaximumDuration; // 0x5c(0x04)
	struct FWwiseLocalizedEventCookedData EventCookedData; // 0x60(0x60)
	struct UAkAudioBank* RequiredBank; // 0xc0(0x08)
	char pad_C8[0x8]; // 0xc8(0x08)

	int32_t PostOnGameObjectAndWait(struct UAkGameObject* GameObject, struct FLatentActionInfo LatentActionInfo); // Function AkAudio.AkAudioEvent.PostOnGameObjectAndWait // (Final|Native|Public|BlueprintCallable) // @ game+0x14714e0
	int32_t PostOnGameObject(struct UAkGameObject* GameObject, struct FDelegate& Delegate, int32_t CallbackMask); // Function AkAudio.AkAudioEvent.PostOnGameObject // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x14713a0
	int32_t PostOnComponentAndWait(struct UAkComponent* Component, bool bStopWhenAttachedObjectDestroyed, struct FLatentActionInfo LatentActionInfo); // Function AkAudio.AkAudioEvent.PostOnComponentAndWait // (Final|Native|Public|BlueprintCallable) // @ game+0x1471240
	int32_t PostOnComponent(struct UAkComponent* Component, struct FDelegate& Delegate, int32_t CallbackMask, bool bStopWhenAttachedObjectDestroyed); // Function AkAudio.AkAudioEvent.PostOnComponent // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x14710a0
	int32_t PostOnActorAndWait(struct AActor* Actor, bool bStopWhenAttachedObjectDestroyed, struct FLatentActionInfo LatentActionInfo); // Function AkAudio.AkAudioEvent.PostOnActorAndWait // (Final|Native|Public|BlueprintCallable) // @ game+0x1470f40
	int32_t PostOnActor(struct AActor* Actor, struct FDelegate& Delegate, int32_t CallbackMask, bool bStopWhenAttachedObjectDestroyed); // Function AkAudio.AkAudioEvent.PostOnActor // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1470da0
	int32_t PostAtLocation(struct FVector Location, struct FRotator Orientation, struct FDelegate& Callback, int32_t CallbackMask, struct UObject* WorldContextObject); // Function AkAudio.AkAudioEvent.PostAtLocation // (Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1470bc0
	int32_t ExecuteAction(enum class AkActionOnEventType ActionType, struct AActor* Actor, int32_t PlayingID, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve); // Function AkAudio.AkAudioEvent.ExecuteAction // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x14701d0
};

// Class AkAudio.AkGameObject
// Size: 0x220 (Inherited: 0x200)
struct UAkGameObject : USceneComponent {
	struct UAkAudioEvent* AkAudioEvent; // 0x1f8(0x08)
	struct FString EventName; // 0x200(0x10)
	char pad_218[0x8]; // 0x218(0x08)

	void Stop(); // Function AkAudio.AkGameObject.Stop // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1478f20
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct FString RTPC); // Function AkAudio.AkGameObject.SetRTPCValue // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const) // @ game+0x14783a0
	void PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct FLatentActionInfo LatentInfo, int32_t& PlayingID); // Function AkAudio.AkGameObject.PostAssociatedAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1476460
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, struct FDelegate& PostEventCallback); // Function AkAudio.AkGameObject.PostAssociatedAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1476360
	void PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* akEvent, int32_t& PlayingID, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameObject.PostAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1475e00
	int32_t PostAkEvent(struct UAkAudioEvent* akEvent, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct FString InEventName); // Function AkAudio.AkGameObject.PostAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1475c40
	void GetRTPCValue(struct UAkRtpc* RTPCValue, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct FString RTPC, int32_t PlayingID); // Function AkAudio.AkGameObject.GetRTPCValue // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x14754f0
};

// Class AkAudio.AkComponent
// Size: 0x3d0 (Inherited: 0x220)
struct UAkComponent : UAkGameObject {
	bool bUseSpatialAudio; // 0x218(0x01)
	enum class EAkCollisionChannel OcclusionCollisionChannel; // 0x220(0x01)
	bool EnableSpotReflectors; // 0x221(0x01)
	char pad_223[0x1]; // 0x223(0x01)
	float OuterRadius; // 0x224(0x04)
	float InnerRadius; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x230(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x238(0x10)
	int32_t EarlyReflectionOrder; // 0x248(0x04)
	float EarlyReflectionBusSendGain; // 0x24c(0x04)
	float EarlyReflectionMaxPathLength; // 0x250(0x04)
	float roomReverbAuxBusGain; // 0x254(0x04)
	int32_t diffractionMaxEdges; // 0x258(0x04)
	int32_t diffractionMaxPaths; // 0x25c(0x04)
	float diffractionMaxPathLength; // 0x260(0x04)
	bool DrawFirstOrderReflections; // 0x264(0x01)
	bool DrawSecondOrderReflections; // 0x265(0x01)
	bool DrawHigherOrderReflections; // 0x266(0x01)
	bool DrawDiffraction; // 0x267(0x01)
	bool StopWhenOwnerDestroyed; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	float AttenuationScalingFactor; // 0x26c(0x04)
	float OcclusionRefreshInterval; // 0x270(0x04)
	bool bUseReverbVolumes; // 0x274(0x01)
	char pad_275[0x15b]; // 0x275(0x15b)

	void UseReverbVolumes(bool inUseReverbVolumes); // Function AkAudio.AkComponent.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1472320
	void UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkComponent.UseEarlyReflections // (Final|Native|Public|BlueprintCallable) // @ game+0x1472130
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkComponent.SetSwitch // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1471eb0
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed); // Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1471e20
	void SetOutputBusVolume(float BusVolume); // Function AkAudio.AkComponent.SetOutputBusVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1471da0
	void SetListeners(struct TArray<struct UAkComponent*>& Listeners); // Function AkAudio.AkComponent.SetListeners // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1471cf0
	void SetGameObjectRadius(float in_outerRadius, float in_innerRadius); // Function AkAudio.AkComponent.SetGameObjectRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x1471b90
	void SetEnableSpotReflectors(bool in_enable); // Function AkAudio.AkComponent.SetEnableSpotReflectors // (Final|Native|Public|BlueprintCallable) // @ game+0x1471b00
	void SetEarlyReflectionsVolume(float SendVolume); // Function AkAudio.AkComponent.SetEarlyReflectionsVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1471a80
	void SetEarlyReflectionsAuxBus(struct FString AuxBusName); // Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x14719e0
	void SetAttenuationScalingFactor(float Value); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1471850
	void PostTrigger(struct UAkTrigger* TriggerValue, struct FString Trigger); // Function AkAudio.AkComponent.PostTrigger // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x14715e0
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1470a80
	int32_t PostAssociatedAkEventAndWaitForEnd(struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x14709c0
	void PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* akEvent, int32_t& PlayingID, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1470860
	int32_t PostAkEventAndWaitForEnd(struct UAkAudioEvent* akEvent, struct FString in_EventName, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x1470700
	enum class ECollisionChannel GetOcclusionCollisionChannel(); // Function AkAudio.AkComponent.GetOcclusionCollisionChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x14704c0
	float GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1470400
};

// Class AkAudio.AkAudioInputComponent
// Size: 0x400 (Inherited: 0x3d0)
struct UAkAudioInputComponent : UAkComponent {
	char pad_3D0[0x30]; // 0x3d0(0x30)

	int32_t PostAssociatedAudioInputEvent(); // Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1470b90
};

// Class AkAudio.AkAuxBus
// Size: 0xc8 (Inherited: 0x50)
struct UAkAuxBus : UAkAudioType {
	float MaxAttenuationRadius; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FWwiseLocalizedAuxBusCookedData AuxBusCookedData; // 0x58(0x60)
	struct UAkAudioBank* RequiredBank; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class AkAudio.AkCheckBox
// Size: 0xae8 (Inherited: 0x128)
struct UAkCheckBox : UContentWidget {
	char pad_128[0x350]; // 0x128(0x350)
	enum class ECheckBoxState CheckedState; // 0x478(0x01)
	char pad_479[0x3]; // 0x479(0x03)
	struct FDelegate CheckedStateDelegate; // 0x47c(0x10)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct FCheckBoxStyle WidgetStyle; // 0x490(0x580)
	enum class EHorizontalAlignment HorizontalAlignment; // 0xa10(0x01)
	bool IsFocusable; // 0xa11(0x01)
	char pad_A12[0x6]; // 0xa12(0x06)
	struct FAkBoolPropertyToControl ThePropertyToControl; // 0xa18(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0xa28(0x40)
	struct FMulticastInlineDelegate AkOnCheckStateChanged; // 0xa68(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0xa78(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0xa88(0x10)
	char pad_A98[0x50]; // 0xa98(0x50)

	void SetIsChecked(bool InIsChecked); // Function AkAudio.AkCheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // @ game+0x1471c60
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function AkAudio.AkCheckBox.SetCheckedState // (Final|Native|Public|BlueprintCallable) // @ game+0x14718d0
	void SetAkItemId(struct FGuid& ItemId); // Function AkAudio.AkCheckBox.SetAkItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x14717b0
	void SetAkBoolProperty(struct FString ItemProperty); // Function AkAudio.AkCheckBox.SetAkBoolProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x1471710
	bool IsPressed(); // Function AkAudio.AkCheckBox.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1470580
	bool IsChecked(); // Function AkAudio.AkCheckBox.IsChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1470550
	enum class ECheckBoxState GetCheckedState(); // Function AkAudio.AkCheckBox.GetCheckedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1470430
	struct FString GetAkProperty(); // Function AkAudio.AkCheckBox.GetAkProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x14703b0
	struct FGuid GetAkItemId(); // Function AkAudio.AkCheckBox.GetAkItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1470370
};

// Class AkAudio.AkAssetData
// Size: 0x50 (Inherited: 0x28)
struct UAkAssetData : UObject {
	char pad_28[0x28]; // 0x28(0x28)
};

// Class AkAudio.AkAssetPlatformData
// Size: 0x30 (Inherited: 0x28)
struct UAkAssetPlatformData : UObject {
	struct UAkAssetData* CurrentAssetData; // 0x28(0x08)
};

// Class AkAudio.AkMediaAssetData
// Size: 0x38 (Inherited: 0x28)
struct UAkMediaAssetData : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class AkAudio.AkMediaAsset
// Size: 0x78 (Inherited: 0x28)
struct UAkMediaAsset : UObject {
	struct TMap<struct FString, struct UAkMediaAssetData*> MediaAssetDataPerPlatform; // 0x28(0x50)
};

// Class AkAudio.AkLocalizedMediaAsset
// Size: 0x78 (Inherited: 0x78)
struct UAkLocalizedMediaAsset : UAkMediaAsset {
};

// Class AkAudio.AkExternalMediaAsset
// Size: 0x78 (Inherited: 0x78)
struct UAkExternalMediaAsset : UAkMediaAsset {
};

// Class AkAudio.AkFolder
// Size: 0x50 (Inherited: 0x50)
struct UAkFolder : UAkAudioType {
};

// Class AkAudio.DrawPortalComponent
// Size: 0x460 (Inherited: 0x460)
struct UDrawPortalComponent : UPrimitiveComponent {
};

// Class AkAudio.DrawRoomComponent
// Size: 0x460 (Inherited: 0x460)
struct UDrawRoomComponent : UPrimitiveComponent {
};

// Class AkAudio.AkEffectShareSet
// Size: 0xb8 (Inherited: 0x50)
struct UAkEffectShareSet : UAkAudioType {
	struct FWwiseLocalizedShareSetCookedData ShareSetCookedData; // 0x50(0x60)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class AkAudio.AkGameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UAkGameplayStatics : UBlueprintFunctionLibrary {

	void UseReverbVolumes(bool inUseReverbVolumes, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1479370
	void UseEarlyReflections(struct AActor* Actor, struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkGameplayStatics.UseEarlyReflections // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1479150
	void UnloadInitBank(); // Function AkAudio.AkGameplayStatics.UnloadInitBank // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1479130
	void UnloadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.UnloadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x14790a0
	void StopProfilerCapture(); // Function AkAudio.AkGameplayStatics.StopProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1479080
	void StopOutputCapture(); // Function AkAudio.AkGameplayStatics.StopOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1479060
	void StopAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StopAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1478fe0
	void StopAll(); // Function AkAudio.AkGameplayStatics.StopAll // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1478fc0
	void StopActor(struct AActor* Actor); // Function AkAudio.AkGameplayStatics.StopActor // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1478f40
	void StartProfilerCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1478e90
	void StartOutputCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1478e00
	void StartAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StartAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1478d80
	struct UAkComponent* SpawnAkComponentAtLocation(struct UObject* WorldContextObject, struct UAkAudioEvent* akEvent, struct FVector Location, struct FRotator Orientation, bool AutoPost, struct FString EventName, bool AutoDestroy); // Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1478b40
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct AActor* Actor, struct FName SwitchGroup, struct FName SwitchState); // Function AkAudio.AkGameplayStatics.SetSwitch // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x14789f0
	void SetState(struct UAkStateValue* StateValue, struct FName StateGroup, struct FName State); // Function AkAudio.AkGameplayStatics.SetState // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x14788f0
	void SetSpeakerAngles(struct TArray<float>& SpeakerAngles, float HeightAngle, struct FString DeviceShareSet); // Function AkAudio.AkGameplayStatics.SetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14787a0
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.SetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1478550
	void SetReflectionsOrder(int32_t Order, bool RefreshPaths); // Function AkAudio.AkGameplayStatics.SetReflectionsOrder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14786e0
	void SetPortalToPortalObstruction(struct UAkPortalComponent* PortalComponent0, struct UAkPortalComponent* PortalComponent1, float ObstructionValue); // Function AkAudio.AkGameplayStatics.SetPortalToPortalObstruction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1478290
	void SetPortalObstructionAndOcclusion(struct UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue); // Function AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1478190
	void SetPanningRule(enum class PanningRule PanRule); // Function AkAudio.AkGameplayStatics.SetPanningRule // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1478120
	bool SetOutputDeviceEffect(struct FAkOutputDeviceID InDeviceID, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet); // Function AkAudio.AkGameplayStatics.SetOutputDeviceEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1478020
	void SetOutputBusVolume(float BusVolume, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOutputBusVolume // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1477f60
	void SetOcclusionRefreshInterval(float RefreshInterval, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1477ea0
	void SetMultiplePositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultiplePositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1477d40
	void SetMultipleChannelMaskEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FAkChannelMask> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1477b60
	void SetMultipleChannelEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<enum class AkChannelConfiguration> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1477980
	void SetGameObjectToPortalObstruction(struct UAkComponent* GameObjectAkComponent, struct UAkPortalComponent* PortalComponent, float ObstructionValue); // Function AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1477870
	void SetDistanceProbe(struct AActor* Listener, struct AActor* DistanceProbe); // Function AkAudio.AkGameplayStatics.SetDistanceProbe // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14777b0
	void SetCurrentAudioCultureAsync(struct FString AudioCulture, struct FDelegate& Completed); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14776c0
	void SetCurrentAudioCulture(struct FString AudioCulture, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1477570
	bool SetBusEffectByName(struct FString InBusName, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet); // Function AkAudio.AkGameplayStatics.SetBusEffectByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1477410
	bool SetBusEffectByID(struct FAkUniqueID InBusID, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet); // Function AkAudio.AkGameplayStatics.SetBusEffectByID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1477310
	void SetBusConfig(struct FString BusName, enum class AkChannelConfiguration ChannelConfiguration); // Function AkAudio.AkGameplayStatics.SetBusConfig // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1477240
	bool SetAuxBusEffect(struct UAkAuxBus* InAuxBus, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet); // Function AkAudio.AkGameplayStatics.SetAuxBusEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1477140
	bool SetActorMixerEffect(struct FAkUniqueID InAudioNodeID, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet); // Function AkAudio.AkGameplayStatics.SetActorMixerEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1477040
	void ResetRTPCValue(struct UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.ResetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1476f00
	void ReplaceMainOutput(struct FAkOutputSettings& MainOutputSettings); // Function AkAudio.AkGameplayStatics.ReplaceMainOutput // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1476e60
	void RemoveOutput(struct FAkOutputDeviceID in_OutputDeviceId); // Function AkAudio.AkGameplayStatics.RemoveOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1476de0
	void PostTrigger(struct UAkTrigger* TriggerValue, struct AActor* Actor, struct FName Trigger); // Function AkAudio.AkGameplayStatics.PostTrigger // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1476ce0
	void PostEventByName(struct FString EventName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PostEventByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1476bc0
	void PostEventAtLocationByName(struct FString EventName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocationByName // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1476a50
	int32_t PostEventAtLocation(struct UAkAudioEvent* akEvent, struct FVector Location, struct FRotator Orientation, struct FString EventName, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocation // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1476890
	int32_t PostEvent(struct UAkAudioEvent* akEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEvent // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1476640
	void PostAndWaitForEndOfEventAsync(struct UAkAudioEvent* akEvent, struct AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1476190
	int32_t PostAndWaitForEndOfEvent(struct UAkAudioEvent* akEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1476030
	void LoadInitBank(); // Function AkAudio.AkGameplayStatics.LoadInitBank // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1475c20
	void LoadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.LoadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1475b90
	bool IsGame(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.IsGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1475b00
	bool IsEditor(); // Function AkAudio.AkGameplayStatics.IsEditor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1475ad0
	void GetSpeakerAngles(struct TArray<float>& SpeakerAngles, float& HeightAngle, struct FString DeviceShareSet); // Function AkAudio.AkGameplayStatics.GetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1475970
	void GetRTPCValue(struct UAkRtpc* RTPCValue, int32_t PlayingID, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.GetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1475740
	struct FString GetCurrentAudioCulture(); // Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1475470
	struct TArray<struct FString> GetAvailableAudioCultures(); // Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1475390
	struct UAkComponent* GetAkComponent(struct USceneComponent* AttachToComponent, bool& ComponentCreated, struct FName AttachPointName, struct FVector Location, enum class EAttachLocation LocationType); // Function AkAudio.AkGameplayStatics.GetAkComponent // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x14751f0
	struct UObject* GetAkAudioTypeUserData(struct UAkAudioType* Instance, struct UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1475120
	void ExecuteActionOnPlayingID(enum class AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve); // Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1474fe0
	void ExecuteActionOnEvent(struct UAkAudioEvent* akEvent, enum class AkActionOnEventType ActionType, struct AActor* Actor, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve, int32_t PlayingID); // Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1474e10
	void ClearSoundBanksAndMedia(); // Function AkAudio.AkGameplayStatics.ClearSoundBanksAndMedia // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1474df0
	void ClearBanks(); // Function AkAudio.AkGameplayStatics.ClearBanks // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1474df0
	void CancelEventCallback(struct FDelegate& PostEventCallback); // Function AkAudio.AkGameplayStatics.CancelEventCallback // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1474d50
	void AddOutputCaptureMarker(struct FString MarkerText); // Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1474cc0
	void AddOutput(struct FAkOutputSettings& in_Settings, struct FAkOutputDeviceID& out_DeviceID, struct TArray<struct UAkComponent*>& in_ListenerIDs); // Function AkAudio.AkGameplayStatics.AddOutput // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1474b50
};

// Class AkAudio.AkCallbackInfo
// Size: 0x30 (Inherited: 0x28)
struct UAkCallbackInfo : UObject {
	struct UAkComponent* AkComponent; // 0x28(0x08)
};

// Class AkAudio.AkEventCallbackInfo
// Size: 0x38 (Inherited: 0x30)
struct UAkEventCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30(0x04)
	int32_t EventId; // 0x34(0x04)
};

// Class AkAudio.AkMIDIEventCallbackInfo
// Size: 0x48 (Inherited: 0x38)
struct UAkMIDIEventCallbackInfo : UAkEventCallbackInfo {
	char pad_38[0x10]; // 0x38(0x10)

	enum class EAkMidiEventType GetType(); // Function AkAudio.AkMIDIEventCallbackInfo.GetType // (Final|Native|Public|BlueprintCallable) // @ game+0x147d910
	bool GetProgramChange(struct FAkMidiProgramChange& AsProgramChange); // Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x147d860
	bool GetPitchBend(struct FAkMidiPitchBend& AsPitchBend); // Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x147d7b0
	bool GetNoteOn(struct FAkMidiNoteOnOff& AsNoteOn); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x147d700
	bool GetNoteOff(struct FAkMidiNoteOnOff& AsNoteOff); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x147d650
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch& AsNoteAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x147d5a0
	bool GetGeneric(struct FAkMidiGeneric& AsGeneric); // Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x147d4f0
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch& AsChannelAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x147d440
	char GetChannel(); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x147d410
	bool GetCc(struct FAkMidiCc& AsCc); // Function AkAudio.AkMIDIEventCallbackInfo.GetCc // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x147d360
};

// Class AkAudio.AkMarkerCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkMarkerCallbackInfo : UAkEventCallbackInfo {
	int32_t Identifier; // 0x38(0x04)
	int32_t position; // 0x3c(0x04)
	struct FString Label; // 0x40(0x10)
};

// Class AkAudio.AkDurationCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkDurationCallbackInfo : UAkEventCallbackInfo {
	float Duration; // 0x38(0x04)
	float EstimatedDuration; // 0x3c(0x04)
	int32_t AudioNodeID; // 0x40(0x04)
	int32_t MediaId; // 0x44(0x04)
	bool bStreaming; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x70 (Inherited: 0x30)
struct UAkMusicSyncCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30(0x04)
	struct FAkSegmentInfo SegmentInfo; // 0x34(0x24)
	enum class EAkCallbackType MusicSyncType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString UserCueName; // 0x60(0x10)
};

// Class AkAudio.AkGeometryComponent
// Size: 0x3a0 (Inherited: 0x210)
struct UAkGeometryComponent : UAkAcousticTextureSetComponent {
	enum class AkMeshType MeshType; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	int32_t LOD; // 0x214(0x04)
	float WeldingThreshold; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x220(0x50)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x270(0x18)
	bool bEnableDiffraction; // 0x288(0x01)
	bool bEnableDiffractionOnBoundaryEdges; // 0x289(0x01)
	char pad_28A[0x6]; // 0x28a(0x06)
	struct AActor* AssociatedRoom; // 0x290(0x08)
	char pad_298[0x10]; // 0x298(0x10)
	struct FAkGeometryData GeometryData; // 0x2a8(0x50)
	struct TMap<int32_t, double> SurfaceAreas; // 0x2f8(0x50)
	char pad_348[0x58]; // 0x348(0x58)

	void UpdateGeometry(); // Function AkAudio.AkGeometryComponent.UpdateGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x147d980
	void SendGeometry(); // Function AkAudio.AkGeometryComponent.SendGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x147d960
	void RemoveGeometry(); // Function AkAudio.AkGeometryComponent.RemoveGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x147d940
	void ConvertMesh(); // Function AkAudio.AkGeometryComponent.ConvertMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x147d340
};

// Class AkAudio.AkGroupValue
// Size: 0x70 (Inherited: 0x50)
struct UAkGroupValue : UAkAudioType {
	struct FWwiseGroupValueCookedData GroupValueCookedData; // 0x50(0x14)
	uint32_t GroupShortId; // 0x64(0x04)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class AkAudio.AkHololensInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkHololensInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x70)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x20)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x3c)
	char pad_FC[0x4]; // 0xfc(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x14705d0
};

// Class AkAudio.AkHololensPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkHololensPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkInitBank
// Size: 0x98 (Inherited: 0x50)
struct UAkInitBank : UAkAudioType {
	struct FWwiseInitBankCookedData InitBankCookedData; // 0x50(0x40)
	char pad_90[0x8]; // 0x90(0x08)
};

// Class AkAudio.AkIOSInitializationSettings
// Size: 0x108 (Inherited: 0x28)
struct UAkIOSInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x70)
	struct FAkAudioSession AudioSession; // 0xa0(0x0c)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xb0(0x20)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xd0(0x38)
};

// Class AkAudio.AkIOSPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkIOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkItemBoolPropertiesConv
// Size: 0x28 (Inherited: 0x28)
struct UAkItemBoolPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x14810f0
	struct FString Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1481000
};

// Class AkAudio.AkItemBoolProperties
// Size: 0x150 (Inherited: 0x110)
struct UAkItemBoolProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x110(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x120(0x10)
	char pad_130[0x20]; // 0x130(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemBoolProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1481550
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemBoolProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x14812a0
	struct FString GetSearchText(); // Function AkAudio.AkItemBoolProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1481220
};

// Class AkAudio.AkItemPropertiesConv
// Size: 0x28 (Inherited: 0x28)
struct UAkItemPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x14810f0
	struct FString Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1481000
};

// Class AkAudio.AkItemProperties
// Size: 0x150 (Inherited: 0x110)
struct UAkItemProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x110(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x120(0x10)
	char pad_130[0x20]; // 0x130(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1481550
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1481320
	struct FString GetSearchText(); // Function AkAudio.AkItemProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1481220
};

// Class AkAudio.AkLateReverbComponent
// Size: 0x280 (Inherited: 0x200)
struct UAkLateReverbComponent : USceneComponent {
	bool bEnable; // 0x1f8(0x01)
	float SendLevel; // 0x1fc(0x04)
	float FadeRate; // 0x200(0x04)
	float Priority; // 0x204(0x04)
	bool AutoAssignAuxBus; // 0x208(0x01)
	char pad_20E[0x2]; // 0x20e(0x02)
	struct UAkAuxBus* AuxBus; // 0x210(0x08)
	struct FString AuxBusName; // 0x218(0x10)
	char pad_228[0x8]; // 0x228(0x08)
	struct UAkAuxBus* AuxBusManual; // 0x230(0x08)
	char pad_238[0x48]; // 0x238(0x48)

	void AssociateAkTextureSetComponent(struct UAkAcousticTextureSetComponent* textureSetComponent); // Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1480f70
};

// Class AkAudio.AkLinuxInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkLinuxInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x70)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x20)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x14705d0
};

// Class AkAudio.AkLinuxPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkLinuxPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMacInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkMacInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x70)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x20)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x14705d0
};

// Class AkAudio.AkMacPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkMacPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkPlatformInitialisationSettingsBase
// Size: 0x28 (Inherited: 0x28)
struct UAkPlatformInitialisationSettingsBase : UInterface {
};

// Class AkAudio.AkPS4InitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkPS4InitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x20)
	struct FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xb8(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x14813a0
};

// Class AkAudio.AkPS4PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkPS4PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkPS5InitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkPS5InitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x20)
	struct FAkPS5AdvancedInitializationSettings AdvancedSettings; // 0xb8(0x44)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class AkAudio.AkDPXInitializationSettings
// Size: 0x100 (Inherited: 0x100)
struct UAkDPXInitializationSettings : UAkPS5InitializationSettings {
};

// Class AkAudio.AkPS5PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkPS5PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkReverbVolume
// Size: 0x290 (Inherited: 0x258)
struct AAkReverbVolume : AVolume {
	bool bEnabled; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct UAkAuxBus* AuxBus; // 0x260(0x08)
	struct FString AuxBusName; // 0x268(0x10)
	float SendLevel; // 0x278(0x04)
	float FadeRate; // 0x27c(0x04)
	float Priority; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct UAkLateReverbComponent* LateReverbComponent; // 0x288(0x08)
};

// Class AkAudio.AkRoomComponent
// Size: 0x250 (Inherited: 0x220)
struct UAkRoomComponent : UAkGameObject {
	bool bEnable; // 0x218(0x01)
	bool bDynamic; // 0x219(0x01)
	float Priority; // 0x21c(0x04)
	float WallOcclusion; // 0x220(0x04)
	float AuxSendLevel; // 0x224(0x04)
	bool AutoPost; // 0x228(0x01)
	char pad_22F[0x9]; // 0x22f(0x09)
	struct UAkAcousticTextureSetComponent* GeometryComponent; // 0x238(0x08)
	char pad_240[0x10]; // 0x240(0x10)

	void SetGeometryComponent(struct UAkAcousticTextureSetComponent* textureSetComponent); // Function AkAudio.AkRoomComponent.SetGeometryComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x14814c0
	void SetDynamic(bool bInDynamic); // Function AkAudio.AkRoomComponent.SetDynamic // (Final|Native|Public|BlueprintCallable) // @ game+0x1481430
	struct UPrimitiveComponent* GetPrimitiveParent(); // Function AkAudio.AkRoomComponent.GetPrimitiveParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x14811f0
};

// Class AkAudio.AkRtpc
// Size: 0x60 (Inherited: 0x50)
struct UAkRtpc : UAkAudioType {
	struct FWwiseGameParameterCookedData GameParameterCookedData; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class AkAudio.AkSettings
// Size: 0x350 (Inherited: 0x28)
struct UAkSettings : UObject {
	char MaxSimultaneousReverbVolumes; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FFilePath WwiseProjectPath; // 0x30(0x10)
	struct FDirectoryPath WwiseSoundDataFolder; // 0x40(0x10)
	struct FDirectoryPath RootOutputPath; // 0x50(0x10)
	struct FDirectoryPath GeneratedSoundBanksFolder; // 0x60(0x10)
	struct FDirectoryPath WwiseStagingDirectory; // 0x70(0x10)
	bool bSoundBanksTransfered; // 0x80(0x01)
	bool bAssetsMigrated; // 0x81(0x01)
	bool bProjectMigrated; // 0x82(0x01)
	bool bAutoConnectToWAAPI; // 0x83(0x01)
	enum class ECollisionChannel DefaultOcclusionCollisionChannel; // 0x84(0x01)
	enum class ECollisionChannel DefaultFitToGeometryCollisionChannel; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x88(0x50)
	float GlobalDecayAbsorption; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TSoftObjectPtr<UAkAuxBus> DefaultReverbAuxBus; // 0xe0(0x28)
	struct TMap<float, struct TSoftObjectPtr<UAkAuxBus>> EnvironmentDecayAuxBusMap; // 0x108(0x50)
	struct FString HFDampingName; // 0x158(0x10)
	struct FString DecayEstimateName; // 0x168(0x10)
	struct FString TimeToFirstReflectionName; // 0x178(0x10)
	struct TSoftObjectPtr<UAkRtpc> HFDampingRTPC; // 0x188(0x28)
	struct TSoftObjectPtr<UAkRtpc> DecayEstimateRTPC; // 0x1b0(0x28)
	struct TSoftObjectPtr<UAkRtpc> TimeToFirstReflectionRTPC; // 0x1d8(0x28)
	struct TSoftObjectPtr<UAkAudioEvent> AudioInputEvent; // 0x200(0x28)
	struct TMap<struct FGuid, struct FAkAcousticTextureParams> AcousticTextureParamsMap; // 0x228(0x50)
	bool SplitSwitchContainerMedia; // 0x278(0x01)
	bool SplitMediaPerFolder; // 0x279(0x01)
	bool UseEventBasedPackaging; // 0x27a(0x01)
	char pad_27B[0x5]; // 0x27b(0x05)
	struct FString CommandletCommitMessage; // 0x280(0x10)
	struct TMap<struct FString, struct FString> UnrealCultureToWwiseCulture; // 0x290(0x50)
	struct FString DefaultAssetCreationPath; // 0x2e0(0x10)
	struct TSoftObjectPtr<UAkInitBank> InitBank; // 0x2f0(0x28)
	enum class EAkUnrealAudioRouting AudioRouting; // 0x318(0x04)
	bool bWwiseSoundEngineEnabled; // 0x31c(0x01)
	bool bWwiseAudioLinkEnabled; // 0x31d(0x01)
	bool bAkAudioMixerEnabled; // 0x31e(0x01)
	bool AskedToUseNewAssetManagement; // 0x31f(0x01)
	bool bEnableMultiCoreRendering; // 0x320(0x01)
	bool MigratedEnableMultiCoreRendering; // 0x321(0x01)
	bool FixupRedirectorsDuringMigration; // 0x322(0x01)
	char pad_323[0x5]; // 0x323(0x05)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x328(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x338(0x10)
	char pad_348[0x8]; // 0x348(0x08)
};

// Class AkAudio.AkSettingsPerUser
// Size: 0x88 (Inherited: 0x28)
struct UAkSettingsPerUser : UObject {
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x28(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x38(0x10)
	struct FDirectoryPath RootOutputPathOverride; // 0x48(0x10)
	struct FDirectoryPath GeneratedSoundBanksFolderOverride; // 0x58(0x10)
	struct FString WaapiIPAddress; // 0x68(0x10)
	uint32_t WaapiPort; // 0x78(0x04)
	bool bAutoConnectToWAAPI; // 0x7c(0x01)
	bool AutoSyncSelection; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	uint32_t WaapiTranslatorTimeout; // 0x80(0x04)
	bool SuppressGeneratedSoundBanksPathWarnings; // 0x84(0x01)
	bool SoundDataGenerationSkipLanguage; // 0x85(0x01)
	bool AskForWwiseAssetReload; // 0x86(0x01)
	char pad_87[0x1]; // 0x87(0x01)
};

// Class AkAudio.AkSlider
// Size: 0x538 (Inherited: 0x110)
struct UAkSlider : UWidget {
	float Value; // 0x110(0x04)
	struct FDelegate ValueDelegate; // 0x114(0x10)
	char pad_124[0x4]; // 0x124(0x04)
	struct FSliderStyle WidgetStyle; // 0x128(0x340)
	enum class EOrientation Orientation; // 0x468(0x01)
	char pad_469[0x3]; // 0x469(0x03)
	struct FLinearColor SliderBarColor; // 0x46c(0x10)
	struct FLinearColor SliderHandleColor; // 0x47c(0x10)
	bool IndentHandle; // 0x48c(0x01)
	bool Locked; // 0x48d(0x01)
	char pad_48E[0x2]; // 0x48e(0x02)
	float StepSize; // 0x490(0x04)
	bool IsFocusable; // 0x494(0x01)
	char pad_495[0x3]; // 0x495(0x03)
	struct FAkPropertyToControl ThePropertyToControl; // 0x498(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0x4a8(0x40)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4e8(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0x4f8(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0x508(0x10)
	char pad_518[0x20]; // 0x518(0x20)

	void SetValue(float InValue); // Function AkAudio.AkSlider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1485e10
	void SetStepSize(float InValue); // Function AkAudio.AkSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x1485ae0
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1485a50
	void SetSliderBarColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x14859c0
	void SetLocked(bool InValue); // Function AkAudio.AkSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x1485540
	void SetIndentHandle(bool InValue); // Function AkAudio.AkSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x14854b0
	void SetAkSliderItemProperty(struct FString ItemProperty); // Function AkAudio.AkSlider.SetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x1484e20
	void SetAkSliderItemId(struct FGuid& ItemId); // Function AkAudio.AkSlider.SetAkSliderItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1484d80
	float GetValue(); // Function AkAudio.AkSlider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1484bd0
	struct FString GetAkSliderItemProperty(); // Function AkAudio.AkSlider.GetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x14841a0
	struct FGuid GetAkSliderItemId(); // Function AkAudio.AkSlider.GetAkSliderItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1484160
};

// Class AkAudio.AkSpatialAudioVolume
// Size: 0x270 (Inherited: 0x258)
struct AAkSpatialAudioVolume : AVolume {
	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x258(0x08)
	struct UAkLateReverbComponent* LateReverb; // 0x260(0x08)
	struct UAkRoomComponent* Room; // 0x268(0x08)
};

// Class AkAudio.AkSpotReflector
// Size: 0x258 (Inherited: 0x220)
struct AAkSpotReflector : AActor {
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x220(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x228(0x10)
	struct UAkAcousticTexture* AcousticTexture; // 0x238(0x08)
	float DistanceScalingFactor; // 0x240(0x04)
	float Level; // 0x244(0x04)
	bool SameRoomOnly; // 0x248(0x01)
	bool EnableRoomOverride; // 0x249(0x01)
	char pad_24A[0x6]; // 0x24a(0x06)
	struct AActor* RoomOverride; // 0x250(0x08)
};

// Class AkAudio.AkStateValue
// Size: 0x70 (Inherited: 0x70)
struct UAkStateValue : UAkGroupValue {
};

// Class AkAudio.AkSubmixInputComponent
// Size: 0x450 (Inherited: 0x400)
struct UAkSubmixInputComponent : UAkAudioInputComponent {
	struct USoundSubmix* SubmixToRecord; // 0x400(0x08)
	char pad_408[0x48]; // 0x408(0x48)
};

// Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x240 (Inherited: 0x210)
struct UAkSurfaceReflectorSetComponent : UAkAcousticTextureSetComponent {
	bool bEnableSurfaceReflectors; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct TArray<struct FAkSurfacePoly> AcousticPolys; // 0x218(0x10)
	bool bEnableDiffraction; // 0x228(0x01)
	bool bEnableDiffractionOnBoundaryEdges; // 0x229(0x01)
	char pad_22A[0x6]; // 0x22a(0x06)
	struct AActor* AssociatedRoom; // 0x230(0x08)
	char pad_238[0x8]; // 0x238(0x08)

	void UpdateSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x1486310
	void UpdateAcousticProperties(struct TArray<struct FAkSurfacePoly> in_AcousticPolys); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateAcousticProperties // (Final|Native|Public|BlueprintCallable) // @ game+0x1486220
	void SendSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x1484d60
	void RemoveSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x147d940
};

// Class AkAudio.AkSwitchValue
// Size: 0x70 (Inherited: 0x70)
struct UAkSwitchValue : UAkGroupValue {
};

// Class AkAudio.AkTrigger
// Size: 0x60 (Inherited: 0x50)
struct UAkTrigger : UAkAudioType {
	struct FWwiseTriggerCookedData TriggerCookedData; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class AkAudio.AkTVOSInitializationSettings
// Size: 0x108 (Inherited: 0x28)
struct UAkTVOSInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x70)
	struct FAkAudioSession AudioSession; // 0xa0(0x0c)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xb0(0x20)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xd0(0x38)
};

// Class AkAudio.AkTVOSPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkTVOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWaapiCalls
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiCalls : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject Unsubscribe(struct FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone); // Function AkAudio.AkWaapiCalls.Unsubscribe // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1486100
	struct FAKWaapiJsonObject SubscribeToWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiOptions, struct FDelegate& Callback, struct FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // Function AkAudio.AkWaapiCalls.SubscribeToWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1485e90
	void SetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription, int32_t ID); // Function AkAudio.AkWaapiCalls.SetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1485d40
	bool RegisterWaapiProjectLoadedCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1484cb0
	bool RegisterWaapiConnectionLostCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1484c00
	int32_t GetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription); // Function AkAudio.AkWaapiCalls.GetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1484b40
	struct FText Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1484070
	struct FString Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1483fa0
	struct FAKWaapiJsonObject CallWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiArgs, struct FAKWaapiJsonObject& WaapiOptions); // Function AkAudio.AkWaapiCalls.CallWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1483b60
};

// Class AkAudio.SAkWaapiFieldNamesConv
// Size: 0x28 (Inherited: 0x28)
struct USAkWaapiFieldNamesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x14810f0
	struct FString Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1481000
};

// Class AkAudio.AkWaapiJsonManager
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiJsonManager : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject SetStringField(struct FAkWaapiFieldNames& FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1485b60
	struct FAKWaapiJsonObject SetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14857a0
	struct FAKWaapiJsonObject SetNumberField(struct FAkWaapiFieldNames& FieldName, float FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14855d0
	struct FAKWaapiJsonObject SetBoolField(struct FAkWaapiFieldNames& FieldName, bool FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14852e0
	struct FAKWaapiJsonObject SetArrayStringFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FString>& FieldStringValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayStringFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14850e0
	struct FAKWaapiJsonObject SetArrayObjectFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FAKWaapiJsonObject>& FieldObjectValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1484ec0
	struct FString GetStringField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14849b0
	struct FAKWaapiJsonObject GetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1484830
	float GetNumberField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14846e0
	int32_t GetIntegerField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetIntegerField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1484590
	bool GetBoolField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1484440
	struct TArray<struct FAKWaapiJsonObject> GetArrayField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetArrayField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14841f0
	struct FText Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1483e70
	struct FString Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1483d60
};

// Class AkAudio.AkWaapiUriConv
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiUriConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiUriToText(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x14810f0
	struct FString Conv_FAkWaapiUriToString(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1481000
};

// Class AkAudio.AkWindowsInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkWindowsInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x70)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x20)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x14705d0
};

// Class AkAudio.AkWin32PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWin32PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWin64PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWin64PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWindowsPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWindowsPlatformInfo : UAkWin64PlatformInfo {
};

// Class AkAudio.AkWinGDKInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkWinGDKInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x70)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x20)
	struct FAkWinGDKAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x14705d0
};

// Class AkAudio.AkWinAnvilInitializationSettings
// Size: 0x100 (Inherited: 0x100)
struct UAkWinAnvilInitializationSettings : UAkWinGDKInitializationSettings {
};

// Class AkAudio.AkWinGDKPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWinGDKPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWinAnvilPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWinAnvilPlatformInfo : UAkWinGDKPlatformInfo {
};

// Class AkAudio.AkWwiseTree
// Size: 0x150 (Inherited: 0x110)
struct UAkWwiseTree : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x110(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x120(0x10)
	char pad_130[0x20]; // 0x130(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkWwiseTree.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1481550
	struct FAkWwiseObjectDetails GetSelectedItem(); // Function AkAudio.AkWwiseTree.GetSelectedItem // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x148ad90
	struct FString GetSearchText(); // Function AkAudio.AkWwiseTree.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1481220
};

// Class AkAudio.AkWwiseTreeSelector
// Size: 0x170 (Inherited: 0x110)
struct UAkWwiseTreeSelector : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x110(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x120(0x10)
	char pad_130[0x40]; // 0x130(0x40)
};

// Class AkAudio.AkXboxOneGDKInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkXboxOneGDKInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x68)
	struct FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings; // 0x98(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x20)
	struct FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x3c)
	char pad_FC[0x4]; // 0xfc(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x14705d0
};

// Class AkAudio.AkXboxOneAnvilInitializationSettings
// Size: 0x100 (Inherited: 0x100)
struct UAkXboxOneAnvilInitializationSettings : UAkXboxOneGDKInitializationSettings {
};

// Class AkAudio.AkXB1InitializationSettings
// Size: 0x100 (Inherited: 0x100)
struct UAkXB1InitializationSettings : UAkXboxOneGDKInitializationSettings {
};

// Class AkAudio.AkXboxOneGDKPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkXboxOneGDKPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkXboxOneAnvilPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkXboxOneAnvilPlatformInfo : UAkXboxOneGDKPlatformInfo {
};

// Class AkAudio.AkXB1PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkXB1PlatformInfo : UAkXboxOneGDKPlatformInfo {
};

// Class AkAudio.AkXboxOneInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkXboxOneInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x68)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x98(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x20)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x3c)
	char pad_FC[0x4]; // 0xfc(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x14705d0
};

// Class AkAudio.AkXboxOnePlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkXboxOnePlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkXSXInitializationSettings
// Size: 0x108 (Inherited: 0x28)
struct UAkXSXInitializationSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x68)
	struct FAkXSXApuHeapInitializationSettings ApuHeapSettings; // 0x98(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x20)
	struct FAkXSXAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x44)
	char pad_104[0x4]; // 0x104(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x14705d0
};

// Class AkAudio.AkMPXInitializationSettings
// Size: 0x108 (Inherited: 0x108)
struct UAkMPXInitializationSettings : UAkXSXInitializationSettings {
};

// Class AkAudio.AkXSXPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkXSXPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x168 (Inherited: 0xe8)
struct UMovieSceneAkAudioEventSection : UMovieSceneSection {
	char pad_E8[0x28]; // 0xe8(0x28)
	struct UAkAudioEvent* Event; // 0x110(0x08)
	bool RetriggerEvent; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	int32_t ScrubTailLengthMs; // 0x11c(0x04)
	bool StopAtSectionEnd; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct FString EventName; // 0x128(0x10)
	float MaxSourceDuration; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FString MaxDurationSourceID; // 0x140(0x10)
	char pad_150[0x18]; // 0x150(0x18)
};

// Class AkAudio.MovieSceneAkTrack
// Size: 0xa8 (Inherited: 0x90)
struct UMovieSceneAkTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x90(0x10)
	bool bIsAMasterTrack; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x250 (Inherited: 0xe8)
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection {
	struct UAkRtpc* RTPC; // 0xe8(0x08)
	struct FString Name; // 0xf0(0x10)
	struct FRichCurve FloatCurve; // 0x100(0x80)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x180(0x30)
	struct FMovieSceneFloatChannel RTPCChannel; // 0x1b0(0xa0)
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class AkAudio.PostEventAsync
// Size: 0x88 (Inherited: 0x30)
struct UPostEventAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	char pad_40[0x48]; // 0x40(0x48)

	struct UPostEventAsync* PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* akEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed); // Function AkAudio.PostEventAsync.PostEventAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x148aef0
	void PollPostEventFuture(); // Function AkAudio.PostEventAsync.PollPostEventFuture // (Final|Native|Private) // @ game+0x148aeb0
};

// Class AkAudio.PostEventAtLocationAsync
// Size: 0x80 (Inherited: 0x30)
struct UPostEventAtLocationAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	char pad_40[0x40]; // 0x40(0x40)

	struct UPostEventAtLocationAsync* PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* akEvent, struct FVector Location, struct FRotator Orientation); // Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x148b0e0
	void PollPostEventFuture(); // Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture // (Final|Native|Private) // @ game+0x148aed0
};

