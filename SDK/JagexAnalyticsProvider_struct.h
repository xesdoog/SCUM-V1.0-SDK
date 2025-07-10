// Enum JagexAnalyticsProvider.EAnalyticsSendResult
enum class EAnalyticsSendResult : uint8 {
	Success = 0,
	FailedDoNotRetry = 1,
	FailedOkToRetry = 2,
	EAnalyticsSendResult_MAX = 3
};

// ScriptStruct JagexAnalyticsProvider.RecordErrorDetails
// Size: 0x30 (Inherited: 0x00)
struct FRecordErrorDetails {
	struct FString error_location; // 0x00(0x10)
	struct FString error_code; // 0x10(0x10)
	struct FString error_message; // 0x20(0x10)
};

// ScriptStruct JagexAnalyticsProvider.SessionStartDetails
// Size: 0x40 (Inherited: 0x00)
struct FSessionStartDetails {
	struct FSessionStartHardwareInfo hardware_specs; // 0x00(0x40)
};

// ScriptStruct JagexAnalyticsProvider.SessionStartHardwareInfo
// Size: 0x40 (Inherited: 0x00)
struct FSessionStartHardwareInfo {
	struct FString cpu; // 0x00(0x10)
	struct FString os; // 0x10(0x10)
	struct FString gpu; // 0x20(0x10)
	struct FString resolution; // 0x30(0x10)
};

// ScriptStruct JagexAnalyticsProvider.HeaderInfo
// Size: 0x80 (Inherited: 0x00)
struct FHeaderInfo {
	int64_t event_timestamp; // 0x00(0x08)
	int32_t event_version; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString event_type; // 0x10(0x10)
	struct FString event_id; // 0x20(0x10)
	struct FSharedFields event_data; // 0x30(0x50)
};

// ScriptStruct JagexAnalyticsProvider.SharedFields
// Size: 0x50 (Inherited: 0x00)
struct FSharedFields {
	struct FString Timestamp; // 0x00(0x10)
	struct FString character_id; // 0x10(0x10)
	struct FString account_id; // 0x20(0x10)
	struct FString game_client; // 0x30(0x10)
	struct FString game_version; // 0x40(0x10)
};

