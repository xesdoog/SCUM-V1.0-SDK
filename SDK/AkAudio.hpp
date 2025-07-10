#ifndef UE4SS_SDK_AkAudio_HPP
#define UE4SS_SDK_AkAudio_HPP

#include "AkAudio_enums.hpp"

struct FAKWaapiJsonObject
{
}; // Size: 0x10

struct FAkAcousticSurface
{
    uint32 Texture;                                                                   // 0x0000 (size: 0x4)
    float Occlusion;                                                                  // 0x0004 (size: 0x4)
    FString Name;                                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FAkAcousticTextureParams
{
    FVector4 AbsorptionValues;                                                        // 0x0000 (size: 0x10)

}; // Size: 0x20

struct FAkAdvancedInitializationSettings
{
    uint32 IO_MemorySize;                                                             // 0x0000 (size: 0x4)
    uint32 IO_Granularity;                                                            // 0x0004 (size: 0x4)
    float TargetAutoStreamBufferLength;                                               // 0x0008 (size: 0x4)
    bool UseStreamCache;                                                              // 0x000C (size: 0x1)
    uint32 MaximumPinnedBytesInCache;                                                 // 0x0010 (size: 0x4)
    bool EnableGameSyncPreparation;                                                   // 0x0014 (size: 0x1)
    uint32 ContinuousPlaybackLookAhead;                                               // 0x0018 (size: 0x4)
    uint32 MonitorQueuePoolSize;                                                      // 0x001C (size: 0x4)
    uint32 MaximumHardwareTimeoutMs;                                                  // 0x0020 (size: 0x4)
    bool DebugOutOfRangeCheckEnabled;                                                 // 0x0024 (size: 0x1)
    float DebugOutOfRangeLimit;                                                       // 0x0028 (size: 0x4)

}; // Size: 0x2C

struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings
{
    bool EnableMultiCoreRendering;                                                    // 0x002C (size: 0x1)
    uint32 MaxNumJobWorkers;                                                          // 0x0030 (size: 0x4)
    uint32 JobWorkerMaxExecutionTimeUSec;                                             // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint32 AudioAPI;                                                                  // 0x0038 (size: 0x4)
    bool RoundFrameSizeToHardwareSize;                                                // 0x003C (size: 0x1)

}; // Size: 0x40

struct FAkAudioSession
{
    EAkAudioSessionCategory AudioSessionCategory;                                     // 0x0000 (size: 0x4)
    uint32 AudioSessionCategoryOptions;                                               // 0x0004 (size: 0x4)
    EAkAudioSessionMode AudioSessionMode;                                             // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FAkBoolPropertyToControl
{
    FString ItemProperty;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAkChannelMask
{
    int32 ChannelMask;                                                                // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FAkCommonInitializationSettings
{
    uint32 MaximumNumberOfMemoryPools;                                                // 0x0000 (size: 0x4)
    uint32 MaximumNumberOfPositioningPaths;                                           // 0x0004 (size: 0x4)
    uint32 CommandQueueSize;                                                          // 0x0008 (size: 0x4)
    uint32 SamplesPerFrame;                                                           // 0x000C (size: 0x4)
    FAkMainOutputSettings MainOutputSettings;                                         // 0x0010 (size: 0x28)
    float StreamingLookAheadRatio;                                                    // 0x0038 (size: 0x4)
    uint16 NumberOfRefillsInVoice;                                                    // 0x003C (size: 0x2)
    FAkSpatialAudioSettings SpatialAudioSettings;                                     // 0x0040 (size: 0x28)

}; // Size: 0x68

struct FAkCommonInitializationSettingsWithSampleRate : public FAkCommonInitializationSettings
{
    uint32 SampleRate;                                                                // 0x0068 (size: 0x4)

}; // Size: 0x70

struct FAkCommunicationSettings
{
    uint32 PoolSize;                                                                  // 0x0000 (size: 0x4)
    uint16 DiscoveryBroadcastPort;                                                    // 0x0004 (size: 0x2)
    uint16 CommandPort;                                                               // 0x0006 (size: 0x2)
    FString NetworkName;                                                              // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FAkCommunicationSettingsWithCommSelection : public FAkCommunicationSettings
{
    EAkCommSystem CommunicationSystem;                                                // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FAkCommunicationSettingsWithSystemInitialization : public FAkCommunicationSettings
{
    bool InitializeSystemComms;                                                       // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FAkExternalSourceInfo
{
    FString ExternalSrcName;                                                          // 0x0000 (size: 0x10)
    AkCodecId CodecID;                                                                // 0x0010 (size: 0x1)
    FString Filename;                                                                 // 0x0018 (size: 0x10)
    class UAkExternalMediaAsset* ExternalSourceAsset;                                 // 0x0028 (size: 0x8)
    bool IsStreamed;                                                                  // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FAkGeometryData
{
    TArray<FVector> Vertices;                                                         // 0x0000 (size: 0x10)
    TArray<FAkAcousticSurface> Surfaces;                                              // 0x0010 (size: 0x10)
    TArray<FAkTriangle> Triangles;                                                    // 0x0020 (size: 0x10)
    TArray<class UPhysicalMaterial*> ToOverrideAcousticTexture;                       // 0x0030 (size: 0x10)
    TArray<class UPhysicalMaterial*> ToOverrideOcclusion;                             // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FAkGeometrySurfaceOverride
{
    class UAkAcousticTexture* AcousticTexture;                                        // 0x0000 (size: 0x8)
    bool bEnableOcclusionOverride;                                                    // 0x0008 (size: 0x1)
    float OcclusionValue;                                                             // 0x000C (size: 0x4)
    float SurfaceArea;                                                                // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FAkGeometrySurfacePropertiesToMap
{
    TSoftObjectPtr<UAkAcousticTexture> AcousticTexture;                               // 0x0000 (size: 0x28)
    float OcclusionValue;                                                             // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FAkHololensAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    bool UseHeadMountedDisplayAudioDevice;                                            // 0x0038 (size: 0x1)

}; // Size: 0x3C

struct FAkMainOutputSettings
{
    FString AudioDeviceShareSet;                                                      // 0x0000 (size: 0x10)
    uint32 DeviceID;                                                                  // 0x0010 (size: 0x4)
    EAkPanningRule PanningRule;                                                       // 0x0014 (size: 0x4)
    EAkChannelConfigType ChannelConfigType;                                           // 0x0018 (size: 0x4)
    uint32 ChannelMask;                                                               // 0x001C (size: 0x4)
    uint32 NumberOfChannels;                                                          // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FAkMidiCc : public FAkMidiEventBase
{
    EAkMidiCcValues Cc;                                                               // 0x0002 (size: 0x1)
    uint8 Value;                                                                      // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FAkMidiChannelAftertouch : public FAkMidiEventBase
{
    uint8 Value;                                                                      // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FAkMidiEventBase
{
    EAkMidiEventType Type;                                                            // 0x0000 (size: 0x1)
    uint8 Chan;                                                                       // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FAkMidiGeneric : public FAkMidiEventBase
{
    uint8 Param1;                                                                     // 0x0002 (size: 0x1)
    uint8 Param2;                                                                     // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FAkMidiNoteAftertouch : public FAkMidiEventBase
{
    uint8 Note;                                                                       // 0x0002 (size: 0x1)
    uint8 Value;                                                                      // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FAkMidiNoteOnOff : public FAkMidiEventBase
{
    uint8 Note;                                                                       // 0x0002 (size: 0x1)
    uint8 Velocity;                                                                   // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FAkMidiPitchBend : public FAkMidiEventBase
{
    uint8 ValueLsb;                                                                   // 0x0002 (size: 0x1)
    uint8 ValueMsb;                                                                   // 0x0003 (size: 0x1)
    int32 FullValue;                                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FAkMidiProgramChange : public FAkMidiEventBase
{
    uint8 ProgramNum;                                                                 // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FAkOutputSettings
{
    FString AudioDeviceShareSetName;                                                  // 0x0000 (size: 0x10)
    int32 IdDevice;                                                                   // 0x0010 (size: 0x4)
    PanningRule PanRule;                                                              // 0x0014 (size: 0x1)
    AkChannelConfiguration ChannelConfig;                                             // 0x0015 (size: 0x1)

}; // Size: 0x18

struct FAkPS4AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint32 ACPBatchBufferSize;                                                        // 0x0038 (size: 0x4)
    bool UseHardwareCodecLowLatencyMode;                                              // 0x003C (size: 0x1)
    bool bPlotQueueLevel;                                                             // 0x003D (size: 0x1)

}; // Size: 0x40

struct FAkPS5AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    bool UseHardwareCodecLowLatencyMode;                                              // 0x0038 (size: 0x1)
    bool bVorbisHwAcceleration;                                                       // 0x0039 (size: 0x1)
    bool bEnable3DAudioSync;                                                          // 0x003A (size: 0x1)
    uint32 uNumOperationsForHwMixing;                                                 // 0x003C (size: 0x4)
    bool bPlotQueueLevel;                                                             // 0x0040 (size: 0x1)

}; // Size: 0x44

struct FAkPropertyToControl
{
    FString ItemProperty;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAkReverbDescriptor
{
    class UPrimitiveComponent* Primitive;                                             // 0x0018 (size: 0x8)

}; // Size: 0x28

struct FAkSegmentInfo
{
    int32 CurrentPosition;                                                            // 0x0000 (size: 0x4)
    int32 PreEntryDuration;                                                           // 0x0004 (size: 0x4)
    int32 ActiveDuration;                                                             // 0x0008 (size: 0x4)
    int32 PostExitDuration;                                                           // 0x000C (size: 0x4)
    int32 RemainingLookAheadTime;                                                     // 0x0010 (size: 0x4)
    float BeatDuration;                                                               // 0x0014 (size: 0x4)
    float BarDuration;                                                                // 0x0018 (size: 0x4)
    float GridDuration;                                                               // 0x001C (size: 0x4)
    float GridOffset;                                                                 // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FAkSpatialAudioSettings
{
    uint32 MaxSoundPropagationDepth;                                                  // 0x0000 (size: 0x4)
    float MovementThreshold;                                                          // 0x0004 (size: 0x4)
    uint32 NumberOfPrimaryRays;                                                       // 0x0008 (size: 0x4)
    uint32 ReflectionOrder;                                                           // 0x000C (size: 0x4)
    uint32 DiffractionOrder;                                                          // 0x0010 (size: 0x4)
    uint32 DiffractionOnReflectionsOrder;                                             // 0x0014 (size: 0x4)
    float MaximumPathLength;                                                          // 0x0018 (size: 0x4)
    float CPULimitPercentage;                                                         // 0x001C (size: 0x4)
    uint32 LoadBalancingSpread;                                                       // 0x0020 (size: 0x4)
    bool EnableGeometricDiffractionAndTransmission;                                   // 0x0024 (size: 0x1)
    bool CalcEmitterVirtualPosition;                                                  // 0x0025 (size: 0x1)

}; // Size: 0x28

struct FAkSurfaceEdgeInfo
{
}; // Size: 0x28

struct FAkSurfaceEdgeVerts
{
}; // Size: 0x18

struct FAkSurfacePoly
{
    class UAkAcousticTexture* Texture;                                                // 0x0000 (size: 0x8)
    float Occlusion;                                                                  // 0x0008 (size: 0x4)
    bool EnableSurface;                                                               // 0x000C (size: 0x1)
    float SurfaceArea;                                                                // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FAkTriangle
{
    uint16 Point0;                                                                    // 0x0000 (size: 0x2)
    uint16 Point1;                                                                    // 0x0002 (size: 0x2)
    uint16 Point2;                                                                    // 0x0004 (size: 0x2)
    uint16 Surface;                                                                   // 0x0006 (size: 0x2)

}; // Size: 0x8

struct FAkWaapiFieldNames
{
    FString FieldName;                                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAkWaapiSubscriptionId
{
}; // Size: 0x8

struct FAkWaapiUri
{
    FString Uri;                                                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAkWinGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    bool UseHeadMountedDisplayAudioDevice;                                            // 0x0038 (size: 0x1)
    uint32 uMaxSystemAudioObjects;                                                    // 0x003C (size: 0x4)

}; // Size: 0x40

struct FAkWindowsAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    bool UseHeadMountedDisplayAudioDevice;                                            // 0x0038 (size: 0x1)
    uint32 MaxSystemAudioObjects;                                                     // 0x003C (size: 0x4)

}; // Size: 0x40

struct FAkWwiseItemToControl
{
    FAkWwiseObjectDetails ItemPicked;                                                 // 0x0000 (size: 0x30)
    FString ItemPath;                                                                 // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FAkWwiseObjectDetails
{
    FString ItemName;                                                                 // 0x0000 (size: 0x10)
    FString ItemPath;                                                                 // 0x0010 (size: 0x10)
    FString ItemId;                                                                   // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FAkXSXAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint16 MaximumNumberOfXMAVoices;                                                  // 0x0038 (size: 0x2)
    bool UseHardwareCodecLowLatencyMode;                                              // 0x003A (size: 0x1)
    uint16 MaximumNumberOfOpusVoices;                                                 // 0x003C (size: 0x2)
    uint32 uMaxSystemAudioObjects;                                                    // 0x0040 (size: 0x4)

}; // Size: 0x44

struct FAkXSXApuHeapInitializationSettings
{
    uint32 CachedSize;                                                                // 0x0000 (size: 0x4)
    uint32 NonCachedSize;                                                             // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FAkXboxOneAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint16 MaximumNumberOfXMAVoices;                                                  // 0x0038 (size: 0x2)
    bool UseHardwareCodecLowLatencyMode;                                              // 0x003A (size: 0x1)

}; // Size: 0x3C

struct FAkXboxOneApuHeapInitializationSettings
{
    uint32 CachedSize;                                                                // 0x0000 (size: 0x4)
    uint32 NonCachedSize;                                                             // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FAkXboxOneGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint16 MaximumNumberOfXMAVoices;                                                  // 0x0038 (size: 0x2)
    bool UseHardwareCodecLowLatencyMode;                                              // 0x003A (size: 0x1)

}; // Size: 0x3C

struct FAkXboxOneGDKApuHeapInitializationSettings
{
    uint32 CachedSize;                                                                // 0x0000 (size: 0x4)
    uint32 NonCachedSize;                                                             // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{
    class UMovieSceneAkAudioEventSection* Section;                                    // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{
    class UMovieSceneAkAudioRTPCSection* Section;                                     // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FMovieSceneFloatChannelSerializationHelper
{
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;                           // 0x0000 (size: 0x1)
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;                          // 0x0001 (size: 0x1)
    TArray<int32> Times;                                                              // 0x0008 (size: 0x10)
    TArray<FMovieSceneFloatValueSerializationHelper> Values;                          // 0x0018 (size: 0x10)
    float DefaultValue;                                                               // 0x0028 (size: 0x4)
    bool bHasDefaultValue;                                                            // 0x002C (size: 0x1)

}; // Size: 0x30

struct FMovieSceneFloatValueSerializationHelper
{
    float Value;                                                                      // 0x0000 (size: 0x4)
    TEnumAsByte<ERichCurveInterpMode> InterpMode;                                     // 0x0004 (size: 0x1)
    TEnumAsByte<ERichCurveTangentMode> TangentMode;                                   // 0x0005 (size: 0x1)
    FMovieSceneTangentDataSerializationHelper Tangent;                                // 0x0008 (size: 0x14)

}; // Size: 0x1C

struct FMovieSceneTangentDataSerializationHelper
{
    float ArriveTangent;                                                              // 0x0000 (size: 0x4)
    float LeaveTangent;                                                               // 0x0004 (size: 0x4)
    TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;                       // 0x0008 (size: 0x1)
    float ArriveTangentWeight;                                                        // 0x000C (size: 0x4)
    float LeaveTangentWeight;                                                         // 0x0010 (size: 0x4)

}; // Size: 0x14

class AAkAcousticPortal : public AVolume
{
    class UAkPortalComponent* Portal;                                                 // 0x0258 (size: 0x8)
    AkAcousticPortalState InitialState;                                               // 0x0260 (size: 0x1)
    bool bRequiresStateMigration;                                                     // 0x0261 (size: 0x1)

    void OpenPortal();
    AkAcousticPortalState GetCurrentState();
    void ClosePortal();
}; // Size: 0x268

class AAkAmbientSound : public AActor
{
    class UAkAudioEvent* AkAudioEvent;                                                // 0x0220 (size: 0x8)
    class UAkComponent* AkComponent;                                                  // 0x0228 (size: 0x8)
    bool StopWhenOwnerIsDestroyed;                                                    // 0x0230 (size: 0x1)
    bool AutoPost;                                                                    // 0x0231 (size: 0x1)

    void StopAmbientSound();
    void StartAmbientSound();
}; // Size: 0x260

class AAkReverbVolume : public AVolume
{
    bool bEnabled;                                                                    // 0x0258 (size: 0x1)
    class UAkAuxBus* AuxBus;                                                          // 0x0260 (size: 0x8)
    FString AuxBusName;                                                               // 0x0268 (size: 0x10)
    float SendLevel;                                                                  // 0x0278 (size: 0x4)
    float FadeRate;                                                                   // 0x027C (size: 0x4)
    float Priority;                                                                   // 0x0280 (size: 0x4)
    class UAkLateReverbComponent* LateReverbComponent;                                // 0x0288 (size: 0x8)

}; // Size: 0x290

class AAkSpatialAudioVolume : public AVolume
{
    class UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;                       // 0x0258 (size: 0x8)
    class UAkLateReverbComponent* LateReverb;                                         // 0x0260 (size: 0x8)
    class UAkRoomComponent* Room;                                                     // 0x0268 (size: 0x8)

}; // Size: 0x270

class AAkSpotReflector : public AActor
{
    class UAkAuxBus* EarlyReflectionAuxBus;                                           // 0x0220 (size: 0x8)
    FString EarlyReflectionAuxBusName;                                                // 0x0228 (size: 0x10)
    class UAkAcousticTexture* AcousticTexture;                                        // 0x0238 (size: 0x8)
    float DistanceScalingFactor;                                                      // 0x0240 (size: 0x4)
    float Level;                                                                      // 0x0244 (size: 0x4)
    bool SameRoomOnly;                                                                // 0x0248 (size: 0x1)
    bool EnableRoomOverride;                                                          // 0x0249 (size: 0x1)
    class AActor* RoomOverride;                                                       // 0x0250 (size: 0x8)

}; // Size: 0x258

class IAkPlatformInitialisationSettingsBase : public IInterface
{
}; // Size: 0x28

class UAkAcousticTexture : public UAkAudioType
{
    FWwiseAcousticTextureCookedData AcousticTextureCookedData;                        // 0x0050 (size: 0xC)

}; // Size: 0x60

class UAkAcousticTextureSetComponent : public USceneComponent
{
}; // Size: 0x210

class UAkAndroidInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;                     // 0x0030 (size: 0x70)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;           // 0x00A0 (size: 0x20)
    FAkAndroidAdvancedInitializationSettings AdvancedSettings;                        // 0x00C0 (size: 0x40)

    void MigrateMultiCoreRendering(bool NewValue);
}; // Size: 0x100

class UAkAndroidPlatformInfo : public UAkPlatformInfo
{
}; // Size: 0x70

class UAkAssetData : public UObject
{
}; // Size: 0x50

class UAkAssetPlatformData : public UObject
{
    class UAkAssetData* CurrentAssetData;                                             // 0x0028 (size: 0x8)

}; // Size: 0x30

class UAkAudioBank : public UAkAudioType
{
    bool AutoLoad;                                                                    // 0x0050 (size: 0x1)

}; // Size: 0x58

class UAkAudioEvent : public UAkAudioType
{
    float MaxAttenuationRadius;                                                       // 0x0050 (size: 0x4)
    bool IsInfinite;                                                                  // 0x0054 (size: 0x1)
    float MinimumDuration;                                                            // 0x0058 (size: 0x4)
    float MaximumDuration;                                                            // 0x005C (size: 0x4)
    FWwiseLocalizedEventCookedData EventCookedData;                                   // 0x0060 (size: 0x60)
    class UAkAudioBank* RequiredBank;                                                 // 0x00C0 (size: 0x8)

    int32 PostOnGameObjectAndWait(class UAkGameObject* GameObject, const FLatentActionInfo LatentActionInfo);
    int32 PostOnGameObject(class UAkGameObject* GameObject, const FPostOnGameObjectDelegate& Delegate, const int32 CallbackMask);
    int32 PostOnComponentAndWait(class UAkComponent* Component, const bool bStopWhenAttachedObjectDestroyed, const FLatentActionInfo LatentActionInfo);
    int32 PostOnComponent(class UAkComponent* Component, const FPostOnComponentDelegate& Delegate, const int32 CallbackMask, const bool bStopWhenAttachedObjectDestroyed);
    int32 PostOnActorAndWait(const class AActor* Actor, const bool bStopWhenAttachedObjectDestroyed, const FLatentActionInfo LatentActionInfo);
    int32 PostOnActor(const class AActor* Actor, const FPostOnActorDelegate& Delegate, const int32 CallbackMask, const bool bStopWhenAttachedObjectDestroyed);
    int32 PostAtLocation(const FVector Location, const FRotator Orientation, const FPostAtLocationCallback& Callback, const int32 CallbackMask, const class UObject* WorldContextObject);
    int32 ExecuteAction(const AkActionOnEventType ActionType, const class AActor* Actor, const int32 PlayingID, const int32 TransitionDuration, const EAkCurveInterpolation FadeCurve);
}; // Size: 0xD0

class UAkAudioInputComponent : public UAkComponent
{

    int32 PostAssociatedAudioInputEvent();
}; // Size: 0x400

class UAkAudioType : public UObject
{
    bool bAutoLoad;                                                                   // 0x0028 (size: 0x1)
    TArray<class UObject*> UserData;                                                  // 0x0030 (size: 0x10)

    void UnloadData(bool bAsync);
    void LoadData();
    int32 GetWwiseShortID();
}; // Size: 0x50

class UAkAuxBus : public UAkAudioType
{
    float MaxAttenuationRadius;                                                       // 0x0050 (size: 0x4)
    FWwiseLocalizedAuxBusCookedData AuxBusCookedData;                                 // 0x0058 (size: 0x60)
    class UAkAudioBank* RequiredBank;                                                 // 0x00B8 (size: 0x8)

}; // Size: 0xC8

class UAkCallbackInfo : public UObject
{
    class UAkComponent* AkComponent;                                                  // 0x0028 (size: 0x8)

}; // Size: 0x30

class UAkCheckBox : public UContentWidget
{
    ECheckBoxState CheckedState;                                                      // 0x0478 (size: 0x1)
    FAkCheckBoxCheckedStateDelegate CheckedStateDelegate;                             // 0x047C (size: 0x10)
    ECheckBoxState GetCheckBoxState();
    FCheckBoxStyle WidgetStyle;                                                       // 0x0490 (size: 0x580)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0A10 (size: 0x1)
    bool IsFocusable;                                                                 // 0x0A11 (size: 0x1)
    FAkBoolPropertyToControl ThePropertyToControl;                                    // 0x0A18 (size: 0x10)
    FAkWwiseItemToControl ItemToControl;                                              // 0x0A28 (size: 0x40)
    FAkCheckBoxAkOnCheckStateChanged AkOnCheckStateChanged;                           // 0x0A68 (size: 0x10)
    void AkOnCheckBoxComponentStateChanged(bool bIsChecked);
    FAkCheckBoxOnItemDropped OnItemDropped;                                           // 0x0A78 (size: 0x10)
    void OnWwiseItemDropDetected(FGuid ItemDroppedID);
    FAkCheckBoxOnPropertyDropped OnPropertyDropped;                                   // 0x0A88 (size: 0x10)
    void OnBoolPropertyDropDetected(FString PropertyDropped);

    void SetIsChecked(bool InIsChecked);
    void SetCheckedState(ECheckBoxState InCheckedState);
    void SetAkItemId(const FGuid& ItemId);
    void SetAkBoolProperty(FString ItemProperty);
    bool IsPressed();
    bool IsChecked();
    ECheckBoxState GetCheckedState();
    FString GetAkProperty();
    FGuid GetAkItemId();
}; // Size: 0xAE8

class UAkComponent : public UAkGameObject
{
    bool bUseSpatialAudio;                                                            // 0x0218 (size: 0x1)
    TEnumAsByte<EAkCollisionChannel> OcclusionCollisionChannel;                       // 0x0220 (size: 0x1)
    bool EnableSpotReflectors;                                                        // 0x0221 (size: 0x1)
    float OuterRadius;                                                                // 0x0224 (size: 0x4)
    float InnerRadius;                                                                // 0x0228 (size: 0x4)
    class UAkAuxBus* EarlyReflectionAuxBus;                                           // 0x0230 (size: 0x8)
    FString EarlyReflectionAuxBusName;                                                // 0x0238 (size: 0x10)
    int32 EarlyReflectionOrder;                                                       // 0x0248 (size: 0x4)
    float EarlyReflectionBusSendGain;                                                 // 0x024C (size: 0x4)
    float EarlyReflectionMaxPathLength;                                               // 0x0250 (size: 0x4)
    float roomReverbAuxBusGain;                                                       // 0x0254 (size: 0x4)
    int32 diffractionMaxEdges;                                                        // 0x0258 (size: 0x4)
    int32 diffractionMaxPaths;                                                        // 0x025C (size: 0x4)
    float diffractionMaxPathLength;                                                   // 0x0260 (size: 0x4)
    bool DrawFirstOrderReflections;                                                   // 0x0264 (size: 0x1)
    bool DrawSecondOrderReflections;                                                  // 0x0265 (size: 0x1)
    bool DrawHigherOrderReflections;                                                  // 0x0266 (size: 0x1)
    bool DrawDiffraction;                                                             // 0x0267 (size: 0x1)
    bool StopWhenOwnerDestroyed;                                                      // 0x0268 (size: 0x1)
    float AttenuationScalingFactor;                                                   // 0x026C (size: 0x4)
    float OcclusionRefreshInterval;                                                   // 0x0270 (size: 0x4)
    bool bUseReverbVolumes;                                                           // 0x0274 (size: 0x1)

    void UseReverbVolumes(bool inUseReverbVolumes);
    void UseEarlyReflections(class UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName);
    void SetSwitch(class UAkSwitchValue* SwitchValue, FString SwitchGroup, FString SwitchState);
    void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
    void SetOutputBusVolume(float BusVolume);
    void SetListeners(const TArray<class UAkComponent*>& Listeners);
    void SetGameObjectRadius(float in_outerRadius, float in_innerRadius);
    void SetEnableSpotReflectors(bool in_enable);
    void SetEarlyReflectionsVolume(float SendVolume);
    void SetEarlyReflectionsAuxBus(FString AuxBusName);
    void SetAttenuationScalingFactor(float Value);
    void PostTrigger(class UAkTrigger* TriggerValue, FString Trigger);
    void PostAssociatedAkEventAndWaitForEndAsync(int32& PlayingID, FLatentActionInfo LatentInfo);
    int32 PostAssociatedAkEventAndWaitForEnd(FLatentActionInfo LatentInfo);
    void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* akEvent, int32& PlayingID, FLatentActionInfo LatentInfo);
    int32 PostAkEventAndWaitForEnd(class UAkAudioEvent* akEvent, FString in_EventName, FLatentActionInfo LatentInfo);
    TEnumAsByte<ECollisionChannel> GetOcclusionCollisionChannel();
    float GetAttenuationRadius();
}; // Size: 0x3D0

class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
{
}; // Size: 0x100

class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
    float Duration;                                                                   // 0x0038 (size: 0x4)
    float EstimatedDuration;                                                          // 0x003C (size: 0x4)
    int32 AudioNodeID;                                                                // 0x0040 (size: 0x4)
    int32 MediaId;                                                                    // 0x0044 (size: 0x4)
    bool bStreaming;                                                                  // 0x0048 (size: 0x1)

}; // Size: 0x50

class UAkEffectShareSet : public UAkAudioType
{
    FWwiseLocalizedShareSetCookedData ShareSetCookedData;                             // 0x0050 (size: 0x60)

}; // Size: 0xB8

class UAkEventCallbackInfo : public UAkCallbackInfo
{
    int32 PlayingID;                                                                  // 0x0030 (size: 0x4)
    int32 EventId;                                                                    // 0x0034 (size: 0x4)

}; // Size: 0x38

class UAkExternalMediaAsset : public UAkMediaAsset
{
}; // Size: 0x78

class UAkFolder : public UAkAudioType
{
}; // Size: 0x50

class UAkGameObject : public USceneComponent
{
    class UAkAudioEvent* AkAudioEvent;                                                // 0x01F8 (size: 0x8)
    FString EventName;                                                                // 0x0200 (size: 0x10)

    void Stop();
    void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, FString RTPC);
    void PostAssociatedAkEventAsync(const class UObject* WorldContextObject, int32 CallbackMask, const FPostAssociatedAkEventAsyncPostEventCallback& PostEventCallback, FLatentActionInfo LatentInfo, int32& PlayingID);
    int32 PostAssociatedAkEvent(int32 CallbackMask, const FPostAssociatedAkEventPostEventCallback& PostEventCallback);
    void PostAkEventAsync(const class UObject* WorldContextObject, class UAkAudioEvent* akEvent, int32& PlayingID, int32 CallbackMask, const FPostAkEventAsyncPostEventCallback& PostEventCallback, FLatentActionInfo LatentInfo);
    int32 PostAkEvent(class UAkAudioEvent* akEvent, int32 CallbackMask, const FPostAkEventPostEventCallback& PostEventCallback, FString InEventName);
    void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, FString RTPC, int32 PlayingID);
}; // Size: 0x220

class UAkGameplayStatics : public UBlueprintFunctionLibrary
{

    void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
    void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName);
    void UnloadInitBank();
    void UnloadBankByName(FString BankName);
    void StopProfilerCapture();
    void StopOutputCapture();
    void StopAllAmbientSounds(class UObject* WorldContextObject);
    void StopAll();
    void StopActor(class AActor* Actor);
    void StartProfilerCapture(FString Filename);
    void StartOutputCapture(FString Filename);
    void StartAllAmbientSounds(class UObject* WorldContextObject);
    class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* akEvent, FVector Location, FRotator Orientation, bool AutoPost, FString EventName, bool AutoDestroy);
    void SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, FName SwitchGroup, FName SwitchState);
    void SetState(class UAkStateValue* StateValue, FName StateGroup, FName State);
    void SetSpeakerAngles(const TArray<float>& SpeakerAngles, float HeightAngle, FString DeviceShareSet);
    void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, class AActor* Actor, FName RTPC);
    void SetReflectionsOrder(int32 Order, bool RefreshPaths);
    void SetPortalToPortalObstruction(class UAkPortalComponent* PortalComponent0, class UAkPortalComponent* PortalComponent1, float ObstructionValue);
    void SetPortalObstructionAndOcclusion(class UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue);
    void SetPanningRule(PanningRule PanRule);
    bool SetOutputDeviceEffect(const FAkOutputDeviceID InDeviceID, const int32 InEffectIndex, const class UAkEffectShareSet* InEffectShareSet);
    void SetOutputBusVolume(float BusVolume, class AActor* Actor);
    void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
    void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    void SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    void SetGameObjectToPortalObstruction(class UAkComponent* GameObjectAkComponent, class UAkPortalComponent* PortalComponent, float ObstructionValue);
    void SetDistanceProbe(class AActor* Listener, class AActor* DistanceProbe);
    void SetCurrentAudioCultureAsync(FString AudioCulture, const FSetCurrentAudioCultureAsyncCompleted& Completed);
    void SetCurrentAudioCulture(FString AudioCulture, FLatentActionInfo LatentInfo, class UObject* WorldContextObject);
    bool SetBusEffectByName(const FString InBusName, const int32 InEffectIndex, const class UAkEffectShareSet* InEffectShareSet);
    bool SetBusEffectByID(const FAkUniqueID InBusID, const int32 InEffectIndex, const class UAkEffectShareSet* InEffectShareSet);
    void SetBusConfig(FString BusName, AkChannelConfiguration ChannelConfiguration);
    bool SetAuxBusEffect(const class UAkAuxBus* InAuxBus, const int32 InEffectIndex, const class UAkEffectShareSet* InEffectShareSet);
    bool SetActorMixerEffect(const FAkUniqueID InAudioNodeID, const int32 InEffectIndex, const class UAkEffectShareSet* InEffectShareSet);
    void ResetRTPCValue(class UAkRtpc* RTPCValue, int32 InterpolationTimeMs, class AActor* Actor, FName RTPC);
    void ReplaceMainOutput(const FAkOutputSettings& MainOutputSettings);
    void RemoveOutput(FAkOutputDeviceID in_OutputDeviceId);
    void PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, FName Trigger);
    void PostEventByName(FString EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
    void PostEventAtLocationByName(FString EventName, FVector Location, FRotator Orientation, class UObject* WorldContextObject);
    int32 PostEventAtLocation(class UAkAudioEvent* akEvent, FVector Location, FRotator Orientation, FString EventName, class UObject* WorldContextObject);
    int32 PostEvent(class UAkAudioEvent* akEvent, class AActor* Actor, int32 CallbackMask, const FPostEventPostEventCallback& PostEventCallback, bool bStopWhenAttachedToDestroyed, FString EventName);
    void PostAndWaitForEndOfEventAsync(class UAkAudioEvent* akEvent, class AActor* Actor, int32& PlayingID, bool bStopWhenAttachedToDestroyed, FLatentActionInfo LatentInfo);
    int32 PostAndWaitForEndOfEvent(class UAkAudioEvent* akEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, FLatentActionInfo LatentInfo);
    void LoadInitBank();
    void LoadBankByName(FString BankName);
    bool IsGame(class UObject* WorldContextObject);
    bool IsEditor();
    void GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, FString DeviceShareSet);
    void GetRTPCValue(class UAkRtpc* RTPCValue, int32 PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, class AActor* Actor, FName RTPC);
    FString GetCurrentAudioCulture();
    TArray<FString> GetAvailableAudioCultures();
    class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType);
    class UObject* GetAkAudioTypeUserData(const class UAkAudioType* Instance, const UClass* Type);
    void ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDuration, EAkCurveInterpolation FadeCurve);
    void ExecuteActionOnEvent(class UAkAudioEvent* akEvent, AkActionOnEventType ActionType, class AActor* Actor, int32 TransitionDuration, EAkCurveInterpolation FadeCurve, int32 PlayingID);
    void ClearSoundBanksAndMedia();
    void ClearBanks();
    void CancelEventCallback(const FCancelEventCallbackPostEventCallback& PostEventCallback);
    void AddOutputCaptureMarker(FString MarkerText);
    void AddOutput(const FAkOutputSettings& in_Settings, FAkOutputDeviceID& out_DeviceID, TArray<class UAkComponent*>& in_ListenerIDs);
}; // Size: 0x28

class UAkGeometryComponent : public UAkAcousticTextureSetComponent
{
    AkMeshType MeshType;                                                              // 0x0210 (size: 0x1)
    int32 LOD;                                                                        // 0x0214 (size: 0x4)
    float WeldingThreshold;                                                           // 0x0218 (size: 0x4)
    TMap<class UMaterialInterface*, class FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x0220 (size: 0x50)
    FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride;                          // 0x0270 (size: 0x18)
    bool bEnableDiffraction;                                                          // 0x0288 (size: 0x1)
    bool bEnableDiffractionOnBoundaryEdges;                                           // 0x0289 (size: 0x1)
    class AActor* AssociatedRoom;                                                     // 0x0290 (size: 0x8)
    FAkGeometryData GeometryData;                                                     // 0x02A8 (size: 0x50)
    TMap<int32, double> SurfaceAreas;                                                 // 0x02F8 (size: 0x50)

    void UpdateGeometry();
    void SendGeometry();
    void RemoveGeometry();
    void ConvertMesh();
}; // Size: 0x3A0

class UAkGroupValue : public UAkAudioType
{
    FWwiseGroupValueCookedData GroupValueCookedData;                                  // 0x0050 (size: 0x14)
    uint32 GroupShortId;                                                              // 0x0064 (size: 0x4)

}; // Size: 0x70

class UAkHololensInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;                     // 0x0030 (size: 0x70)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;           // 0x00A0 (size: 0x20)
    FAkHololensAdvancedInitializationSettings AdvancedSettings;                       // 0x00C0 (size: 0x3C)

    void MigrateMultiCoreRendering(bool NewValue);
}; // Size: 0x100

class UAkHololensPlatformInfo : public UAkPlatformInfo
{
}; // Size: 0x70

class UAkIOSInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;                     // 0x0030 (size: 0x70)
    FAkAudioSession AudioSession;                                                     // 0x00A0 (size: 0xC)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;           // 0x00B0 (size: 0x20)
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;         // 0x00D0 (size: 0x38)

}; // Size: 0x108

class UAkIOSPlatformInfo : public UAkPlatformInfo
{
}; // Size: 0x70

class UAkInitBank : public UAkAudioType
{
    FWwiseInitBankCookedData InitBankCookedData;                                      // 0x0050 (size: 0x40)

}; // Size: 0x98

class UAkItemBoolProperties : public UWidget
{
    FAkItemBoolPropertiesOnSelectionChanged OnSelectionChanged;                       // 0x0110 (size: 0x10)
    void OnItemBoolPropertySelectionChanged(FString PropertySelected);
    FAkItemBoolPropertiesOnPropertyDragged OnPropertyDragged;                         // 0x0120 (size: 0x10)
    void OnItemBoolPropertyDragDetected(FString PropertyDragged);

    void SetSearchText(FString newText);
    FString GetSelectedProperty();
    FString GetSearchText();
}; // Size: 0x150

class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{

    FText Conv_FAkBoolPropertyToControlToText(const FAkBoolPropertyToControl& INAkBoolPropertyToControl);
    FString Conv_FAkBoolPropertyToControlToString(const FAkBoolPropertyToControl& INAkBoolPropertyToControl);
}; // Size: 0x28

class UAkItemProperties : public UWidget
{
    FAkItemPropertiesOnSelectionChanged OnSelectionChanged;                           // 0x0110 (size: 0x10)
    void OnItemPropertySelectionChanged(FString PropertySelected);
    FAkItemPropertiesOnPropertyDragged OnPropertyDragged;                             // 0x0120 (size: 0x10)
    void OnItemPropertyDragDetected(FString PropertyDragged);

    void SetSearchText(FString newText);
    FString GetSelectedProperty();
    FString GetSearchText();
}; // Size: 0x150

class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{

    FText Conv_FAkPropertyToControlToText(const FAkPropertyToControl& INAkPropertyToControl);
    FString Conv_FAkPropertyToControlToString(const FAkPropertyToControl& INAkPropertyToControl);
}; // Size: 0x28

class UAkLateReverbComponent : public USceneComponent
{
    bool bEnable;                                                                     // 0x01F8 (size: 0x1)
    float SendLevel;                                                                  // 0x01FC (size: 0x4)
    float FadeRate;                                                                   // 0x0200 (size: 0x4)
    float Priority;                                                                   // 0x0204 (size: 0x4)
    bool AutoAssignAuxBus;                                                            // 0x0208 (size: 0x1)
    class UAkAuxBus* AuxBus;                                                          // 0x0210 (size: 0x8)
    FString AuxBusName;                                                               // 0x0218 (size: 0x10)
    class UAkAuxBus* AuxBusManual;                                                    // 0x0230 (size: 0x8)

    void AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* textureSetComponent);
}; // Size: 0x280

class UAkLinuxInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;                     // 0x0030 (size: 0x70)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;           // 0x00A0 (size: 0x20)
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;         // 0x00C0 (size: 0x38)

    void MigrateMultiCoreRendering(bool NewValue);
}; // Size: 0xF8

class UAkLinuxPlatformInfo : public UAkPlatformInfo
{
}; // Size: 0x70

class UAkLocalizedMediaAsset : public UAkMediaAsset
{
}; // Size: 0x78

class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{

    EAkMidiEventType GetType();
    bool GetProgramChange(FAkMidiProgramChange& AsProgramChange);
    bool GetPitchBend(FAkMidiPitchBend& AsPitchBend);
    bool GetNoteOn(FAkMidiNoteOnOff& AsNoteOn);
    bool GetNoteOff(FAkMidiNoteOnOff& AsNoteOff);
    bool GetNoteAftertouch(FAkMidiNoteAftertouch& AsNoteAftertouch);
    bool GetGeneric(FAkMidiGeneric& AsGeneric);
    bool GetChannelAftertouch(FAkMidiChannelAftertouch& AsChannelAftertouch);
    uint8 GetChannel();
    bool GetCc(FAkMidiCc& AsCc);
}; // Size: 0x48

class UAkMPXInitializationSettings : public UAkXSXInitializationSettings
{
}; // Size: 0x108

class UAkMacInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;                     // 0x0030 (size: 0x70)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;           // 0x00A0 (size: 0x20)
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;         // 0x00C0 (size: 0x38)

    void MigrateMultiCoreRendering(bool NewValue);
}; // Size: 0xF8

class UAkMacPlatformInfo : public UAkPlatformInfo
{
}; // Size: 0x70

class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
    int32 Identifier;                                                                 // 0x0038 (size: 0x4)
    int32 position;                                                                   // 0x003C (size: 0x4)
    FString Label;                                                                    // 0x0040 (size: 0x10)

}; // Size: 0x50

class UAkMediaAsset : public UObject
{
    TMap<class FString, class UAkMediaAssetData*> MediaAssetDataPerPlatform;          // 0x0028 (size: 0x50)

}; // Size: 0x78

class UAkMediaAssetData : public UObject
{
}; // Size: 0x38

class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
    int32 PlayingID;                                                                  // 0x0030 (size: 0x4)
    FAkSegmentInfo SegmentInfo;                                                       // 0x0034 (size: 0x24)
    EAkCallbackType MusicSyncType;                                                    // 0x0058 (size: 0x1)
    FString UserCueName;                                                              // 0x0060 (size: 0x10)

}; // Size: 0x70

class UAkPS4InitializationSettings : public UObject
{
    FAkCommonInitializationSettings CommonSettings;                                   // 0x0030 (size: 0x68)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;           // 0x0098 (size: 0x20)
    FAkPS4AdvancedInitializationSettings AdvancedSettings;                            // 0x00B8 (size: 0x40)

    void MigrateMultiCoreRendering(bool NewValue);
}; // Size: 0xF8

class UAkPS4PlatformInfo : public UAkPlatformInfo
{
}; // Size: 0x70

class UAkPS5InitializationSettings : public UObject
{
    FAkCommonInitializationSettings CommonSettings;                                   // 0x0030 (size: 0x68)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;           // 0x0098 (size: 0x20)
    FAkPS5AdvancedInitializationSettings AdvancedSettings;                            // 0x00B8 (size: 0x44)

}; // Size: 0x100

class UAkPS5PlatformInfo : public UAkPlatformInfo
{
}; // Size: 0x70

class UAkPlatformInfo : public UObject
{
}; // Size: 0x70

class UAkPortalComponent : public USceneComponent
{
    bool bDynamic;                                                                    // 0x01F8 (size: 0x1)
    AkAcousticPortalState InitialState;                                               // 0x01F9 (size: 0x1)
    float ObstructionRefreshInterval;                                                 // 0x01FC (size: 0x4)
    TEnumAsByte<ECollisionChannel> ObstructionCollisionChannel;                       // 0x0200 (size: 0x1)

    void SetDynamic(bool bInDynamic);
    bool PortalPlacementValid();
    void OpenPortal();
    class UPrimitiveComponent* GetPrimitiveParent();
    AkAcousticPortalState GetCurrentState();
    void ClosePortal();
}; // Size: 0x2C0

class UAkRoomComponent : public UAkGameObject
{
    bool bEnable;                                                                     // 0x0218 (size: 0x1)
    bool bDynamic;                                                                    // 0x0219 (size: 0x1)
    float Priority;                                                                   // 0x021C (size: 0x4)
    float WallOcclusion;                                                              // 0x0220 (size: 0x4)
    float AuxSendLevel;                                                               // 0x0224 (size: 0x4)
    bool AutoPost;                                                                    // 0x0228 (size: 0x1)
    class UAkAcousticTextureSetComponent* GeometryComponent;                          // 0x0238 (size: 0x8)

    void SetGeometryComponent(class UAkAcousticTextureSetComponent* textureSetComponent);
    void SetDynamic(bool bInDynamic);
    class UPrimitiveComponent* GetPrimitiveParent();
}; // Size: 0x250

class UAkRtpc : public UAkAudioType
{
    FWwiseGameParameterCookedData GameParameterCookedData;                            // 0x0050 (size: 0xC)

}; // Size: 0x60

class UAkSettings : public UObject
{
    uint8 MaxSimultaneousReverbVolumes;                                               // 0x0028 (size: 0x1)
    FFilePath WwiseProjectPath;                                                       // 0x0030 (size: 0x10)
    FDirectoryPath WwiseSoundDataFolder;                                              // 0x0040 (size: 0x10)
    FDirectoryPath RootOutputPath;                                                    // 0x0050 (size: 0x10)
    FDirectoryPath GeneratedSoundBanksFolder;                                         // 0x0060 (size: 0x10)
    FDirectoryPath WwiseStagingDirectory;                                             // 0x0070 (size: 0x10)
    bool bSoundBanksTransfered;                                                       // 0x0080 (size: 0x1)
    bool bAssetsMigrated;                                                             // 0x0081 (size: 0x1)
    bool bProjectMigrated;                                                            // 0x0082 (size: 0x1)
    bool bAutoConnectToWAAPI;                                                         // 0x0083 (size: 0x1)
    TEnumAsByte<ECollisionChannel> DefaultOcclusionCollisionChannel;                  // 0x0084 (size: 0x1)
    TEnumAsByte<ECollisionChannel> DefaultFitToGeometryCollisionChannel;              // 0x0085 (size: 0x1)
    TMap<class TSoftObjectPtr<UPhysicalMaterial>, class FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x0088 (size: 0x50)
    float GlobalDecayAbsorption;                                                      // 0x00D8 (size: 0x4)
    TSoftObjectPtr<UAkAuxBus> DefaultReverbAuxBus;                                    // 0x00E0 (size: 0x28)
    TMap<float, TSoftObjectPtr<UAkAuxBus>> EnvironmentDecayAuxBusMap;                 // 0x0108 (size: 0x50)
    FString HFDampingName;                                                            // 0x0158 (size: 0x10)
    FString DecayEstimateName;                                                        // 0x0168 (size: 0x10)
    FString TimeToFirstReflectionName;                                                // 0x0178 (size: 0x10)
    TSoftObjectPtr<UAkRtpc> HFDampingRTPC;                                            // 0x0188 (size: 0x28)
    TSoftObjectPtr<UAkRtpc> DecayEstimateRTPC;                                        // 0x01B0 (size: 0x28)
    TSoftObjectPtr<UAkRtpc> TimeToFirstReflectionRTPC;                                // 0x01D8 (size: 0x28)
    TSoftObjectPtr<UAkAudioEvent> AudioInputEvent;                                    // 0x0200 (size: 0x28)
    TMap<class FGuid, class FAkAcousticTextureParams> AcousticTextureParamsMap;       // 0x0228 (size: 0x50)
    bool SplitSwitchContainerMedia;                                                   // 0x0278 (size: 0x1)
    bool SplitMediaPerFolder;                                                         // 0x0279 (size: 0x1)
    bool UseEventBasedPackaging;                                                      // 0x027A (size: 0x1)
    FString CommandletCommitMessage;                                                  // 0x0280 (size: 0x10)
    TMap<class FString, class FString> UnrealCultureToWwiseCulture;                   // 0x0290 (size: 0x50)
    FString DefaultAssetCreationPath;                                                 // 0x02E0 (size: 0x10)
    TSoftObjectPtr<UAkInitBank> InitBank;                                             // 0x02F0 (size: 0x28)
    EAkUnrealAudioRouting AudioRouting;                                               // 0x0318 (size: 0x4)
    bool bWwiseSoundEngineEnabled;                                                    // 0x031C (size: 0x1)
    bool bWwiseAudioLinkEnabled;                                                      // 0x031D (size: 0x1)
    bool bAkAudioMixerEnabled;                                                        // 0x031E (size: 0x1)
    bool AskedToUseNewAssetManagement;                                                // 0x031F (size: 0x1)
    bool bEnableMultiCoreRendering;                                                   // 0x0320 (size: 0x1)
    bool MigratedEnableMultiCoreRendering;                                            // 0x0321 (size: 0x1)
    bool FixupRedirectorsDuringMigration;                                             // 0x0322 (size: 0x1)
    FDirectoryPath WwiseWindowsInstallationPath;                                      // 0x0328 (size: 0x10)
    FFilePath WwiseMacInstallationPath;                                               // 0x0338 (size: 0x10)

}; // Size: 0x350

class UAkSettingsPerUser : public UObject
{
    FDirectoryPath WwiseWindowsInstallationPath;                                      // 0x0028 (size: 0x10)
    FFilePath WwiseMacInstallationPath;                                               // 0x0038 (size: 0x10)
    FDirectoryPath RootOutputPathOverride;                                            // 0x0048 (size: 0x10)
    FDirectoryPath GeneratedSoundBanksFolderOverride;                                 // 0x0058 (size: 0x10)
    FString WaapiIPAddress;                                                           // 0x0068 (size: 0x10)
    uint32 WaapiPort;                                                                 // 0x0078 (size: 0x4)
    bool bAutoConnectToWAAPI;                                                         // 0x007C (size: 0x1)
    bool AutoSyncSelection;                                                           // 0x007D (size: 0x1)
    uint32 WaapiTranslatorTimeout;                                                    // 0x0080 (size: 0x4)
    bool SuppressGeneratedSoundBanksPathWarnings;                                     // 0x0084 (size: 0x1)
    bool SoundDataGenerationSkipLanguage;                                             // 0x0085 (size: 0x1)
    bool AskForWwiseAssetReload;                                                      // 0x0086 (size: 0x1)

}; // Size: 0x88

class UAkSlider : public UWidget
{
    float Value;                                                                      // 0x0110 (size: 0x4)
    FAkSliderValueDelegate ValueDelegate;                                             // 0x0114 (size: 0x10)
    float GetFloat();
    FSliderStyle WidgetStyle;                                                         // 0x0128 (size: 0x340)
    TEnumAsByte<EOrientation> Orientation;                                            // 0x0468 (size: 0x1)
    FLinearColor SliderBarColor;                                                      // 0x046C (size: 0x10)
    FLinearColor SliderHandleColor;                                                   // 0x047C (size: 0x10)
    bool IndentHandle;                                                                // 0x048C (size: 0x1)
    bool Locked;                                                                      // 0x048D (size: 0x1)
    float StepSize;                                                                   // 0x0490 (size: 0x4)
    bool IsFocusable;                                                                 // 0x0494 (size: 0x1)
    FAkPropertyToControl ThePropertyToControl;                                        // 0x0498 (size: 0x10)
    FAkWwiseItemToControl ItemToControl;                                              // 0x04A8 (size: 0x40)
    FAkSliderOnValueChanged OnValueChanged;                                           // 0x04E8 (size: 0x10)
    void AkOnFloatValueChangedEvent(float Value);
    FAkSliderOnItemDropped OnItemDropped;                                             // 0x04F8 (size: 0x10)
    void OnItemDropDetected(FGuid ItemDroppedID);
    FAkSliderOnPropertyDropped OnPropertyDropped;                                     // 0x0508 (size: 0x10)
    void OnPropertyDropDetected(FString PropertyDropped);

    void SetValue(float InValue);
    void SetStepSize(float InValue);
    void SetSliderHandleColor(FLinearColor InValue);
    void SetSliderBarColor(FLinearColor InValue);
    void SetLocked(bool InValue);
    void SetIndentHandle(bool InValue);
    void SetAkSliderItemProperty(FString ItemProperty);
    void SetAkSliderItemId(const FGuid& ItemId);
    float GetValue();
    FString GetAkSliderItemProperty();
    FGuid GetAkSliderItemId();
}; // Size: 0x538

class UAkStateValue : public UAkGroupValue
{
}; // Size: 0x70

class UAkSubmixInputComponent : public UAkAudioInputComponent
{
    class USoundSubmix* SubmixToRecord;                                               // 0x0400 (size: 0x8)

}; // Size: 0x450

class UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent
{
    bool bEnableSurfaceReflectors;                                                    // 0x0210 (size: 0x1)
    TArray<FAkSurfacePoly> AcousticPolys;                                             // 0x0218 (size: 0x10)
    bool bEnableDiffraction;                                                          // 0x0228 (size: 0x1)
    bool bEnableDiffractionOnBoundaryEdges;                                           // 0x0229 (size: 0x1)
    class AActor* AssociatedRoom;                                                     // 0x0230 (size: 0x8)

    void UpdateSurfaceReflectorSet();
    void UpdateAcousticProperties(TArray<FAkSurfacePoly> in_AcousticPolys);
    void SendSurfaceReflectorSet();
    void RemoveSurfaceReflectorSet();
}; // Size: 0x240

class UAkSwitchValue : public UAkGroupValue
{
}; // Size: 0x70

class UAkTVOSInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;                     // 0x0030 (size: 0x70)
    FAkAudioSession AudioSession;                                                     // 0x00A0 (size: 0xC)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;           // 0x00B0 (size: 0x20)
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;         // 0x00D0 (size: 0x38)

}; // Size: 0x108

class UAkTVOSPlatformInfo : public UAkPlatformInfo
{
}; // Size: 0x70

class UAkTrigger : public UAkAudioType
{
    FWwiseTriggerCookedData TriggerCookedData;                                        // 0x0050 (size: 0xC)

}; // Size: 0x60

class UAkWaapiCalls : public UBlueprintFunctionLibrary
{

