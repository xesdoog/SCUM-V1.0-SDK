#ifndef UE4SS_SDK_UI_PlacedPlaceableIcon_HPP
#define UE4SS_SDK_UI_PlacedPlaceableIcon_HPP

class UUI_PlacedPlaceableIcon_C : public UUserWidget
{
    class UImage* Image_bg_black;                                                     // 0x0268 (size: 0x8)
    class UImage* Image_bg_white;                                                     // 0x0270 (size: 0x8)
    class UImage* Image_icon;                                                         // 0x0278 (size: 0x8)
    class UTexture2D* _icon;                                                          // 0x0280 (size: 0x8)

    void GetIcon(class UTexture2D*& Icon);
    void Init(class UTexture2D* Icon);
}; // Size: 0x288

#endif
