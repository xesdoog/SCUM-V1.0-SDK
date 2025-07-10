#ifndef UE4SS_SDK_MainMenu_HPP
#define UE4SS_SDK_MainMenu_HPP

class AMainMenu_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class ABP_Prisoner_C* BP_Prisoner_4136_ExecuteUbergraph_MainMenu_RefProperty;     // 0x0230 (size: 0x8)
    class ASceneCapture2D* HeadCapture_ExecuteUbergraph_MainMenu_RefProperty;         // 0x0238 (size: 0x8)
    class AAkAmbientSound* AkAmbientSound_1_ExecuteUbergraph_MainMenu_RefProperty;    // 0x0240 (size: 0x8)
    class ARuntimeVirtualTextureVolume* RuntimeVirtualTextureVolume_1_ExecuteUbergraph_MainMenu_RefProperty; // 0x0248 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_MainMenu(int32 EntryPoint);
}; // Size: 0x250

#endif
