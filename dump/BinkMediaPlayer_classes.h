// Class BinkMediaPlayer.BinkFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBinkFunctionLibrary : UBlueprintFunctionLibrary {

	struct FTimespan BinkLoadingMovie_GetTime(); // Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x150cb90
	struct FTimespan BinkLoadingMovie_GetDuration(); // Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x150cb50
	void Bink_DrawOverlays(); // Function BinkMediaPlayer.BinkFunctionLibrary.Bink_DrawOverlays // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x150cbd0
};

// Class BinkMediaPlayer.BinkMediaPlayer
// Size: 0xf8 (Inherited: 0x28)
struct UBinkMediaPlayer : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x30(0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x40(0x10)
	struct FMulticastInlineDelegate OnMediaReachedEnd; // 0x50(0x10)
	struct FMulticastInlineDelegate OnPlaybackSuspended; // 0x60(0x10)
	char Looping : 1; // 0x70(0x01)
	char StartImmediately : 1; // 0x70(0x01)
	char DelayedOpen : 1; // 0x70(0x01)
	char pad_70_3 : 5; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FVector2D BinkDestinationUpperLeft; // 0x74(0x08)
	struct FVector2D BinkDestinationLowerRight; // 0x7c(0x08)
	char pad_84[0x4]; // 0x84(0x04)
	struct FString URL; // 0x88(0x10)
	enum class EBinkMediaPlayerBinkBufferModes BinkBufferMode; // 0x98(0x01)
	enum class EBinkMediaPlayerBinkSoundTrack BinkSoundTrack; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	int32_t BinkSoundTrackStart; // 0x9c(0x04)
	enum class EBinkMediaPlayerBinkDrawStyle BinkDrawStyle; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32_t BinkLayerDepth; // 0xa4(0x04)
	char pad_A8[0x50]; // 0xa8(0x50)

	bool SupportsSeeking(); // Function BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x150d570
	bool SupportsScrubbing(); // Function BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x150d570
	bool SupportsRate(float Rate, bool Unthinned); // Function BinkMediaPlayer.BinkMediaPlayer.SupportsRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x150d4a0
	void Stop(); // Function BinkMediaPlayer.BinkMediaPlayer.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x150d480
	void SetVolume(float Rate); // Function BinkMediaPlayer.BinkMediaPlayer.SetVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x150d400
	bool SetRate(float Rate); // Function BinkMediaPlayer.BinkMediaPlayer.SetRate // (Final|Native|Public|BlueprintCallable) // @ game+0x150d370
	bool SetLooping(bool InLooping); // Function BinkMediaPlayer.BinkMediaPlayer.SetLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x150d240
	bool Seek(struct FTimespan& InTime); // Function BinkMediaPlayer.BinkMediaPlayer.Seek // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x150d1a0
	bool Rewind(); // Function BinkMediaPlayer.BinkMediaPlayer.Rewind // (Final|Native|Public|BlueprintCallable) // @ game+0x150d170
	bool Play(); // Function BinkMediaPlayer.BinkMediaPlayer.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x150d140
	bool Pause(); // Function BinkMediaPlayer.BinkMediaPlayer.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x150d110
	bool OpenUrl(struct FString NewUrl); // Function BinkMediaPlayer.BinkMediaPlayer.OpenUrl // (Final|Native|Public|BlueprintCallable) // @ game+0x150d060
	bool IsStopped(); // Function BinkMediaPlayer.BinkMediaPlayer.IsStopped // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x150d030
	bool IsPlaying(); // Function BinkMediaPlayer.BinkMediaPlayer.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x150d000
	bool IsPaused(); // Function BinkMediaPlayer.BinkMediaPlayer.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x150cfd0
	bool IsLooping(); // Function BinkMediaPlayer.BinkMediaPlayer.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x150cfa0
	bool IsInitialized(); // Function BinkMediaPlayer.BinkMediaPlayer.IsInitialized // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x150cf70
	struct FString GetUrl(); // Function BinkMediaPlayer.BinkMediaPlayer.GetUrl // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x150cf30
	struct FTimespan GetTime(); // Function BinkMediaPlayer.BinkMediaPlayer.GetTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x150cef0
	float GetRate(); // Function BinkMediaPlayer.BinkMediaPlayer.GetRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x150cec0
	struct FTimespan GetDuration(); // Function BinkMediaPlayer.BinkMediaPlayer.GetDuration // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x150ce80
	void Draw(struct UTexture* Texture, bool tonemap, int32_t out_nits, float Alpha, bool srgb_decode, bool hdr); // Function BinkMediaPlayer.BinkMediaPlayer.Draw // (Final|Native|Public|BlueprintCallable) // @ game+0x150cc90
	void CloseUrl(); // Function BinkMediaPlayer.BinkMediaPlayer.CloseUrl // (Final|Native|Public|BlueprintCallable) // @ game+0x150cc70
	bool CanPlay(); // Function BinkMediaPlayer.BinkMediaPlayer.CanPlay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x150cc20
	bool CanPause(); // Function BinkMediaPlayer.BinkMediaPlayer.CanPause // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x150cbf0
};

// Class BinkMediaPlayer.BinkMediaTexture
// Size: 0x1b0 (Inherited: 0x180)
struct UBinkMediaTexture : UTexture {
	enum class TextureAddress AddressX; // 0x178(0x01)
	enum class TextureAddress AddressY; // 0x179(0x01)
	struct UBinkMediaPlayer* MediaPlayer; // 0x180(0x08)
	enum class EPixelFormat PixelFormat; // 0x188(0x01)
	bool tonemap; // 0x189(0x01)
	float OutputNits; // 0x18c(0x04)
	float Alpha; // 0x190(0x04)
	bool DecodeSRGB; // 0x194(0x01)
	char pad_195[0x1b]; // 0x195(0x1b)

	void SetMediaPlayer(struct UBinkMediaPlayer* InMediaPlayer); // Function BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x150d2e0
	void Clear(); // Function BinkMediaPlayer.BinkMediaTexture.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x150cc50
};

// Class BinkMediaPlayer.BinkMoviePlayerSettings
// Size: 0x48 (Inherited: 0x28)
struct UBinkMoviePlayerSettings : UObject {
	enum class EBinkMoviePlayerBinkBufferModes BinkBufferMode; // 0x28(0x01)
	enum class EBinkMoviePlayerBinkSoundTrack BinkSoundTrack; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t BinkSoundTrackStart; // 0x2c(0x04)
	struct FVector2D BinkDestinationUpperLeft; // 0x30(0x08)
	struct FVector2D BinkDestinationLowerRight; // 0x38(0x08)
	enum class EPixelFormat BinkPixelFormat; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

