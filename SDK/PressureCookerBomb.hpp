#ifndef UE4SS_SDK_PressureCookerBomb_HPP
#define UE4SS_SDK_PressureCookerBomb_HPP

class APressureCookerBomb_C : public AExplosiveTrapItem
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BE0 (size: 0x8)
    class UPointLightComponent* ArmedLight;                                           // 0x0BE8 (size: 0x8)
    float LIGHT_ON_TIME;                                                              // 0x0BF0 (size: 0x4)
    float LIGHT_OFF_TIME;                                                             // 0x0BF4 (size: 0x4)

    void BP_OnArmed();
    void BP_OnDisarmed();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PressureCookerBomb(int32 EntryPoint);
}; // Size: 0xBF8

#endif
