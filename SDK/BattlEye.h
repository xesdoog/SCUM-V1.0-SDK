// Class BattlEye.BattlEyeClient
// Size: 0xc0 (Inherited: 0x28)
struct UBattlEyeClient : UObject {
	char pad_28[0x98]; // 0x28(0x98)
};

// Class BattlEye.BattlEyeCommsComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UBattlEyeCommsComponent : UActorComponent {
	char pad_B0[0x18]; // 0xb0(0x18)

	void Server_ServerCommand(struct FString Command); // Function BattlEye.BattlEyeCommsComponent.Server_ServerCommand // (Net|Native|Event|Protected|NetServer|NetValidate) // @ game+0x1548cb0
	void Server_SendMessageToServer(struct TArray<char> packet); // Function BattlEye.BattlEyeCommsComponent.Server_SendMessageToServer // (Net|Native|Event|Protected|NetServer|NetValidate) // @ game+0x1548bf0
	void Client_SendMessageToClient(struct TArray<char> packet); // Function BattlEye.BattlEyeCommsComponent.Client_SendMessageToClient // (Net|Native|Event|Protected|NetClient|NetValidate) // @ game+0x1548b30
};

// Class BattlEye.BattlEyeServer
// Size: 0x100 (Inherited: 0x28)
struct UBattlEyeServer : UObject {
	char pad_28[0xd8]; // 0x28(0xd8)
};

