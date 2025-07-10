#ifndef UE4SS_SDK_UI_WeaponAmmoDisplayContainer_HPP
#define UE4SS_SDK_UI_WeaponAmmoDisplayContainer_HPP

class UUI_WeaponAmmoDisplayContainer_C : public UWeaponAmmoDisplayContainerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0298 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x02A0 (size: 0x8)

    void Init(class AWeapon* Weapon, float onScreenDuration, bool displayOnCenter, class UTexture2D* iconOverride);
    void OnFadedOut();
    void ExecuteUbergraph_UI_WeaponAmmoDisplayContainer(int32 EntryPoint);
}; // Size: 0x2A8

#endif
