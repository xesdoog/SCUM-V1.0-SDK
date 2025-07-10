// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// Size: 0x28 (Inherited: 0x28)
struct USteamAuthComponentModuleInterface : UHandlerComponentFactory {
};

// Class OnlineSubsystemSteam.SteamNetConnection
// Size: 0x1c50 (Inherited: 0x1c48)
struct USteamNetConnection : UIpConnection {
	bool bIsPassthrough; // 0x1c48(0x01)
	char pad_1C49[0x7]; // 0x1c49(0x07)
};

// Class OnlineSubsystemSteam.SteamNetDriver
// Size: 0x7e8 (Inherited: 0x7e0)
struct USteamNetDriver : UIpNetDriver {
	char pad_7E0[0x8]; // 0x7e0(0x08)
};

