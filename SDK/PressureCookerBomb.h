// BlueprintGeneratedClass PressureCookerBomb.PressureCookerBomb_C
// Size: 0xbf8 (Inherited: 0xbe0)
struct APressureCookerBomb_C : AExplosiveTrapItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xbe0(0x08)
	struct UPointLightComponent* ArmedLight; // 0xbe8(0x08)
	float LIGHT_ON_TIME; // 0xbf0(0x04)
	float LIGHT_OFF_TIME; // 0xbf4(0x04)

	void BP_OnArmed(); // Function PressureCookerBomb.PressureCookerBomb_C.BP_OnArmed // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void BP_OnDisarmed(); // Function PressureCookerBomb.PressureCookerBomb_C.BP_OnDisarmed // (Event|Public|BlueprintEvent) // @ game+0x297fc00
	void ReceiveBeginPlay(); // Function PressureCookerBomb.PressureCookerBomb_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x297fc00
	void ExecuteUbergraph_PressureCookerBomb(int32_t EntryPoint); // Function PressureCookerBomb.PressureCookerBomb_C.ExecuteUbergraph_PressureCookerBomb // (Final|UbergraphFunction) // @ game+0x297fc00
};

