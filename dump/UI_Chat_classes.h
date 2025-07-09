// WidgetBlueprintGeneratedClass UI_Chat.UI_Chat_C
// Size: 0x3bb (Inherited: 0x388)
struct UUI_Chat_C : UChatWidget {
	struct UImage* Image_1; // 0x388(0x08)
	struct TArray<struct FString> ActiveSuggestions; // 0x390(0x10)
	int32_t CurrentSuggestion; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct TArray<struct UUI_ChatSuggestion_C*> ActiveSuggestionWidgets; // 0x3a8(0x10)
	bool SuggestionsUpdated; // 0x3b8(0x01)
	bool SuggestionSelected; // 0x3b9(0x01)
	bool IsInHistoryMode; // 0x3ba(0x01)
};

