#ifndef UE4SS_SDK_MainMenuWidget_HPP
#define UE4SS_SDK_MainMenuWidget_HPP

class UMainMenuWidget_C : public UMainMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)

    void ExecuteUbergraph_MainMenuWidget(int32 EntryPoint);
}; // Size: 0x328

#endif
