// Class Gridly.GridlyBPFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGridlyBPFunctionLibrary : UBlueprintFunctionLibrary {

	void UpdateLocalizationPreview(struct TArray<struct FPolyglotTextData>& PolyglotTextDatas); // Function Gridly.GridlyBPFunctionLibrary.UpdateLocalizationPreview // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14f01c0
	struct FString GetLocalizationPreviewCulture(); // Function Gridly.GridlyBPFunctionLibrary.GetLocalizationPreviewCulture // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x14f0070
	void EnableLocalizationPreview(struct FString Culture); // Function Gridly.GridlyBPFunctionLibrary.EnableLocalizationPreview // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14effe0
};

// Class Gridly.GridlyDataTable
// Size: 0xc0 (Inherited: 0xb0)
struct UGridlyDataTable : UDataTable {
	struct FString ViewId; // 0xb0(0x10)
};

// Class Gridly.GridlyGameSettings
// Size: 0x170 (Inherited: 0x28)
struct UGridlyGameSettings : UObject {
	struct FString ImportApiKey; // 0x28(0x10)
	struct TArray<struct FString> ImportFromViewIds; // 0x38(0x10)
	int32_t ImportMaxRecordsPerRequest; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString ExportApiKey; // 0x50(0x10)
	struct FString ExportViewId; // 0x60(0x10)
	int32_t ExportMaxRecordsPerRequest; // 0x70(0x04)
	bool bUseCombinedNamespaceId; // 0x74(0x01)
	bool bMakeUniqueRecordId; // 0x75(0x01)
	bool bAlsoExportNamespaceColumn; // 0x76(0x01)
	char pad_77[0x1]; // 0x77(0x01)
	struct FString NamespaceColumnId; // 0x78(0x10)
	struct FString SourceLanguageColumnIdPrefix; // 0x88(0x10)
	struct FString TargetLanguageColumnIdPrefix; // 0x98(0x10)
	bool bUseCustomCultureMapping; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TMap<struct FString, struct FString> CustomCultureMapping; // 0xb0(0x50)
	bool bExportContext; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct FString ContextColumnId; // 0x108(0x10)
	bool bExportMetadata; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct TMap<struct FString, struct FGridlyColumnInfo> MetadataMapping; // 0x120(0x50)
};

// Class Gridly.GridlyTask_DownloadLocalizedTexts
// Size: 0xd8 (Inherited: 0x30)
struct UGridlyTask_DownloadLocalizedTexts : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnProgress; // 0x40(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x50(0x10)
	char pad_60[0x78]; // 0x60(0x78)

	struct UGridlyTask_DownloadLocalizedTexts* DownloadLocalizedTexts(struct UObject* WorldContextObject); // Function Gridly.GridlyTask_DownloadLocalizedTexts.DownloadLocalizedTexts // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14eff50
};

// Class Gridly.GridlyTask_ImportDataTableFromGridly
// Size: 0xe0 (Inherited: 0x30)
struct UGridlyTask_ImportDataTableFromGridly : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnProgress; // 0x40(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x50(0x10)
	char pad_60[0x78]; // 0x60(0x78)
	struct UGridlyDataTable* GridlyDataTable; // 0xd8(0x08)

	struct UGridlyTask_ImportDataTableFromGridly* ImportDataTableFromGridly(struct UObject* WorldContextObject, struct UGridlyDataTable* GridlyDataTable); // Function Gridly.GridlyTask_ImportDataTableFromGridly.ImportDataTableFromGridly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14f00f0
};

