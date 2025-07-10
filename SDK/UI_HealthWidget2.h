// WidgetBlueprintGeneratedClass UI_HealthWidget2.UI_HealthWidget2_C
// Size: 0x398 (Inherited: 0x340)
struct UUI_HealthWidget2_C : UHealthWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UImage* Background; // 0x348(0x08)
	struct UImage* DisabledBar; // 0x350(0x08)
	struct UImage* HealthBar; // 0x358(0x08)
	struct FLinearColor ColorMaxHP; // 0x360(0x10)
	struct FLinearColor ColorMinHP; // 0x370(0x10)
	struct UCurveFloat* ColorCurve; // 0x380(0x08)
	struct UMaterialInstanceDynamic* _healthBarMat; // 0x388(0x08)
	struct UMaterialInstanceDynamic* _disabledBarMat; // 0x390(0x08)

	void Construct(); // Function UI_HealthWidget2.UI_HealthWidget2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x297fc00
	void SetHealthPercentage(float Value); // Function UI_HealthWidget2.UI_HealthWidget2_C.SetHealthPercentage // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void SetMaxHealthPercentage(float Value); // Function UI_HealthWidget2.UI_HealthWidget2_C.SetMaxHealthPercentage // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_UI_HealthWidget2(int32_t EntryPoint); // Function UI_HealthWidget2.UI_HealthWidget2_C.ExecuteUbergraph_UI_HealthWidget2 // (Final|UbergraphFunction) // @ game+0x297fc00
};

