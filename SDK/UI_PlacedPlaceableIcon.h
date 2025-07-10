// WidgetBlueprintGeneratedClass UI_PlacedPlaceableIcon.UI_PlacedPlaceableIcon_C
// Size: 0x288 (Inherited: 0x268)
struct UUI_PlacedPlaceableIcon_C : UUserWidget {
	struct UImage* Image_bg_black; // 0x268(0x08)
	struct UImage* Image_bg_white; // 0x270(0x08)
	struct UImage* Image_icon; // 0x278(0x08)
	struct UTexture2D* _icon; // 0x280(0x08)

	void GetIcon(struct UTexture2D*& Icon); // Function UI_PlacedPlaceableIcon.UI_PlacedPlaceableIcon_C.GetIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
	void Init(struct UTexture2D* Icon); // Function UI_PlacedPlaceableIcon.UI_PlacedPlaceableIcon_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x297fc00
};