    FAKWaapiJsonObject Unsubscribe(const FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone);
    FAKWaapiJsonObject SubscribeToWaapi(const FAkWaapiUri& WaapiUri, const FAKWaapiJsonObject& WaapiOptions, const FSubscribeToWaapiCallback& Callback, FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone);
    void SetSubscriptionID(const FAkWaapiSubscriptionId& Subscription, int32 ID);
    bool RegisterWaapiProjectLoadedCallback(const FRegisterWaapiProjectLoadedCallbackCallback& Callback);
    bool RegisterWaapiConnectionLostCallback(const FRegisterWaapiConnectionLostCallbackCallback& Callback);
    int32 GetSubscriptionID(const FAkWaapiSubscriptionId& Subscription);
    FText Conv_FAkWaapiSubscriptionIdToText(const FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
    FString Conv_FAkWaapiSubscriptionIdToString(const FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
    FAKWaapiJsonObject CallWaapi(const FAkWaapiUri& WaapiUri, const FAKWaapiJsonObject& WaapiArgs, const FAKWaapiJsonObject& WaapiOptions);
}; // Size: 0x28

class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{

    FAKWaapiJsonObject SetStringField(const FAkWaapiFieldNames& FieldName, FString FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetObjectField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetNumberField(const FAkWaapiFieldNames& FieldName, float FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetBoolField(const FAkWaapiFieldNames& FieldName, bool FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetArrayStringFields(const FAkWaapiFieldNames& FieldName, const TArray<FString>& FieldStringValues, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetArrayObjectFields(const FAkWaapiFieldNames& FieldName, const TArray<FAKWaapiJsonObject>& FieldObjectValues, FAKWaapiJsonObject Target);
    FString GetStringField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject GetObjectField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    float GetNumberField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    int32 GetIntegerField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    bool GetBoolField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    TArray<FAKWaapiJsonObject> GetArrayField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    FText Conv_FAKWaapiJsonObjectToText(FAKWaapiJsonObject INAKWaapiJsonObject);
    FString Conv_FAKWaapiJsonObjectToString(FAKWaapiJsonObject INAKWaapiJsonObject);
}; // Size: 0x28

class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{

    FText Conv_FAkWaapiUriToText(const FAkWaapiUri& INAkWaapiUri);
    FString Conv_FAkWaapiUriToString(const FAkWaapiUri& INAkWaapiUri);
}; // Size: 0x28

class UAkWin32PlatformInfo : public UAkPlatformInfo
{
}; // Size: 0x70

class UAkWin64PlatformInfo : public UAkPlatformInfo
{
}; // Size: 0x70

class UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
{
}; // Size: 0x100

class UAkWinAnvilPlatformInfo : public UAkWinGDKPlatformInfo
{
}; // Size: 0x70

class UAkWinGDKInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;                     // 0x0030 (size: 0x70)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;           // 0x00A0 (size: 0x20)
    FAkWinGDKAdvancedInitializationSettings AdvancedSettings;                         // 0x00C0 (size: 0x40)

    void MigrateMultiCoreRendering(bool NewValue);
}; // Size: 0x100

class UAkWinGDKPlatformInfo : public UAkPlatformInfo
{
}; // Size: 0x70

class UAkWindowsInitializationSettings : public UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;                     // 0x0030 (size: 0x70)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;           // 0x00A0 (size: 0x20)
    FAkWindowsAdvancedInitializationSettings AdvancedSettings;                        // 0x00C0 (size: 0x40)

    void MigrateMultiCoreRendering(bool NewValue);
}; // Size: 0x100

class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{
}; // Size: 0x70

class UAkWwiseTree : public UWidget
{
    FAkWwiseTreeOnSelectionChanged OnSelectionChanged;                                // 0x0110 (size: 0x10)
    void OnItemSelectionChanged(FGuid ItemSelectedID);
    FAkWwiseTreeOnItemDragged OnItemDragged;                                          // 0x0120 (size: 0x10)
    void OnItemDragDetected(FGuid ItemDraggedID, FString ItemDraggedName);

    void SetSearchText(FString newText);
    FAkWwiseObjectDetails GetSelectedItem();
    FString GetSearchText();
}; // Size: 0x150

class UAkWwiseTreeSelector : public UWidget
{
    FAkWwiseTreeSelectorOnSelectionChanged OnSelectionChanged;                        // 0x0110 (size: 0x10)
    void OnItemSelectionChanged(FGuid ItemSelectedID);
    FAkWwiseTreeSelectorOnItemDragged OnItemDragged;                                  // 0x0120 (size: 0x10)
    void OnItemDragDetected(FGuid ItemDraggedID, FString ItemDraggedName);

}; // Size: 0x170

class UAkXB1InitializationSettings : public UAkXboxOneGDKInitializationSettings
{
}; // Size: 0x100

class UAkXB1PlatformInfo : public UAkXboxOneGDKPlatformInfo
{
}; // Size: 0x70

class UAkXSXInitializationSettings : public UObject
{
    FAkCommonInitializationSettings CommonSettings;                                   // 0x0030 (size: 0x68)
    FAkXSXApuHeapInitializationSettings ApuHeapSettings;                              // 0x0098 (size: 0x8)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;           // 0x00A0 (size: 0x20)
    FAkXSXAdvancedInitializationSettings AdvancedSettings;                            // 0x00C0 (size: 0x44)

    void MigrateMultiCoreRendering(bool NewValue);
}; // Size: 0x108

class UAkXSXPlatformInfo : public UAkPlatformInfo
{
}; // Size: 0x70

class UAkXboxOneAnvilInitializationSettings : public UAkXboxOneGDKInitializationSettings
{
}; // Size: 0x100

class UAkXboxOneAnvilPlatformInfo : public UAkXboxOneGDKPlatformInfo
{
}; // Size: 0x70

class UAkXboxOneGDKInitializationSettings : public UObject
{
    FAkCommonInitializationSettings CommonSettings;                                   // 0x0030 (size: 0x68)
    FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings;                       // 0x0098 (size: 0x8)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;           // 0x00A0 (size: 0x20)
    FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings;                     // 0x00C0 (size: 0x3C)

    void MigrateMultiCoreRendering(bool NewValue);
}; // Size: 0x100

class UAkXboxOneGDKPlatformInfo : public UAkPlatformInfo
{
}; // Size: 0x70

class UAkXboxOneInitializationSettings : public UObject
{
    FAkCommonInitializationSettings CommonSettings;                                   // 0x0030 (size: 0x68)
    FAkXboxOneApuHeapInitializationSettings ApuHeapSettings;                          // 0x0098 (size: 0x8)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;           // 0x00A0 (size: 0x20)
    FAkXboxOneAdvancedInitializationSettings AdvancedSettings;                        // 0x00C0 (size: 0x3C)

    void MigrateMultiCoreRendering(bool NewValue);
}; // Size: 0x100

class UAkXboxOnePlatformInfo : public UAkPlatformInfo
{
}; // Size: 0x70

class UDrawPortalComponent : public UPrimitiveComponent
{
}; // Size: 0x460

class UDrawRoomComponent : public UPrimitiveComponent
{
}; // Size: 0x460

class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
    class UAkAudioEvent* Event;                                                       // 0x0110 (size: 0x8)
    bool RetriggerEvent;                                                              // 0x0118 (size: 0x1)
    int32 ScrubTailLengthMs;                                                          // 0x011C (size: 0x4)
    bool StopAtSectionEnd;                                                            // 0x0120 (size: 0x1)
    FString EventName;                                                                // 0x0128 (size: 0x10)
    float MaxSourceDuration;                                                          // 0x0138 (size: 0x4)
    FString MaxDurationSourceID;                                                      // 0x0140 (size: 0x10)

}; // Size: 0x168

class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
}; // Size: 0xB0

class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
    class UAkRtpc* RTPC;                                                              // 0x00E8 (size: 0x8)
    FString Name;                                                                     // 0x00F0 (size: 0x10)
    FRichCurve FloatCurve;                                                            // 0x0100 (size: 0x80)
    FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper;       // 0x0180 (size: 0x30)
    FMovieSceneFloatChannel RTPCChannel;                                              // 0x01B0 (size: 0xA0)

}; // Size: 0x250

class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
}; // Size: 0xB0

class UMovieSceneAkTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0090 (size: 0x10)
    bool bIsAMasterTrack;                                                             // 0x00A0 (size: 0x1)

}; // Size: 0xA8

class UPostEventAsync : public UBlueprintAsyncActionBase
{
    FPostEventAsyncCompleted Completed;                                               // 0x0030 (size: 0x10)
    void PostEventAsyncOutputPin(int32 PlayingID);

    class UPostEventAsync* PostEventAsync(const class UObject* WorldContextObject, class UAkAudioEvent* akEvent, class AActor* Actor, int32 CallbackMask, const FPostEventAsyncPostEventCallback& PostEventCallback, bool bStopWhenAttachedToDestroyed);
    void PollPostEventFuture();
}; // Size: 0x88

class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{
    FPostEventAtLocationAsyncCompleted Completed;                                     // 0x0030 (size: 0x10)
    void PostEventAtLocationAsyncOutputPin(int32 PlayingID);

    class UPostEventAtLocationAsync* PostEventAtLocationAsync(const class UObject* WorldContextObject, class UAkAudioEvent* akEvent, FVector Location, FRotator Orientation);
    void PollPostEventFuture();
}; // Size: 0x80

class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{

    FText Conv_FAkWaapiFieldNamesToText(const FAkWaapiFieldNames& INAkWaapiFieldNames);
    FString Conv_FAkWaapiFieldNamesToString(const FAkWaapiFieldNames& INAkWaapiFieldNames);
}; // Size: 0x28

#endif
