#ifndef UE4SS_SDK_UI_FishingContainer_HPP
#define UE4SS_SDK_UI_FishingContainer_HPP

class UUI_FishingContainer_C : public UFishingContainerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_UI_FishingContainer(int32 EntryPoint);
}; // Size: 0x288

#endif
