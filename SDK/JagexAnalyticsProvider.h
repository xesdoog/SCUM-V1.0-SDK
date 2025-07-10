// Class JagexAnalyticsProvider.JagexAnalyticsBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UJagexAnalyticsBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetFlushOnEndSession(bool ShouldFlushOnEndSession); // Function JagexAnalyticsProvider.JagexAnalyticsBlueprintLibrary.SetFlushOnEndSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1546660
	void SetEndSessionContext(struct FString Context); // Function JagexAnalyticsProvider.JagexAnalyticsBlueprintLibrary.SetEndSessionContext // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x15465c0
	void SetEndSessionAutomatically(bool ShouldEndAutomatically); // Function JagexAnalyticsProvider.JagexAnalyticsBlueprintLibrary.SetEndSessionAutomatically // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1546540
	void SetCharacterId(struct FString CharacterId); // Function JagexAnalyticsProvider.JagexAnalyticsBlueprintLibrary.SetCharacterId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1546450
	void SetAccountId(struct FString AccountId); // Function JagexAnalyticsProvider.JagexAnalyticsBlueprintLibrary.SetAccountId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1546360
};

// Class JagexAnalyticsProvider.JagexAnalyticsSettings
// Size: 0x58 (Inherited: 0x28)
struct UJagexAnalyticsSettings : UObject {
	struct FString BrokerAddress; // 0x28(0x10)
	struct FString Client; // 0x38(0x10)
	float StartingSendIntervalSeconds; // 0x48(0x04)
	int32_t MaxUnsentMessagesToQueue; // 0x4c(0x04)
	int32_t MaxMessagesPerWebRequest; // 0x50(0x04)
	bool FlushMessagesOnEndSession; // 0x54(0x01)
	bool EndSessionOnQuit; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
};

// Class JagexAnalyticsProvider.JagexAnalyticsSubsystem
// Size: 0x30 (Inherited: 0x30)
struct UJagexAnalyticsSubsystem : UGameInstanceSubsystem {
};

