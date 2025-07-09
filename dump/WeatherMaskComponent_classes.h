// BlueprintGeneratedClass WeatherMaskComponent.WeatherMaskComponent_C
// Size: 0x210 (Inherited: 0x200)
struct UWeatherMaskComponent_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x200(0x08)
	struct AConZPlayerController* PlayerController; // 0x208(0x08)

	void ReceiveBeginPlay(); // Function WeatherMaskComponent.WeatherMaskComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function WeatherMaskComponent.WeatherMaskComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_WeatherMaskComponent(int32_t EntryPoint); // Function WeatherMaskComponent.WeatherMaskComponent_C.ExecuteUbergraph_WeatherMaskComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x297fc00
};

