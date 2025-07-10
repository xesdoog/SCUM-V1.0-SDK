#ifndef UE4SS_SDK_Gridly_HPP
#define UE4SS_SDK_Gridly_HPP

#include "Gridly_enums.hpp"

struct FGridlyColumnInfo
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    EGridlyColumnDataType DataType;                                                   // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FGridlyResult
{
    FString Message;                                                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGridlyTableCell
{
    FString ColumnId;                                                                 // 0x0000 (size: 0x10)
    FString DependencyStatus;                                                         // 0x0010 (size: 0x10)
    FString Value;                                                                    // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FGridlyTableRow
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FString Path;                                                                     // 0x0010 (size: 0x10)
    TArray<FGridlyTableCell> Cells;                                                   // 0x0020 (size: 0x10)

}; // Size: 0x30

class UGridlyBPFunctionLibrary : public UBlueprintFunctionLibrary
{

    void UpdateLocalizationPreview(const TArray<FPolyglotTextData>& PolyglotTextDatas);
    FString GetLocalizationPreviewCulture();
    void EnableLocalizationPreview(FString Culture);
}; // Size: 0x28

class UGridlyDataTable : public UDataTable
{
    FString ViewId;                                                                   // 0x00B0 (size: 0x10)

}; // Size: 0xC0

class UGridlyGameSettings : public UObject
{
    FString ImportApiKey;                                                             // 0x0028 (size: 0x10)
    TArray<FString> ImportFromViewIds;                                                // 0x0038 (size: 0x10)
    int32 ImportMaxRecordsPerRequest;                                                 // 0x0048 (size: 0x4)
    FString ExportApiKey;                                                             // 0x0050 (size: 0x10)
    FString ExportViewId;                                                             // 0x0060 (size: 0x10)
    int32 ExportMaxRecordsPerRequest;                                                 // 0x0070 (size: 0x4)
    bool bUseCombinedNamespaceId;                                                     // 0x0074 (size: 0x1)
    bool bMakeUniqueRecordId;                                                         // 0x0075 (size: 0x1)
    bool bAlsoExportNamespaceColumn;                                                  // 0x0076 (size: 0x1)
    FString NamespaceColumnId;                                                        // 0x0078 (size: 0x10)
    FString SourceLanguageColumnIdPrefix;                                             // 0x0088 (size: 0x10)
    FString TargetLanguageColumnIdPrefix;                                             // 0x0098 (size: 0x10)
    bool bUseCustomCultureMapping;                                                    // 0x00A8 (size: 0x1)
    TMap<class FString, class FString> CustomCultureMapping;                          // 0x00B0 (size: 0x50)
    bool bExportContext;                                                              // 0x0100 (size: 0x1)
    FString ContextColumnId;                                                          // 0x0108 (size: 0x10)
    bool bExportMetadata;                                                             // 0x0118 (size: 0x1)
    TMap<class FString, class FGridlyColumnInfo> MetadataMapping;                     // 0x0120 (size: 0x50)

}; // Size: 0x170

class UGridlyTask_DownloadLocalizedTexts : public UBlueprintAsyncActionBase
{
    FGridlyTask_DownloadLocalizedTextsOnSuccess OnSuccess;                            // 0x0030 (size: 0x10)
    void DownloadLocalizedTextsDelegate(const TArray<FPolyglotTextData>& PolyglotTextDatas, float Progress, const FGridlyResult& Error);
    FGridlyTask_DownloadLocalizedTextsOnProgress OnProgress;                          // 0x0040 (size: 0x10)
    void DownloadLocalizedTextsDelegate(const TArray<FPolyglotTextData>& PolyglotTextDatas, float Progress, const FGridlyResult& Error);
    FGridlyTask_DownloadLocalizedTextsOnFail OnFail;                                  // 0x0050 (size: 0x10)
    void DownloadLocalizedTextsDelegate(const TArray<FPolyglotTextData>& PolyglotTextDatas, float Progress, const FGridlyResult& Error);

    class UGridlyTask_DownloadLocalizedTexts* DownloadLocalizedTexts(const class UObject* WorldContextObject);
}; // Size: 0xD8

class UGridlyTask_ImportDataTableFromGridly : public UBlueprintAsyncActionBase
{
    FGridlyTask_ImportDataTableFromGridlyOnSuccess OnSuccess;                         // 0x0030 (size: 0x10)
    void ImportDataTableFromGridlyDelegate(const TArray<FGridlyTableRow>& GridlyTableRows, float Progress, const FGridlyResult& Error);
    FGridlyTask_ImportDataTableFromGridlyOnProgress OnProgress;                       // 0x0040 (size: 0x10)
    void ImportDataTableFromGridlyDelegate(const TArray<FGridlyTableRow>& GridlyTableRows, float Progress, const FGridlyResult& Error);
    FGridlyTask_ImportDataTableFromGridlyOnFail OnFail;                               // 0x0050 (size: 0x10)
    void ImportDataTableFromGridlyDelegate(const TArray<FGridlyTableRow>& GridlyTableRows, float Progress, const FGridlyResult& Error);
    class UGridlyDataTable* GridlyDataTable;                                          // 0x00D8 (size: 0x8)

    class UGridlyTask_ImportDataTableFromGridly* ImportDataTableFromGridly(const class UObject* WorldContextObject, class UGridlyDataTable* GridlyDataTable);
}; // Size: 0xE0

#endif
