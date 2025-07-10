#ifndef UE4SS_SDK_UI_Chat_HPP
#define UE4SS_SDK_UI_Chat_HPP

class UUI_Chat_C : public UChatWidget
{
    class UImage* Image_0;                                                            // 0x0388 (size: 0x8)
    TArray<FString> ActiveSuggestions;                                                // 0x0390 (size: 0x10)
    int32 CurrentSuggestion;                                                          // 0x03A0 (size: 0x4)
    TArray<class UUI_ChatSuggestion_C*> ActiveSuggestionWidgets;                      // 0x03A8 (size: 0x10)
    bool SuggestionsUpdated;                                                          // 0x03B8 (size: 0x1)
    bool SuggestionSelected;                                                          // 0x03B9 (size: 0x1)
    bool IsInHistoryMode;                                                             // 0x03BA (size: 0x1)

}; // Size: 0x3BB

#endif
