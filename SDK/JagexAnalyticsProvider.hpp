#ifndef UE4SS_SDK_JagexAnalyticsProvider_HPP
#define UE4SS_SDK_JagexAnalyticsProvider_HPP

#include "JagexAnalyticsProvider_enums.hpp"

struct FHeaderInfo
{
    int64 event_timestamp;                                                            // 0x0000 (size: 0x8)
    int32 event_version;                                                              // 0x0008 (size: 0x4)
    FString event_type;                                                               // 0x0010 (size: 0x10)
    FString event_id;                                                                 // 0x0020 (size: 0x10)
    FSharedFields event_data;                                                         // 0x0030 (size: 0x50)

}; // Size: 0x80

struct FRecordErrorDetails
{
    FString error_location;                                                           // 0x0000 (size: 0x10)
    FString error_code;                                                               // 0x0010 (size: 0x10)
    FString error_message;                                                            // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FSessionStartDetails
{
    FSessionStartHardwareInfo hardware_specs;                                         // 0x0000 (size: 0x40)

}; // Size: 0x40

struct FSessionStartHardwareInfo
{
    FString cpu;                                                                      // 0x0000 (size: 0x10)
    FString os;                                                                       // 0x0010 (size: 0x10)
    FString gpu;                                                                      // 0x0020 (size: 0x10)
    FString resolution;                                                               // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FSharedFields
{
    FString Timestamp;                                                                // 0x0000 (size: 0x10)
    FString character_id;                                                             // 0x0010 (size: 0x10)
    FString account_id;                                                               // 0x0020 (size: 0x10)
    FString game_client;                                                              // 0x0030 (size: 0x10)
    FString game_version;                                                             // 0x0040 (size: 0x10)

}; // Size: 0x50

class UJagexAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void SetFlushOnEndSession(bool ShouldFlushOnEndSession);
    void SetEndSessionContext(FString Context);
    void SetEndSessionAutomatically(bool ShouldEndAutomatically);
    void SetCharacterId(FString CharacterId);
    void SetAccountId(FString AccountId);
}; // Size: 0x28

class UJagexAnalyticsSettings : public UObject
{
    FString BrokerAddress;                                                            // 0x0028 (size: 0x10)
    FString Client;                                                                   // 0x0038 (size: 0x10)
    float StartingSendIntervalSeconds;                                                // 0x0048 (size: 0x4)
    int32 MaxUnsentMessagesToQueue;                                                   // 0x004C (size: 0x4)
    int32 MaxMessagesPerWebRequest;                                                   // 0x0050 (size: 0x4)
    bool FlushMessagesOnEndSession;                                                   // 0x0054 (size: 0x1)
    bool EndSessionOnQuit;                                                            // 0x0055 (size: 0x1)

}; // Size: 0x58

class UJagexAnalyticsSubsystem : public UGameInstanceSubsystem
{
}; // Size: 0x30

#endif
