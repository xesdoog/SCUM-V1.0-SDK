// WidgetBlueprintGeneratedClass UI_ChangeTextWidget.UI_ChangeTextWidget_C
// Size: 0x3b0 (Inherited: 0x368)
struct UUI_ChangeTextWidget_C : UChangeTextWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UButton* AcceptButton; // 0x370(0x08)
	struct UImage* Image_1; // 0x378(0x08)
	struct UImage* Image_2; // 0x380(0x08)
	struct UEditableText* InputText; // 0x388(0x08)
	int32_t MaxInputCharacters; // 0x390(0x04)
	bool _isEnabled; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	struct FText _currentText; // 0x398(0x18)

	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.OnPreviewKeyDown // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void Construct(); // Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x297fc00
	void BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x297fc00
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x297fc00
	void SetCurrentInputText_BP(struct FText& Text); // Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.SetCurrentInputText_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x297fc00
	void BndEvt__InputText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.BndEvt__InputText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x297fc00
	void SetMaxNumberOfCharacters(int32_t Value); // Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.SetMaxNumberOfCharacters // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_UI_ChangeTextWidget(int32_t EntryPoint); // Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.ExecuteUbergraph_UI_ChangeTextWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x297fc00
};

