// WidgetBlueprintGeneratedClass UI_CharacterCreationMenu.UI_CharacterCreationMenu_C
// Size: 0x5a8 (Inherited: 0x520)
struct UUI_CharacterCreationMenu_C : UCharacterCreationMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UImage* BackgroundTint; // 0x528(0x08)
	struct UImage* Image; // 0x530(0x08)
	struct UImage* Image_1; // 0x538(0x08)
	struct UImage* Image_2; // 0x540(0x08)
	struct UImage* Image_3; // 0x548(0x08)
	struct UImage* Image_4; // 0x550(0x08)
	struct UImage* Image_5; // 0x558(0x08)
	struct UImage* Image_6; // 0x560(0x08)
	struct UImage* Image_7; // 0x568(0x08)
	struct UImage* Image_8; // 0x570(0x08)
	struct UImage* Image_10; // 0x578(0x08)
	struct UImage* Image_91; // 0x580(0x08)
	struct UImage* Image_93; // 0x588(0x08)
	struct UUI_CC_NonSelectableText_C* SkillPointDisplayBonus; // 0x590(0x08)
	struct UTextBlock* T_AttributeConfirmation; // 0x598(0x08)
	struct UTextBlock* T_SkillConfirmation; // 0x5a0(0x08)

	void PlayPrisonerEnteringSequence(bool backwards); // Function UI_CharacterCreationMenu.UI_CharacterCreationMenu_C.PlayPrisonerEnteringSequence // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void OnUserProfileCreated(); // Function UI_CharacterCreationMenu.UI_CharacterCreationMenu_C.OnUserProfileCreated // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_UI_CharacterCreationMenu(int32_t EntryPoint); // Function UI_CharacterCreationMenu.UI_CharacterCreationMenu_C.ExecuteUbergraph_UI_CharacterCreationMenu // (Final|UbergraphFunction) // @ game+0x297fc00
};

