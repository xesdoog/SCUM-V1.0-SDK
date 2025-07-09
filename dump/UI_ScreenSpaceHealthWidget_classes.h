// WidgetBlueprintGeneratedClass UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C
// Size: 0x2c0 (Inherited: 0x268)
struct UUI_ScreenSpaceHealthWidget_C : UScreenSpaceHealthWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Background; // 0x270(0x08)
	struct UImage* DisabledBar; // 0x278(0x08)
	struct UImage* HealthBar; // 0x280(0x08)
	struct UMaterialInstanceDynamic* _healthBarMat; // 0x288(0x08)
	struct UMaterialInstanceDynamic* _disabledBarMat; // 0x290(0x08)
	struct UCurveFloat* ColorCurve; // 0x298(0x08)
	struct FLinearColor ColorMaxHP; // 0x2a0(0x10)
	struct FLinearColor ColorMinHP; // 0x2b0(0x10)

	void Construct(); // Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x297fc00
	void SetMaxHealthPercentage(float Value); // Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.SetMaxHealthPercentage // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void SetHealthPercentage(float Value); // Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.SetHealthPercentage // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_UI_ScreenSpaceHealthWidget(int32_t EntryPoint); // Function UI_ScreenSpaceHealthWidget.UI_ScreenSpaceHealthWidget_C.ExecuteUbergraph_UI_ScreenSpaceHealthWidget // (Final|UbergraphFunction) // @ game+0x297fc00
};

