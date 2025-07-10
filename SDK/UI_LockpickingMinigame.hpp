#ifndef UE4SS_SDK_UI_LockpickingMinigame_HPP
#define UE4SS_SDK_UI_LockpickingMinigame_HPP

class UUI_LockpickingMinigame_C : public ULockpickingWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UWidgetAnimation* ShowFailure;                                              // 0x0290 (size: 0x8)
    class UWidgetAnimation* BlurWaitingForPlayer;                                     // 0x0298 (size: 0x8)
    class UWidgetAnimation* ShowSuccess;                                              // 0x02A0 (size: 0x8)
    class UWidgetAnimation* InfoFade;                                                 // 0x02A8 (size: 0x8)
    class UImage* _infiniteLockpicks;                                                 // 0x02B0 (size: 0x8)
    class UImage* _infiniteScrewdrivers;                                              // 0x02B8 (size: 0x8)
    class UImage* _lockDifficultyHardImage;                                           // 0x02C0 (size: 0x8)
    class UImage* _lockDifficultyMediumImage;                                         // 0x02C8 (size: 0x8)
    class UImage* _lockDifficultyNormalImage;                                         // 0x02D0 (size: 0x8)
    class UImage* _lockDifficultyWarning;                                             // 0x02D8 (size: 0x8)
    class UImage* BlackOverlay;                                                       // 0x02E0 (size: 0x8)
    class UTextBlock* FamePointsText;                                                 // 0x02E8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02F8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0300 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0308 (size: 0x8)
    class UImage* Image_20;                                                           // 0x0310 (size: 0x8)
    class UTextBlock* LockpicksCountText;                                             // 0x0318 (size: 0x8)
    class UImage* Progress;                                                           // 0x0320 (size: 0x8)
    class UTextBlock* RemainingTimeText;                                              // 0x0328 (size: 0x8)
    class UTextBlock* TensionToolCountText;                                           // 0x0330 (size: 0x8)
    class UImage* TextBackground;                                                     // 0x0338 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0340 (size: 0x8)

    void SetDifficultyVisuals(ELockPickingDifficulty Difficulty);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ShowInfo();
    void HideInfo();
    void OnSuccess();
    void OnFailure();
    void SetLockPickingDifficulty(ELockPickingDifficulty Value);
    void ExecuteUbergraph_UI_LockpickingMinigame(int32 EntryPoint);
}; // Size: 0x348

#endif
