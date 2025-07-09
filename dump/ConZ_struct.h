// Enum ConZ.EPrisonerMontage
enum class EPrisonerMontage : uint8 {
	None = 0,
	WeaponEquipRifle = 1,
	WeaponUnequipRifle = 2,
	WeaponEquipHandgun = 3,
	WeaponUnequipHandgun = 4,
	Urinate = 5,
	UrinateForced = 6,
	Defecate = 7,
	DefecateForced = 8,
	Vomit = 9,
	VomitForced = 10,
	SearchObject = 11,
	SearchPrisoner = 12,
	SearchZombie = 13,
	PatchWounds = 14,
	PatchWoundsEnd = 15,
	DrinkInteraction = 16,
	WashEyes = 17,
	Eat = 18,
	EatCan = 19,
	Drink = 20,
	Throw = 21,
	LongThrow = 22,
	LongThrowLoop = 23,
	ShortThrow = 24,
	ThrowbackGrenade = 25,
	SwapWeapons = 26,
	ChopTree = 27,
	ChopTreeEnd = 28,
	ChopLog = 29,
	ChopLogEnd = 30,
	BreakStone = 31,
	BreakStoneEnd = 32,
	SwapItemsNotWeaponToNotWeapon = 33,
	SwapItemsWeaponToWeapon = 34,
	SwapItemsNotWeaponToWeapon = 35,
	SwapItemsWeaponToNotWeapon = 36,
	SwapItemsThrowingItemToWeapon = 37,
	SwapItemsThrowingItemToNotWeapon = 38,
	SwapItemsWeaponToThrowingItem = 39,
	Craft = 40,
	Uncraft = 41,
	CheckTime = 42,
	CheckTimeWhileItemInHands = 43,
	CheckTimeWhileWeaponInHands = 44,
	CheckTemperature = 45,
	GestureShowFinger = 46,
	GestureStandSurrender = 47,
	GestureWaveHi = 48,
	GestureYouAreDead = 49,
	GestureFY = 50,
	GesturePoint = 51,
	GestureHeart = 52,
	GestureBallpalm = 53,
	GestureFacepalm = 54,
	GestureFingerGun = 55,
	GestureLaughing = 56,
	GestureSmellWave = 57,
	GestureSquat = 58,
	GestureCharge = 59,
	GestureFreeze = 60,
	GestureGetDown = 61,
	GestureGetUp = 62,
	GestureHalt = 63,
	GestureHurryUp = 64,
	GesturePointMe = 65,
	GesturePointYou = 66,
	GestureRally = 67,
	GestureThumbsUp = 68,
	GestureThumbsDown = 69,
	GestureUnderstandNo = 70,
	GestureUnderstandYes = 71,
	CommitSuicide = 72,
	CommitSuicideRare = 73,
	CommitSuicideCaptured = 74,
	LockpickRegular = 75,
	Whistle = 76,
	TuneBow = 77,
	RepairVehicle = 78,
	WashCloth = 79,
	Bury = 80,
	BuryRest = 81,
	ResumeBury = 82,
	SitOnGroundStart = 83,
	SitOnGroundEnd = 84,
	LayOnGroundStart = 85,
	LayOnGroundEnd = 86,
	IgniteFlare = 87,
	ArmTrap = 88,
	FishingEnter = 89,
	FishingLeave = 90,
	FishingCast = 91,
	FishingLongCastEnd = 92,
	FishingShortCastEnd = 93,
	FishingPullStart = 94,
	FishingPullEnd = 95,
	FishingFishCaught = 96,
	FishingKeepFish = 97,
	FishingDiscardFish = 98,
	FishingWireBreak = 99,
	ForceUnlockStanding = 100,
	ForceUnlockStandingEnd = 101,
	ForceUnlockStandingStop = 102,
	ManualUnlockStanding = 103,
	ManualUnlockStandingEnd = 104,
	ManualUnlockStandingStop = 105,
	Spill = 106,
	BlowAirIntoFire = 107,
	BlowAirIntoLowFire = 108,
	StompOutFire = 109,
	RemoveWeed = 110,
	RemoveWeedWithHoe = 111,
	ApplyPesticide = 112,
	AddFertilizer = 113,
	PlantSeed = 114,
	RemovePlant = 115,
	DestroyGarden = 116,
	DanceSwag = 117,
	DanceSlinky = 118,
	DanceJungleStep = 119,
	DanceMoonslide = 120,
	DanceFloss = 121,
	DanceOrangeJustice = 122,
	DanceShowtime = 123,
	DanceScrub = 124,
	DanceTheCarlton = 125,
	DanceGangnamStyle = 126,
	DanceTechnoViking = 127,
	DanceOhMama = 128,
	DanceLoser = 129,
	DanceSeduction = 130,
	DanceTemptation = 131,
	DanceVogue = 132,
	DanceTango = 133,
	DanceDiscoSpin = 134,
	DanceJagger = 135,
	DanceSlayinAlive = 136,
	DancePuppetDance = 137,
	DanceGunsBlazing = 138,
	DanceStepUp = 139,
	DancePartyAnimal = 140,
	DanceHardbass = 141,
	DanceKazachok = 142,
	DancePaddleDance = 143,
	DanceMoonwalk = 144,
	DanceSneaky = 145,
	DanceDeathDrop = 146,
	DanceFeline = 147,
	DanceGoddess = 148,
	DanceSultana = 149,
	DanceSerpentsCharm = 150,
	DanceBootylicious = 151,
	DanceBubbleBounce = 152,
	InjectSelf = 153,
	InjectOther = 154,
	HalloweenGesture1 = 155,
	HalloweenGesture2 = 156,
	HalloweenGesture3 = 157,
	HalloweenGesture4 = 158,
	Count = 159,
	EPrisonerMontage_MAX = 160
};

// Enum ConZ.EPrisonerAnimationSet
enum class EPrisonerAnimationSet : uint8 {
	Base = 0,
	Rifle = 1,
	RifleRelaxed = 2,
	UnarmedCombat = 3,
	Handgun = 4,
	BowRelaxed = 5,
	Bow = 6,
	CarryingItem = 7,
	HandsBound = 8,
	BaseLimping = 9,
	RifleLimping = 10,
	RifleRelaxedLimping = 11,
	UnarmedCombatLimping = 12,
	HandgunLimping = 13,
	BowRelaxedLimping = 14,
	BowLimping = 15,
	CarryingItemLimping = 16,
	HandsBoundLimping = 17,
	ChainsawRelaxed = 18,
	ChainsawRelaxedLimping = 19,
	Chainsaw = 20,
	ChainsawLimping = 21,
	Count = 22,
	EPrisonerAnimationSet_MAX = 23
};

// Enum ConZ.EWidgetDisplayInfoType
enum class EWidgetDisplayInfoType : uint8 {
	None = 0,
	FirstOverSecond = 1,
	Single = 2,
	EWidgetDisplayInfoType_MAX = 3
};

// Enum ConZ.EInteractionType
enum class EInteractionType : uint8 {
	None = 0,
	Search = 1,
	Examine = 2,
	PickUp = 3,
	PickUpAllExamined = 4,
	PickUpAllSelected = 5,
	Use = 6,
	Operate = 7,
	Drop = 8,
	DropAllSelected = 9,
	Throw = 10,
	Open = 11,
	Close = 12,
	Lock = 13,
	SetAndConnectBCULock = 14,
	RemoveBCULockNormal = 15,
	TryRemoveBCULockWithEnemyBCU = 16,
	BCUConnectLock = 17,
	BCUDisconnectLock = 18,
	Unlock = 19,
	SetLockCombination = 20,
	Push = 21,
	ForcePush = 22,
	GodModeFill = 23,
	Fill = 24,
	AdjustHeight = 25,
	ConfirmHeight = 26,
	Tank = 27,
	Craft = 28,
	Uncraft = 29,
	Create = 30,
	FixTire = 31,
	Fix = 32,
	CheckFuel = 33,
	Refuel = 34,
	RefuelGasStation = 35,
	Charge = 36,
	InsertResource = 37,
	RemoveResource = 38,
	FillResourceContainer = 39,
	Eat = 40,
	EatAll = 41,
	Drink = 42,
	DrinkAll = 43,
	Inject = 44,
	CheckTaste = 45,
	Equip = 46,
	UnEquip = 47,
	Cut = 48,
	Collect = 49,
	LightFire = 50,
	PullPin = 51,
	AddFuel = 52,
	Extinguish = 53,
	Prepare = 54,
	Cook = 55,
	Chop = 56,
	SmokeFood = 57,
	Destroy = 58,
	Store = 59,
	TakeInHands = 60,
	Clean = 61,
	Decontaminate = 62,
	DecontaminateAll = 63,
	WashCloth = 64,
	WashClothAll = 65,
	WashEyes = 66,
	RemoveFromHands = 67,
	CarryItem = 68,
	AddToQuickAccess = 69,
	AddToThrowAccess = 70,
	RemoveFromQuickAccess = 71,
	RemoveFromThrowAccess = 72,
	ChamberBullet = 73,
	LoadAmmo = 74,
	UnloadAmmo = 75,
	CheckAmmo = 76,
	Swap = 77,
	Tune = 78,
	Treat = 79,
	Join = 80,
	Split = 81,
	Unpack = 82,
	Disinfect = 83,
	Anchor = 84,
	CheckTemperature = 85,
	RollRevolverDrum = 86,
	CommitSuicide = 87,
	ModifyPaintjob = 88,
	TreatPatient = 89,
	InviteToSquad = 90,
	RemoveFromSquad = 91,
	LeaveSquad = 92,
	Urinate = 93,
	Defecate = 94,
	Vomit = 95,
	CheckTime = 96,
	AddWristwatchAlarm = 97,
	Resuscitate = 98,
	BindHands = 99,
	TightenBinds = 100,
	RemoveBinds = 101,
	LoosenBinds = 102,
	BreakBinds = 103,
	Bury = 104,
	Unbury = 105,
	Rest = 106,
	SitOnGround = 107,
	LayOnGround = 108,
	ExamineInventory = 109,
	Loot = 110,
	ClaimKill = 111,
	Disarm = 112,
	GestureShowFinger = 113,
	GestureStandSurrender = 114,
	GestureWaveHi = 115,
	GestureYouAreDead = 116,
	GestureFY = 117,
	GesturePoint = 118,
	GestureHeart = 119,
	GestureBallpalm = 120,
	GestureFacepalm = 121,
	GestureFingerGun = 122,
	GestureLaughing = 123,
	GestureSmellWave = 124,
	GestureSquat = 125,
	GestureCharge = 126,
	GestureFreeze = 127,
	GestureGetDown = 128,
	GestureGetUp = 129,
	GestureHalt = 130,
	GestureHurryUp = 131,
	GesturePointMe = 132,
	GesturePointYou = 133,
	GestureRally = 134,
	GestureThumbsUp = 135,
	GestureThumbsDown = 136,
	GestureUnderstandNo = 137,
	GestureUnderstandYes = 138,
	PlayInstrument = 139,
	Whistle = 140,
	EnterPhotoMode = 141,
	EnterVehicle = 142,
	ServiceVehicle = 143,
	InstallVehicleAttachment = 144,
	RemoveVehicleAttachment = 145,
	RepairVehicleAttachment = 146,
	BuyAndInstallVehicleAttachment = 147,
	RemoveAndSellVehicleAttachment = 148,
	SetVehicleServicePaymentPreferrence = 149,
	Buy = 150,
	Maintain = 151,
	Lockpick = 152,
	RemoveLocks = 153,
	RemoveLocksAdmin = 154,
	ForceUnlock = 155,
	AddUpgrade = 156,
	RadioTurnOn = 157,
	RadioTurnOff = 158,
	RadioIncreaseVolume = 159,
	RadioDecreaseVolume = 160,
	RadioChangeRadioStation = 161,
	StackAdd = 162,
	StackSplit = 163,
	RepairBaseElement = 164,
	RepairBaseElementArea = 165,
	RepairBaseElementsUnder25Percent = 166,
	RepairBaseElementsUnder50Percent = 167,
	RepairBaseElementsUnder75Percent = 168,
	ClaimBase = 169,
	ShowBaseFlagInfluence = 170,
	HideBaseFlagInfluence = 171,
	StartBaseFlagOvertake = 172,
	StopBaseFlagOvertake = 173,
	UpgradeBaseElement = 174,
	FlipPlaceable = 175,
	AddFlagExpansion = 176,
	OpenContainer = 177,
	ChangeItemText = 178,
	CommitItemText = 179,
	TurnOn = 180,
	TurnOff = 181,
	IncreaseAngle = 182,
	DecreaseAngle = 183,
	IncreaseLightIntensity = 184,
	DecreaseLightIntensity = 185,
	AddMotionTrigger = 186,
	AddLaserTrigger = 187,
	AddTripwireTrigger = 188,
	AddTimedTrigger = 189,
	RemoveTrigger = 190,
	ShowTrigger = 191,
	ArmTrap = 192,
	DisarmTrap = 193,
	RefuelTrap = 194,
	StartFishing = 195,
	ActivateKillbox = 196,
	FillItemWithReplenishableResource = 197,
	FillItemWithInfiniteResource = 198,
	DrinkFromReplenishableResource = 199,
	DecontaminateWithReplenishableResource = 200,
	DecontaminateAllWithReplenishableResource = 201,
	WashClothWithReplenishableResource = 202,
	WashClothAllWithReplenishableResource = 203,
	Spill = 204,
	CheckResourceType = 205,
	RemoveWeed = 206,
	ApplyPesticide = 207,
	AddFertilizer = 208,
	PlantSeed = 209,
	CollectSeeds = 210,
	RemovePlant = 211,
	DestroyGarden = 212,
	OpenCookPanel = 213,
	SetPrivateAccess = 214,
	SetPublicAccess = 215,
	SetRank1Access = 216,
	SetRank2Access = 217,
	SetRank3Access = 218,
	SetRank4Access = 219,
	MusicPlayerTurnOn = 220,
	MusicPlayerPlay = 221,
	MusicPlayerNext = 222,
	MusicPlayerPrevious = 223,
	MusicPlayerShuffle = 224,
	MusicPlayerRepeat = 225,
	MusicPlayerIncreaseVolume = 226,
	MusicPlayerDecreaseVolume = 227,
	MusicPlayerRadio = 228,
	Dance = 229,
	TradeBuy = 230,
	TradeSell = 231,
	UseATM = 232,
	Pair = 233,
	Unpair = 234,
	SayVoiceline = 235,
	HalloweenGesture1 = 236,
	HalloweenGesture2 = 237,
	HalloweenGesture3 = 238,
	HalloweenGesture4 = 239,
	AttachTrap = 240,
	TrackAnimal = 241,
	ShowRange = 242,
	HideRange = 243,
	SetProtectionTime = 244,
	EInteractionType_MAX = 245
};

// Enum ConZ.ENoiseLevel
enum class ENoiseLevel : uint8 {
	Mute = 0,
	VerySilent = 1,
	Silent = 2,
	Moderate = 3,
	Loud = 4,
	VeryLoud = 5,
	Count = 6,
	ENoiseLevel_MAX = 7
};

// Enum ConZ.EItemRarity
enum class EItemRarity : uint8 {
	ExtremelyRare = 0,
	VeryRare = 1,
	Rare = 2,
	Uncommon = 3,
	Common = 4,
	Abundant = 5,
	Count = 6,
	EItemRarity_MAX = 7
};

// Enum ConZ.EDeluxeVersion
enum class EDeluxeVersion : uint8 {
	SupporterPack1 = 0,
	SupporterPack2 = 1,
	PremiumHairstyles1 = 2,
	PremiumHairstyles2 = 3,
	Character_DannyTrejo = 4,
	Character_LuisMoncada = 5,
	WeaponPaintjobs = 6,
	WeaponCharms = 7,
	VehiclePaintjobs = 8,
	Dance = 9,
	Character_RaymondCruz = 10,
	DigitalDeluxe = 11,
	None = 12,
	EDeluxeVersion_MAX = 13
};

// Enum ConZ.EItemExhausted
enum class EItemExhausted : uint8 {
	DoNothing = 0,
	Destroy = 1,
	Uncraft = 2,
	EItemExhausted_MAX = 3
};

// Enum ConZ.EItemBlueprintPlacementBlockingType
enum class EItemBlueprintPlacementBlockingType : uint8 {
	None = 0,
	All = 1,
	OnlyFoundations = 2,
	Count = 3,
	EItemBlueprintPlacementBlockingType_MAX = 4
};

// Enum ConZ.EBodyPart
enum class EBodyPart : uint8 {
	Unknown = 0,
	Head = 1,
	Chest = 2,
	Abdomen = 3,
	ArmLeftLower = 4,
	ArmLeftUpper = 5,
	ArmRightLower = 6,
	ArmRightUpper = 7,
	LegLeftLower = 8,
	LegLeftUpper = 9,
	LegRightLower = 10,
	LegRightUpper = 11,
	Count = 12,
	EBodyPart_MAX = 13
};

// Enum ConZ.EEnvironmentClass
enum class EEnvironmentClass : uint8 {
	Indoor_Small = 0,
	Indoor_Medium = 1,
	Indoor_Large = 2,
	Outdoor_Large = 3,
	Count = 4,
	EEnvironmentClass_MAX = 5
};

// Enum ConZ.EConZGender
enum class EConZGender : uint8 {
	Unspecified = 0,
	Female = 1,
	Male = 2,
	Count = 3,
	EConZGender_MAX = 4
};

// Enum ConZ.EDetectHitCollisionType
enum class EDetectHitCollisionType : uint8 {
	None = 0,
	Head = 1,
	Body = 2,
	Legs = 3,
	EDetectHitCollisionType_MAX = 4
};

// Enum ConZ.ECharacterActionEndState
enum class ECharacterActionEndState : uint8 {
	None = 0,
	Regular = 1,
	ConditionNotMet = 2,
	Canceled = 3,
	Failed = 4,
	Terminated = 5,
	ECharacterActionEndState_MAX = 6
};

// Enum ConZ.ECharacterActionAckType
enum class ECharacterActionAckType : uint8 {
	None = 0,
	Begin = 1,
	End = 2,
	ECharacterActionAckType_MAX = 3
};

// Enum ConZ.EAttackType
enum class EAttackType : uint8 {
	Slash = 0,
	Pierce = 1,
	EAttackType_MAX = 2
};

// Enum ConZ.EHitSeverity
enum class EHitSeverity : uint8 {
	VeryLight = 0,
	Light = 1,
	Medium = 2,
	Heavy = 3,
	VeryHeavy = 4,
	Count = 5,
	EHitSeverity_MAX = 6
};

// Enum ConZ.ECharacterImpactSourceSoundCategory
enum class ECharacterImpactSourceSoundCategory : uint8 {
	Any = 0,
	Head_Bare = 1,
	Hands_Bare = 2,
	Hands_Gloved = 3,
	Legs_Bare = 4,
	Claws = 5,
	Jaws = 6,
	Blunt_Wood = 7,
	Blunt_Metal = 8,
	Sharp_Metal = 9,
	ECharacterImpactSourceSoundCategory_MAX = 10
};

// Enum ConZ.ECharacterHiddenSpawnType
enum class ECharacterHiddenSpawnType : uint8 {
	None = 0,
	Undeground = 1,
	ScaledDown = 2,
	FadeIn = 3,
	LayingDown = 4,
	ECharacterHiddenSpawnType_MAX = 5
};

// Enum ConZ.EAITeam
enum class EAITeam : uint8 {
	Prisoner = 0,
	Zombie = 1,
	Animal = 2,
	TEC1 = 3,
	Vehicle = 4,
	Neutral = 5,
	ZombieImpersonator = 6,
	Monster = 7,
	Item = 8,
	Turret = 9,
	ArmedNPC = 10,
	Num = 11,
	None = 255,
	EAITeam_MAX = 256
};

// Enum ConZ.EConZPxDominanceGroup
enum class EConZPxDominanceGroup : uint8 {
	Default = 0,
	MediumPawns = 1,
	LargePawns = 2,
	EConZPxDominanceGroup_MAX = 3
};

// Enum ConZ.EPrisonerBorderCrossingPenalty
enum class EPrisonerBorderCrossingPenalty : uint8 {
	None = 0,
	Penalty1 = 1,
	Penalty2 = 2,
	Penalty3 = 3,
	Penalty4 = 4,
	DeadPenalty = 5,
	EPrisonerBorderCrossingPenalty_MAX = 6
};

// Enum ConZ.EPrisonerCommonSpawnLocation
enum class EPrisonerCommonSpawnLocation : uint8 {
	None = 0,
	Random = 1,
	Sector = 2,
	Home = 3,
	Squad = 4,
	Event = 5,
	EPrisonerCommonSpawnLocation_MAX = 6
};

// Enum ConZ.EWeaponMalfunction
enum class EWeaponMalfunction : uint8 {
	None = 0,
	BadRound = 1,
	StovePipe = 2,
	RoundNotLoaded = 3,
	DoubleFeed = 4,
	StuckBullet = 5,
	ClipPartiallyEjected = 6,
	Count = 7,
	EWeaponMalfunction_MAX = 8
};

// Enum ConZ.EAmmunitionCartridgeState
enum class EAmmunitionCartridgeState : uint8 {
	Default = 0,
	Used = 1,
	Bad = 2,
	BadAndUsed = 3,
	EAmmunitionCartridgeState_MAX = 4
};

// Enum ConZ.EThrowingAnimationType
enum class EThrowingAnimationType : uint8 {
	Default = 0,
	FromWeapon = 1,
	FromCombat = 2,
	FromIdle = 3,
	EThrowingAnimationType_MAX = 4
};

// Enum ConZ.EPrisonerGroundStance
enum class EPrisonerGroundStance : uint8 {
	Standing = 0,
	Crouching = 1,
	Prone = 2,
	Count = 3,
	EPrisonerGroundStance_MAX = 4
};

// Enum ConZ.EPrisonerWettablePart
enum class EPrisonerWettablePart : uint8 {
	Head = 0,
	UpperBody = 1,
	LowerBody = 2,
	Feet = 3,
	Count = 4,
	EPrisonerWettablePart_MAX = 5
};

// Enum ConZ.EPrisonerMeleeTargetSelectionMode
enum class EPrisonerMeleeTargetSelectionMode : uint8 {
	Manual = 0,
	SemiAutomatic = 1,
	Automatic = 2,
	EPrisonerMeleeTargetSelectionMode_MAX = 3
};

// Enum ConZ.EMotionIntensity
enum class EMotionIntensity : uint8 {
	None = 0,
	Light = 1,
	Medium = 2,
	Heavy = 3,
	EMotionIntensity_MAX = 4
};

// Enum ConZ.ESkillLevel
enum class ESkillLevel : uint8 {
	NoSkill = 0,
	Basic = 1,
	Medium = 2,
	Advanced = 3,
	AboveAdvanced = 4,
	Count = 5,
	ESkillLevel_MAX = 6
};

// Enum ConZ.ESkillAttribute
enum class ESkillAttribute : uint8 {
	Constitution = 0,
	Dexterity = 1,
	Intelligence = 2,
	Strength = 3,
	ESkillAttribute_MAX = 4
};

// Enum ConZ.EPlayableInstrumentTone
enum class EPlayableInstrumentTone : uint8 {
	C = 0,
	Db = 1,
	D = 2,
	Eb = 3,
	E = 4,
	F = 5,
	Gb = 6,
	G = 7,
	Ab = 8,
	A = 9,
	Bb = 10,
	B = 11,
	C2 = 12,
	Count = 13,
	EPlayableInstrumentTone_MAX = 14
};

// Enum ConZ.EPrisonerAerialPose
enum class EPrisonerAerialPose : uint8 {
	FallShort = 0,
	FallLong = 1,
	SkydiveSlow = 2,
	SkydiveFast = 3,
	JumpNormal = 4,
	JumpSuper = 5,
	Landing = 6,
	Parachute = 7,
	HandsBound = 8,
	RagdollRecovery = 9,
	Ragdoll = 10,
	Count = 11,
	EPrisonerAerialPose_MAX = 12
};

// Enum ConZ.EPrisonerAquaticMode
enum class EPrisonerAquaticMode : uint8 {
	SwimmingOnSurface = 0,
	Diving = 1,
	Count = 2,
	EPrisonerAquaticMode_MAX = 3
};

// Enum ConZ.EPrisonerCombatMode
enum class EPrisonerCombatMode : uint8 {
	None = 0,
	Melee = 1,
	Ranged = 2,
	RangedADS = 3,
	EPrisonerCombatMode_MAX = 4
};

// Enum ConZ.EHandsHolstersType
enum class EHandsHolstersType : uint8 {
	Hands = 0,
	HolsterLeft = 1,
	HolsterRight = 2,
	EHandsHolstersType_MAX = 3
};

// Enum ConZ.EDamageChannel
enum class EDamageChannel : uint8 {
	UncategorizedDamage = 0,
	FallDamage = 1,
	PuppetDamage = 2,
	SuicidePuppetDamage = 3,
	SentryDamage = 4,
	AnimalDamage = 5,
	BaseDefenseDamage = 6,
	VehicleDamage = 7,
	BoxingDamage = 8,
	MeleeWeaponDamage = 9,
	ThrowingDamage = 10,
	ProjectileDamage = 11,
	ExplosiveDamage = 12,
	TrapDamage = 13,
	BurnDamage = 14,
	DamageToBases = 15,
	DamageToVehicles = 16,
	DisablingDamage = 17,
	RazorDamage = 18,
	Count = 19,
	ECustomZoneEvent_FirstOverlap = 1,
	ECustomZoneEvent_LastOverlap = 17,
	EDamageChannel_MAX = 20
};

// Enum ConZ.ECarryingItemState
enum class ECarryingItemState : uint8 {
	None = 0,
	Idle = 1,
	ECarryingItemState_MAX = 2
};

// Enum ConZ.EHoldBreathState
enum class EHoldBreathState : uint8 {
	None = 0,
	BreathIn = 1,
	HoldBreath = 2,
	BreathOut = 3,
	Breathless = 4,
	BreathInRecovery = 5,
	Count = 6,
	EHoldBreathState_MAX = 7
};

// Enum ConZ.EPlayingInstrumentState
enum class EPlayingInstrumentState : uint8 {
	None = 0,
	Exiting = 1,
	Idle = 2,
	Playing = 3,
	EPlayingInstrumentState_MAX = 4
};

// Enum ConZ.EScopingWithItemInHandsState
enum class EScopingWithItemInHandsState : uint8 {
	None = 0,
	Starting = 1,
	Scoping = 2,
	StoppingWithEffect = 3,
	StoppingNoEffect = 4,
	EScopingWithItemInHandsState_MAX = 5
};

// Enum ConZ.EVehicleWeaponAimingStance
enum class EVehicleWeaponAimingStance : uint8 {
	Default = 0,
	Leaning = 1,
	Count = 2,
	EVehicleWeaponAimingStance_MAX = 3
};

// Enum ConZ.EWeaponFiringMode
enum class EWeaponFiringMode : uint8 {
	Automatic = 0,
	SingleShot = 1,
	Burst = 2,
	Count = 3,
	EWeaponFiringMode_MAX = 4
};

// Enum ConZ.EDodgeDirectionType
enum class EDodgeDirectionType : uint8 {
	Front = 0,
	Back = 1,
	Left = 2,
	Right = 3,
	EDodgeDirectionType_MAX = 4
};

// Enum ConZ.EPrisonerMountSlotFlags
enum class EPrisonerMountSlotFlags : uint8 {
	None = 0,
	HasMountedSlot = 1,
	ShouldHideAttachedItems = 2,
	EPrisonerMountSlotFlags_MAX = 3
};

// Enum ConZ.EPrisonerMovementPace
enum class EPrisonerMovementPace : uint8 {
	Slow = 0,
	Medium = 1,
	Fast = 2,
	Count = 3,
	Min = 0,
	Max = 2
};

// Enum ConZ.EAccessLevel
enum class EAccessLevel : uint8 {
	Public = 0,
	Private = 1,
	Rank1 = 2,
	Rank2 = 3,
	Rank3 = 4,
	Rank4 = 5,
	Num = 6,
	EAccessLevel_MAX = 7
};

// Enum ConZ.EDoorStateFlags
enum class EDoorStateFlags : uint8 {
	None = 0,
	Open = 1,
	Locked = 2,
	Empty = 4,
	ChangeSide = 8,
	HasLock = 16,
	SelfClosing = 32,
	HardLocked = 64,
	ViolentlyOpened = 128,
	EDoorStateFlags_MAX = 129
};

// Enum ConZ.EOpenStateNavigationControl
enum class EOpenStateNavigationControl : uint8 {
	Unchanged = 0,
	AffectsNavigationWhenOpen = 1,
	AffectsNavigationWhenClosed = 2,
	AffectsNavigationAlways = 3,
	AffectsNavigationNever = 4,
	EOpenStateNavigationControl_MAX = 5
};

// Enum ConZ.EDoorType
enum class EDoorType : uint8 {
	Regular = 0,
	BaseDoor = 1,
	EDoorType_MAX = 2
};

// Enum ConZ.EAnimalAction
enum class EAnimalAction : uint8 {
	None = 0,
	Eat = 1,
	Rest = 2,
	Attack = 3,
	Sit = 4,
	Wait = 5,
	Intimidate = 6,
	Alert = 7,
	Turn = 8,
	EAnimalAction_MAX = 9
};

// Enum ConZ.EFishingState
enum class EFishingState : uint8 {
	None = 0,
	Idle = 1,
	EnterActive = 2,
	Active = 3,
	LeaveActive = 4,
	CastInitiated = 5,
	LongCast = 6,
	ShortCast = 7,
	LongCasting = 8,
	ShortCasting = 9,
	LongCastingEnd = 10,
	ShortCastingEnd = 11,
	Bait = 12,
	PullStart = 13,
	PullEnd = 14,
	Hook = 15,
	FishCaught = 16,
	KeepFish = 17,
	DiscardFish = 18,
	WireBreak = 19,
	EFishingState_MAX = 20
};

// Enum ConZ.EFishingActionNotifyType
enum class EFishingActionNotifyType : uint8 {
	None = 0,
	EnterActive = 1,
	LeaveActive = 2,
	StartCastEnd = 3,
	CastingThreshold = 4,
	ShortRelease = 5,
	Release = 6,
	LongCastEnd = 7,
	ShortCastEnd = 8,
	FishingActionEnd = 9,
	PullStartFinished = 10,
	PullEndFinished = 11,
	ShowCaughtFish = 12,
	KeepFish = 13,
	DiscardFish = 14,
	WireBreakEnd = 15,
	EFishingActionNotifyType_MAX = 16
};

// Enum ConZ.EFishSpecies
enum class EFishSpecies : uint8 {
	None = 0,
	Bass = 1,
	Catfish = 2,
	Pike = 3,
	Carp = 4,
	Amur = 5,
	Bleak = 6,
	Chub = 7,
	Ruffe = 8,
	PrussianCarp = 9,
	CrucianCarp = 10,
	Sardine = 11,
	Dentex = 12,
	Orata = 13,
	Tuna = 14,
	Count = 15,
	EFishSpecies_MAX = 16
};

// Enum ConZ.EWeaponMalfunctionEvent
enum class EWeaponMalfunctionEvent : uint8 {
	RoundAdded = 0,
	ChamberOpened = 1,
	ChamberOpenedCasingEjected = 2,
	ChamberOpenedRoundEjected = 3,
	ChamberClosed = 4,
	ChamberClosedRoundLoaded = 5,
	AttachmentAdded = 6,
	EWeaponMalfunctionEvent_MAX = 7
};

// Enum ConZ.EWeaponType
enum class EWeaponType : uint8 {
	Rifle = 0,
	Handgun = 1,
	Bow = 2,
	Count = 3,
	EWeaponType_MAX = 4
};

// Enum ConZ.EWeaponActionNotifyType
enum class EWeaponActionNotifyType : uint8 {
	None = 0,
	ChamberOpened = 1,
	ChamberClosed = 2,
	ChamberOpenedClosed = 3,
	BowInsertArrow = 4,
	BowRemoveArrow = 5,
	CompoundBowTuneDrawWeight = 6,
	StaminaDrained = 7,
	DropMagazine = 8,
	ClearMalfunction = 9,
	ChamberOpenedSync = 10,
	ChamberClosedSync = 11,
	ChamberOpenedClosedSync = 12,
	ClearMalfunctionRoundNotLoaded = 13,
	ShowEjectCasing = 14,
	ShowEjectLiveRound = 15,
	CrossbowCock = 16,
	Fire = 17,
	SetupForReload = 18,
	DrumRolled = 19,
	Arm = 20,
	Unarm = 21,
	EWeaponActionNotifyType_MAX = 22
};

// Enum ConZ.EWeaponBehaviourMode
enum class EWeaponBehaviourMode : uint8 {
	Default = 0,
	Inspect = 1,
	EWeaponBehaviourMode_MAX = 2
};

// Enum ConZ.EWeaponMuzzleEffectsSpawType
enum class EWeaponMuzzleEffectsSpawType : uint8 {
	AttachedToBarrel = 0,
	AtLocation = 1,
	EWeaponMuzzleEffectsSpawType_MAX = 2
};

// Enum ConZ.EWeaponCategory
enum class EWeaponCategory : uint8 {
	ThrowingWeapons = 0,
	RangedWeapons = 1,
	Handguns = 2,
	SubmachineGuns = 3,
	Rifles = 4,
	Shotguns = 5,
	AutomaticRifles = 6,
	SniperRifles = 7,
	Bow = 8,
	Count = 9,
	FirstFirearm = 2,
	LastFirearm = 7,
	EWeaponCategory_MAX = 10
};

// Enum ConZ.EWeaponFiringStateType
enum class EWeaponFiringStateType : uint8 {
	Automatic = 0,
	SemiAutomatic = 1,
	Manual = 2,
	EWeaponFiringStateType_MAX = 3
};

// Enum ConZ.EPrisonerHUDMode
enum class EPrisonerHUDMode : uint8 {
	Normal = 0,
	Target = 1,
	Map = 2,
	DroneNormal = 3,
	DroneMap = 4,
	EPrisonerHUDMode_MAX = 5
};

// Enum ConZ.EDoorManualOpenMethod
enum class EDoorManualOpenMethod : uint8 {
	CircularLever = 1,
	Crowbar = 2,
	HackingDayAndNight = 4,
	HackingDayOnly = 8,
	EDoorManualOpenMethod_MAX = 9
};

// Enum ConZ.EDoorOpenMethod
enum class EDoorOpenMethod : uint8 {
	KeycardLocked = 0,
	DialPadLocked = 1,
	PoweredOnly = 2,
	EDoorOpenMethod_MAX = 3
};

// Enum ConZ.EBunkerLightControlType
enum class EBunkerLightControlType : uint8 {
	NotControlled = 0,
	Regular = 1,
	Alarm = 2,
	EBunkerLightControlType_MAX = 3
};

// Enum ConZ.ESwitchboardPowerState
enum class ESwitchboardPowerState : uint8 {
	Powered = 0,
	Blackout = 1,
	ESwitchboardPowerState_MAX = 2
};

// Enum ConZ.EAbandonedBunkerNoiseAccumulationLevel
enum class EAbandonedBunkerNoiseAccumulationLevel : uint8 {
	None = 0,
	Commotion = 1,
	EnemyActivation = 2,
	Count = 3,
	EAbandonedBunkerNoiseAccumulationLevel_MAX = 4
};

// Enum ConZ.EItemLootTreeToExport
enum class EItemLootTreeToExport : uint8 {
	Default = 0,
	Current = 1,
	EItemLootTreeToExport_MAX = 2
};

// Enum ConZ.EItemSpawnLocationsSearchType
enum class EItemSpawnLocationsSearchType : uint8 {
	VehicleAttachments = 0,
	Pumpkins = 1,
	Count = 2,
	EItemSpawnLocationsSearchType_MAX = 3
};

// Enum ConZ.EListSpawnedVehiclesAdminCommandVehicleCategory
enum class EListSpawnedVehiclesAdminCommandVehicleCategory : uint8 {
	MotorizedVehicles = 0,
	HumanPoweredVehicles = 1,
	SUVs = 2,
	Quads = 3,
	Pickups = 4,
	Tractors = 5,
	Wheelbarrows = 6,
	Motorcycles = 7,
	Count = 8,
	EListSpawnedVehiclesAdminCommandVehicleCategory_MAX = 9
};

// Enum ConZ.EQuestsSubCommand
enum class EQuestsSubCommand : uint8 {
	Reset = 0,
	ForceEndCurrentCycle = 1,
	ClearUser = 2,
	ToggleIgnoreLimits = 3,
	StartQuest = 4,
	TimeoutTrackedQuest = 5,
	CompleteTrackedQuest = 6,
	SetTrackedQuestRemainingTime = 7,
	RefreshPoolsClient = 8,
	RefreshPoolsServer = 9,
	FillBooksWithAllQuests = 10,
	ListActiveFetchQuests = 11,
	UnlockAllTasks = 12,
	EQuestsSubCommand_MAX = 13
};

// Enum ConZ.EVehicleSpawnProperty
enum class EVehicleSpawnProperty : uint8 {
	Location = 0,
	Modifier = 1,
	EVehicleSpawnProperty_MAX = 2
};

// Enum ConZ.EFlyingDestinationReachedStatus
enum class EFlyingDestinationReachedStatus : uint8 {
	None = 0,
	Failure = 1,
	Aborted = 2,
	Success = 3,
	EFlyingDestinationReachedStatus_MAX = 4
};

// Enum ConZ.EFlyingFindPathFailureResponse
enum class EFlyingFindPathFailureResponse : uint8 {
	None = 0,
	RandomNewDestination = 1,
	ReturnToPrevious = 2,
	ForceMovement = 3,
	EFlyingFindPathFailureResponse_MAX = 4
};

// Enum ConZ.EAnimalSpecies
enum class EAnimalSpecies : uint8 {
	None = 0,
	Bear = 1,
	Bird = 2,
	Boar = 3,
	Chicken = 4,
	Cow = 5,
	Crow = 6,
	Deer = 7,
	Donkey = 8,
	Goat = 9,
	Horse = 10,
	Pig = 11,
	Rabbit = 12,
	Seagull = 13,
	Sheep = 14,
	Wolf = 15,
	Count = 16,
	EAnimalSpecies_MAX = 17
};

// Enum ConZ.EAnimalStance
enum class EAnimalStance : uint8 {
	Breathing = 0,
	Idle = 1,
	Agressive = 2,
	Alerted = 3,
	EAnimalStance_MAX = 4
};

// Enum ConZ.EAnimalActivityCycle
enum class EAnimalActivityCycle : uint8 {
	Diurnal = 0,
	Nocturnal = 1,
	Both = 2,
	EAnimalActivityCycle_MAX = 3
};

// Enum ConZ.EAnimal2Sound
enum class EAnimal2Sound : uint8 {
	None = 0,
	Idle = 1,
	Angry = 2,
	Attack = 3,
	TakeDamage = 4,
	Kill = 5,
	Scared = 6,
	Alerted = 7,
	EAnimal2Sound_MAX = 8
};

// Enum ConZ.EQuestBookMinigameNotifyType
enum class EQuestBookMinigameNotifyType : uint8 {
	BookOpened = 0,
	PageFlippedForwards = 1,
	PageFlippedBackwards = 2,
	BookClosed = 3,
	EQuestBookMinigameNotifyType_MAX = 4
};

// Enum ConZ.EDesiredParent
enum class EDesiredParent : uint8 {
	Hands = 0,
	EquipmentSlot = 1,
	EDesiredParent_MAX = 2
};

// Enum ConZ.EAnimNotifyStaminDrainType
enum class EAnimNotifyStaminDrainType : uint8 {
	OnBegin = 0,
	Continous = 1,
	EAnimNotifyStaminDrainType_MAX = 2
};

// Enum ConZ.AnimNotifyState_FadeForAction
enum class AnimNotifyState_FadeForAction : uint8 {
	All = 0,
	InFirstPersonView = 1,
	InThirdPersonView = 2,
	AnimNotifyState_MAX = 3
};

// Enum ConZ.EWaterZoneType
enum class EWaterZoneType : uint8 {
	None = 0,
	Shallow = 1,
	Deep = 2,
	Weeds = 3,
	EWaterZoneType_MAX = 4
};

// Enum ConZ.EArmedNPCTurnRate
enum class EArmedNPCTurnRate : uint8 {
	Slow = 0,
	Fast = 1,
	Count = 2,
	EArmedNPCTurnRate_MAX = 3
};

// Enum ConZ.EArmedNPCCommonStates
enum class EArmedNPCCommonStates : uint8 {
	None = 0,
	Idle = 1,
	Alerted = 2,
	AlertedByDamage = 3,
	InvestigateLocation = 4,
	Combat = 5,
	OpenDoor = 6,
	HitReact = 7,
	Count = 8,
	EArmedNPCCommonStates_MAX = 9
};

// Enum ConZ.EArmedNPCAnimation
enum class EArmedNPCAnimation : uint8 {
	InvestigateArea = 0,
	OpenDoors = 1,
	Count = 2,
	EArmedNPCAnimation_MAX = 3
};

// Enum ConZ.EArmedNPCVoiceLine
enum class EArmedNPCVoiceLine : uint8 {
	Idle = 0,
	HeardNoise = 1,
	HeardFootsteps = 2,
	HeardGunshot = 3,
	NoticedPlayer = 4,
	AggroedByPlayer = 5,
	Count = 6,
	EArmedNPCVoiceLine_MAX = 7
};

// Enum ConZ.EArmedNPCPersonality
enum class EArmedNPCPersonality : uint8 {
	Hopeful = 0,
	Nervous = 1,
	Depressed = 2,
	Psychotic = 3,
	Quiet = 4,
	Tactical = 5,
	Responsible = 6,
	Lazy = 7,
	Belligerent = 8,
	Count = 9,
	EArmedNPCPersonality_MAX = 10
};

// Enum ConZ.ENPCMoveRequestResult
enum class ENPCMoveRequestResult : uint8 {
	RepeatedRequest = 0,
	CurrentSegmentIsNavigationLink = 1,
	Failed = 2,
	AlreadyAtGoal = 3,
	RequestSuccessful = 4,
	ENPCMoveRequestResult_MAX = 5
};

// Enum ConZ.EArmedNPCBaseStimulusTag
enum class EArmedNPCBaseStimulusTag : uint8 {
	SoundGeneric = 0,
	SoundFootsteps = 1,
	SoundGunshot = 2,
	DamageMelee = 3,
	DamageProjectile = 4,
	Count = 5,
	EArmedNPCBaseStimulusTag_MAX = 6
};

// Enum ConZ.EArmedNPCBaseAttackType
enum class EArmedNPCBaseAttackType : uint8 {
	Front = 0,
	Leg = 1,
	Bash = 2,
	Count = 3,
	EArmedNPCBaseAttackType_MAX = 4
};

// Enum ConZ.EArmedNPCBaseMovementSpeed
enum class EArmedNPCBaseMovementSpeed : uint8 {
	Slow = 0,
	SlowAimingRifle = 1,
	Medium = 2,
	Fast = 3,
	Count = 4,
	EArmedNPCBaseMovementSpeed_MAX = 5
};

// Enum ConZ.EArmedNPCBaseMovementPace
enum class EArmedNPCBaseMovementPace : uint8 {
	Slow = 0,
	Medium = 1,
	Fast = 2,
	Count = 3,
	EArmedNPCBaseMovementPace_MAX = 4
};

// Enum ConZ.EWeaponManualBowState
enum class EWeaponManualBowState : uint8 {
	Idle = 0,
	Fire = 1,
	Reload = 2,
	EWeaponManualBowState_MAX = 3
};

// Enum ConZ.EWeaponManualCommonState
enum class EWeaponManualCommonState : uint8 {
	Idle = 0,
	Fire = 1,
	Reload = 2,
	EWeaponManualCommonState_MAX = 3
};

// Enum ConZ.EWeaponManualCrossbowState
enum class EWeaponManualCrossbowState : uint8 {
	Idle = 0,
	Fire = 1,
	Reload = 2,
	EWeaponManualCrossbowState_MAX = 3
};

// Enum ConZ.EButtonEventType
enum class EButtonEventType : uint8 {
	None = 0,
	Hover = 1,
	ButtonPressed = 2,
	ButtonReleased = 3,
	ButtonAlerted = 4,
	Default = 0,
	EButtonEventType_MAX = 5
};

// Enum ConZ.EGridOccupancyFlag
enum class EGridOccupancyFlag : uint8 {
	None = 0,
	BB_FlagArea = 1,
	Water = 2,
	TEC1Facility = 4,
	CustomZone = 8,
	GameEvent = 16,
	Count = 17,
	DefaultForbiddenNoWater = 29,
	DefaultForbidden = 31,
	Default = 0,
	EGridOccupancyFlag_MAX = 32
};

// Enum ConZ.EBankCardType
enum class EBankCardType : uint8 {
	None = 0,
	Starter = 1,
	Classic = 2,
	Gold = 3,
	Count = 4,
	EBankCardType_MAX = 5
};

// Enum ConZ.ECurrencyType
enum class ECurrencyType : uint8 {
	None = 0,
	Normal = 1,
	Gold = 2,
	Count = 3,
	ECurrencyType_MAX = 4
};

// Enum ConZ.EBankMinigameInitiatorType
enum class EBankMinigameInitiatorType : uint8 {
	None = 0,
	ATM = 1,
	Banker = 2,
	Defalut = 1,
	Count = 2,
	EBankMinigameInitiatorType_MAX = 3
};

// Enum ConZ.ECardManagementOperation
enum class ECardManagementOperation : uint8 {
	None = 0,
	Renewal = 1,
	Cancellation = 2,
	ECardManagementOperation_MAX = 3
};

// Enum ConZ.ECardRenewalDisabledReason
enum class ECardRenewalDisabledReason : uint8 {
	None = 0,
	AtATM = 1,
	NoFreeRenewalsRemaining = 2,
	ECardRenewalDisabledReason_MAX = 3
};

// Enum ConZ.EPinEntryReason
enum class EPinEntryReason : uint8 {
	None = 0,
	CardCreation = 1,
	CardUnlocking = 2,
	EPinEntryReason_MAX = 3
};

// Enum ConZ.EBankATMCardUIType
enum class EBankATMCardUIType : uint8 {
	None = 0,
	Starter = 1,
	Classic = 2,
	Gold = 3,
	EBankATMCardUIType_MAX = 4
};

// Enum ConZ.EBlowAirAnimHeight
enum class EBlowAirAnimHeight : uint8 {
	Low = 0,
	High = 1,
	EBlowAirAnimHeight_MAX = 2
};

// Enum ConZ.EBoatSDFType
enum class EBoatSDFType : uint8 {
	None = 0,
	SM_MotorBoat_01 = 1,
	SM_MotorBoat_02 = 2,
	EBoatSDFType_MAX = 3
};

// Enum ConZ.EBoatPaddlingState
enum class EBoatPaddlingState : uint8 {
	None = 0,
	Left = 1,
	Right = 2,
	EBoatPaddlingState_MAX = 3
};

// Enum ConZ.EBoatSailsState
enum class EBoatSailsState : uint8 {
	Folded = 0,
	Deployed = 1,
	Broken = 2,
	EBoatSailsState_MAX = 3
};

// Enum ConZ.EBoatControlType
enum class EBoatControlType : uint8 {
	None = 0,
	MotorProppeled = 1,
	Rowing = 2,
	Paddling = 3,
	Sailing = 4,
	EBoatControlType_MAX = 5
};

// Enum ConZ.ESplineAxis
enum class ESplineAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	ESplineAxis_MAX = 3
};

// Enum ConZ.EWireType
enum class EWireType : uint8 {
	Green = 0,
	Yellow = 1,
	Red = 2,
	Count = 3,
	EWireType_MAX = 4
};

// Enum ConZ.EBoundBodyPart
enum class EBoundBodyPart : uint8 {
	Hands = 0,
	Feet = 1,
	HandsInitial = 2,
	EBoundBodyPart_MAX = 3
};

// Enum ConZ.EBrennerStimulusTag
enum class EBrennerStimulusTag : uint8 {
	Generic = 0,
	Alarm = 1,
	Target = 2,
	Count = 3,
	EBrennerStimulusTag_MAX = 4
};

// Enum ConZ.EBrennerAnimation
enum class EBrennerAnimation : uint8 {
	ExitHibernationChamber = 0,
	InvestigateArea = 1,
	OpenDoubleDoors = 2,
	Rage = 3,
	Twitch = 4,
	Hop = 5,
	Count = 6,
	EBrennerAnimation_MAX = 7
};

// Enum ConZ.EBrennerAttackType
enum class EBrennerAttackType : uint8 {
	Front = 0,
	Back = 1,
	Leg = 2,
	AllAround = 3,
	Charge = 4,
	Flamethrower = 5,
	Count = 6,
	EBrennerAttackType_MAX = 7
};

// Enum ConZ.EBrennerMovementPace
enum class EBrennerMovementPace : uint8 {
	Slow = 0,
	Medium = 1,
	Fast = 2,
	Count = 3,
	EBrennerMovementPace_MAX = 4
};

// Enum ConZ.EBrennerState
enum class EBrennerState : uint8 {
	None = 0,
	Hibernate = 1,
	ExitChamber = 2,
	Alerted = 3,
	InvestigateArea = 4,
	Combat = 5,
	OpenDoor = 6,
	ReturnToHibernation = 7,
	Rage = 8,
	HitReact = 9,
	Count = 10,
	EBrennerState_MAX = 11
};

// Enum ConZ.EBruiseZone
enum class EBruiseZone : uint8 {
	Left = 0,
	Middle = 1,
	Right = 2,
	Count = 3,
	EBruiseZone_MAX = 4
};

// Enum ConZ.EBruiseLayer
enum class EBruiseLayer : uint8 {
	Light = 0,
	Medium = 1,
	Hard = 2,
	Count = 3,
	EBruiseLayer_MAX = 4
};

// Enum ConZ.ERawByteStreamType
enum class ERawByteStreamType : uint8 {
	Generic = 0,
	AdminCommandSquadInfoDump = 1,
	AdminCommandLootDump = 2,
	AdminCommandItemSpawnLocationsDump = 3,
	ERawByteStreamType_MAX = 4
};

// Enum ConZ.ECardinalDirection
enum class ECardinalDirection : uint8 {
	None = 0,
	North = 1,
	East = 2,
	South = 3,
	West = 4,
	ECardinalDirection_MAX = 5
};

// Enum ConZ.EChainsawEngineState
enum class EChainsawEngineState : uint8 {
	TurnedOff = 0,
	TurnedOn = 1,
	EChainsawEngineState_MAX = 2
};

// Enum ConZ.EChainsawOwnerRelatedFunctionalityState
enum class EChainsawOwnerRelatedFunctionalityState : uint8 {
	Default = 0,
	PlayingSound = 1,
	PendingTurnOn = 2,
	PendingTurnOff = 3,
	EChainsawOwnerRelatedFunctionalityState_MAX = 4
};

// Enum ConZ.ERotateOnArrivalMode
enum class ERotateOnArrivalMode : uint8 {
	DoNotRotate = 0,
	SetToGoalRotation = 1,
	RotateTowardsGoalLocation = 2,
	ERotateOnArrivalMode_MAX = 3
};

// Enum ConZ.ECharacterActionActivity
enum class ECharacterActionActivity : uint8 {
	None = 0,
	AimDownTheSights = 1,
	ECharacterActionActivity_MAX = 2
};

// Enum ConZ.ECharacterActionTerminatingEvent
enum class ECharacterActionTerminatingEvent : uint8 {
	Generic = 0,
	InputKeyEsc = 1,
	ToolUnavailable = 2,
	FirePressed = 3,
	SwimmingStarted = 4,
	ECharacterActionTerminatingEvent_MAX = 5
};

// Enum ConZ.ECharacterActionNotifyType
enum class ECharacterActionNotifyType : uint8 {
	None = 0,
	AddMagazine = 1,
	RemoveMagazine = 2,
	InsertCartridge = 3,
	InsertCartridgeAtFront = 4,
	SwapWeapons = 5,
	Chop = 6,
	CommitSuicide = 7,
	IgniteFlare = 8,
	BuryBreach = 9,
	BuryDump = 10,
	ThrowFPReleased = 11,
	ThrowTPReleased = 12,
	ThrowFinished = 13,
	StopUsingHandCorrections = 14,
	PinPulled = 15,
	CheckSpeedAndAngle = 16,
	Unmount = 17,
	ChangeWeaponFiringMode = 18,
	OpenDoor = 19,
	CloseDoor = 20,
	RemoveAmmoFromWeapon = 21,
	CheckWeaponAmmo = 22,
	CheckWeaponFiringMode = 23,
	ChainsawStartEngineLoop = 24,
	ShowItemStatus = 25,
	SpawnParticles = 26,
	DestroyParticles = 27,
	StartFire = 28,
	Urinate = 29,
	ShowPenis = 30,
	HidePenis = 31,
	ECharacterActionNotifyType_MAX = 32
};

// Enum ConZ.ECharacterActionState
enum class ECharacterActionState : uint8 {
	None = 0,
	WaitingBeginOnServer = 1,
	Executing = 2,
	Ended = 3,
	ECharacterActionState_MAX = 4
};

// Enum ConZ.ECharacterActionFlags
enum class ECharacterActionFlags : uint8 {
	None = 0,
	ClientWaitBeginOnServer = 1,
	AllWaitEndOnOwningClient = 2,
	CanBeAborted = 4,
	ECharacterActionFlags_MAX = 5
};

// Enum ConZ.ECharacterActionConstraint
enum class ECharacterActionConstraint : uint8 {
	None = 0,
	Move = 1,
	Turn = 2,
	Stance = 8,
	ProneInOut = 16,
	Lean = 32,
	ControlVehicle = 64,
	ECharacterActionConstraint_MAX = 65
};

// Enum ConZ.ECharacterLegsImpactSoundCategory
enum class ECharacterLegsImpactSoundCategory : uint8 {
	Any = 0,
	Bare = 1,
	Blocked = 2,
	LightlyClothed = 3,
	ECharacterLegsImpactSoundCategory_MAX = 4
};

// Enum ConZ.ECharacterArmsImpactSoundCategory
enum class ECharacterArmsImpactSoundCategory : uint8 {
	Any = 0,
	Bare = 1,
	Blocked = 2,
	LightlyClothed = 3,
	ECharacterArmsImpactSoundCategory_MAX = 4
};

// Enum ConZ.ECharacterTorsoImpactSoundCategory
enum class ECharacterTorsoImpactSoundCategory : uint8 {
	Any = 0,
	Bare = 1,
	Blocked = 2,
	LightlyClothed = 3,
	ECharacterTorsoImpactSoundCategory_MAX = 4
};

// Enum ConZ.ECharacterHeadImpactSoundCategory
enum class ECharacterHeadImpactSoundCategory : uint8 {
	Any = 0,
	Bare = 1,
	Blocked = 2,
	Helmet = 3,
	ECharacterHeadImpactSoundCategory_MAX = 4
};

// Enum ConZ.ECharacterPainSoundSeverity
enum class ECharacterPainSoundSeverity : uint8 {
	Light = 0,
	Medium = 1,
	Heavy = 2,
	Stun = 3,
	Knockout = 4,
	Death = 5,
	ECharacterPainSoundSeverity_MAX = 6
};

// Enum ConZ.EEncounterAllowedGroupSpawnPointTypeFlag
enum class EEncounterAllowedGroupSpawnPointTypeFlag : uint8 {
	None = 0,
	ArmedNPC = 1,
	EEncounterAllowedGroupSpawnPointTypeFlag_MAX = 2
};

// Enum ConZ.ESpawnType
enum class ESpawnType : uint8 {
	None = 0,
	Exterior = 1,
	Interior = 2,
	ESpawnType_MAX = 3
};

// Enum ConZ.ECharacterStatsOrderByField
enum class ECharacterStatsOrderByField : uint8 {
	FamePoints = 0,
	EventScore = 1,
	EventKills = 2,
	EventDeaths = 3,
	ECharacterStatsOrderByField_MAX = 4
};

// Enum ConZ.ESpamSeverity
enum class ESpamSeverity : uint8 {
	None = 0,
	Mild = 1,
	Medium = 2,
	Severe = 3,
	Extreme = 4,
	Max = 4
};

// Enum ConZ.EChatType
enum class EChatType : uint8 {
	Default = 0,
	Local = 1,
	Global = 2,
	Squad = 3,
	Admin = 4,
	CommandsOnly = 5,
	ServerMessage = 6,
	Error = 7,
	EChatType_MAX = 8
};

// Enum ConZ.EMusicPlayerCommandType
enum class EMusicPlayerCommandType : uint8 {
	TurnOnOff = 0,
	PlayPause = 1,
	RadioMusicPlayer = 2,
	EMusicPlayerCommandType_MAX = 3
};

// Enum ConZ.EInteractionTargetType
enum class EInteractionTargetType : uint8 {
	Self = 0,
	HoveredInteractable = 1,
	Specified = 2,
	EInteractionTargetType_MAX = 3
};

// Enum ConZ.EClothesDamageVisualState
enum class EClothesDamageVisualState : uint8 {
	None = 0,
	SmallDamage = 1,
	BigDamage = 2,
	SmallPatches = 4,
	BigPatches = 8,
	EClothesDamageVisualState_MAX = 9
};

// Enum ConZ.ECollisionDamageType
enum class ECollisionDamageType : uint8 {
	Undefined = 0,
	PhysicalCollision = 1,
	Melee = 2,
	Projectile = 3,
	Throw = 4,
	ECollisionDamageType_MAX = 5
};

// Enum ConZ.ECompassType
enum class ECompassType : uint8 {
	None = 0,
	NorthOnly = 1,
	CardinalOnly = 2,
	CardinalAndIntercardinal = 3,
	Everything = 4,
	Count = 5,
	ECompassType_MAX = 6
};

// Enum ConZ.EAnimalMovementPace
enum class EAnimalMovementPace : uint8 {
	Sneak = 0,
	Walk = 1,
	Trot = 2,
	Run = 3,
	EAnimalMovementPace_MAX = 4
};

// Enum ConZ.EAnimalAgressivness
enum class EAnimalAgressivness : uint8 {
	Timid = 0,
	Moderate = 1,
	Agressive = 2,
	EAnimalAgressivness_MAX = 3
};

// Enum ConZ.EAnimalMode
enum class EAnimalMode : uint8 {
	None = 0,
	Roam = 1,
	Alert = 2,
	Observe = 3,
	TrotAway = 4,
	Aggro = 5,
	Flee = 6,
	EAnimalMode_MAX = 7
};

// Enum ConZ.EBaseBuildingDebugMode
enum class EBaseBuildingDebugMode : uint8 {
	None = 0,
	Basic = 1,
	RadialDamage = 2,
	InteractionZones = 3,
	BaseBounds = 4,
	EBaseBuildingDebugMode_MAX = 5
};

// Enum ConZ.EConZBaseErrorMessage
enum class EConZBaseErrorMessage : uint8 {
	None = 0,
	CantPlaceAreaRestricted = 1,
	CantPlaceDuplicateFlag = 2,
	CantPlaceEnemyFlag = 3,
	CantPlaceMustBeOnFoundation = 4,
	CantPlaceOnOtherElements = 5,
	CantPlaceNoBase = 6,
	CantPlaceNoFlag = 7,
	CantPlaceMaxInstances = 8,
	CantPlaceNotSquadLeaderToPlaceFlag = 9,
	EConZBaseErrorMessage_MAX = 10
};

// Enum ConZ.EConZBaseEventType
enum class EConZBaseEventType : uint8 {
	None = 0,
	ElementConstructed = 1,
	ElementRepaired = 2,
	EConZBaseEventType_MAX = 3
};

// Enum ConZ.EConZPlacementHeightType
enum class EConZPlacementHeightType : uint8 {
	LowestPointHeight = 0,
	HighestPointHeight = 1,
	AveragePointHeight = 2,
	EConZPlacementHeightType_MAX = 3
};

// Enum ConZ.FConZBaseFlagType
enum class FConZBaseFlagType : uint8 {
	None = 0,
	Friendly = 1,
	Enemy = 2,
	FConZBaseFlagType_MAX = 3
};

// Enum ConZ.EDestroyElementReason
enum class EDestroyElementReason : uint8 {
	None = 0,
	User = 1,
	Upgrade = 2,
	Internal = 3,
	Damage = 4,
	Decay = 5,
	MovedOutOfFlagArea = 6,
	EDestroyElementReason_MAX = 7
};

// Enum ConZ.ECreateElementReason
enum class ECreateElementReason : uint8 {
	Default = 0,
	Load = 1,
	ECreateElementReason_MAX = 2
};

// Enum ConZ.ESnapMarkerOverrideType
enum class ESnapMarkerOverrideType : uint8 {
	LeaveAll = 0,
	LeaveAllButSpecified = 1,
	RemoveAll = 2,
	RemoveAllButSpecified = 3,
	ESnapMarkerOverrideType_MAX = 4
};

// Enum ConZ.EElementSnapMarkerSocketType
enum class EElementSnapMarkerSocketType : int32 {
	None = 0,
	Horizontal = 1,
	VerticalTop = 2,
	VerticalBottom = 4,
	TowerLevel1 = 8,
	TowerLevel2 = 16,
	Door = 32,
	WallSocket = 64,
	CeilingSocket = 128,
	Stairs = 256,
	WallPlatform = 512,
	BedTop = 1024,
	HorizontalLeft = 2048,
	HorizontalRight = 4096,
	EmptySocket13 = 8192,
	EmptySocket14 = 16384,
	EmptySocket15 = 32768,
	EElementSnapMarkerSocketType_MAX = 32769
};

// Enum ConZ.EBaseElementType
enum class EBaseElementType : int32 {
	None = 0,
	Default = 1,
	WoodenPalisade = 2,
	SandBox = 4,
	Door = 8,
	Well = 16,
	Platform = 32,
	Watchtower = 64,
	GunRack = 128,
	Foundation = 256,
	Flag = 512,
	WallOrnament = 1024,
	CeilingOrnament = 2048,
	Cabin = 4096,
	Stairs = 8192,
	NewWalls = 16384,
	WallGunRack = 32768,
	Modular = 65536,
	ModularFoundation = 65792,
	All = 1048575,
	EBaseElementType_MAX = 1048576
};

// Enum ConZ.EBaseElementPaintingMode
enum class EBaseElementPaintingMode : uint8 {
	None = 0,
	SingleColor = 1,
	DoubleSide = 2,
	EBaseElementPaintingMode_MAX = 3
};

// Enum ConZ.EBoatSailsState_Deprecated
enum class EBoatSailsState_Deprecated : uint8 {
	Folded = 0,
	Deployed = 1,
	Broken = 2,
	EBoatSailsState_MAX = 3
};

// Enum ConZ.EBoatMountControlType_Deprecated
enum class EBoatMountControlType_Deprecated : uint8 {
	MotorProppeled = 0,
	Rowing = 1,
	Paddling = 2,
	Sailing = 3,
	EBoatMountControlType_MAX = 4
};

// Enum ConZ.EBorderSizes
enum class EBorderSizes : uint8 {
	OneByOne = 0,
	TwoByTwo = 1,
	FourByFour = 2,
	EBorderSizes_MAX = 3
};

// Enum ConZ.ECharacterHostileState
enum class ECharacterHostileState : uint8 {
	None = 0,
	Idle = 1,
	AlertedWithoutLineOfSight = 2,
	AlertedWithLineOfSight = 3,
	ECharacterHostileState_MAX = 4
};

// Enum ConZ.EMultiplayerDisabledReason
enum class EMultiplayerDisabledReason : uint8 {
	None = 0,
	FileIntegrityCompromised = 1,
	DllIntegrityCompromised = 2,
	EMultiplayerDisabledReason_MAX = 3
};

// Enum ConZ.EMapSpawnCellFlags
enum class EMapSpawnCellFlags : int32 {
	None = 0,
	PlayerSpawn = 2,
	CargoSpawn = 4,
	TournamentSpawn = 8,
	IsSnowRegion = 1024,
	IsExtraExcludeForNewPlayers = 2048,
	IsExtraExcludeForCargosNearPOIs = 4096,
	OccupiedByPlayer = 1048576,
	OccupiedByNewPlayer = 2097152,
	OccupiedByBB = 4194304,
	OccupiedByEvent = 8388608,
	EMapSpawnCellFlags_MAX = 8388609
};

// Enum ConZ.EPlayPreparationsState
enum class EPlayPreparationsState : uint8 {
	StreamingCheck = 0,
	AuthSend = 1,
	AuthReceive = 2,
	InitialSyncSend = 3,
	InitialSyncReceive = 4,
	ProcessInitialSync = 5,
	SucceededSyncSend = 6,
	SucceededSyncReceive = 7,
	Succeeded = 8,
	Failed = 9,
	EPlayPreparationsState_MAX = 10
};

// Enum ConZ.EGameplayLogCategory
enum class EGameplayLogCategory : uint8 {
	None = 0,
	LogMinigame = 1,
	LogTrap = 2,
	LogBaseBuilding = 3,
	LogExplosives = 4,
	LogBCU = 5,
	LogBunkerLock = 6,
	LogChest = 7,
	LogQuest = 8,
	EGameplayLogCategory_MAX = 9
};

// Enum ConZ.ECharacterModificationType
enum class ECharacterModificationType : uint8 {
	None = 0,
	PlasticSurgery = 1,
	Haircut = 2,
	ECharacterModificationType_MAX = 3
};

// Enum ConZ.EConZSquadMemberRank
enum class EConZSquadMemberRank : uint8 {
	None = 0,
	Member = 1,
	Enforcer = 2,
	Underboss = 3,
	Boss = 4,
	EConZSquadMemberRank_MAX = 5
};

// Enum ConZ.EConZWaterSplineType
enum class EConZWaterSplineType : uint8 {
	None = 0,
	River = 1,
	Lake = 2,
	Ocean = 3,
	Island = 4,
	EConZWaterSplineType_MAX = 5
};

// Enum ConZ.EConZDeveloperIdFlag
enum class EConZDeveloperIdFlag : uint8 {
	None = 0,
	ActiveDuringTesting = 1,
	EConZDeveloperIdFlag_MAX = 2
};

// Enum ConZ.EBiomeType
enum class EBiomeType : uint8 {
	None = 0,
	Cold = 1,
	Forest = 2,
	South = 3,
	Count = 4,
	EBiomeType_MAX = 5
};

// Enum ConZ.ECookingControlButtonVisual
enum class ECookingControlButtonVisual : uint8 {
	Disabled = 0,
	Normal = 1,
	Hovered = 2,
	Clicked = 3,
	ECookingControlButtonVisual_MAX = 4
};

// Enum ConZ.ECookingControlButtonState
enum class ECookingControlButtonState : uint8 {
	RemoveRecipe = 0,
	RemoveRecipeUnavailable = 1,
	Cook = 2,
	CookCancel = 3,
	CookUnavailable = 4,
	Timer = 5,
	Throbber = 6,
	ECookingControlButtonState_MAX = 7
};

// Enum ConZ.ECookingDialDetailLevel
enum class ECookingDialDetailLevel : uint8 {
	NoSkill = 0,
	Basic = 1,
	Medium = 2,
	Advanced = 3,
	AdvancedPlus = 3,
	ECookingDialDetailLevel_MAX = 4
};

// Enum ConZ.ECookingIngredientQuantityType
enum class ECookingIngredientQuantityType : uint8 {
	Solid = 0,
	Liquid = 1,
	ECookingIngredientQuantityType_MAX = 2
};

// Enum ConZ.ECookingTemperatureControlType
enum class ECookingTemperatureControlType : uint8 {
	Linear = 0,
	Radial = 1,
	NotAvailable = 2,
	ECookingTemperatureControlType_MAX = 3
};

// Enum ConZ.ECookingIngredientNecessity
enum class ECookingIngredientNecessity : uint8 {
	None = 0,
	Main = 1,
	Optional = 2,
	ECookingIngredientNecessity_MAX = 3
};

// Enum ConZ.EFoodCookLevel
enum class EFoodCookLevel : uint8 {
	Raw = 0,
	Undercooked = 1,
	Cooked = 2,
	Overcooked = 3,
	Burned = 4,
	EFoodCookLevel_MAX = 5
};

// Enum ConZ.EFoodCookQuality
enum class EFoodCookQuality : uint8 {
	Ruined = 0,
	Bad = 1,
	Poor = 2,
	Good = 3,
	Excellent = 4,
	Perfect = 5,
	EFoodCookQuality_MAX = 6
};

// Enum ConZ.ECookingRecipesSort
enum class ECookingRecipesSort : uint8 {
	Default = 0,
	AlphabeticalAscending = 1,
	AlphabeticalDescending = 2,
	ECookingRecipesSort_MAX = 3
};

// Enum ConZ.ECookingUtilityOverviewPage
enum class ECookingUtilityOverviewPage : uint8 {
	AddRecipe = 0,
	IngredientsForRecipe = 1,
	CookingProgress = 2,
	CookingFinished = 3,
	None = 4,
	ECookingUtilityOverviewPage_MAX = 5
};

// Enum ConZ.EOptionalState
enum class EOptionalState : uint8 {
	None = 0,
	Add = 1,
	Remove = 2,
	EOptionalState_MAX = 3
};

// Enum ConZ.ECraftingIngredientMixingType
enum class ECraftingIngredientMixingType : uint8 {
	NoMixing = 0,
	LimitToClass = 1,
	LimitToType = 2,
	Unlimited = 3,
	ECraftingIngredientMixingType_MAX = 4
};

// Enum ConZ.ECraftingIngredientPurpose
enum class ECraftingIngredientPurpose : uint8 {
	Material = 0,
	Tool = 1,
	ECraftingIngredientPurpose_MAX = 2
};

// Enum ConZ.ECustomZoneEvent
enum class ECustomZoneEvent : uint8 {
	FallDamage = 0,
	PuppetDamage = 1,
	SuicidePuppetDamage = 2,
	SentryDamage = 3,
	AnimalDamage = 4,
	BaseDefenseDamage = 5,
	VehicleDamage = 6,
	BoxingDamage = 7,
	MeleeWeaponDamage = 8,
	ThrowingDamage = 9,
	ProjectileDamage = 10,
	ExplosiveDamage = 11,
	TrapDamage = 12,
	BurnDamage = 13,
	DamageToBases = 14,
	DamageToVehicles = 15,
	DisablingDamage = 16,
	PlayerLockpicking = 17,
	WorldLockpicking = 18,
	BaseBuilding = 19,
	FlagOvertake = 20,
	VehicleParking = 21,
	AvailabilityGrid = 22,
	ChestParking = 23,
	DropshipEncounterSpawning = 24,
	AutoCloseVehicleDoorsOnExit = 25,
	Count = 26,
	EDamageChannel_FirstOverlap = 0,
	EDamageChannel_LastOverlap = 16,
	ECustomZoneEvent_MAX = 27
};

// Enum ConZ.EDefaultCustomZoneState
enum class EDefaultCustomZoneState : uint8 {
	NotDefault = 0,
	Unmodified = 1,
	Modified = 2,
	Deleted = 3,
	EDefaultCustomZoneState_MAX = 4
};

// Enum ConZ.ECustomZoneShape
enum class ECustomZoneShape : uint8 {
	Circle = 0,
	Rectangle = 1,
	Count = 2,
	ECustomZoneShape_MAX = 3
};

// Enum ConZ.ECustomZoneEventHandlingMethod
enum class ECustomZoneEventHandlingMethod : uint8 {
	Ignore = 0,
	Allow = 1,
	Block = 2,
	Count = 3,
	ECustomZoneEventHandlingMethod_MAX = 4
};

// Enum ConZ.ECustomZoneSettingsMapMode
enum class ECustomZoneSettingsMapMode : uint8 {
	None = 0,
	AddCircleRegion = 1,
	AddRectangleRegion = 2,
	RemoveRegion = 3,
	ECustomZoneSettingsMapMode_MAX = 4
};

// Enum ConZ.EDamageTargetType
enum class EDamageTargetType : uint8 {
	Player = 0,
	Animal = 1,
	Puppet = 2,
	Vehicle = 3,
	BaseBuilding = 4,
	Sentry = 5,
	DeployableSentry = 6,
	Dropship = 7,
	Turret = 8,
	Razor = 9,
	Item = 10,
	Count = 11,
	EDamageTargetType_MAX = 12
};

// Enum ConZ.EDamageMagnitudeType
enum class EDamageMagnitudeType : uint8 {
	Small = 0,
	Medium = 1,
	Large = 2,
	Knockout = 3,
	EDamageMagnitudeType_MAX = 4
};

// Enum ConZ.EHitDirectionType
enum class EHitDirectionType : uint8 {
	Front = 0,
	Left = 1,
	Back = 2,
	Right = 3,
	EHitDirectionType_MAX = 4
};

// Enum ConZ.EDayPeriod
enum class EDayPeriod : uint8 {
	Nighttime = 0,
	Dawn = 1,
	Daytime = 2,
	Dusk = 3,
	Count = 4,
	EDayPeriod_MAX = 5
};

// Enum ConZ.EDialLayoutDirection
enum class EDialLayoutDirection : uint8 {
	Up = 0,
	Right = 1,
	EDialLayoutDirection_MAX = 2
};

// Enum ConZ.EDialogueType
enum class EDialogueType : uint8 {
	Subtitled = 0,
	Wait = 1,
	EDialogueType_MAX = 2
};

// Enum ConZ.EDialogueAnimationState
enum class EDialogueAnimationState : uint8 {
	None = 0,
	Show = 1,
	Hide = 2,
	EDialogueAnimationState_MAX = 3
};

// Enum ConZ.EDialPadButtonType
enum class EDialPadButtonType : uint8 {
	None = 0,
	Input = 1,
	Enter = 2,
	Delete = 3,
	Count = 4,
	EDialPadButtonType_MAX = 5
};

// Enum ConZ.EDisposition
enum class EDisposition : uint8 {
	Neutral = 0,
	Good = 1,
	Bad = 2,
	EDisposition_MAX = 3
};

// Enum ConZ.EDistantMeshStreamingBehavior
enum class EDistantMeshStreamingBehavior : uint8 {
	Default = 0,
	LoadAsSoonAsPossible = 1,
	EDistantMeshStreamingBehavior_MAX = 2
};

// Enum ConZ.EDoorUnlockDataType
enum class EDoorUnlockDataType : uint8 {
	Default = 0,
	Killbox = 1,
	AbandonedBunker = 2,
	EDoorUnlockDataType_MAX = 3
};

// Enum ConZ.ESlotType
enum class ESlotType : uint8 {
	None = 0,
	LockSlot = 1,
	ZapperSlot = 2,
	RemoteSensorSlot = 3,
	BCULockSlot = 4,
	ESlotType_MAX = 5
};

// Enum ConZ.EDroneSound
enum class EDroneSound : uint8 {
	None = 0,
	Idle = 1,
	Attack = 2,
	Kill = 3,
	EDroneSound_MAX = 4
};

// Enum ConZ.EDroneSightingMode
enum class EDroneSightingMode : uint8 {
	Follow = 0,
	Flyby = 1,
	Crashing = 2,
	Num = 3,
	EDroneSightingMode_MAX = 4
};

// Enum ConZ.EDroneState
enum class EDroneState : uint8 {
	Initial = 0,
	Leaving = 1,
	Approaching = 2,
	Following = 3,
	Flybying = 4,
	Crashing = 5,
	ExternalMoveTo = 6,
	Num = 7,
	EDroneState_MAX = 8
};

// Enum ConZ.ESentrySpawnFlag
enum class ESentrySpawnFlag : uint8 {
	None = 0,
	Spawning = 1,
	Extracting = 2,
	ESentrySpawnFlag_MAX = 3
};

// Enum ConZ.EDropshipAttackModes
enum class EDropshipAttackModes : uint8 {
	Normal = 0,
	Railgun = 1,
	TearGas = 2,
	Num = 3,
	EDropshipAttackModes_MAX = 4
};

// Enum ConZ.EDropshipMontageType
enum class EDropshipMontageType : uint8 {
	Railgun = 0,
	Num = 1,
	EDropshipMontageType_MAX = 2
};

// Enum ConZ.EDropshipState
enum class EDropshipState : uint8 {
	Initial = 0,
	Approaching = 1,
	ExternalMoveTo = 2,
	Attacking = 3,
	AttackingBB = 4,
	Searching = 5,
	Leave = 6,
	DeploySentry = 7,
	ExtractingSentry = 8,
	FlyBy = 9,
	DestroyFoliage = 10,
	Num = 11,
	EDropshipState_MAX = 12
};

// Enum ConZ.EDropshipStance
enum class EDropshipStance : uint8 {
	Flight = 0,
	Combat = 1,
	CombatRelocating = 2,
	Searching = 3,
	Extraction = 4,
	LeaveInitial = 5,
	LeaveFinal = 6,
	VehicleCombat = 7,
	SentryDeployment = 8,
	FlyBy = 9,
	Num = 10,
	EDropshipStance_MAX = 11
};

// Enum ConZ.EDropZoneGameEventPhase
enum class EDropZoneGameEventPhase : uint8 {
	Warmup = 0,
	Search = 1,
	Drop = 2,
	Capture = 3,
	EDropZoneGameEventPhase_MAX = 4
};

// Enum ConZ.EEncounterPostExternalMoveAction
enum class EEncounterPostExternalMoveAction : uint8 {
	Undefined = 0,
	Attack = 1,
	FlyBy = 2,
	ScanSearch = 3,
	AreaBombardment = 4,
	GuardCargoDrop = 5,
	DeliverAndLeave = 6,
	DeliverAndLeaveDelayed = 7,
	EngagePlayersIgnoreBase = 8,
	GuardPOI = 9,
	EEncounterPostExternalMoveAction_MAX = 10
};

// Enum ConZ.EEncounterExternalMoveType
enum class EEncounterExternalMoveType : uint8 {
	Undefined = 0,
	MoveCloseToPlayer = 1,
	EEncounterExternalMoveType_MAX = 2
};

// Enum ConZ.EEncounterAllowedSpawnPointTypeFlag
enum class EEncounterAllowedSpawnPointTypeFlag : uint8 {
	None = 0,
	LegacyCharacterSpawningManager_Exterior = 1,
	LegacyCharacterSpawningManager_Interior = 2,
	Bush = 4,
	Tree = 8,
	GroupSpawnPoint = 16,
	EEncounterAllowedSpawnPointTypeFlag_MAX = 17
};

// Enum ConZ.EEventsRankingStatsOrderByField
enum class EEventsRankingStatsOrderByField : uint8 {
	FamePoints = 0,
	EventScore = 1,
	EventKills = 2,
	EventDeaths = 3,
	EEventsRankingStatsOrderByField_MAX = 4
};

// Enum ConZ.EExecutorStatus
enum class EExecutorStatus : uint8 {
	Regular = 0,
	Admin = 1,
	SuperAdmin = 2,
	Elevated = 3,
	Developer = 4,
	EExecutorStatus_MAX = 5
};

// Enum ConZ.EFertilizerType
enum class EFertilizerType : uint8 {
	None = 0,
	Organic = 1,
	Industrial = 2,
	EFertilizerType_MAX = 3
};

// Enum ConZ.EFishBehavior
enum class EFishBehavior : uint8 {
	None = 0,
	Normal = 1,
	Fleeing = 2,
	Aggressive = 3,
	Attacking = 4,
	Alerted = 5,
	ForcedMovement = 6,
	Count = 7,
	EFishBehavior_MAX = 8
};

// Enum ConZ.EFloatingWidgetVisionMode
enum class EFloatingWidgetVisionMode : uint8 {
	None = 0,
	General = 1,
	FocusMode = 2,
	Inventory = 4,
	EFloatingWidgetVisionMode_MAX = 5
};

// Enum ConZ.ESelectSource
enum class ESelectSource : uint8 {
	Child = 0,
	Parent = 1,
	Unknown = 2,
	ESelectSource_MAX = 3
};

// Enum ConZ.EFoliageCacheQueryFlags
enum class EFoliageCacheQueryFlags : uint8 {
	None = 0,
	UsedForSpawning = 1,
	UseCircleOverlap = 2,
	IncludeDestroyedFoliage = 4,
	UseDimensionsForSpawning = 8,
	EFoliageCacheQueryFlags_MAX = 9
};

// Enum ConZ.EFoliageQueryType
enum class EFoliageQueryType : uint8 {
	None = 0,
	Spawning = 1,
	Other = 2,
	EFoliageQueryType_MAX = 3
};

// Enum ConZ.EFoliageType
enum class EFoliageType : uint8 {
	None = 0,
	Tree = 1,
	Bush = 2,
	Grass = 4,
	All = 255,
	EFoliageType_MAX = 256
};

// Enum ConZ.EGameEventPlayerRoundResult
enum class EGameEventPlayerRoundResult : uint8 {
	None = 0,
	Win = 1,
	Lose = 2,
	Draw = 3,
	EGameEventPlayerRoundResult_MAX = 4
};

// Enum ConZ.EGameEventNotificationType
enum class EGameEventNotificationType : uint8 {
	EventStarted = 0,
	EventCanceled = 1,
	EventEnded = 2,
	NotEnoughParticipants = 3,
	ParticipantJoined = 4,
	ParticipantLeft = 5,
	EGameEventNotificationType_MAX = 6
};

// Enum ConZ.EGameEventParticipantState
enum class EGameEventParticipantState : uint8 {
	Registered = 0,
	Spawning = 1,
	Alive = 2,
	Dead = 3,
	Left = 4,
	EGameEventParticipantState_MAX = 5
};

// Enum ConZ.EGameEventState
enum class EGameEventState : uint8 {
	Announced = 0,
	RoundStarted = 1,
	RoundEnded = 2,
	Ended = 3,
	EGameEventState_MAX = 4
};

// Enum ConZ.EGameEventBorderState
enum class EGameEventBorderState : uint8 {
	Off = 0,
	On = 1,
	Bright = 2,
	EGameEventBorderState_MAX = 3
};

// Enum ConZ.EGameEventTransportState
enum class EGameEventTransportState : uint8 {
	StandBy = 0,
	Travelling = 1,
	Leaving = 2,
	Landing = 3,
	LiftOff = 4,
	EGameEventTransportState_MAX = 5
};

// Enum ConZ.EGameResourceConsumptionMethod
enum class EGameResourceConsumptionMethod : uint8 {
	Eating = 0,
	Drinking = 1,
	NonConsumable = 2,
	EGameResourceConsumptionMethod_MAX = 3
};

// Enum ConZ.EButtonType
enum class EButtonType : uint8 {
	None = 0,
	AddCookingRecipe = 1,
	Back = 2,
	Cancel = 3,
	Craft = 4,
	AutoCraft = 5,
	Details = 6,
	Place = 7,
	EventRegister = 8,
	EventJoin = 9,
	TraderBuy = 10,
	TraderCart = 11,
	TraderSell = 12,
	CreateSquad = 13,
	LeaveSquad = 14,
	JoinBlueTeam = 15,
	JoinRedTeam = 16,
	EventLeave = 17,
	SwitchTeams = 18,
	Treat = 19,
	StartTask = 20,
	RestartTask = 21,
	AbandonTask = 22,
	EButtonType_MAX = 23
};

// Enum ConZ.EGrappleEndType
enum class EGrappleEndType : uint8 {
	VictimDied = 0,
	VictimEscaped = 1,
	Interrupted = 2,
	EGrappleEndType_MAX = 3
};

// Enum ConZ.EGrappleActionMeshDetachmentRule
enum class EGrappleActionMeshDetachmentRule : uint8 {
	None = 0,
	GrapplerDetaches = 1,
	VictimDetaches = 2,
	EGrappleActionMeshDetachmentRule_MAX = 3
};

// Enum ConZ.EGrappleActionPerspectiveSwitchType
enum class EGrappleActionPerspectiveSwitchType : uint8 {
	None = 0,
	ThirdPerson = 1,
	FirstPerson = 2,
	EGrappleActionPerspectiveSwitchType_MAX = 3
};

// Enum ConZ.ERagdollTransitionState
enum class ERagdollTransitionState : uint8 {
	None = 0,
	GoTo = 1,
	GoToButDoNotSpawnOnServer = 2,
	RecoverFrom = 3,
	RecoverFromImmediately = 4,
	ERagdollTransitionState_MAX = 5
};

// Enum ConZ.EHitReactState
enum class EHitReactState : uint8 {
	None = 0,
	Hit = 1,
	Stun = 2,
	Knockout = 3,
	GettingUp = 4,
	Ragdoll = 5,
	EHitReactState_MAX = 6
};

// Enum ConZ.ERagdollSpawnType
enum class ERagdollSpawnType : uint8 {
	Default = 0,
	DoNotSpawnOnServer = 1,
	ERagdollSpawnType_MAX = 2
};

// Enum ConZ.EGoToRagdollCaller
enum class EGoToRagdollCaller : uint8 {
	Default = 0,
	Montage = 1,
	EGoToRagdollCaller_MAX = 2
};

// Enum ConZ.EHUDVisibilityFlag
enum class EHUDVisibilityFlag : uint8 {
	None = 0,
	UserInput = 1,
	IntroCinematic = 2,
	CharacterModification = 4,
	All = 255,
	EHUDVisibilityFlag_MAX = 256
};

// Enum ConZ.EHUDMessageType
enum class EHUDMessageType : uint8 {
	Regular = 0,
	Important = 1,
	EHUDMessageType_MAX = 2
};

// Enum ConZ.EWarningType
enum class EWarningType : uint8 {
	Danger = 0,
	Explosion = 1,
	LifeThreat = 2,
	Watching = 3,
	Traps = 4,
	EWarningType_MAX = 5
};

// Enum ConZ.EIgnitableItemState
enum class EIgnitableItemState : uint8 {
	None = 0,
	Start = 1,
	Burning = 2,
	Extinguish = 3,
	Finished = 4,
	EIgnitableItemState_MAX = 5
};

// Enum ConZ.EInteractionState
enum class EInteractionState : uint8 {
	Busy = 0,
	NoInteractionDefined = 1,
	CanInteract = 2,
	UnableToInteract = 3,
	EInteractionState_MAX = 4
};

// Enum ConZ.EInventoryNodeWidgetDataType
enum class EInventoryNodeWidgetDataType : uint8 {
	Number = 0,
	Text = 1,
	Icon = 2,
	Visibility = 3,
	Animation = 4,
	WidgetSwitcher = 5,
	Saturation = 6,
	Container = 7,
	EInventoryNodeWidgetDataType_MAX = 8
};

// Enum ConZ.EInventoryNodeWidgetType
enum class EInventoryNodeWidgetType : uint8 {
	None = 0,
	Inventory = 1,
	InventoryContainer = 2,
	HandsAndHolsters = 3,
	QuickAccess = 4,
	ClothesSideLayer = 5,
	ToolTip = 6,
	Vicinity = 7,
	VicinityContainer = 8,
	EInventoryNodeWidgetType_MAX = 9
};

// Enum ConZ.EBodySlot
enum class EBodySlot : uint8 {
	Head = 0,
	Chest = 1,
	Legs = 2,
	Feet = 3,
	Count = 4,
	EBodySlot_MAX = 5
};

// Enum ConZ.EItemDebugMode
enum class EItemDebugMode : uint8 {
	None = 0,
	Basic = 1,
	Count = 2,
	EItemDebugMode_MAX = 3
};

// Enum ConZ.EItemFlags
enum class EItemFlags : uint8 {
	None = 0,
	IsCrafted = 1,
	IsBusy = 2,
	Examined = 4,
	IsPartOfEvent = 8,
	BlinkOnSpawn = 16,
	ShouldBeVisibleInVicinity = 32,
	CollisionDisabled = 64,
	All = 255,
	EItemFlags_MAX = 256
};

// Enum ConZ.EItemDropPlaceholderDebugMode
enum class EItemDropPlaceholderDebugMode : uint8 {
	None = 0,
	Basic = 1,
	Count = 2,
	EItemDropPlaceholderDebugMode_MAX = 3
};

// Enum ConZ.EItemActionKeyInput
enum class EItemActionKeyInput : uint8 {
	ToggleLight = 0,
	ToggleNightVisionScope = 1,
	IncrementScopeDisplayBrightnessMultiplier = 2,
	DecrementScopeDisplayBrightnessMultiplier = 3,
	ReloadWeapon = 4,
	CheckStatus = 5,
	CancelAllActions = 6,
	EItemActionKeyInput_MAX = 7
};

// Enum ConZ.ERPCType
enum class ERPCType : uint8 {
	None = 0,
	Client = 1,
	Server = 2,
	NetMulticast = 3,
	ERPCType_MAX = 4
};

// Enum ConZ.ETooltipPanelType
enum class ETooltipPanelType : uint8 {
	Overview = 0,
	Additional = 1,
	ETooltipPanelType_MAX = 2
};

// Enum ConZ.ELockPickingDifficulty
enum class ELockPickingDifficulty : uint8 {
	Normal = 0,
	Medium = 1,
	Hard = 2,
	ELockPickingDifficulty_MAX = 3
};

// Enum ConZ.ELockDifficulty
enum class ELockDifficulty : uint8 {
	VeryEasy = 0,
	Basic = 1,
	Medium = 2,
	Advanced = 3,
	DialLock = 4,
	Num = 5,
	ELockDifficulty_MAX = 6
};

// Enum ConZ.ETaskCategory
enum class ETaskCategory : uint8 {
	Movement = 0,
	Survival = 1,
	Inventory = 2,
	Crafting = 3,
	Health = 4,
	Metabolism = 5,
	AttributesAndSkills = 6,
	Minigames = 7,
	Economy = 8,
	BaseBuilding = 9,
	Squads = 10,
	Count = 11,
	ETaskCategory_MAX = 12
};

// Enum ConZ.ECodexCategory
enum class ECodexCategory : uint8 {
	WelcomeToTheIsland = 0,
	Movement = 1,
	Survival = 2,
	Inventory = 3,
	Crafting = 4,
	Health = 5,
	Metabolism = 6,
	AttributesAndSkills = 7,
	Minigames = 8,
	Economy = 9,
	BaseBuilding = 10,
	Squads = 11,
	Vehicles = 12,
	Quests = 13,
	Count = 14,
	ECodexCategory_MAX = 15
};

// Enum ConZ.EConZMenu
enum class EConZMenu : uint8 {
	None = 0,
	Main = 1,
	Pause = 2,
	ServerBrowser = 3,
	ClientSettings = 4,
	ServerSettings = 5,
	CustomZoneSettings = 6,
	PlayerManagement = 7,
	CharacterSelection = 8,
	CharacterCreation = 9,
	Statistics = 10,
	IntroVideo = 11,
	Credits = 12,
	Count = 13,
	EConZMenu_MAX = 14
};

// Enum ConZ.EMSCServerEnrollReason
enum class EMSCServerEnrollReason : uint8 {
	Unspecified = 0,
	Startup = 1,
	ServerSettingsChanged = 2,
	MasterServerRequested = 3,
	EMSCServerEnrollReason_MAX = 4
};

// Enum ConZ.EMSPPlaystyle
enum class EMSPPlaystyle : uint8 {
	PVE = 0,
	PVP = 1,
	PVPVE = 2,
	RPPVP = 3,
	RPPVE = 4,
	Other = 5,
	First = 0,
	Last = 5,
	EMSPPlaystyle_MAX = 6
};

// Enum ConZ.EMedicationRepeatedAbuseReaction
enum class EMedicationRepeatedAbuseReaction : uint8 {
	None = 0,
	Vomiting = 1,
	Diarrhea = 2,
	EMedicationRepeatedAbuseReaction_MAX = 3
};

// Enum ConZ.EMedicationType
enum class EMedicationType : uint8 {
	Painkillers = 0,
	Sedatives = 1,
	Antibiotics = 2,
	Antiparasitics = 3,
	Stimulants = 4,
	EMedicationType_MAX = 5
};

// Enum ConZ.EMedicationUsage
enum class EMedicationUsage : uint8 {
	Pills = 0,
	Injections = 1,
	Infusions = 2,
	EMedicationUsage_MAX = 3
};

// Enum ConZ.EMeleeActionType
enum class EMeleeActionType : uint8 {
	None = 0,
	Attack = 1,
	PrepareForBlockOrDodge = 2,
	Block = 3,
	Dodge = 4,
	EMeleeActionType_MAX = 5
};

// Enum ConZ.EMeleeState
enum class EMeleeState : uint8 {
	Idle = 0,
	Attacking = 1,
	PreparedForBlockOrDodge = 2,
	Block = 3,
	Dodge = 4,
	HitReact = 5,
	EMeleeState_MAX = 6
};

// Enum ConZ.EAttackCollisionType
enum class EAttackCollisionType : uint8 {
	None = 0,
	WeaponLeftHand = 1,
	WeaponRightHand = 2,
	Head = 3,
	LeftHand = 4,
	RightHand = 5,
	LeftLeg = 6,
	RightLeg = 7,
	EAttackCollisionType_MAX = 8
};

// Enum ConZ.EHumanBodyPanelSegmentGenderGroup
enum class EHumanBodyPanelSegmentGenderGroup : uint8 {
	Male = 0,
	Female = 1,
	Both = 2,
	Count = 3,
	EHumanBodyPanelSegmentGenderGroup_MAX = 4
};

// Enum ConZ.EMinigameState
enum class EMinigameState : uint8 {
	None = 0,
	Intro = 1,
	WaitingForPlayer = 2,
	Game = 3,
	Outro = 4,
	EMinigameState_MAX = 5
};

// Enum ConZ.EEndMinigameReason
enum class EEndMinigameReason : uint8 {
	Success = 0,
	Fail = 1,
	Cancel = 2,
	EEndMinigameReason_MAX = 3
};

// Enum ConZ.EMovableCollisionFieldMovementCurveType
enum class EMovableCollisionFieldMovementCurveType : uint8 {
	Linear = 0,
	SquareRoot = 1,
	Exponential = 2,
	EMovableCollisionFieldMovementCurveType_MAX = 3
};

// Enum ConZ.EMovableCollisionFieldMoveType
enum class EMovableCollisionFieldMoveType : uint8 {
	TowardsStart = 0,
	TowardsEnd = 1,
	None = 2,
	Count = 3,
	EMovableCollisionFieldMoveType_MAX = 4
};

// Enum ConZ.RestState
enum class RestState : uint8 {
	AT_REST = 0,
	MOVING = 1,
	RestState_MAX = 2
};

// Enum ConZ.SyncMode
enum class SyncMode : uint8 {
	XYZ = 0,
	XY = 1,
	XZ = 2,
	YZ = 3,
	X = 4,
	Y = 5,
	Z = 6,
	NONE = 7,
	SyncMode_MAX = 8
};

// Enum ConZ.ENotificationTarget
enum class ENotificationTarget : uint8 {
	Everybody = 0,
	SingleClient = 1,
	ENotificationTarget_MAX = 2
};

// Enum ConZ.ENPCDrifterState
enum class ENPCDrifterState : uint8 {
	None = 0,
	Idle = 1,
	AlertedByGunshot = 2,
	AlertedByDamage = 3,
	MoveTowardsTargetLocation = 4,
	InvestigateLocation = 5,
	Combat = 6,
	OpenDoor = 7,
	HitReact = 8,
	Count = 9,
	ENPCDrifterState_MAX = 10
};

// Enum ConZ.ENPCGuardStimulusTag
enum class ENPCGuardStimulusTag : uint8 {
	Generic = 0,
	Alarm = 1,
	Target = 2,
	Count = 3,
	ENPCGuardStimulusTag_MAX = 4
};

// Enum ConZ.ENPCGuardAnimation
enum class ENPCGuardAnimation : uint8 {
	Count = 0,
	ENPCGuardAnimation_MAX = 1
};

// Enum ConZ.ENPCGuardAttackType
enum class ENPCGuardAttackType : uint8 {
	Hand = 0,
	Leg = 1,
	Melee = 2,
	Count = 3,
	ENPCGuardAttackType_MAX = 4
};

// Enum ConZ.ENPCGuardMovementPace
enum class ENPCGuardMovementPace : uint8 {
	Slow = 0,
	Medium = 1,
	Fast = 2,
	Count = 3,
	ENPCGuardMovementPace_MAX = 4
};

// Enum ConZ.ENPCGuardState
enum class ENPCGuardState : uint8 {
	None = 0,
	Idle = 1,
	AlertedByGunshot = 2,
	AlertedByDamage = 3,
	InvestigateLocation = 4,
	ReturnToPost = 5,
	Combat = 6,
	OpenDoor = 7,
	HitReact = 8,
	Count = 9,
	ENPCGuardState_MAX = 10
};

// Enum ConZ.ENutrient
enum class ENutrient : uint8 {
	Protein = 0,
	SaturatedFat = 1,
	OtherFats = 2,
	Fiber = 3,
	Sugars = 4,
	OtherCarbs = 5,
	Alcohol = 6,
	Water = 7,
	VitaminA = 8,
	VitaminB1 = 9,
	VitaminB2 = 10,
	VitaminB3 = 11,
	VitaminB4 = 12,
	VitaminB5 = 13,
	VitaminB6 = 14,
	VitaminB9 = 15,
	VitaminB12 = 16,
	VitaminC = 17,
	VitaminD = 18,
	VitaminE = 19,
	VitaminK = 20,
	Calcium = 21,
	Magnesium = 22,
	Potassium = 23,
	Copper = 24,
	Selenium = 25,
	Iron = 26,
	Phosphorus = 27,
	Zinc = 28,
	Manganese = 29,
	Sodium = 30,
	Other = 31,
	Count = 32,
	ENutrient_MAX = 33
};

// Enum ConZ.EPesticideType
enum class EPesticideType : uint8 {
	Insecticide = 0,
	Fungicide = 1,
	Herbicide = 2,
	EPesticideType_MAX = 3
};

// Enum ConZ.EPickupItemOperation
enum class EPickupItemOperation : uint8 {
	PickupOnly = 0,
	PickupAndEat = 1,
	PickupAndEatAll = 2,
	EPickupItemOperation_MAX = 3
};

// Enum ConZ.EPlaceableActorDebugMode
enum class EPlaceableActorDebugMode : uint8 {
	None = 0,
	Basic = 1,
	GroundedCheck = 2,
	Walls = 3,
	OrientedBox = 4,
	Count = 5,
	EPlaceableActorDebugMode_MAX = 6
};

// Enum ConZ.EStateFlags
enum class EStateFlags : uint8 {
	None = 0,
	Flipped = 1,
	Snapping = 2,
	EStateFlags_MAX = 3
};

// Enum ConZ.EPlacementBaseBuildingState
enum class EPlacementBaseBuildingState : uint8 {
	Placing = 0,
	PlacingSecondPoint = 1,
	Placed = 2,
	EPlacementBaseBuildingState_MAX = 3
};

// Enum ConZ.EGardenPlacementState
enum class EGardenPlacementState : uint8 {
	None = 0,
	FirstPointPlaced = 1,
	FinalPointPlaced = 2,
	EGardenPlacementState_MAX = 3
};

// Enum ConZ.EPlaceableActorMeshCollisionType
enum class EPlaceableActorMeshCollisionType : uint8 {
	None = 0,
	OverlappedBounds = 1,
	Mesh = 2,
	Count = 3,
	EPlaceableActorMeshCollisionType_MAX = 4
};

// Enum ConZ.EPlaceableStatusFlags
enum class EPlaceableStatusFlags : uint8 {
	None = 0,
	PlacementAllowed = 1,
	PlacingOnWater = 2,
	All = 255,
	EPlaceableStatusFlags_MAX = 256
};

// Enum ConZ.EPlacementTraceHitActor
enum class EPlacementTraceHitActor : uint8 {
	None = 0,
	Item = 1,
	BaseElement = 2,
	VehicleCorpse = 4,
	Garden = 8,
	Foliage = 16,
	All = 255,
	EPlacementTraceHitActor_MAX = 256
};

// Enum ConZ.EPlacementAllowedStatus
enum class EPlacementAllowedStatus : uint8 {
	None = 0,
	Allowed = 1,
	NotAllowedGeneric = 2,
	NotAllowedPlacementLineTraceFailed = 3,
	NotAllowedNormalTestFailed = 4,
	NotAllowedInteractionDistance = 5,
	NotAllowedReachability = 6,
	NotAllowedWater = 7,
	NotAllowedAngle = 8,
	NotAllowedMeshOverlap = 9,
	NotAllowedTopOverlap = 10,
	NotAllowedTopOverlapSimple = 11,
	NotAllowedBottomOverlap = 12,
	NotAllowedFullBoxOverlap = 13,
	NotAllowedExtendedOverlap = 14,
	NotAllowedFloating = 15,
	NotAllowedTeleportSpot = 16,
	NotAllowedHitCharacter = 17,
	NotAllowedHitItem = 18,
	NotAllowedHitVehicle = 19,
	NotAllowedMapRegion = 20,
	NotAllowedNotSnapping = 21,
	NotAllowedCantPlaceAtLocation = 22,
	NotAllowedLocationAreaRestricted = 23,
	NotAllowedLocationDupFlag = 24,
	NotAllowedLocationEnemyFlag = 25,
	NotAllowedLocationFoundation = 26,
	NotAllowedLocationOtherElement = 27,
	NotAllowedLocationNoBase = 28,
	NotAllowedLocationNoFlag = 29,
	NotAllowedLocationMaxInstances = 30,
	NotAllowedEnemyFlag = 31,
	NotAllowedBaseBuildingMask = 32,
	NotAllowedInBuilding = 33,
	NotAllowedActorTag = 34,
	NotAllowedVehicleCorpse = 35,
	NotAllowedPointsTooClose = 36,
	NotAllowedTwoPointsConstaints = 37,
	NotAllowedHeightDifference = 38,
	NotAllowedTopSweep = 39,
	NotAllowedMidSweep = 40,
	NotAllowedTilesNotGrounded = 41,
	NotAllowedPlacedDistance = 42,
	NotAllowedFoundationPillarsNotTouchingGround = 43,
	NotAllowedWeakStability = 44,
	NotAllowedNotSquadLeaderToPlaceFlag = 45,
	NotAllowedUnknown = 46,
	EPlacementAllowedStatus_MAX = 47
};

// Enum ConZ.EPlacementAlgorithm
enum class EPlacementAlgorithm : uint8 {
	Classic = 0,
	New = 1,
	EPlacementAlgorithm_MAX = 2
};

// Enum ConZ.EPlacementBaseState
enum class EPlacementBaseState : uint8 {
	None = 0,
	Placing = 1,
	Placed = 2,
	HeightAdjustment = 3,
	EPlacementBaseState_MAX = 4
};

// Enum ConZ.EFertilizerUIType
enum class EFertilizerUIType : uint8 {
	None = 0,
	Organic = 1,
	Industrial = 2,
	EFertilizerUIType_MAX = 3
};

// Enum ConZ.EPlantGrowthStage
enum class EPlantGrowthStage : uint8 {
	None = 0,
	Seeding = 1,
	Vegetating = 2,
	Flowering = 3,
	Ripening = 4,
	EPlantGrowthStage_MAX = 5
};

// Enum ConZ.EPlayableInstrumentView
enum class EPlayableInstrumentView : uint8 {
	FirstPerson = 0,
	ThirdPerson = 1,
	EPlayableInstrumentView_MAX = 2
};

// Enum ConZ.EPlayableInstrumentChord
enum class EPlayableInstrumentChord : uint8 {
	Count = 0,
	EPlayableInstrumentChord_MAX = 1
};

// Enum ConZ.EDroneVisibility
enum class EDroneVisibility : uint8 {
	Visible = 0,
	Invisible = 1,
	Hidden = 2,
	EDroneVisibility_MAX = 3
};

// Enum ConZ.EQuestType
enum class EQuestType : uint8 {
	Task = 0,
	Quest = 1,
	Count = 2,
	EQuestType_MAX = 3
};

// Enum ConZ.EInstrumentEventType
enum class EInstrumentEventType : uint8 {
	PlayTone = 0,
	StopTone = 1,
	EInstrumentEventType_MAX = 2
};

// Enum ConZ.ERespawnStateContext
enum class ERespawnStateContext : uint8 {
	None = 0,
	Teleport = 1,
	Event = 2,
	ERespawnStateContext_MAX = 3
};

// Enum ConZ.EStanceChangeFlag
enum class EStanceChangeFlag : uint8 {
	Exact = 0,
	Min = 1,
	Max = 2
};

// Enum ConZ.EGestureType
enum class EGestureType : uint8 {
	ShowFinger = 0,
	StandSurrender = 1,
	WaveHi = 2,
	YouAreDead = 3,
	FY = 4,
	Point = 5,
	Heart = 6,
	BallPalm = 7,
	FacePalm = 8,
	FingerGun = 9,
	Laughing = 10,
	SmellWave = 11,
	Squat = 12,
	Charge = 13,
	Freeze = 14,
	GetDown = 15,
	GetUp = 16,
	Halt = 17,
	HurryUp = 18,
	PointMe = 19,
	PointYou = 20,
	Rally = 21,
	ThumbsUp = 22,
	ThumbsDown = 23,
	UnderstandNo = 24,
	UnderstandYes = 25,
	DanceSwag = 26,
	DanceSlinky = 27,
	DanceJungleStep = 28,
	DanceMoonslide = 29,
	DanceFloss = 30,
	DanceOrangeJustice = 31,
	DanceShowtime = 32,
	DanceScrub = 33,
	DanceTheCarlton = 34,
	DanceGangnamStyle = 35,
	DanceTechnoViking = 36,
	DanceOhMama = 37,
	DanceLoser = 38,
	DanceSeduction = 39,
	DanceTemptation = 40,
	DanceVogue = 41,
	DanceTango = 42,
	DanceDiscoSpin = 43,
	DanceJagger = 44,
	DanceSlayinAlive = 45,
	DancePuppetDance = 46,
	DanceGunsBlazing = 47,
	DanceStepUp = 48,
	DancePartyAnimal = 49,
	DanceHardbass = 50,
	DanceKazachok = 51,
	DancePaddleDance = 52,
	DanceMoonwalk = 53,
	DanceSneaky = 54,
	DanceDeathDrop = 55,
	DanceFeline = 56,
	DanceGoddess = 57,
	DanceSultana = 58,
	DanceSerpentsCharm = 59,
	DanceBootylicious = 60,
	DanceBubbleBounce = 61,
	Halloween1 = 62,
	Halloween2 = 63,
	Halloween3 = 64,
	Halloween4 = 65,
	Count = 66,
	EGestureType_MAX = 67
};

// Enum ConZ.EModifyBBElementPaintJobActionSubtype
enum class EModifyBBElementPaintJobActionSubtype : uint8 {
	ClearPaintJob = 0,
	PaintSolidColor = 1,
	EModifyBBElementPaintJobActionSubtype_MAX = 2
};

// Enum ConZ.EModifyWeaponPaintjobActionSubtype
enum class EModifyWeaponPaintjobActionSubtype : uint8 {
	ClearPaintjob = 0,
	RefreshPaintjob = 1,
	PaintSolidColor = 2,
	SetPattern = 3,
	SetColor = 4,
	EModifyWeaponPaintjobActionSubtype_MAX = 5
};

// Enum ConZ.ESwapItemsType
enum class ESwapItemsType : uint8 {
	None = 0,
	NotWeaponToNotWeapon = 1,
	WeaponToWeapon = 2,
	NotWeaponToWeapon = 3,
	WeaponToNotWeapon = 4,
	WeaponToThrowingItem = 5,
	ThrowingItemToWeapon = 6,
	ThrowingItemToNotWeapon = 7,
	ESwapItemsType_MAX = 8
};

// Enum ConZ.EPrisonerAnimationCurve
enum class EPrisonerAnimationCurve : uint8 {
	LegsPose = 0,
	CanStartGoToLoop = 1,
	CanStartGoToStopLU = 2,
	CanStartGoToStopRU = 3,
	DistanceToPivot = 4,
	DistanceToApex = 5,
	CanLandGoToLoop = 6,
	CanFireWeapon = 7,
	LeftHandIK = 8,
	MoveInputScale = 9,
	MoveInputModifierScale = 10,
	MoveInputModifierCourseAngle = 11,
	IgnoreMoveInput = 12,
	IgnoreTurnInput = 13,
	IsStanceTransitionActive = 14,
	MeshOffsetWhenInWater = 15,
	ViewRoll = 16,
	ViewPitch = 17,
	ViewYaw = 18,
	IgnoreAimOffset = 19,
	IgnoreFistCorrections = 20,
	IgnoreRotation = 21,
	IgnoreFPBoneRotation = 22,
	BikePickupRotation = 23,
	BikePickupTranslation = 24,
	BikePedalRotation = 25,
	VehicleAttachmentRotation_Yaw = 26,
	VehicleAttachmentRotation_Pitch = 27,
	VehicleAttachmentRotation_Roll = 28,
	Count = 29,
	EPrisonerAnimationCurve_MAX = 30
};

// Enum ConZ.EPrisonerAnimationMountType
enum class EPrisonerAnimationMountType : uint8 {
	None = 0,
	Car = 1,
	Sledge = 2,
	WheelBarrow = 3,
	Boat = 4,
	Bike = 5,
	Airplane = 6,
	Count = 7,
	EPrisonerAnimationMountType_MAX = 8
};

// Enum ConZ.EPrisonerAnimationState
enum class EPrisonerAnimationState : uint8 {
	Unknown = 0,
	Entry = 1,
	StandIdle = 2,
	StandIdleToCrouchIdle = 3,
	StandIdleToProneIdle = 4,
	StandWalkStart = 5,
	StandWalkLoop = 6,
	StandWalkStop = 7,
	StandJogStart = 8,
	StandJogLoop = 9,
	StandJogStop = 10,
	StandRunStart = 11,
	StandRunLoop = 12,
	StandRunStop = 13,
	CrouchIdle = 14,
	CrouchIdleToStandIdle = 15,
	CrouchIdleToProneIdle = 16,
	CrouchWalkStart = 17,
	CrouchWalkLoop = 18,
	CrouchWalkStop = 19,
	ProneIdle = 20,
	ProneIdleToStandIdle = 21,
	ProneIdleToCrouchIdle = 22,
	ProneWalkLoop = 23,
	Count = 24,
	EPrisonerAnimationState_MAX = 25
};

// Enum ConZ.EPrisonerBodyConditionState
enum class EPrisonerBodyConditionState : uint8 {
	Incubating = 0,
	Untreated = 1,
	Stabilizing = 2,
	Recovering = 3,
	Count = 4,
	EPrisonerBodyConditionState_MAX = 5
};

// Enum ConZ.EPrisonerBodyConditionTissueGroup
enum class EPrisonerBodyConditionTissueGroup : uint8 {
	Unspecified = 0,
	Muscle = 1,
	Bone = 2,
	Organ = 3,
	Count = 4,
	EPrisonerBodyConditionTissueGroup_MAX = 5
};

// Enum ConZ.EPrisonerBodyOrganGroup
enum class EPrisonerBodyOrganGroup : uint8 {
	Unspecified = 0,
	SpinalCord = 1,
	Lungs = 2,
	RespiratorySystem = 3,
	CirculatorySystem = 4,
	Colon = 5,
	Intestine = 6,
	Bladder = 7,
	Liver = 8,
	Kidneys = 9,
	AdrenalGlands = 10,
	Gallbladder = 11,
	Pancreas = 12,
	Stomach = 13,
	Heart = 14,
	Spleen = 15,
	Brain = 16,
	Reproductive = 17,
	Count = 18,
	EPrisonerBodyOrganGroup_MAX = 19
};

// Enum ConZ.EPrisonerBodyMuscleGroup
enum class EPrisonerBodyMuscleGroup : uint8 {
	Unspecified = 0,
	Head = 1,
	Neck = 2,
	Trapezius = 3,
	Chest = 4,
	UpperAbdomen = 5,
	LowerAbdomen = 6,
	LeftEar = 7,
	RightEar = 8,
	LeftThigh = 9,
	RightThigh = 10,
	LeftLeg = 11,
	RightLeg = 12,
	LeftFoot = 13,
	RightFoot = 14,
	LeftShoulder = 15,
	RightShoulder = 16,
	LeftArm = 17,
	RightArm = 18,
	LeftForearm = 19,
	RightForearm = 20,
	LeftHand = 21,
	RightHand = 22,
	LeftKneecap = 23,
	RightKneecap = 24,
	Count = 25,
	EPrisonerBodyMuscleGroup_MAX = 26
};

// Enum ConZ.EPrisonerBodyBoneGroup
enum class EPrisonerBodyBoneGroup : uint8 {
	Unspecified = 0,
	Ribcage = 1,
	Spine = 2,
	Skull = 3,
	Pelvis = 4,
	LeftThigh = 5,
	RightThigh = 6,
	LeftLeg = 7,
	RightLeg = 8,
	LeftFoot = 9,
	RightFoot = 10,
	LeftShoulder = 11,
	RightShoulder = 12,
	LeftArm = 13,
	RightArm = 14,
	LeftForearm = 15,
	RightForearm = 16,
	LeftHand = 17,
	RightHand = 18,
	Count = 19,
	EPrisonerBodyBoneGroup_MAX = 20
};

// Enum ConZ.EPrisonerBodyRegion
enum class EPrisonerBodyRegion : uint8 {
	Unspecified = 0,
	Head = 1,
	Torso = 2,
	LeftArm = 3,
	RightArm = 4,
	LeftLeg = 5,
	RightLeg = 6,
	Count = 7,
	EPrisonerBodyRegion_MAX = 8
};

// Enum ConZ.EPrisonerBodyState
enum class EPrisonerBodyState : uint8 {
	UnableToMove = 0,
	Unconscious = 1,
	Comatose = 2,
	Dead = 3,
	AbleToConsume = 4,
	Consuming = 5,
	AbleToVomit = 6,
	Vomiting = 7,
	AbleToUrinate = 8,
	Urinating = 9,
	AbleToDefecate = 10,
	Defecating = 11,
	ShallDefecateDiarrhea = 12,
	CannotBeRevivedWithPhoenixTears = 13,
	Count = 14,
	EPrisonerBodyState_MAX = 15
};

// Enum ConZ.EBuryState
enum class EBuryState : uint8 {
	None = 0,
	Bury = 1,
	ResumeBury = 2,
	Rest = 3,
	Finish = 4,
	EBuryState_MAX = 5
};

// Enum ConZ.EPrisonerFacialExpression
enum class EPrisonerFacialExpression : uint8 {
	None = 0,
	Angry1 = 1,
	Angry2 = 2,
	Hit = 3,
	Punching = 4,
	Fear1 = 5,
	Fear2 = 6,
	Fear3 = 7,
	WhatTheHell1 = 8,
	WhatTheHell2 = 9,
	Whistling1 = 10,
	Whistling2 = 11,
	Ouch1 = 12,
	Ouch2 = 13,
	Count = 14,
	EPrisonerFacialExpression_MAX = 15
};

// Enum ConZ.EPrisonerFirstPersonSubview
enum class EPrisonerFirstPersonSubview : uint8 {
	Standing = 0,
	Crouching = 1,
	Prone = 2,
	StandingMelee = 3,
	StandingAiming = 4,
	CrouchingAiming = 5,
	ProneAiming = 6,
	StandingAimingDownTheSights = 7,
	CrouchingAimingDownTheSights = 8,
	ProneAimingDownTheSights = 9,
	Ladder = 10,
	ClimbingWindow = 11,
	Mounted = 12,
	Lying = 13,
	MountedDefaultStanceAiming = 14,
	MountedLeaningStanceAiming = 15,
	MountedDefaultStanceAimingDownTheSights = 16,
	MountedLeaningStanceAimingDownTheSights = 17,
	Count = 18,
	EPrisonerFirstPersonSubview_MAX = 19
};

// Enum ConZ.EPrisonerVicinityItemSets
enum class EPrisonerVicinityItemSets : uint8 {
	None = 0,
	Items = 1,
	Containers = 2,
	All = 3,
	EPrisonerVicinityItemSets_MAX = 4
};

// Enum ConZ.EPrisonerInventoryItemSets
enum class EPrisonerInventoryItemSets : uint8 {
	None = 0,
	EquippedClothes = 1,
	ContainedItems = 2,
	All = 3,
	EPrisonerInventoryItemSets_MAX = 4
};

// Enum ConZ.EPrisonerItemEquipType
enum class EPrisonerItemEquipType : uint8 {
	Inventory = 0,
	Hands = 1,
	Holsters = 2,
	EPrisonerItemEquipType_MAX = 3
};

// Enum ConZ.EPrisonerDivingState
enum class EPrisonerDivingState : uint8 {
	None = 0,
	WantsToDive = 1,
	Diving = 2,
	EPrisonerDivingState_MAX = 3
};

// Enum ConZ.EPrisonerMovementMode
enum class EPrisonerMovementMode : uint8 {
	None = 0,
	Climbing_Anchoring = 1,
	Climbing_PlayingMontage = 2,
	ClimbingLadder = 3,
	ClimbingWindow_Anchoring = 4,
	ClimbingWindow_PlayingMontage = 5,
	Anchoring = 6,
	RootMotionOnly = 7,
	EPrisonerMovementMode_MAX = 8
};

// Enum ConZ.EPrisonerNameChangeErrorType
enum class EPrisonerNameChangeErrorType : uint8 {
	None = 0,
	NameTooShort = 1,
	NameTooLong = 2,
	IllegalCharacterPresent = 3,
	NameChangeOnCooldown = 4,
	NameTaken = 5,
	NameBlacklisted = 6,
	InsufficientFunds = 7,
	Other = 8,
	EPrisonerNameChangeErrorType_MAX = 9
};

// Enum ConZ.EPrisonerPhotoModePoseGroup
enum class EPrisonerPhotoModePoseGroup : uint8 {
	Unarmed = 0,
	Rifle = 1,
	Handgun = 2,
	Melee = 3,
	EPrisonerPhotoModePoseGroup_MAX = 4
};

// Enum ConZ.EPrisonWalletChoiceType
enum class EPrisonWalletChoiceType : uint8 {
	JustFirst = 0,
	PickRandom = 1,
	AllOfThem = 2,
	EPrisonWalletChoiceType_MAX = 3
};

// Enum ConZ.EPrisonerRestingMode
enum class EPrisonerRestingMode : uint8 {
	None = 0,
	Sitting = 1,
	Lying = 2,
	Count = 3,
	EPrisonerRestingMode_MAX = 4
};

// Enum ConZ.EThrowingType
enum class EThrowingType : uint8 {
	None = 0,
	Near = 1,
	Far = 2,
	Aim = 3,
	Throwback = 4,
	EThrowingType_MAX = 5
};

// Enum ConZ.EPrisonerVisibilityFlag
enum class EPrisonerVisibilityFlag : uint8 {
	None = 0,
	Default = 1,
	View = 2,
	Awareness = 4,
	All = 255,
	EPrisonerVisibilityFlag_MAX = 256
};

// Enum ConZ.EPrisonerAimOffsetType
enum class EPrisonerAimOffsetType : uint8 {
	Standing = 0,
	Crouching = 1,
	Prone = 2,
	ProneMoving = 3,
	FirstPersonView = 4,
	FirstPersonViewProne = 5,
	AimingDownTheSights = 6,
	Count = 7,
	EPrisonerAimOffsetType_MAX = 8
};

// Enum ConZ.EPrisonerMontageBlendType
enum class EPrisonerMontageBlendType : uint8 {
	All = 0,
	LeftHand = 1,
	RightHand = 2,
	EPrisonerMontageBlendType_MAX = 3
};

// Enum ConZ.EPrisonerPostTeleportBehavior
enum class EPrisonerPostTeleportBehavior : uint8 {
	None = 0,
	ReviveIfDead = 1,
	GameEventLoadout = 2,
	RagdollIfUnconscious = 3,
	EPrisonerPostTeleportBehavior_MAX = 4
};

// Enum ConZ.EPrisonerHolsterSide
enum class EPrisonerHolsterSide : uint8 {
	None = 0,
	LeftShoulder = 1,
	RightShoulder = 2,
	EPrisonerHolsterSide_MAX = 3
};

// Enum ConZ.EWeaponAnimationPose
enum class EWeaponAnimationPose : uint8 {
	None = 0,
	Relaxed = 1,
	AimingHip = 2,
	AimingDownTheSights = 3,
	AimingDownTheSightsStill = 4,
	AimingDownTheSightsWalking = 5,
	AimingDownTheSightsLimpingWalking = 6,
	Count = 7,
	EWeaponAnimationPose_MAX = 8
};

// Enum ConZ.ETabMenuSubTab
enum class ETabMenuSubTab : uint8 {
	Last = 0,
	ItemsCrafting = 1,
	BaseBuilding = 2,
	Cooking = 3,
	Buy = 4,
	Sell = 5,
	Depot = 6,
	ETabMenuSubTab_MAX = 7
};

// Enum ConZ.ETabMenuTab
enum class ETabMenuTab : uint8 {
	None = 0,
	Last = 1,
	Inventory = 2,
	Crafting = 3,
	Health = 4,
	Metabolism = 5,
	Journal = 6,
	Manual = 7,
	Squad = 8,
	Events = 9,
	Trading = 10,
	ETabMenuTab_MAX = 11
};

// Enum ConZ.EClothesPart
enum class EClothesPart : uint8 {
	None = 0,
	BodyUpper = 1,
	BodyLower = 2,
	Head = 3,
	Eyes = 4,
	Neck = 5,
	Hands = 6,
	ArmUpper = 7,
	ArmLower = 8,
	Legs = 9,
	Feet = 10,
	Count = 11,
	EClothesPart_MAX = 12
};

// Enum ConZ.EPrisonerReplicatedComponent
enum class EPrisonerReplicatedComponent : uint8 {
	SkillComponent = 0,
	InventoryComponent = 1,
	HitReactComponent = 2,
	InteractionComponent = 3,
	BodySimulationComponent = 4,
	Count = 5,
	EPrisonerReplicatedComponent_MAX = 6
};

// Enum ConZ.EPrisonerThirdPersonSubview
enum class EPrisonerThirdPersonSubview : uint8 {
	Standing = 0,
	Crouching = 1,
	Prone = 2,
	StandingMelee = 3,
	StandingAiming = 4,
	CrouchingAiming = 5,
	ProneAiming = 6,
	Ragdoll = 7,
	Grappled = 8,
	NarrowLadder = 9,
	Swimming = 10,
	Diving = 11,
	ClimbingWindow = 12,
	Defecating = 13,
	Throwing = 14,
	Falling = 15,
	Count = 16,
	EPrisonerThirdPersonSubview_MAX = 17
};

// Enum ConZ.EPlayerSideView
enum class EPlayerSideView : uint8 {
	Left = 0,
	Right = 1,
	Count = 2,
	EPlayerSideView_MAX = 3
};

// Enum ConZ.EThrowingState
enum class EThrowingState : uint8 {
	None = 0,
	Cancelled = 1,
	Aiming = 2,
	ThrowFromAim = 3,
	Throwing = 4,
	Lobbing = 5,
	Throwback = 6,
	Finish = 7,
	EThrowingState_MAX = 8
};

// Enum ConZ.EPrisonerUITooltipSectionName
enum class EPrisonerUITooltipSectionName : uint8 {
	None = 0,
	Affects = 1,
	AffectedBy = 2,
	CausedBy = 3,
	Symptoms = 4,
	Count = 5,
	EPrisonerUITooltipSectionName_MAX = 6
};

// Enum ConZ.EPrisonerUIAttribute
enum class EPrisonerUIAttribute : uint8 {
	CA_Strength = 0,
	CA_Constitution = 1,
	CA_Dexterity = 2,
	CA_Intelligence = 3,
	BI_Age = 4,
	BI_Lifetime = 5,
	BI_Weight = 6,
	BI_Health = 7,
	BI_Teeth = 8,
	BI_BloodType = 9,
	BI_BloodVolume = 10,
	BI_Temperature = 11,
	PD_Stamina = 12,
	PD_StaminaChangeRate = 13,
	PD_Unused1 = 14,
	PD_Unused2 = 15,
	PD_ActionDifficulty = 16,
	PD_WeightLoad = 17,
	PD_WalkSpeed = 18,
	PD_JogSpeed = 19,
	PD_RunSpeed = 20,
	PD_CaloriesOverloadPenalty = 21,
	PD_WaterOverloadPenalty = 22,
	PI_HealingSpeed = 23,
	PI_BloodRecoveryRate = 24,
	PI_ImmuneSystem = 25,
	PI_PerformanceScore = 26,
	PI_StealthFactor = 27,
	PI_MeleeDamage = 28,
	NAS_Protein = 29,
	NAS_Carbs = 30,
	NAS_Fat = 31,
	NAS_Minerals = 32,
	NAS_Vitamins = 33,
	NAS_Water = 34,
	NAS_Alcohol = 35,
	BMD_Bones = 36,
	BMD_Blood = 37,
	BMD_Intestines = 38,
	BMD_Skin = 39,
	BMD_Organs = 40,
	BMD_Fat = 41,
	BMD_Muscle = 42,
	BS_Unconsciousness = 43,
	BS_Coma = 44,
	BS_Death = 45,
	NU_Calories = 46,
	NU_Water = 47,
	MR_Protein = 48,
	MR_Carbs = 49,
	MR_Fat = 50,
	MR_Fiber = 51,
	MR_Sugar = 52,
	MR_SaturatedFat = 53,
	MR_Alcohol = 54,
	BR_Muscle = 55,
	BR_Fat = 56,
	VI_VitaminA = 57,
	VI_VitaminB1 = 58,
	VI_VitaminB2 = 59,
	VI_VitaminB3 = 60,
	VI_VitaminB4 = 61,
	VI_VitaminB5 = 62,
	VI_VitaminB6 = 63,
	VI_VitaminB9 = 64,
	VI_VitaminB12 = 65,
	VI_VitaminC = 66,
	VI_VitaminD = 67,
	VI_VitaminE = 68,
	VI_VitaminK = 69,
	MI_MineralCa = 70,
	MI_MineralFe = 71,
	MI_MineralMg = 72,
	MI_MineralP = 73,
	MI_MineralK = 74,
	MI_MineralZn = 75,
	MI_MineralCu = 76,
	MI_MineralMn = 77,
	MI_MineralSe = 78,
	MI_MineralNa = 79,
	DI_Stomach = 80,
	DI_Intestine = 81,
	DI_Colon = 82,
	DI_Bladder = 83,
	Count = 84,
	EPrisonerUIAttribute_MAX = 85
};

// Enum ConZ.EInstallVehicleAttachmentActionMethod
enum class EInstallVehicleAttachmentActionMethod : uint8 {
	InstallWithSkill = 0,
	PayForInstallation = 1,
	BuyNewAttachment = 2,
	EInstallVehicleAttachmentActionMethod_MAX = 3
};

// Enum ConZ.ERemoveVehicleAttachmentActionMethod
enum class ERemoveVehicleAttachmentActionMethod : uint8 {
	RemoveWithSkill = 0,
	PayForRemoval = 1,
	SellAttachment = 2,
	ERemoveVehicleAttachmentActionMethod_MAX = 3
};

// Enum ConZ.ERepairVehicleAttachmentActionMethod
enum class ERepairVehicleAttachmentActionMethod : uint8 {
	RepairWithSkill = 0,
	PayForRepair = 1,
	ERepairVehicleAttachmentActionMethod_MAX = 2
};

// Enum ConZ.EProjectileFlags
enum class EProjectileFlags : uint8 {
	None = 0,
	CreatedOnServer = 1,
	AIProjectile = 2,
	EProjectileFlags_MAX = 3
};

// Enum ConZ.EPenetrationType
enum class EPenetrationType : uint8 {
	None = 0,
	Entry = 1,
	Exit = 2,
	Both = 3,
	EPenetrationType_MAX = 4
};

// Enum ConZ.EWindSpeedCategory
enum class EWindSpeedCategory : uint8 {
	Zero = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EWindSpeedCategory_MAX = 4
};

// Enum ConZ.EBallisticDragModel
enum class EBallisticDragModel : uint8 {
	G1 = 0,
	G2 = 1,
	G5 = 2,
	G6 = 3,
	G7 = 4,
	G8 = 5,
	EBallisticDragModel_MAX = 6
};

// Enum ConZ.EQuestBookStates
enum class EQuestBookStates : uint8 {
	None = 0,
	BookOpened = 1,
	FlippingPage = 2,
	HoldingAccept = 4,
	EQuestBookStates_MAX = 5
};

// Enum ConZ.EQuestGiverType
enum class EQuestGiverType : uint8 {
	Other = 0,
	Trader = 1,
	NoticeBoard = 2,
	MobilePhone = 3,
	EQuestGiverType_MAX = 4
};

// Enum ConZ.EQuestStartLimiterFlags
enum class EQuestStartLimiterFlags : int32 {
	None = 0,
	TierLocked = 1,
	TraderLocked = 2,
	PerTraderPerCycleLimit = 4,
	PerTraderSimultaneousLimit = 8,
	NotOnClient = 1048576,
	Unknown = 2097152,
	EQuestStartLimiterFlags_MAX = 2097153
};

// Enum ConZ.EItemAttachTriggerType
enum class EItemAttachTriggerType : uint8 {
	Unequip = 0,
	Equip = 1,
	EItemAttachTriggerType_MAX = 2
};

// Enum ConZ.EPlaceableActorTriggerType
enum class EPlaceableActorTriggerType : uint8 {
	Placed = 0,
	Finished = 1,
	EPlaceableActorTriggerType_MAX = 2
};

// Enum ConZ.EPrisonerActionTriggerType
enum class EPrisonerActionTriggerType : uint8 {
	OnStart = 0,
	OnComplete = 1,
	EPrisonerActionTriggerType_MAX = 2
};

// Enum ConZ.EQuestGiverSectorSelectionType
enum class EQuestGiverSectorSelectionType : uint8 {
	Nearest = 0,
	Random = 1,
	EQuestGiverSectorSelectionType_MAX = 2
};

// Enum ConZ.EQuiverActiveMesh
enum class EQuiverActiveMesh : uint8 {
	Static = 0,
	Skeletal = 1,
	SkeletalAlternative = 2,
	EQuiverActiveMesh_MAX = 3
};

// Enum ConZ.ERaidProtectionType
enum class ERaidProtectionType : uint8 {
	None = 0,
	OfflineRaidProtection = 1,
	FlagSpecificRaidProtection = 2,
	GlobalRaidProtection = 3,
	ERaidProtectionType_MAX = 4
};

// Enum ConZ.ERangedResourceFunctionCallType
enum class ERangedResourceFunctionCallType : uint8 {
	Internal = 0,
	External = 1,
	ERangedResourceFunctionCallType_MAX = 2
};

// Enum ConZ.ERazorCustomMovementMode
enum class ERazorCustomMovementMode : uint8 {
	None = 0,
	Anchoring = 1,
	ERazorCustomMovementMode_MAX = 2
};

// Enum ConZ.ERazorDeathType
enum class ERazorDeathType : uint8 {
	Unknown = 0,
	Projectile = 1,
	Melee = 2,
	WeakSpot = 3,
	ERazorDeathType_MAX = 4
};

// Enum ConZ.ERazorTurnMontage
enum class ERazorTurnMontage : uint8 {
	AlertedIdle = 0,
	SleepingIdle = 1,
	Count = 2,
	ERazorTurnMontage_MAX = 3
};

// Enum ConZ.ERazorMontageType
enum class ERazorMontageType : uint8 {
	SuddenWakeUp = 0,
	NormalWakeUp = 1,
	EnterCombat = 2,
	MountJump = 3,
	MountFail = 4,
	MountFailToTallObstacle = 5,
	MountFailToShortObstacle = 6,
	VentilationSpawnAttack = 7,
	InitiateMountAttackCharge = 8,
	Intimidation = 9,
	VentilationSpawnAttackEnd = 10,
	ERazorMontageType_MAX = 11
};

// Enum ConZ.ERazorSleepingStage
enum class ERazorSleepingStage : uint8 {
	Sleeping = 0,
	SleepingCommotion = 1,
	SleepingAboutToWakeUp = 2,
	Awakened = 3,
	Count = 4,
	ERazorSleepingStage_MAX = 5
};

// Enum ConZ.ERazorCombatVariation
enum class ERazorCombatVariation : uint8 {
	Normal = 0,
	MountAttack = 1,
	Count = 2,
	ERazorCombatVariation_MAX = 3
};

// Enum ConZ.ERazorAIState
enum class ERazorAIState : uint8 {
	None = 0,
	Sleeping = 1,
	Alerted = 2,
	AlertedAggressive = 3,
	Combat = 4,
	VentilationSpawn = 5,
	VentilationDespawn = 6,
	MoveAfterTargetOutsideOfBunker = 7,
	ERazorAIState_MAX = 8
};

// Enum ConZ.ERazorStance
enum class ERazorStance : uint8 {
	None = 0,
	Sleeping = 1,
	Alerted = 2,
	AlertedAggressive = 3,
	Combat = 4,
	VentilationSpawn = 5,
	Count = 6,
	ERazorStance_MAX = 7
};

// Enum ConZ.ERepairType
enum class ERepairType : uint8 {
	None = 0,
	RepairHealth = 1,
	ERepairType_MAX = 2
};

// Enum ConZ.EEngineeringEventType
enum class EEngineeringEventType : uint8 {
	Build = 0,
	Repair = 1,
	FillContainer = 2,
	FillVehicle = 3,
	DrainVehicle = 4,
	FillItem = 5,
	EEngineeringEventType_MAX = 6
};

// Enum ConZ.ERespawnOption
enum class ERespawnOption : uint8 {
	Random = 0,
	Sector = 1,
	Shelter = 2,
	Squad = 3,
	ERespawnOption_MAX = 4
};

// Enum ConZ.ERotationDirection
enum class ERotationDirection : uint8 {
	Clockwise = 0,
	CounterClockwise = 1,
	ERotationDirection_MAX = 2
};

// Enum ConZ.EScopingView
enum class EScopingView : uint8 {
	FirstPerson = 0,
	ThirdPerson = 1,
	EScopingView_MAX = 2
};

// Enum ConZ.EScopingStance
enum class EScopingStance : uint8 {
	Standing = 0,
	Crouching = 1,
	Prone = 2,
	EScopingStance_MAX = 3
};

// Enum ConZ.EScrollingSizeBoxScrollDemand
enum class EScrollingSizeBoxScrollDemand : uint8 {
	OnHover = 0,
	Automatic = 1,
	EScrollingSizeBoxScrollDemand_MAX = 2
};

// Enum ConZ.EScrollingSizeBoxDynamic
enum class EScrollingSizeBoxDynamic : uint8 {
	Linear = 0,
	Gaussian = 1,
	EScrollingSizeBoxDynamic_MAX = 2
};

// Enum ConZ.EScrollingSizeBoxLoopingType
enum class EScrollingSizeBoxLoopingType : uint8 {
	WithinContent = 0,
	BeyondContent = 1,
	EScrollingSizeBoxLoopingType_MAX = 2
};

// Enum ConZ.EScrollingSizeBoxDirection
enum class EScrollingSizeBoxDirection : uint8 {
	ScrollsLeftwards = 0,
	ScrollsUpwards = 1,
	ScrollsRightwards = 2,
	ScrollsDownwards = 3,
	EScrollingSizeBoxDirection_MAX = 4
};

// Enum ConZ.EBackgroundInteractionPlayType
enum class EBackgroundInteractionPlayType : uint8 {
	OneShot = 0,
	Begin = 1,
	Tick = 2,
	End = 3,
	EBackgroundInteractionPlayType_MAX = 4
};

// Enum ConZ.EBackgroundInteractionType
enum class EBackgroundInteractionType : uint8 {
	None = 0,
	Random = 1,
	Greeting = 2,
	TradeBegin = 3,
	BuyTab = 4,
	SellTab = 5,
	TradeEnd = 6,
	Parting = 7,
	Angry = 8,
	AngerRecovery = 9,
	GreetingSpecialOffer = 10,
	Num = 11,
	EBackgroundInteractionType_MAX = 12
};

// Enum ConZ.ESentryGrenadeLaunchAttackVariation
enum class ESentryGrenadeLaunchAttackVariation : uint8 {
	ExplosiveGrenade = 0,
	TearGasGrenade = 1,
	StunGrenade = 2,
	Count = 3,
	ESentryGrenadeLaunchAttackVariation_MAX = 4
};

// Enum ConZ.ESentryCombatVariation
enum class ESentryCombatVariation : uint8 {
	None = 0,
	Normal = 1,
	GunsHighFireRate = 2,
	SingleShotHighPrecision = 3,
	GrenadeLaunch = 4,
	Count = 5,
	ESentryCombatVariation_MAX = 6
};

// Enum ConZ.ESentryAttackMode
enum class ESentryAttackMode : uint8 {
	Melee = 0,
	MediumRange = 1,
	LongRange = 2,
	Count = 3,
	ESentryAttackMode_MAX = 4
};

// Enum ConZ.ESentryHealthState
enum class ESentryHealthState : uint8 {
	Healthy = 0,
	SlightlyDamaged = 1,
	LimpingLight = 2,
	LimpingMedium = 3,
	LimpingHeavy = 4,
	Dead = 5,
	Count = 6,
	ESentryHealthState_MAX = 7
};

// Enum ConZ.ESentryStance
enum class ESentryStance : uint8 {
	None = 0,
	Relaxed = 1,
	Alerted = 2,
	Combat = 3,
	Offline = 4,
	ESentryStance_MAX = 5
};

// Enum ConZ.ESentryMovementPace2
enum class ESentryMovementPace2 : uint8 {
	Walking = 0,
	Running = 1,
	Count = 2,
	ESentryMovementPace2_MAX = 3
};

// Enum ConZ.ESentryState2
enum class ESentryState2 : uint8 {
	None = 0,
	Initial = 1,
	Patrolling_Walking = 2,
	Patrolling_CheckSurroundings = 3,
	InvestigatingLocation = 4,
	InvestigatingBuilding = 5,
	GuardLocation = 6,
	EnemySpotted = 7,
	Alerted = 8,
	ObserveEnemyMovement = 9,
	Combat = 10,
	Combat_LostSight = 11,
	Deactivated = 12,
	Activating = 13,
	AttackingBB = 14,
	LeavingAfterBBAttack = 15,
	Count = 16,
	ESentryState2_MAX = 17
};

// Enum ConZ.ESentryThirdPersonSubview
enum class ESentryThirdPersonSubview : uint8 {
	Standing = 0,
	StandingAiming = 1,
	Count = 2,
	ESentryThirdPersonSubview_MAX = 3
};

// Enum ConZ.ESortType
enum class ESortType : uint8 {
	None = 0,
	Host = 1,
	Password = 2,
	Mode = 3,
	Version = 4,
	Time = 5,
	Friends = 6,
	Players = 7,
	Ping = 8,
	Favorites = 9,
	Official = 10,
	ESortType_MAX = 11
};

// Enum ConZ.EServerBrowserTab
enum class EServerBrowserTab : uint8 {
	Internet = 0,
	Favorites = 1,
	LastPlayed = 2,
	EServerBrowserTab_MAX = 3
};

// Enum ConZ.EServerRegion
enum class EServerRegion : uint8 {
	Any = 0,
	Africa = 1,
	Europe = 2,
	Australia = 3,
	NA = 4,
	SA = 5,
	Asia = 6,
	Russia = 7,
	Unknown = 8,
	Count = 9,
	EServerRegion_MAX = 10
};

// Enum ConZ.ESharkState
enum class ESharkState : uint8 {
	None = 0,
	Wandering = 1,
	Pursuing = 2,
	Circling = 3,
	Aggressive = 4,
	GrabAttack = 5,
	Fleeing = 6,
	PreparingForDestruction = 7,
	ESharkState_MAX = 8
};

// Enum ConZ.ESimpleAnimalMode
enum class ESimpleAnimalMode : uint8 {
	Wander = 0,
	Flee = 1,
	ESimpleAnimalMode_MAX = 2
};

// Enum ConZ.ESkillReplicationID
enum class ESkillReplicationID : uint8 {
	None = 0,
	EnduranceSkill = 1,
	ResistanceSkill = 2,
	RunningSkill = 3,
	SwimmingSkill = 4,
	MedicalSkill = 5,
	AwarenessSkill = 6,
	StealthSkill = 7,
	AnimalHandlingSkill = 8,
	CookingSkill = 9,
	SurvivalSkill = 10,
	BioChemSkill = 11,
	BoxingSkill = 12,
	MeleeWeaponsSkill = 13,
	RiflesSkill = 14,
	HandgunSkill = 15,
	SnipingSkill = 16,
	CamouflageSkill = 17,
	TacticsSkill = 18,
	ThrowingSkill = 19,
	ArcherySkill = 20,
	ThieverySkill = 21,
	DrivingSkill = 22,
	MotorcycleSkill = 23,
	EngineeringSkill = 24,
	DemolitionSkill = 25,
	AviationSkill = 26,
	FarmingSkill = 27,
	ESkillReplicationID_MAX = 28
};

// Enum ConZ.ESortByType
enum class ESortByType : uint8 {
	Descending = 0,
	Ascending = 1,
	ESortByType_MAX = 2
};

// Enum ConZ.ESortOrder
enum class ESortOrder : uint8 {
	Ascending = 0,
	Descending = 1,
	ESortOrder_MAX = 2
};

// Enum ConZ.EStartLocationTypeFlags
enum class EStartLocationTypeFlags : uint8 {
	None = 0,
	Player = 1,
	PlayerTournament = 2,
	CargoDrop = 4,
	EStartLocationTypeFlags_MAX = 5
};

// Enum ConZ.ESurvivalStatsSubcategory
enum class ESurvivalStatsSubcategory : uint8 {
	General = 0,
	Food = 1,
	Hunting = 2,
	Fishing = 3,
	Travel = 4,
	Metabolism = 5,
	Crafting = 6,
	Combat = 7,
	Events = 8,
	ESurvivalStatsSubcategory_MAX = 9
};

// Enum ConZ.ESurvivalStatsCategory
enum class ESurvivalStatsCategory : uint8 {
	Survival = 0,
	Weapons = 1,
	Combat = 2,
	ESurvivalStatsCategory_MAX = 3
};

// Enum ConZ.ESurvivalTipCodexCategory
enum class ESurvivalTipCodexCategory : uint8 {
	None = 0,
	Generic = 1,
	WelcomeToTheIsland = 2,
	Movement = 3,
	Survival = 4,
	Inventory = 5,
	Crafting = 6,
	Health = 7,
	Metabolism = 8,
	AttributesAndSkills = 9,
	Minigames = 10,
	Economy = 11,
	BaseBuilding = 12,
	Squads = 13,
	Count = 14,
	ESurvivalTipCodexCategory_MAX = 15
};

// Enum ConZ.ESurvivalTipLevel
enum class ESurvivalTipLevel : uint8 {
	None = 0,
	Beginner = 1,
	Intermediate = 2,
	Expert = 3,
	Count = 4,
	ESurvivalTipLevel_MAX = 5
};

// Enum ConZ.ESwitchboardSwitch
enum class ESwitchboardSwitch : uint8 {
	SwitchA = 0,
	SwitchB = 1,
	SwitchC = 2,
	SwitchD = 3,
	SwitchE = 4,
	SwitchF = 5,
	SwitchG = 6,
	SwitchH = 7,
	Count = 8,
	ESwitchboardSwitch_MAX = 9
};

// Enum ConZ.ETextInputType
enum class ETextInputType : uint8 {
	Text = 0,
	Number = 1,
	ETextInputType_MAX = 2
};

// Enum ConZ.ECookingHeatLevel
enum class ECookingHeatLevel : uint8 {
	Cold = 0,
	Mild = 1,
	Warm = 2,
	Low = 3,
	MediumLow = 4,
	Medium = 5,
	Hot = 6,
	VeryHot = 7,
	ExtremelyHot = 8,
	ECookingHeatLevel_MAX = 9
};

// Enum ConZ.EConZColor
enum class EConZColor : uint8 {
	None = 0,
	Black = 1,
	Brown = 2,
	Blue = 3,
	Green = 4,
	Red = 5,
	Blonde = 6,
	Ginger = 7,
	Grey = 8,
	EConZColor_MAX = 9
};

// Enum ConZ.EConZUnit
enum class EConZUnit : uint8 {
	None = 0,
	Second = 1,
	Minute = 2,
	MinuteShort = 3,
	Hour = 4,
	Day = 5,
	Year = 6,
	Gram = 7,
	Milligram = 8,
	Microgram = 9,
	Kilogram = 10,
	Liter = 11,
	Milliliter = 12,
	Calorie = 13,
	Kilocalorie = 14,
	Meter = 15,
	Centimeter = 16,
	Kilometer = 17,
	Percentage = 18,
	Health = 19,
	Stamina = 20,
	Celsius = 21,
	Watt = 22,
	MeterSquared = 23,
	Sievert = 24,
	Ampere = 25,
	AmpereHour = 26,
	EConZUnit_MAX = 27
};

// Enum ConZ.EItemThrowingBehavior
enum class EItemThrowingBehavior : uint8 {
	None = 0,
	Default = 1,
	Piercing = 2,
	Fragile = 3,
	Sticky = 4,
	EItemThrowingBehavior_MAX = 5
};

// Enum ConZ.EBleedingSeverity
enum class EBleedingSeverity : uint8 {
	NoBleeding = 0,
	VeryLight = 1,
	Light = 2,
	Moderate = 3,
	Heavy = 4,
	Severe = 5,
	EBleedingSeverity_MAX = 6
};

// Enum ConZ.ETraderLocationMarkerType
enum class ETraderLocationMarkerType : uint8 {
	SurgeryRoom = 0,
	BarberShop = 1,
	ETraderLocationMarkerType_MAX = 2
};

// Enum ConZ.ETradeableSellFlags
enum class ETradeableSellFlags : uint8 {
	None = 0,
	IgnoreLackOfFunds = 1,
	ETradeableSellFlags_MAX = 2
};

// Enum ConZ.ETradeErrorMessage
enum class ETradeErrorMessage : uint8 {
	None = 0,
	TradeAttemptedOnClient = 1,
	TraderOrTradeableInvalid = 2,
	NotEnoughFunds = 3,
	TradeableOutOfStock = 4,
	TraderInvalidCategory = 5,
	TradeableCannotBePurchased = 6,
	TradeableInvalidPrice = 7,
	NoValidTradeCandidates = 8,
	TradingOnCooldown = 9,
	WorldSpawnLocationBlocked = 10,
	PlayerBasedPriceMultiplierChanged = 11,
	RequiredBankCardTypeMissing = 12,
	TraderInsufficientFunds = 13,
	InsufficientAccountBalance = 14,
	NotEnoughFamePoints = 15,
	Unknown = 16,
	ETradeErrorMessage_MAX = 17
};

// Enum ConZ.ETradeOutpostProsperityLevel
enum class ETradeOutpostProsperityLevel : uint8 {
	None = 0,
	VeryPoor = 1,
	Poor = 2,
	Prosperous = 3,
	Wealthy = 4,
	Rich = 5,
	Count = 6,
	ETradeOutpostProsperityLevel_MAX = 7
};

// Enum ConZ.ETradeableSpawnType
enum class ETradeableSpawnType : uint8 {
	None = 0,
	DepotSpawn = 1,
	WorldSpawn = 2,
	ETradeableSpawnType_MAX = 3
};

// Enum ConZ.ETraderType
enum class ETraderType : uint8 {
	None = 0,
	Armorer = 1,
	GeneralGoods = 2,
	Mechanic = 3,
	Doctor = 4,
	Harbourmaster = 5,
	Bartender = 6,
	Barber = 7,
	TradesEverything = 8,
	Count = 9,
	ETraderType_MAX = 10
};

// Enum ConZ.ETradeCategory
enum class ETradeCategory : uint8 {
	None = 0,
	Armour = 1,
	Helmets = 2,
	Jackets = 3,
	Pants = 4,
	Headwear = 5,
	Tops = 6,
	Underwear = 7,
	Neckwaist = 8,
	Hands = 9,
	Face = 10,
	Feet = 11,
	Backpacks = 12,
	RangedWeapon = 13,
	RangedWeaponAccessories = 14,
	Ammo = 15,
	MeleeWeapon = 16,
	Explosives = 17,
	Crafting = 18,
	Fishing = 19,
	Alcohol = 20,
	Food = 21,
	Drink = 22,
	FirstAid = 23,
	Vehicles = 24,
	Misc = 25,
	WaterVehicles = 26,
	Cosmetics = 27,
	Count = 28,
	ETradeCategory_MAX = 29
};

// Enum ConZ.ETrapType
enum class ETrapType : uint8 {
	Default = 0,
	SuicideZombie = 1,
	ETrapType_MAX = 2
};

// Enum ConZ.ETrapTriggerType
enum class ETrapTriggerType : uint8 {
	None = 0,
	MotionTrigger = 1,
	LaserTrigger = 2,
	TripwireTrigger = 3,
	TimedTrigger = 4,
	ETrapTriggerType_MAX = 5
};

// Enum ConZ.EModifyTurretPaintjobActionSubtype
enum class EModifyTurretPaintjobActionSubtype : uint8 {
	ClearPaintjob = 0,
	RefreshPaintjob = 1,
	PaintSolidColor = 2,
	SetPattern = 3,
	SetColor = 4,
	EModifyTurretPaintjobActionSubtype_MAX = 5
};

// Enum ConZ.ETurretState
enum class ETurretState : uint8 {
	None = 0,
	TurnedOn = 1,
	Firing = 2,
	TargetLost = 4,
	Activated = 8,
	SeesTarget = 16,
	Powered = 32,
	PendingTurnOff = 64,
	NumReplicatedFlags = 5,
	ReplicatedFlags = 31,
	ETurretState_MAX = 65
};

// Enum ConZ.ETwitchDropsConnectionStatus
enum class ETwitchDropsConnectionStatus : uint8 {
	Unknown = 0,
	NoInternet = 1,
	NotConnected = 2,
	Connecting = 3,
	Connected = 4,
	Count = 5,
	ETwitchDropsConnectionStatus_MAX = 6
};

// Enum ConZ.EWidgetType
enum class EWidgetType : uint8 {
	ItemWidgetClass = 0,
	InventorySlotWidgetClass = 1,
	HudWidgetClass = 2,
	LoadingIconWidgetClass = 3,
	SpawnScreenWidgetClass = 4,
	WaypointScreenWidgetClass = 5,
	ActionProgressWidgetClass = 6,
	TeamInvitationWidgetClass = 7,
	CraftingInfoWidgetClass = 8,
	CraftingComponentWidgetClass = 9,
	EmptySlotWidgetClass = 10,
	PreviousNextSwitchWidgetClass = 11,
	GameEventCardWidgetClass = 12,
	GameEventScoreboardWidgetClass = 13,
	GameEventMiniScoreboardWidgetClass = 14,
	TournamentScoreboardWidgetClass = 15,
	CircularMenuWidgetClass = 16,
	CircularMenuSegmentWidgetClass = 17,
	InventoryContainerWidget2Test = 18,
	InventoryItemWidget2Test = 19,
	ItemInventoryWidget2 = 20,
	ItemWidget2 = 21,
	ItemWidget2VicinityContainer = 22,
	ItemTooltipWidget = 23,
	TooltipPanelFoodOverview = 24,
	TooltipPanelFoodNutritionsSingle = 25,
	TooltipPanelFoodNutritionsFull = 26,
	TooltipPanelFoodGraphs = 27,
	TooltipPanelWeaponAbsolute = 28,
	TooltipPanelWeaponRelative = 29,
	StatisticsListRow = 30,
	ThrowingQuickAccessMenu = 31,
	ItemSplitWidgetClass = 32,
	RaidProtectionSelectionWidgetClass = 33,
	QuestTrackingWidgetClass = 34,
	EWidgetType_MAX = 35
};

// Enum ConZ.EConZUIInputMode
enum class EConZUIInputMode : uint8 {
	GameAndUI = 0,
	UI = 1,
	Game = 2,
	Count = 3,
	EConZUIInputMode_MAX = 4
};

// Enum ConZ.EUnarmedCombatInput
enum class EUnarmedCombatInput : uint8 {
	WalkForward = 0,
	WalkBackward = 1,
	WalkRight = 2,
	WalkLeft = 3,
	Punch = 4,
	BlockPressed = 5,
	BlockReleased = 6,
	PreviousTarget = 7,
	NextTarget = 8,
	ReleaseCursor = 9,
	EUnarmedCombatInput_MAX = 10
};

// Enum ConZ.EUnpackedItemCountType
enum class EUnpackedItemCountType : uint8 {
	Fixed = 0,
	PerUse = 1,
	EUnpackedItemCountType_MAX = 2
};

// Enum ConZ.EItemUnpackingType
enum class EItemUnpackingType : uint8 {
	Consume = 0,
	UseOnce = 1,
	UseFully = 2,
	EItemUnpackingType_MAX = 3
};

// Enum ConZ.EUserProfileType
enum class EUserProfileType : uint8 {
	Singleplayer = 0,
	MultiplayerAuthority = 1,
	MultiplayerCache = 2,
	EUserProfileType_MAX = 3
};

// Enum ConZ.EChangeSource
enum class EChangeSource : uint8 {
	Unknown = 0,
	Code = 1,
	Player = 2,
	EChangeSource_MAX = 3
};

// Enum ConZ.EVehicleMountType
enum class EVehicleMountType : uint8 {
	Passenger = 0,
	Driver = 1,
	EVehicleMountType_MAX = 2
};

// Enum ConZ.EVehicleAttachment_DoorFlags
enum class EVehicleAttachment_DoorFlags : uint8 {
	None = 0,
	Open = 1,
	Closed = 2,
	Simulating = 4,
	EVehicleAttachment_MAX = 5
};

// Enum ConZ.EEngineBlockState
enum class EEngineBlockState : uint8 {
	Off = 0,
	Ignition = 1,
	Running = 2,
	Stalling = 3,
	Removed = 4,
	EEngineBlockState_MAX = 5
};

// Enum ConZ.EVehicleClimbingPermissions
enum class EVehicleClimbingPermissions : uint8 {
	None = 0,
	AllowPrisoners = 1,
	AllowOthers = 2,
	EVehicleClimbingPermissions_MAX = 3
};

// Enum ConZ.EVehicleCheatType
enum class EVehicleCheatType : uint8 {
	None = 0,
	FlyingDirect = 1,
	FlyingForce = 2,
	Count = 3,
	EVehicleCheatType_MAX = 4
};

// Enum ConZ.EVehicleLightSourceType
enum class EVehicleLightSourceType : uint8 {
	SpotLight = 0,
	MaterialParameter = 1,
	EVehicleLightSourceType_MAX = 2
};

// Enum ConZ.EModifyVehiclePaintjobActionSubtype
enum class EModifyVehiclePaintjobActionSubtype : uint8 {
	ClearPaintjob = 0,
	RefreshPaintjob = 1,
	PaintSolidColor = 2,
	SetPattern = 3,
	SetColor = 4,
	EModifyVehiclePaintjobActionSubtype_MAX = 5
};

// Enum ConZ.EAerodynamicSurfaceType
enum class EAerodynamicSurfaceType : uint8 {
	None = 0,
	LeftAilerons = 1,
	RightAilerons = 2,
	Elevators = 3,
	Flaps = 4,
	Rudder = 5,
	EAerodynamicSurfaceType_MAX = 6
};

// Enum ConZ.EUnmountReason
enum class EUnmountReason : uint8 {
	None = 0,
	Regular = 1,
	EndPlay = 2,
	EUnmountReason_MAX = 3
};

// Enum ConZ.EVehicleEngineState
enum class EVehicleEngineState : uint8 {
	Unavailable = 0,
	TurnedOff = 1,
	StartingViaIgnition = 2,
	StartingViaMotion = 3,
	ReadyDelay = 4,
	Ready = 5,
	FailedToStartDelay = 6,
	FailedToStart = 7,
	FailedToStartNoFuelDelay = 8,
	FailedToStartNoFuel = 9,
	FailedToStartNoBatteryDelay = 10,
	FailedToStartNoBattery = 11,
	StalledDelay = 12,
	Stalled = 13,
	Broken = 14,
	EVehicleEngineState_MAX = 15
};

// Enum ConZ.EVehicleSeatType
enum class EVehicleSeatType : uint8 {
	Driver = 0,
	Passenger = 1,
	EVehicleSeatType_MAX = 2
};

// Enum ConZ.EVehicleManualSpawnType
enum class EVehicleManualSpawnType : uint8 {
	None = 0,
	WheelsOnly = 1,
	MinimalFunctional = 2,
	Full = 3,
	Count = 4,
	EVehicleManualSpawnType_MAX = 5
};

// Enum ConZ.EVicinityFilterType
enum class EVicinityFilterType : uint8 {
	None = 0,
	Clothes = 1,
	Food = 2,
	Liquid = 4,
	Weapon = 8,
	Tool = 16,
	Medical = 32,
	EVicinityFilterType_MAX = 33
};

// Enum ConZ.EVoltageMatchingMinigameElementFunction
enum class EVoltageMatchingMinigameElementFunction : uint8 {
	None = 0,
	Addition = 1,
	Subtraction = 2,
	Multiplication = 3,
	Division = 4,
	EVoltageMatchingMinigameElementFunction_MAX = 5
};

// Enum ConZ.EWeaponAnimationCurve
enum class EWeaponAnimationCurve : uint8 {
	DrawAmount = 0,
	StrengthAmount = 1,
	HideBone = 2,
	Count = 3,
	EWeaponAnimationCurve_MAX = 4
};

// Enum ConZ.EMagazineAmmoCountType
enum class EMagazineAmmoCountType : uint8 {
	Countable = 0,
	Even = 1,
	Odd = 2,
	EMagazineAmmoCountType_MAX = 3
};

// Enum ConZ.EBowDrawPercentage
enum class EBowDrawPercentage : uint8 {
	Draw50percent = 0,
	Draw75percent = 1,
	Draw100percent = 2,
	Count = 3,
	EBowDrawPercentage_MAX = 4
};

// Enum ConZ.EWeaponBowState
enum class EWeaponBowState : uint8 {
	None = 0,
	InsertArrow = 1,
	RemoveArrow = 2,
	Draw = 3,
	CancelFiring = 4,
	FireDummy = 5,
	Fire = 6,
	FireAndInsertArrow = 7,
	Active = 8,
	EWeaponBowState_MAX = 9
};

// Enum ConZ.EWeaponCrossbowDrawCategory
enum class EWeaponCrossbowDrawCategory : uint8 {
	UnableToDraw = 0,
	Slow = 1,
	Normal = 2,
	Count = 3,
	EWeaponCrossbowDrawCategory_MAX = 4
};

// Enum ConZ.EWeaponRockerLauncherActionState
enum class EWeaponRockerLauncherActionState : uint8 {
	Default = 0,
	Arm = 1,
	Armed = 2,
	Unarm = 3,
	Unarmed = 4,
	EWeaponRockerLauncherActionState_MAX = 5
};

// Enum ConZ.EWeaponOverrideSpreadType
enum class EWeaponOverrideSpreadType : uint8 {
	NoOverride = 0,
	ExactValue = 1,
	Multiplier = 2,
	EWeaponOverrideSpreadType_MAX = 3
};

// Enum ConZ.EWeaponDownTheSightsMode
enum class EWeaponDownTheSightsMode : uint8 {
	IronSights = 0,
	Scope = 1,
	EWeaponDownTheSightsMode_MAX = 2
};

// Enum ConZ.EWeaponEjectFromChamberType
enum class EWeaponEjectFromChamberType : uint8 {
	Casing = 0,
	LiveRound = 1,
	EWeaponEjectFromChamberType_MAX = 2
};

// Enum ConZ.EReloadWeaponSequence
enum class EReloadWeaponSequence : uint8 {
	None = 0,
	InsertMagazine = 1,
	RemoveMagazineInstertMagazine = 2,
	InstertCartridge = 3,
	RemoveMagazineInstertCartridge = 4,
	EReloadWeaponSequence_MAX = 5
};

// Enum ConZ.EWeaponCombatModeType
enum class EWeaponCombatModeType : uint8 {
	Relaxed = 0,
	Aiming = 1,
	Count = 2,
	EWeaponCombatModeType_MAX = 3
};

// Enum ConZ.EWeaponAttachmentActionType
enum class EWeaponAttachmentActionType : uint8 {
	Add = 0,
	Remove = 1,
	Swap = 2,
	Count = 3,
	EWeaponAttachmentActionType_MAX = 4
};

// Enum ConZ.EWeatherControllerDebugOverrideType
enum class EWeatherControllerDebugOverrideType : uint8 {
	WindAzimuth = 0,
	WindIntensity = 1,
	WindAzimuthForWaves = 2,
	WindIntensityForWaves = 3,
	Count = 4,
	EWeatherControllerDebugOverrideType_MAX = 5
};

// Enum ConZ.ECraftingMarkerMode
enum class ECraftingMarkerMode : uint8 {
	Marker = 0,
	FullInfo = 1,
	ECraftingMarkerMode_MAX = 2
};

// Enum ConZ.EZombie2AIState
enum class EZombie2AIState : uint8 {
	None = 0,
	Initial = 1,
	Lying = 2,
	Relaxed = 3,
	Relaxed_Idle = 4,
	Relaxed_Wander = 5,
	Relaxed_Lively = 6,
	Alerted = 7,
	Alerted_Frustrated = 8,
	Combat = 9,
	Ragdoll = 10,
	EZombie2AIState_MAX = 11
};

// Enum ConZ.EZombieCustomMovementMode
enum class EZombieCustomMovementMode : uint8 {
	None = 0,
	Anchoring = 1,
	ClimbingWindow_Anchoring = 2,
	ClimbingWindow_PlayingMontage = 3,
	EZombieCustomMovementMode_MAX = 4
};

// Enum ConZ.EZombieRagdollAutoRecoveryType
enum class EZombieRagdollAutoRecoveryType : uint8 {
	None = 0,
	WhenAtRest = 1,
	AfterTimeSpan = 2,
	WhenAtRestAfterTimeSpan = 3,
	EZombieRagdollAutoRecoveryType_MAX = 4
};

// Enum ConZ.EZombieTurnMontage
enum class EZombieTurnMontage : uint8 {
	RelaxedIdle = 0,
	AlertedIdle = 1,
	CombatIdle = 2,
	RelaxedIdleToAlertedIdle = 3,
	Count = 4,
	EZombieTurnMontage_MAX = 5
};

// Enum ConZ.EZombieStance
enum class EZombieStance : uint8 {
	Relaxed = 0,
	Lying = 1,
	LyingToStandingTransition = 2,
	Alerted = 3,
	Combat = 4,
	Count = 5,
	EZombieStance_MAX = 6
};

// ScriptStruct ConZ.CharacterAndItemAnimation
// Size: 0x10 (Inherited: 0x00)
struct FCharacterAndItemAnimation {
	struct UAnimMontage* CharacterMontage; // 0x00(0x08)
	struct UAnimMontage* ItemMontage; // 0x08(0x08)
};

// ScriptStruct ConZ.WidgetDisplayInfo
// Size: 0x0c (Inherited: 0x00)
struct FWidgetDisplayInfo {
	enum class EWidgetDisplayInfoType DisplayType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t First; // 0x04(0x04)
	int32_t Second; // 0x08(0x04)
};

// ScriptStruct ConZ.InteractionData
// Size: 0x68 (Inherited: 0x00)
struct FInteractionData {
	bool ModifierPressed; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	int64_t IntegerData; // 0x08(0x08)
	struct UObject* PointerData; // 0x10(0x08)
	bool BoolData; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FText TextData; // 0x20(0x18)
	struct FVector InteractionLocation; // 0x38(0x0c)
	struct FVector InteractionNormal; // 0x44(0x0c)
	struct FVector VectorData; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	int64_t BaseElementId; // 0x60(0x08)
};

// ScriptStruct ConZ.CraftingPart
// Size: 0x20 (Inherited: 0x00)
struct FCraftingPart {
	struct UObject* ItemClass; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct ConZ.InventoryStackData
// Size: 0x80 (Inherited: 0x00)
struct FInventoryStackData {
	struct UObject* _stackClass; // 0x00(0x08)
	float _approximateCount; // 0x08(0x04)
	float _approximateMaxCount; // 0x0c(0x04)
	float _weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<char> _data; // 0x18(0x10)
	char pad_28[0x58]; // 0x28(0x58)
};

// ScriptStruct ConZ.VisibilityReplication
// Size: 0x08 (Inherited: 0x00)
struct FVisibilityReplication {
	bool Value; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t RepHelper; // 0x04(0x04)
};

// ScriptStruct ConZ.PackedEntitySetupAndId
// Size: 0x08 (Inherited: 0x00)
struct FPackedEntitySetupAndId {
	uint64_t _value; // 0x00(0x08)
};

// ScriptStruct ConZ.CraftingIngredientInstance
// Size: 0x10 (Inherited: 0x00)
struct FCraftingIngredientInstance {
	struct UCraftingIngredientTag* Type; // 0x00(0x08)
	float Amount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ConZ.AttachmentSocketOffset
// Size: 0x20 (Inherited: 0x00)
struct FAttachmentSocketOffset {
	struct FName BoneName; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
};

// ScriptStruct ConZ.AttachmentSocket
// Size: 0x10 (Inherited: 0x00)
struct FAttachmentSocket {
	struct TArray<struct FAttachmentSocketDataItem> Items; // 0x00(0x10)
};

// ScriptStruct ConZ.AttachmentSocketDataItem
// Size: 0x18 (Inherited: 0x00)
struct FAttachmentSocketDataItem {
	struct FName BoneName; // 0x00(0x08)
	struct UAttachmentSocketMountType* MountType; // 0x08(0x08)
	struct AActor* MountedItem; // 0x10(0x08)
};

// ScriptStruct ConZ.ItemMotionNoise
// Size: 0x08 (Inherited: 0x00)
struct FItemMotionNoise {
	struct UAkAudioEvent* AudioEvent; // 0x00(0x08)
};

// ScriptStruct ConZ.ItemLocation
// Size: 0x0f (Inherited: 0x00)
struct FItemLocation {
	bool Coastal; // 0x00(0x01)
	bool Continantal; // 0x01(0x01)
	bool Mountain; // 0x02(0x01)
	bool Urban; // 0x03(0x01)
	bool Rural; // 0x04(0x01)
	bool Industrial; // 0x05(0x01)
	bool Police; // 0x06(0x01)
	bool MilitaryBasic; // 0x07(0x01)
	bool MilitaryMedium; // 0x08(0x01)
	bool MilitaryAdvanced; // 0x09(0x01)
	bool MilitaryWW2; // 0x0a(0x01)
	bool Sport; // 0x0b(0x01)
	bool Market; // 0x0c(0x01)
	bool GasStation; // 0x0d(0x01)
	bool Airfield; // 0x0e(0x01)
};

// ScriptStruct ConZ.CharacterActionReplicationHelper
// Size: 0x18 (Inherited: 0x00)
struct FCharacterActionReplicationHelper {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ConZ.EnvironmentDescription
// Size: 0x04 (Inherited: 0x00)
struct FEnvironmentDescription {
	enum class EEnvironmentClass EnvironmentClass; // 0x00(0x01)
	bool IsUnderground; // 0x01(0x01)
	bool IsAbandonedBunker; // 0x02(0x01)
	bool ShouldBlockWeatherEffects; // 0x03(0x01)
};

// ScriptStruct ConZ.CharacterActionAck
// Size: 0x10 (Inherited: 0x00)
struct FCharacterActionAck {
	int32_t ActionId; // 0x00(0x04)
	int32_t SubActionIndex; // 0x04(0x04)
	int32_t ActionGenerationIndex; // 0x08(0x04)
	enum class ECharacterActionAckType Type; // 0x0c(0x01)
	enum class ECharacterActionEndState EndState; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct ConZ.MeleeAttackCapsuleHitInfo
// Size: 0x160 (Inherited: 0x00)
struct FMeleeAttackCapsuleHitInfo {
	struct FMeleeAttackCapsule MeleeAttackCapsule; // 0x00(0x80)
	struct FHitResult HitResult; // 0x80(0x98)
	enum class EHitSeverity HitSeverity; // 0x118(0x01)
	enum class EAttackType AttackType; // 0x119(0x01)
	char pad_11A[0x2]; // 0x11a(0x02)
	struct FVector_NetQuantize100 AttackerLocation; // 0x11c(0x0c)
	struct FVector_NetQuantize100 VictimLocation; // 0x128(0x0c)
	char pad_134[0x4]; // 0x134(0x04)
	struct FGameplayTagContainer Tags; // 0x138(0x20)
	char pad_158[0x8]; // 0x158(0x08)
};

// ScriptStruct ConZ.MeleeAttackCapsule
// Size: 0x80 (Inherited: 0x00)
struct FMeleeAttackCapsule {
	struct TWeakObjectPtr<struct AActor> AttachParent; // 0x00(0x08)
	struct FGameplayTag Attachment; // 0x08(0x08)
	struct FTransform RelativeTransform; // 0x10(0x30)
	float UnscaledRadius; // 0x40(0x04)
	float UnscaledHalfHeight; // 0x44(0x04)
	struct FMeleeWeaponDesc WeaponDesc; // 0x48(0x38)
};

// ScriptStruct ConZ.MeleeWeaponDesc
// Size: 0x38 (Inherited: 0x00)
struct FMeleeWeaponDesc {
	float Damage; // 0x00(0x04)
	float DamageInGameEvent; // 0x04(0x04)
	struct FTargetTypeDamageMultiplier TargetTypeMultiplier; // 0x08(0x10)
	float Energy; // 0x18(0x04)
	float SharpnessSlash; // 0x1c(0x04)
	float SharpnessPierce; // 0x20(0x04)
	int32_t HitSeverityChange; // 0x24(0x04)
	enum class ECharacterImpactSourceSoundCategory ImpactSoundCategory; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UProjectileImpactEffects* ImpactEffects; // 0x30(0x08)
};

// ScriptStruct ConZ.TargetTypeDamageMultiplier
// Size: 0x10 (Inherited: 0x00)
struct FTargetTypeDamageMultiplier {
	struct TArray<struct FDamageMultiplier> _multipliers; // 0x00(0x10)
};

// ScriptStruct ConZ.DamageMultiplier
// Size: 0x04 (Inherited: 0x00)
struct FDamageMultiplier {
	float Multiplier; // 0x00(0x04)
};

// ScriptStruct ConZ.HitEffects
// Size: 0x38 (Inherited: 0x00)
struct FHitEffects {
	float SpeedThreshold; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UParticleSystem* ParticleSystem; // 0x08(0x08)
	struct FVector ParticlesScale; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UAkAudioEvent* AudioEvent; // 0x20(0x08)
	struct UMatineeCameraShake* CameraShake; // 0x28(0x08)
	float CameraShakeScale; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ConZ.DbIntegerId
// Size: 0x08 (Inherited: 0x00)
struct FDbIntegerId {
	int64_t Value; // 0x00(0x08)
};

// ScriptStruct ConZ.BaseInteractionEvent
// Size: 0x08 (Inherited: 0x00)
struct FBaseInteractionEvent {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ConZ.ConZSquadEmblem
// Size: 0x08 (Inherited: 0x00)
struct FConZSquadEmblem {
	struct FConZSquadEmblemElement Background; // 0x00(0x04)
	struct FConZSquadEmblemElement Symbol; // 0x04(0x04)
};

// ScriptStruct ConZ.ConZSquadEmblemElement
// Size: 0x04 (Inherited: 0x00)
struct FConZSquadEmblemElement {
	char ShapeIndex; // 0x00(0x01)
	char PrimaryColorIndex; // 0x01(0x01)
	char SecondaryColorIndex; // 0x02(0x01)
	char TertiaryColorIndex; // 0x03(0x01)
};

// ScriptStruct ConZ.AmmunitionData
// Size: 0x18 (Inherited: 0x00)
struct FAmmunitionData {
	struct AAmmunitionItem* AmmunitionItemClass; // 0x00(0x08)
	float health; // 0x08(0x04)
	float MaxHealth; // 0x0c(0x04)
	float DefaultMaxHealth; // 0x10(0x04)
	enum class EAmmunitionCartridgeState State; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ConZ.CharacterTemplate
// Size: 0xe8 (Inherited: 0x00)
struct FCharacterTemplate {
	float Strength; // 0x00(0x04)
	float Constitution; // 0x04(0x04)
	float Dexterity; // 0x08(0x04)
	float Intelligence; // 0x0c(0x04)
	int32_t Age; // 0x10(0x04)
	enum class EConZGender Gender; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FString Name; // 0x18(0x10)
	int32_t AppearanceIndex; // 0x28(0x04)
	int32_t TattooIndex; // 0x2c(0x04)
	int32_t BodyHairIndex; // 0x30(0x04)
	int32_t HairStyleIndex; // 0x34(0x04)
	int32_t MoustacheStyleIndex; // 0x38(0x04)
	int32_t BeardStyleIndex; // 0x3c(0x04)
	float BreastSize; // 0x40(0x04)
	float PenisSize; // 0x44(0x04)
	bool GrowOverTime; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32_t TeamIndex; // 0x4c(0x04)
	struct FString BirthDate; // 0x50(0x10)
	struct FString ArrestDate; // 0x60(0x10)
	struct TArray<struct FSkillTemplate> Skills; // 0x70(0x10)
	struct AItem* Item0; // 0x80(0x08)
	struct AItem* Item1; // 0x88(0x08)
	struct AItem* Item2; // 0x90(0x08)
	int32_t FaceTypeIndex; // 0x98(0x04)
	int32_t SkinToneIndex; // 0x9c(0x04)
	int32_t HairColorId; // 0xa0(0x04)
	int32_t FacialHairColorId; // 0xa4(0x04)
	int32_t EyeColorIndex; // 0xa8(0x04)
	int32_t IrisTypeIndex; // 0xac(0x04)
	struct FLinearColor EyeshadowColor; // 0xb0(0x10)
	struct FLinearColor EyelinerColor; // 0xc0(0x10)
	struct FLinearColor LipstickColor; // 0xd0(0x10)
	char EyeMakeupMetalness; // 0xe0(0x01)
	char EyeMakeupIntensity; // 0xe1(0x01)
	char LipstickRoughness; // 0xe2(0x01)
	char LipstickIntensity; // 0xe3(0x01)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// ScriptStruct ConZ.SkillTemplate
// Size: 0x38 (Inherited: 0x00)
struct FSkillTemplate {
	enum class ESkillAttribute Attribute; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Name; // 0x08(0x18)
	struct FString ClassName; // 0x20(0x10)
	enum class ESkillLevel Level; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Experience; // 0x34(0x04)
};

// ScriptStruct ConZ.PrisonerTeleportRequest
// Size: 0x20 (Inherited: 0x00)
struct FPrisonerTeleportRequest {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ConZ.SectorId
// Size: 0x08 (Inherited: 0x00)
struct FSectorId {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ConZ.InventoryPositionDataRepHelper
// Size: 0x20 (Inherited: 0x00)
struct FInventoryPositionDataRepHelper {
	struct UObject* _dataClass; // 0x00(0x08)
	struct UInventoryPositionData* _positionData; // 0x08(0x08)
	struct UObject* _owner; // 0x10(0x08)
	int32_t _repKey; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ConZ.ConZBaseElementIdentifier
// Size: 0x20 (Inherited: 0x00)
struct FConZBaseElementIdentifier {
	int64_t BaseId; // 0x00(0x08)
	int64_t ElementID; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ConZ.MiniGameEndParams
// Size: 0x04 (Inherited: 0x00)
struct FMiniGameEndParams {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct ConZ.AmmunitionArrowSpawningParamsHelper
// Size: 0x18 (Inherited: 0x00)
struct FAmmunitionArrowSpawningParamsHelper {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ConZ.WeaponStateSyncData
// Size: 0x48 (Inherited: 0x00)
struct FWeaponStateSyncData {
	int32_t ZeroRange; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FAmmunitionData> LoadedAmmoData; // 0x08(0x10)
	struct TArray<struct FAmmunitionData> InternalMagazineAmmoData; // 0x18(0x10)
	struct UObject* LoadedAmmunitionItemClass; // 0x28(0x08)
	struct AProjectile* LoadedProjectileClass; // 0x30(0x08)
	enum class EWeaponFiringMode FiringMode; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t malfunction; // 0x3c(0x04)
	bool IsChamberOpened; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct ConZ.PrisonerMountReplication
// Size: 0x10 (Inherited: 0x00)
struct FPrisonerMountReplication {
	struct UObject* MountedSlot; // 0x00(0x08)
	enum class EPrisonerMountSlotFlags _mountFlags; // 0x08(0x01)
	char _version; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct ConZ.DeluxeVersion
// Size: 0x0c (Inherited: 0x00)
struct FDeluxeVersion {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct ConZ.ActorPaintParams
// Size: 0x38 (Inherited: 0x00)
struct FActorPaintParams {
	struct TArray<struct FName> _partPaintNames; // 0x00(0x10)
	char pad_10[0x18]; // 0x10(0x18)
	struct TArray<struct UMaterialInterface*> _cachedOriginalMaterials; // 0x28(0x10)
};

// ScriptStruct ConZ.DoorRepData
// Size: 0x48 (Inherited: 0x00)
struct FDoorRepData {
	bool IsBrokenDown; // 0x00(0x01)
	enum class EDoorStateFlags StateFlags; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FEntityId EntityId; // 0x08(0x08)
	struct FDoorEntityRepData EntityRepData; // 0x10(0x38)
};

// ScriptStruct ConZ.DoorEntityRepData
// Size: 0x38 (Inherited: 0x00)
struct FDoorEntityRepData {
	struct FDbIntegerId OwningUserProfileId; // 0x00(0x08)
	struct FDbIntegerId BaseElementDoorId; // 0x08(0x08)
	enum class EAccessLevel AccessLevel; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FDoorEntityUpgradeLock> Locks; // 0x18(0x10)
	struct TArray<struct FDoorEntityUpgradeAttachment> Attachments; // 0x28(0x10)
};

// ScriptStruct ConZ.DoorEntityUpgradeAttachment
// Size: 0x38 (Inherited: 0x00)
struct FDoorEntityUpgradeAttachment {
	float PassiveItemHealthNormalized; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TSoftClassPtr<UObject> Class; // 0x08(0x28)
	struct FEntityId AttachedEntityId; // 0x30(0x08)
};

// ScriptStruct ConZ.EntityId
// Size: 0x08 (Inherited: 0x00)
struct FEntityId {
	int64_t Value; // 0x00(0x08)
};

// ScriptStruct ConZ.DoorEntityUpgradeLock
// Size: 0x38 (Inherited: 0x00)
struct FDoorEntityUpgradeLock {
	float ItemHealthNormalized; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TSoftClassPtr<UObject> Class; // 0x08(0x28)
	struct ULockData* LockData; // 0x30(0x08)
};

// ScriptStruct ConZ.BaseInteractionParams
// Size: 0x08 (Inherited: 0x00)
struct FBaseInteractionParams {
	struct FDbIntegerId ElementID; // 0x00(0x08)
};

// ScriptStruct ConZ.ObjectConditionContainer
// Size: 0x10 (Inherited: 0x00)
struct FObjectConditionContainer {
	struct TArray<struct UObject*> _objectConditions; // 0x00(0x10)
};

// ScriptStruct ConZ.TriggeredEventData
// Size: 0x10 (Inherited: 0x00)
struct FTriggeredEventData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ConZ.WeaponReloadData
// Size: 0x30 (Inherited: 0x00)
struct FWeaponReloadData {
	bool IsQuick; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AItem* Item; // 0x08(0x08)
	struct AItem* Item2; // 0x10(0x08)
	int32_t Count; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UObject* ReloadSequenceClass; // 0x20(0x08)
	float AnimationPlayRate; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ConZ.BodyWeaponAnimation
// Size: 0x10 (Inherited: 0x00)
struct FBodyWeaponAnimation {
	struct UAnimMontage* Body; // 0x00(0x08)
	struct UAnimMontage* Weapon; // 0x08(0x08)
};

// ScriptStruct ConZ.WeaponMalfunctionProbability
// Size: 0x08 (Inherited: 0x00)
struct FWeaponMalfunctionProbability {
	enum class EWeaponMalfunction malfunction; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Probability; // 0x04(0x04)
};

// ScriptStruct ConZ.WeaponMalfunctionEventDescription
// Size: 0x08 (Inherited: 0x00)
struct FWeaponMalfunctionEventDescription {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ConZ.FireShotDescription
// Size: 0x08 (Inherited: 0x00)
struct FFireShotDescription {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ConZ.FireShotProjectileData
// Size: 0x30 (Inherited: 0x00)
struct FFireShotProjectileData {
	struct FVector StartLocation; // 0x00(0x0c)
	struct FVector_NetQuantizeNormal shootDirection; // 0x0c(0x0c)
	int32_t ZeroRange; // 0x18(0x04)
	float Windage; // 0x1c(0x04)
	int32_t RandomFactor; // 0x20(0x04)
	float ConeHalfAngle; // 0x24(0x04)
	float ProjectileDamageMultiplier; // 0x28(0x04)
	struct FFireShotProjectileDescription Description; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct ConZ.FireShotProjectileDescription
// Size: 0x01 (Inherited: 0x00)
struct FFireShotProjectileDescription {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ConZ.WeaponMalfunctionData
// Size: 0xa8 (Inherited: 0x00)
struct FWeaponMalfunctionData {
	bool UseCustomProbabilityCurve; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FRuntimeFloatCurve ProbabilityCurve; // 0x08(0x88)
	struct UWeaponActionClearMalfunctionSequence* ClearMalfunctionSequence; // 0x90(0x08)
	struct TArray<struct UWeaponActionClearMalfunctionSequence*> ClearMalfunctionSequences; // 0x98(0x10)
};

// ScriptStruct ConZ.WeaponMalfunctionChances
// Size: 0x38 (Inherited: 0x00)
struct FWeaponMalfunctionChances {
	struct FFloatInterval Value[0x7]; // 0x00(0x38)
};

// ScriptStruct ConZ.FireAnimationData
// Size: 0xc0 (Inherited: 0x00)
struct FFireAnimationData {
	struct FBodyWeaponAnimation BodyWeaponAnimation; // 0x00(0x10)
	float TimeBetweenShots; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FBodyWeaponAnimation BodyWeaponAnimationChamber; // 0x18(0x10)
	float TimeForChamber; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UWeaponActionWornOutFiringConditions* Conditions; // 0x30(0x08)
	struct FRuntimeFloatCurve ProbabilityWeightCurve; // 0x38(0x88)
};

// ScriptStruct ConZ.WeaponViewKickData
// Size: 0x18 (Inherited: 0x00)
struct FWeaponViewKickData {
	float PitchMin; // 0x00(0x04)
	float PitchMax; // 0x04(0x04)
	float YawMin; // 0x08(0x04)
	float YawMax; // 0x0c(0x04)
	float PitchDecrementSpeed; // 0x10(0x04)
	float YawDecrementSpeed; // 0x14(0x04)
};

// ScriptStruct ConZ.WeaponSpreadData
// Size: 0x34 (Inherited: 0x00)
struct FWeaponSpreadData {
	struct FWeaponSpreadItem ByStance[0x3]; // 0x00(0x24)
	float IncrementPerShot; // 0x24(0x04)
	float IncrementFromShotsMax; // 0x28(0x04)
	float IncrementSpeed; // 0x2c(0x04)
	float DecrementSpeed; // 0x30(0x04)
};

// ScriptStruct ConZ.WeaponSpreadItem
// Size: 0x0c (Inherited: 0x00)
struct FWeaponSpreadItem {
	float Idle; // 0x00(0x04)
	float Moving; // 0x04(0x04)
	float SpeedTarget; // 0x08(0x04)
};

// ScriptStruct ConZ.WeaponAttachmentAnimations
// Size: 0x20 (Inherited: 0x00)
struct FWeaponAttachmentAnimations {
	struct FBodyWeaponAnimation Add; // 0x00(0x10)
	struct FBodyWeaponAnimation Remove; // 0x10(0x10)
};

// ScriptStruct ConZ.LazyLoadedClassPtr
// Size: 0x30 (Inherited: 0x00)
struct FLazyLoadedClassPtr {
	struct TSoftClassPtr<UObject> Class; // 0x00(0x28)
	struct UObject* _loadedClass; // 0x28(0x08)
};

// ScriptStruct ConZ.MapHUDObject
// Size: 0x18 (Inherited: 0x00)
struct FMapHUDObject {
	char pad_0[0x8]; // 0x00(0x08)
	int32_t _priority; // 0x08(0x04)
	bool _showText; // 0x0c(0x01)
	bool _showMarkers; // 0x0d(0x01)
	char pad_E[0xa]; // 0x0e(0x0a)
};

// ScriptStruct ConZ.MapHUDQuestObject
// Size: 0x80 (Inherited: 0x18)
struct FMapHUDQuestObject : FMapHUDObject {
	struct UTexture* _questPositionOuterRingTexture; // 0x18(0x08)
	struct FLinearColor _questOuterRingColor; // 0x20(0x10)
	struct UTexture* _questPositionInnerCircleTexture; // 0x30(0x08)
	struct FLinearColor _questInnerCircleColor; // 0x38(0x10)
	struct UFont* _questFont; // 0x48(0x08)
	struct FLinearColor _questNameColor; // 0x50(0x10)
	struct FLinearColor _questNameOutlineColor; // 0x60(0x10)
	struct FVector2D _questPositionTextureSize; // 0x70(0x08)
	int32_t _questTextStackOffset; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct ConZ.MapHUDFlagsObject
// Size: 0xc0 (Inherited: 0x18)
struct FMapHUDFlagsObject : FMapHUDObject {
	struct UTexture* _flagPositionOuterRingTexture; // 0x18(0x08)
	struct FLinearColor _flagOuterRingColor; // 0x20(0x10)
	struct FLinearColor _flagHighlightOuterRingColor; // 0x30(0x10)
	struct UTexture* _flagPositionInnerCircleTexture; // 0x40(0x08)
	struct FLinearColor _flagInnerCircleColor; // 0x48(0x10)
	struct FLinearColor _flagHighlightInnerCircleColor; // 0x58(0x10)
	struct UFont* _flagFont; // 0x68(0x08)
	struct FLinearColor _flagNameHighlightColor; // 0x70(0x10)
	struct FLinearColor _flagNameHighlightOutlineColor; // 0x80(0x10)
	struct FLinearColor _flagNameColor; // 0x90(0x10)
	struct FLinearColor _flagNameOutlineColor; // 0xa0(0x10)
	struct FVector2D _flagPositionTextureSize; // 0xb0(0x08)
	int32_t _flagTextStackOffset; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct ConZ.MapHUDVehiclesObject
// Size: 0xc0 (Inherited: 0x18)
struct FMapHUDVehiclesObject : FMapHUDObject {
	struct UTexture* _vehiclePositionOuterRingTexture; // 0x18(0x08)
	struct FLinearColor _vehicleOuterRingColor; // 0x20(0x10)
	struct FLinearColor _vehicleHighlightOuterRingColor; // 0x30(0x10)
	struct UTexture* _vehiclePositionInnerCircleTexture; // 0x40(0x08)
	struct FLinearColor _vehicleInnerCircleColor; // 0x48(0x10)
	struct FLinearColor _vehicleHighlightInnerCircleColor; // 0x58(0x10)
	struct UFont* _vehicleFont; // 0x68(0x08)
	struct FLinearColor _vehicleNameHighlightColor; // 0x70(0x10)
	struct FLinearColor _vehicleNameHighlightOutlineColor; // 0x80(0x10)
	struct FLinearColor _vehicleNameColor; // 0x90(0x10)
	struct FLinearColor _vehicleNameOutlineColor; // 0xa0(0x10)
	struct FVector2D _vehiclePositionTextureSize; // 0xb0(0x08)
	int32_t _vehicleTextStackOffset; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct ConZ.MapHUDDroneObject
// Size: 0x38 (Inherited: 0x18)
struct FMapHUDDroneObject : FMapHUDObject {
	struct UTexture* _droneDirectionTexture; // 0x18(0x08)
	struct UTexture* _dronePositionTexture; // 0x20(0x08)
	struct UTexture* _dronePingAnimationTexture; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct ConZ.MapHUDOtherPlayersObject
// Size: 0xc0 (Inherited: 0x18)
struct FMapHUDOtherPlayersObject : FMapHUDObject {
	struct UTexture* _otherPlayerPositionOuterRingTexture; // 0x18(0x08)
	struct FLinearColor _otherPlayerOuterRingColor; // 0x20(0x10)
	struct FLinearColor _otherPlayerHighlightOuterRingColor; // 0x30(0x10)
	struct UTexture* _otherPlayerPositionInnerCicleTexture; // 0x40(0x08)
	struct FLinearColor _otherPlayerInnerCircleColor; // 0x48(0x10)
	struct FLinearColor _otherPlayerHighlightInnerCircleColor; // 0x58(0x10)
	struct UFont* _otherPlayerFont; // 0x68(0x08)
	struct FLinearColor _otherPlayerNameHighlightColor; // 0x70(0x10)
	struct FLinearColor _otherPlayerNameHighlightOutlineColor; // 0x80(0x10)
	struct FLinearColor _otherPlayerNameColor; // 0x90(0x10)
	struct FLinearColor _otherPlayerNameOutlineColor; // 0xa0(0x10)
	struct FVector2D _prisonerPositionTextureSize; // 0xb0(0x08)
	int32_t _otherPlayerTextStackOffset; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct ConZ.MapHUDWorldEventsObject
// Size: 0x18 (Inherited: 0x18)
struct FMapHUDWorldEventsObject : FMapHUDObject {
};

// ScriptStruct ConZ.MapHUDHomeLocationObject
// Size: 0x48 (Inherited: 0x18)
struct FMapHUDHomeLocationObject : FMapHUDObject {
	struct UFont* _font; // 0x18(0x08)
	char pad_20[0x28]; // 0x20(0x28)
};

// ScriptStruct ConZ.MapHUDPrisonerObject
// Size: 0x40 (Inherited: 0x18)
struct FMapHUDPrisonerObject : FMapHUDObject {
	struct FVector2D _prisonerPositionTextureSize; // 0x18(0x08)
	struct UTexture* _myPrisonerPositionTexture; // 0x20(0x08)
	struct UTexture* _prisonerPingAnimationTexture; // 0x28(0x08)
	float _prisonerPingSizeMultiplier; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct ConZ.AbandonedBunkerConnectionBinding
// Size: 0x0c (Inherited: 0x00)
struct FAbandonedBunkerConnectionBinding {
	struct FGameplayTag ActivationTag; // 0x00(0x08)
	float Load; // 0x08(0x04)
};

// ScriptStruct ConZ.AbandonedBunkerFloorSetup
// Size: 0xf0 (Inherited: 0x00)
struct FAbandonedBunkerFloorSetup {
	struct UDoorUnlockData* DoorUnlockData; // 0x00(0x08)
	struct AItem* KeyCardItem; // 0x08(0x08)
	struct FItemSpawnerPresetWithOverrides ZombieKeycardSpawnerPreset; // 0x10(0xb8)
	struct FGameplayTag FloorId; // 0xc8(0x08)
	struct UStaticMesh* SchematicMesh; // 0xd0(0x08)
	struct TArray<struct AAbandonedBunkerSwitchboard*> SlaveSwitchboards; // 0xd8(0x10)
	struct AAbandonedBunkerSwitchboard* MasterSwitchboard; // 0xe8(0x08)
};

// ScriptStruct ConZ.ItemSpawnerPresetWithOverrides
// Size: 0xb8 (Inherited: 0x00)
struct FItemSpawnerPresetWithOverrides {
	struct UItemSpawnerPreset2* Preset; // 0x00(0x08)
	bool OverrideNodes; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FItemSpawnerPreset_Node> Nodes; // 0x10(0x10)
	bool OverrideItems; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FItemSpawnerPreset_Item> Items; // 0x28(0x10)
	bool OverrideSubpresets; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FItemSpawnerPreset_Subpreset> Subpresets; // 0x40(0x10)
	bool OverrideFixedItems; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct TSoftClassPtr<UObject>> FixedItems; // 0x58(0x10)
	bool OverrideAlwaysSpawn; // 0x68(0x01)
	bool AlwaysSpawn; // 0x69(0x01)
	bool OverrideProbability; // 0x6a(0x01)
	char pad_6B[0x1]; // 0x6b(0x01)
	float Probability; // 0x6c(0x04)
	bool OverrideQuantity; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FInt32Interval Quantity; // 0x74(0x08)
	bool OverrideAllowDuplicates; // 0x7c(0x01)
	bool AllowDuplicates; // 0x7d(0x01)
	bool OverrideShouldFilterItemsByZone; // 0x7e(0x01)
	bool ShouldFilterItemsByZone; // 0x7f(0x01)
	bool OverrideShouldApplyLocationSpecificDamageModifier; // 0x80(0x01)
	bool ShouldApplyLocationSpecificDamageModifier; // 0x81(0x01)
	bool OverrideShouldApplyLocationSpecificProbabilityModifier; // 0x82(0x01)
	bool ShouldApplyLocationSpecificProbabilityModifier; // 0x83(0x01)
	bool OverrideInitialDamage; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float InitialDamage; // 0x88(0x04)
	bool OverrideRandomDamage; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float RandomDamage; // 0x90(0x04)
	bool OverrideInitialUsage; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	float InitialUsage; // 0x98(0x04)
	bool OverrideRandomUsage; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	float RandomUsage; // 0xa0(0x04)
	bool OverridePostSpawnActions; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct TArray<struct TSoftClassPtr<UObject>> PostSpawnActions; // 0xa8(0x10)
};

// ScriptStruct ConZ.ItemSpawnerPreset_Subpreset
// Size: 0x10 (Inherited: 0x00)
struct FItemSpawnerPreset_Subpreset {
	struct UItemSpawnerPreset2* Preset; // 0x00(0x08)
	enum class EItemRarity Rarity; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ConZ.ItemSpawnerPreset_Item
// Size: 0x30 (Inherited: 0x00)
struct FItemSpawnerPreset_Item {
	struct TSoftClassPtr<UObject> Item; // 0x00(0x28)
	enum class EItemRarity Rarity; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ConZ.ItemSpawnerPreset_Node
// Size: 0x38 (Inherited: 0x00)
struct FItemSpawnerPreset_Node {
	struct FGameplayTagContainer Nodes; // 0x00(0x20)
	char pad_20[0x10]; // 0x20(0x10)
	enum class EItemRarity Rarity; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct ConZ.AbandonedBunkerAnnouncementSoundAndTime
// Size: 0x10 (Inherited: 0x00)
struct FAbandonedBunkerAnnouncementSoundAndTime {
	struct UAkAudioEvent* Sound; // 0x00(0x08)
	int32_t SecondsBeforeClosing; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ConZ.AchievementStats
// Size: 0x01 (Inherited: 0x00)
struct FAchievementStats {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ConZ.Achievements
// Size: 0x01 (Inherited: 0x00)
struct FAchievements {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ConZ.ActivationReservation
// Size: 0x18 (Inherited: 0x00)
struct FActivationReservation {
	double PreviousActivationEnd; // 0x00(0x08)
	double ActivationStart; // 0x08(0x08)
	double ActivationEnd; // 0x10(0x08)
};

// ScriptStruct ConZ.ActiveQuest
// Size: 0x70 (Inherited: 0x00)
struct FActiveQuest {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct ConZ.ActiveTask
// Size: 0x58 (Inherited: 0x00)
struct FActiveTask {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct ConZ.AdminCommandArgumentDescription
// Size: 0x40 (Inherited: 0x00)
struct FAdminCommandArgumentDescription {
	struct FText Name; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	bool ShowCompletionValuesInHelpText; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UAdminCommandArgumentDataTypeBase* Data; // 0x38(0x08)
};

// ScriptStruct ConZ.SearchItemClassesArray
// Size: 0x10 (Inherited: 0x00)
struct FSearchItemClassesArray {
	struct TArray<struct TSoftClassPtr<UObject>> ItemClasses; // 0x00(0x10)
};

// ScriptStruct ConZ.SearchItemSpawnerPresetArray
// Size: 0x10 (Inherited: 0x00)
struct FSearchItemSpawnerPresetArray {
	struct TArray<struct UItemSpawnerPreset*> ItemSpawnerPresets; // 0x00(0x10)
};

// ScriptStruct ConZ.PrisonerPlayerInfo
// Size: 0x70 (Inherited: 0x00)
struct FPrisonerPlayerInfo {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct ConZ.PrisonerSkillInfo
// Size: 0x18 (Inherited: 0x00)
struct FPrisonerSkillInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ConZ.AerodynamicSurfaceControlData
// Size: 0x10 (Inherited: 0x00)
struct FAerodynamicSurfaceControlData {
	struct TArray<struct FGameplayTag> Tags; // 0x00(0x10)
};

// ScriptStruct ConZ.AITeamAttitudeData
// Size: 0x21 (Inherited: 0x00)
struct FAITeamAttitudeData {
	struct FAITeamAttitude AttitudePerTeam[0xb]; // 0x00(0x21)
};

// ScriptStruct ConZ.AITeamAttitude
// Size: 0x03 (Inherited: 0x00)
struct FAITeamAttitude {
	enum class ETeamAttitude ObserverTeamResponseToOtherSubteam; // 0x00(0x01)
	enum class ETeamAttitude ObserverTeamResponseToSameSubteam; // 0x01(0x01)
	enum class ETeamAttitude ObserverTeamResponseToNullSubteam; // 0x02(0x01)
};

// ScriptStruct ConZ.DetectionDelayTimerData
// Size: 0x10 (Inherited: 0x00)
struct FDetectionDelayTimerData {
	float MinDetectionDelayBasedOnDistance; // 0x00(0x04)
	float MaxDetectionDelayBasedOnDistance; // 0x04(0x04)
	float MinDetectionDelayBasedOnVisibility; // 0x08(0x04)
	float MaxDetectionDelayBasedOnVisibility; // 0x0c(0x04)
};

// ScriptStruct ConZ.MeleeHitDetectionMarker
// Size: 0x80 (Inherited: 0x00)
struct FMeleeHitDetectionMarker {
	float Time; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform Transform; // 0x10(0x30)
	struct FTransform RootMotion; // 0x40(0x30)
	float DamageMultiplier; // 0x70(0x04)
	float SelectionWeight; // 0x74(0x04)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct ConZ.AquaticLifeSpawningVolumeDescription
// Size: 0x68 (Inherited: 0x00)
struct FAquaticLifeSpawningVolumeDescription {
	char pad_0[0x20]; // 0x00(0x20)
	struct UFishSpeciesPreset* FishSpeciesPreset; // 0x20(0x08)
	struct UFishSpawningPreset* FishSpawningPreset; // 0x28(0x08)
	char pad_30[0x38]; // 0x30(0x38)
};

// ScriptStruct ConZ.ArmedNPCAimCorrection
// Size: 0x120 (Inherited: 0x00)
struct FArmedNPCAimCorrection {
	struct FRotator LeftHandRotator; // 0x00(0x0c)
	bool UseAimOffsetPitchCurve; // 0x0c(0x01)
	bool UseAimOffsetYawCurve; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct FRuntimeFloatCurve AimOffsetPitch; // 0x10(0x88)
	struct FRuntimeFloatCurve AimOffsetYaw; // 0x98(0x88)
};

// ScriptStruct ConZ.ArmedNPCMeleeAttackTypes
// Size: 0x88 (Inherited: 0x00)
struct FArmedNPCMeleeAttackTypes {
	struct FGameplayTag PrimaryMeleeAttackTypeWhenNotMoving; // 0x00(0x08)
	struct FGameplayTag PrimaryMeleeAttackTypeWhenWalking; // 0x08(0x08)
	struct FGameplayTag PrimaryMeleeAttackTypeWhenJogging; // 0x10(0x08)
	struct FGameplayTag PrimaryMeleeAttackTypeWhenRunning; // 0x18(0x08)
	struct FGameplayTag PrimaryMeleeAttackTypeWhenFalling; // 0x20(0x08)
	struct FGameplayTag SecondaryMeleeAttackTypeWhenNotMoving; // 0x28(0x08)
	struct FGameplayTag SecondaryMeleeAttackTypeWhenWalking; // 0x30(0x08)
	struct FGameplayTag SecondaryMeleeAttackTypeWhenJogging; // 0x38(0x08)
	struct FGameplayTag SecondaryMeleeAttackTypeWhenRunning; // 0x40(0x08)
	struct FGameplayTag SecondaryMeleeAttackTypeWhenFalling; // 0x48(0x08)
	struct FGameplayTag ComboMeleeAttackTypeWhenNotMoving; // 0x50(0x08)
	struct FGameplayTag ComboMeleeAttackTypeWhenWalking; // 0x58(0x08)
	struct FGameplayTag ComboMeleeAttackTypeWhenJogging; // 0x60(0x08)
	struct FGameplayTag ComboMeleeAttackTypeWhenRunning; // 0x68(0x08)
	struct FGameplayTag ComboMeleeAttackTypeWhenFalling; // 0x70(0x08)
	struct FGameplayTag BashMeleeAttackType; // 0x78(0x08)
	struct FGameplayTag WeaponBayonetMeleeAttackType; // 0x80(0x08)
};

// ScriptStruct ConZ.ArmedNPCRecentProjectileDamage
// Size: 0x1c (Inherited: 0x00)
struct FArmedNPCRecentProjectileDamage {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct ConZ.ArmedNPCDifficultyLevelSettingProperties
// Size: 0xcc (Inherited: 0x00)
struct FArmedNPCDifficultyLevelSettingProperties {
	struct FFloatInterval MeleeCooldownDuration; // 0x00(0x08)
	struct FWeaponManualSettingsHandgun HandgunSettings; // 0x08(0x2c)
	struct FWeaponManualSettingsRifleAutomatic RifleAutomaticSettings; // 0x34(0x24)
	struct FWeaponManualSettingsRifleManual RifleManualSettings; // 0x58(0x28)
	struct FWeaponManualSettingsBow BowSettings; // 0x80(0x2c)
	struct FWeaponManualSettingsCrossBow CrossBowSettings; // 0xac(0x20)
};

// ScriptStruct ConZ.WeaponManualSettingsCrossBow
// Size: 0x20 (Inherited: 0x00)
struct FWeaponManualSettingsCrossBow {
	float ProjectileDamageMultiplier; // 0x00(0x04)
	enum class EWeaponOverrideSpreadType SpreadType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float SpreadExactValue; // 0x08(0x04)
	float SpreadMultiplier; // 0x0c(0x04)
	struct FFloatInterval FiringPauseDuration; // 0x10(0x08)
	struct FFloatInterval ReloadPauseDuration; // 0x18(0x08)
};

// ScriptStruct ConZ.WeaponManualSettingsBow
// Size: 0x2c (Inherited: 0x00)
struct FWeaponManualSettingsBow {
	float ProjectileDamageMultiplier; // 0x00(0x04)
	enum class EWeaponOverrideSpreadType SpreadType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float SpreadExactValue; // 0x08(0x04)
	float SpreadMultiplier; // 0x0c(0x04)
	struct FFloatInterval DrawHoldDuration; // 0x10(0x08)
	struct FFloatInterval FiringPauseDuration; // 0x18(0x08)
	struct FFloatInterval ReloadPauseDuration; // 0x20(0x08)
	float PostReloadDelay; // 0x28(0x04)
};

// ScriptStruct ConZ.WeaponManualSettingsRifleManual
// Size: 0x28 (Inherited: 0x00)
struct FWeaponManualSettingsRifleManual {
	float ProjectileDamageMultiplier; // 0x00(0x04)
	enum class EWeaponOverrideSpreadType SpreadType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float SpreadExactValue; // 0x08(0x04)
	float SpreadMultiplier; // 0x0c(0x04)
	struct FFloatInterval TimeBetweenShot; // 0x10(0x08)
	struct FFloatInterval FiringPauseDuration; // 0x18(0x08)
	struct FFloatInterval ReloadPauseDuration; // 0x20(0x08)
};

// ScriptStruct ConZ.WeaponManualSettingsRifleAutomatic
// Size: 0x24 (Inherited: 0x00)
struct FWeaponManualSettingsRifleAutomatic {
	float ProjectileDamageMultiplier; // 0x00(0x04)
	enum class EWeaponOverrideSpreadType SpreadType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float SpreadExactValue; // 0x08(0x04)
	float SpreadMultiplier; // 0x0c(0x04)
	int32_t NumberOfConsecutiveShots; // 0x10(0x04)
	struct FFloatInterval FiringPauseDuration; // 0x14(0x08)
	struct FFloatInterval ReloadPauseDuration; // 0x1c(0x08)
};

// ScriptStruct ConZ.WeaponManualSettingsHandgun
// Size: 0x2c (Inherited: 0x00)
struct FWeaponManualSettingsHandgun {
	float ProjectileDamageMultiplier; // 0x00(0x04)
	enum class EWeaponOverrideSpreadType SpreadType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float SpreadExactValue; // 0x08(0x04)
	float SpreadMultiplier; // 0x0c(0x04)
	int32_t NumberOfConsecutiveShots; // 0x10(0x04)
	struct FFloatInterval TimeBetweenShot; // 0x14(0x08)
	struct FFloatInterval FiringPauseDuration; // 0x1c(0x08)
	struct FFloatInterval ReloadPauseDuration; // 0x24(0x08)
};

// ScriptStruct ConZ.ArmedNPCVariation
// Size: 0x88 (Inherited: 0x00)
struct FArmedNPCVariation {
	struct TSoftObjectPtr<USkeletalMesh> BodyMesh; // 0x00(0x28)
	struct TSoftObjectPtr<USkeletalMesh> BodyMeshWhenSearched; // 0x28(0x28)
	struct TArray<struct TSoftObjectPtr<AItem>> ItemsOnSearch; // 0x50(0x10)
	struct TArray<struct TSoftObjectPtr<AItem>> PossibleItemsOnSearch; // 0x60(0x10)
	enum class EConZGender Gender; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float BodyWight; // 0x74(0x04)
	struct UChoppingRecipeDataAsset* CorpseChoppingRecipeDataAsset; // 0x78(0x08)
	struct UArmedNPCDamageCustomizationData* DamageCustomizationData; // 0x80(0x08)
};

// ScriptStruct ConZ.AviationSkillParametersPerSkillLevel
// Size: 0x100 (Inherited: 0x00)
struct FAviationSkillParametersPerSkillLevel {
	bool ShouldHaveMouseInput; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float EngineReadyDelay; // 0x04(0x04)
	float EngineFailedToStartDelay; // 0x08(0x04)
	float EngineFailedToStartNoFuelDelay; // 0x0c(0x04)
	float EngineFailedToStartNoBatteryDelay; // 0x10(0x04)
	float EngineStalledDelay; // 0x14(0x04)
	float ThrottleLerpMultiplier; // 0x18(0x04)
	float BrakeLerpMultiplier; // 0x1c(0x04)
	float RollLerpMultiplier; // 0x20(0x04)
	float YawLerpMultiplier; // 0x24(0x04)
	float PitchLerpMultiplier; // 0x28(0x04)
	float ControlResetLerpMultiplier; // 0x2c(0x04)
	float WindInfluenceMultiplier; // 0x30(0x04)
	struct FEngineHandlingParameters EngineHandlingParameters; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FDrivingSkillEngineStallingParameters EngineStallingByAccelerationParameters; // 0x40(0x40)
	struct FDrivingSkillEngineStallingParameters EngineStallingByUpShiftParameters; // 0x80(0x40)
	struct FDrivingSkillEngineStallingParameters EngineStallingWhenStartingViaMotion; // 0xc0(0x40)
};

// ScriptStruct ConZ.DrivingSkillEngineStallingParameters
// Size: 0x40 (Inherited: 0x00)
struct FDrivingSkillEngineStallingParameters {
	float Chance; // 0x00(0x04)
	float MinDuration; // 0x04(0x04)
	float MaxDuration; // 0x08(0x04)
	float StopEngineChance; // 0x0c(0x04)
	struct UCurveFloat* ThrottleCurve; // 0x10(0x08)
	float ThrottleCurveFrequencyMultiplier; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* BrakeCurve; // 0x20(0x08)
	float BrakeCurveFrequencyMultiplier; // 0x28(0x04)
	float ForceMagnitudeScale; // 0x2c(0x04)
	struct UCurveFloat* ForceMagnitudeScaleCurve; // 0x30(0x08)
	float ForceMagnitudeScaleCurveFrequencyMultiplier; // 0x38(0x04)
	float ForceDirectionRandomizationAngle; // 0x3c(0x04)
};

// ScriptStruct ConZ.EngineHandlingParameters
// Size: 0x08 (Inherited: 0x00)
struct FEngineHandlingParameters {
	float IgnitionDurationMultiplier; // 0x00(0x04)
	float IgnitionFailureChance; // 0x04(0x04)
};

// ScriptStruct ConZ.AwarenessSkillParametersPerSkillLevel
// Size: 0x54 (Inherited: 0x00)
struct FAwarenessSkillParametersPerSkillLevel {
	float ItemDetectionTime; // 0x00(0x04)
	float ItemDetectionRadius; // 0x04(0x04)
	float ItemDetectionHighlightByDayRadius; // 0x08(0x04)
	float ItemDetectionHighlightByNightRadius; // 0x0c(0x04)
	float WatchingDetectionTime; // 0x10(0x04)
	float WatchingDetectionRadius; // 0x14(0x04)
	float WatchingDetectionChance; // 0x18(0x04)
	float CharacterDetectionAngle; // 0x1c(0x04)
	float CharacterDetectionTime; // 0x20(0x04)
	float CharacterDetectionPeriodicRangeIncrement; // 0x24(0x04)
	float HiddenCharacterDetectionRange; // 0x28(0x04)
	float HiddenCharacterHotSpotDetectionRange; // 0x2c(0x04)
	float HiddenCharacterSoundDetectionRange; // 0x30(0x04)
	float TrackDetectionRange; // 0x34(0x04)
	float TrapDetectionRange; // 0x38(0x04)
	float FocusModeNotMovingFocusRangeMultiplier; // 0x3c(0x04)
	float FocusModeSlowMovingFocusRangeMultiplier; // 0x40(0x04)
	float FocusModeMediumMovingFocusRangeMultiplier; // 0x44(0x04)
	float FocusModeFastMovingFocusRangeMultiplier; // 0x48(0x04)
	float FlashbangFlashFadeOutDurationMultiplier; // 0x4c(0x04)
	float ContainerItemSpawnProbabilityModifier; // 0x50(0x04)
};

// ScriptStruct ConZ.AwarenessSkillExperienceAwards
// Size: 0x0c (Inherited: 0x00)
struct FAwarenessSkillExperienceAwards {
	float PointsForDetectedItem; // 0x00(0x04)
	float PointsForDetectedWatchingPrisoner; // 0x04(0x04)
	float PointsForDetectedCamouflagedPrisoner; // 0x08(0x04)
};

// ScriptStruct ConZ.GamePaymentTransactionRequestData
// Size: 0x18 (Inherited: 0x00)
struct FGamePaymentTransactionRequestData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ConZ.BankCardOperationRequestData
// Size: 0x10 (Inherited: 0x00)
struct FBankCardOperationRequestData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ConZ.BankTransactionRequestData
// Size: 0x38 (Inherited: 0x00)
struct FBankTransactionRequestData {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct ConZ.CurrencyConversionRequestData
// Size: 0x24 (Inherited: 0x00)
struct FCurrencyConversionRequestData {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct ConZ.BankAccountRegistryRequestData
// Size: 0x1c (Inherited: 0x00)
struct FBankAccountRegistryRequestData {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct ConZ.BankATMBoughtCardStateVisual
// Size: 0x40 (Inherited: 0x00)
struct FBankATMBoughtCardStateVisual {
	struct FSlateColor FontColor; // 0x00(0x28)
	struct FLinearColor BrushColor; // 0x28(0x10)
	float OnHoveredUpwardsOffset; // 0x38(0x04)
	bool OptionsCircleSelectedState; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct ConZ.BankATMBuyableCardStateVisual
// Size: 0x0c (Inherited: 0x00)
struct FBankATMBuyableCardStateVisual {
	bool TransparentBackground; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RenderOpacity; // 0x04(0x04)
	bool PlusCircleVisible; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ConZ.BankATMCarouselCardStateVisual
// Size: 0x10 (Inherited: 0x00)
struct FBankATMCarouselCardStateVisual {
	struct FMargin Padding; // 0x00(0x10)
};

// ScriptStruct ConZ.BankATMMyCardsButtonStateVisual
// Size: 0x120 (Inherited: 0x00)
struct FBankATMMyCardsButtonStateVisual {
	struct FLinearColor FontColor; // 0x00(0x10)
	struct FSlateBrush BackgroundBrush; // 0x10(0x88)
	struct FSlateBrush CardIconBrush; // 0x98(0x88)
};

// ScriptStruct ConZ.BankATMPointingButtonStateVisual
// Size: 0x98 (Inherited: 0x00)
struct FBankATMPointingButtonStateVisual {
	struct FLinearColor FontColor; // 0x00(0x10)
	struct FSlateBrush BackgroundBrush; // 0x10(0x88)
};

// ScriptStruct ConZ.BankATMVirtualEditboxStateVisual
// Size: 0x10 (Inherited: 0x00)
struct FBankATMVirtualEditboxStateVisual {
	struct FLinearColor OutlineColor; // 0x00(0x10)
};

// ScriptStruct ConZ.BankCardOwnershipPayloadData
// Size: 0x03 (Inherited: 0x00)
struct FBankCardOwnershipPayloadData {
	char pad_0[0x3]; // 0x00(0x03)
};

// ScriptStruct ConZ.BaseDamageInteractionEvent
// Size: 0xa8 (Inherited: 0x08)
struct FBaseDamageInteractionEvent : FBaseInteractionEvent {
	char pad_8[0xa0]; // 0x08(0xa0)
};

// ScriptStruct ConZ.BasicNotificationDescriptionData
// Size: 0x38 (Inherited: 0x00)
struct FBasicNotificationDescriptionData {
	struct FText Message; // 0x00(0x18)
	int32_t FontSize; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UTexture2D* Icon; // 0x20(0x08)
	int32_t IconSize; // 0x28(0x04)
	float Duration; // 0x2c(0x04)
	bool Ping; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Delay; // 0x34(0x04)
};

// ScriptStruct ConZ.AnimalSpawnData
// Size: 0x2c (Inherited: 0x00)
struct FAnimalSpawnData {
	float NextClueDistanceMin; // 0x00(0x04)
	float NextClueDistanceMax; // 0x04(0x04)
	int32_t NumCluesMin; // 0x08(0x04)
	int32_t NumCluesMax; // 0x0c(0x04)
	int32_t PackSizeMin; // 0x10(0x04)
	int32_t PackSizeMax; // 0x14(0x04)
	float NextClueMaxHalfAngleDeg; // 0x18(0x04)
	struct FAnimalSpawnWeigthsPerDayPeriod SpawnWeights; // 0x1c(0x10)
};

// ScriptStruct ConZ.AnimalSpawnWeigthsPerDayPeriod
// Size: 0x10 (Inherited: 0x00)
struct FAnimalSpawnWeigthsPerDayPeriod {
	float SpawnWeight[0x4]; // 0x00(0x10)
};

// ScriptStruct ConZ.BoatParametersPerMovementPace
// Size: 0x18 (Inherited: 0x00)
struct FBoatParametersPerMovementPace {
	bool IsValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BaseMaxForwardSpeed; // 0x04(0x04)
	bool CanReverse; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float BaseMaxReverseSpeed; // 0x0c(0x04)
	float MinPrisonerStrength; // 0x10(0x04)
	float ThrottleMultiplier; // 0x14(0x04)
};

// ScriptStruct ConZ.SplineDescription
// Size: 0x30 (Inherited: 0x00)
struct FSplineDescription {
	struct USplineComponent* SplineComponent; // 0x00(0x08)
	struct TArray<struct USplineMeshComponent*> SplineMeshComponents; // 0x08(0x10)
	struct UStaticMeshComponent* SplineStartConnector; // 0x18(0x08)
	struct UStaticMeshComponent* SplineEndConnector; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct ConZ.WireDescription
// Size: 0x50 (Inherited: 0x00)
struct FWireDescription {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct ConZ.BrennerCommonData_BleedingParticles
// Size: 0x30 (Inherited: 0x00)
struct FBrennerCommonData_BleedingParticles {
	struct TSoftObjectPtr<UParticleSystem> Particles; // 0x00(0x28)
	struct FName AttachSocketName; // 0x28(0x08)
};

// ScriptStruct ConZ.BrennerUpperBodyPitchRangeData
// Size: 0x14 (Inherited: 0x00)
struct FBrennerUpperBodyPitchRangeData {
	struct FFloatRange ActualPitchRange; // 0x00(0x10)
	float AppliedPitch; // 0x10(0x04)
};

// ScriptStruct ConZ.BrennerAttackDescription
// Size: 0x18 (Inherited: 0x00)
struct FBrennerAttackDescription {
	enum class EBrennerAttackType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAnimMontage* Montage; // 0x08(0x08)
	float cooldown; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.BruisePatch
// Size: 0x38 (Inherited: 0x00)
struct FBruisePatch {
	enum class EBruiseLayer Layer; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EBruiseZone> AllowedZones; // 0x08(0x10)
	int32_t Order; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UTexture2D* Texture; // 0x20(0x08)
	struct FVector2D Offset; // 0x28(0x08)
	bool Mute; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct ConZ.BuildingNavLinkData
// Size: 0x20 (Inherited: 0x00)
struct FBuildingNavLinkData {
	struct FVector LeftNodeRelativePosition; // 0x00(0x0c)
	struct FVector RightNodeRelativePosition; // 0x0c(0x0c)
	enum class ENavLinkDirection Direction; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FNavAgentSelector SupportedAgents; // 0x1c(0x04)
};

// ScriptStruct ConZ.BuildingsArray
// Size: 0x10 (Inherited: 0x00)
struct FBuildingsArray {
	struct TArray<struct ABuilding*> _buildings; // 0x00(0x10)
};

// ScriptStruct ConZ.Buoyancy
// Size: 0x70 (Inherited: 0x00)
struct FBuoyancy {
	struct TArray<struct FBuoyancyConstraint> _testPoints; // 0x00(0x10)
	struct FVector _velocityDamper; // 0x10(0x0c)
	bool _dampingDependsOnMass; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float _fluidLinearDamping; // 0x20(0x04)
	float _fluidAngularDamping; // 0x24(0x04)
	bool _clampMaxVelocity; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float _maxUnderwaterVelocity; // 0x2c(0x04)
	bool _shouldApplyWaterVelocity; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float _waterVelocityMultiplier; // 0x34(0x04)
	bool _shouldApplyWaterSurfaceForces; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float _verticalWaterDrag; // 0x3c(0x04)
	float _surfaceTensionMultiplier; // 0x40(0x04)
	char pad_44[0x2c]; // 0x44(0x2c)
};

// ScriptStruct ConZ.BuoyancyConstraint
// Size: 0x1c (Inherited: 0x00)
struct FBuoyancyConstraint {
	struct FVector Location; // 0x00(0x0c)
	struct FName Bone; // 0x0c(0x08)
	float Radius; // 0x14(0x04)
	float Density; // 0x18(0x04)
};

// ScriptStruct ConZ.BurialInformation
// Size: 0x18 (Inherited: 0x00)
struct FBurialInformation {
	struct FDbIntegerId BurierUserId; // 0x00(0x08)
	bool ShouldBury; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector BurialLocation; // 0x0c(0x0c)
};

// ScriptStruct ConZ.ScumPointDamageEvent
// Size: 0xc0 (Inherited: 0xb8)
struct FScumPointDamageEvent : FPointDamageEvent {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct ConZ.BurnPointDamageEvent
// Size: 0xd0 (Inherited: 0xc0)
struct FBurnPointDamageEvent : FScumPointDamageEvent {
	char pad_C0[0x10]; // 0xc0(0x10)
};

// ScriptStruct ConZ.BuryMaterialData
// Size: 0x28 (Inherited: 0x00)
struct FBuryMaterialData {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UParticleSystem* BreachActionParticles; // 0x08(0x08)
	struct UAkAudioEvent* BreachActionSound; // 0x10(0x08)
	struct UParticleSystem* DumpActionParticles; // 0x18(0x08)
	struct UAkAudioEvent* DumpActionSound; // 0x20(0x08)
};

// ScriptStruct ConZ.CamouflageSkillExperienceAwards
// Size: 0x04 (Inherited: 0x00)
struct FCamouflageSkillExperienceAwards {
	float BonusExperience; // 0x00(0x04)
};

// ScriptStruct ConZ.CamouflageSkillParametersPerSkillLevel
// Size: 0x30 (Inherited: 0x00)
struct FCamouflageSkillParametersPerSkillLevel {
	float Modifier; // 0x00(0x04)
	float Bonus; // 0x04(0x04)
	float FoliageAIPerceptionOuterRadius; // 0x08(0x04)
	float FoliageAIPerceptionInnerRadius; // 0x0c(0x04)
	struct FFloatInterval VisibilityFadeByDistanceWhileStandingInMeters; // 0x10(0x08)
	struct FFloatInterval VisibilityFadeByDistanceWhileCrouchingInMeters; // 0x18(0x08)
	struct FFloatInterval VisibilityFadeByDistanceWhileInProneInMeters; // 0x20(0x08)
	struct FFloatInterval PhysicalSurfaceVisibilityInfluenceDistanceInMeters; // 0x28(0x08)
};

// ScriptStruct ConZ.CargoDropSpawnerPreset
// Size: 0x18 (Inherited: 0x00)
struct FCargoDropSpawnerPreset {
	struct UItemSpawnerPreset* Preset; // 0x00(0x08)
	struct UItemSpawnerPreset2* SpawnerPreset; // 0x08(0x08)
	float ChanceMultiplier; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.CargoDropEncounterData
// Size: 0x08 (Inherited: 0x00)
struct FCargoDropEncounterData {
	float Weight; // 0x00(0x04)
	bool HasSpawnDelay; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ConZ.CarouselStyle
// Size: 0x570 (Inherited: 0x00)
struct FCarouselStyle {
	struct FButtonStyle LeftArrowIcon; // 0x00(0x278)
	struct FButtonStyle RightArrowIcon; // 0x278(0x278)
	struct FCarouselTextStyle ValueText; // 0x4f0(0x80)
};

// ScriptStruct ConZ.CarouselTextStyle
// Size: 0x80 (Inherited: 0x00)
struct FCarouselTextStyle {
	struct FMargin Padding; // 0x00(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x10(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct FSlateFontInfo Font; // 0x18(0x58)
	struct FLinearColor ColorAndOpacity; // 0x70(0x10)
};

// ScriptStruct ConZ.CarouselWithLabelStyle
// Size: 0x108 (Inherited: 0x00)
struct FCarouselWithLabelStyle {
	struct FSlateBrush FocusBackgroundImage; // 0x00(0x88)
	struct FCarouselTextStyle LabelText; // 0x88(0x80)
};

// ScriptStruct ConZ.CharacterActionAnimationDescription
// Size: 0x20 (Inherited: 0x00)
struct FCharacterActionAnimationDescription {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ConZ.CCNonImplementedSkill
// Size: 0x20 (Inherited: 0x00)
struct FCCNonImplementedSkill {
	enum class ESkillAttribute Attribute; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Caption; // 0x08(0x18)
};

// ScriptStruct ConZ.CharacterLegsImpactSoundsData
// Size: 0x18 (Inherited: 0x00)
struct FCharacterLegsImpactSoundsData {
	struct TArray<struct FCharacterLegsImpactSoundData> SoundsData; // 0x00(0x10)
	struct FCharacterImpactSounds FallbackSounds; // 0x10(0x08)
};

// ScriptStruct ConZ.CharacterImpactSounds
// Size: 0x08 (Inherited: 0x00)
struct FCharacterImpactSounds {
	struct UAkAudioEvent* AudioEvent; // 0x00(0x08)
};

// ScriptStruct ConZ.CharacterLegsImpactSoundData
// Size: 0x28 (Inherited: 0x00)
struct FCharacterLegsImpactSoundData {
	struct TArray<enum class ECharacterImpactSourceSoundCategory> ImpactSourceCategories; // 0x00(0x10)
	struct TArray<enum class ECharacterLegsImpactSoundCategory> ImpactTargetCategories; // 0x10(0x10)
	struct FCharacterImpactSounds Sounds; // 0x20(0x08)
};

// ScriptStruct ConZ.CharacterArmsImpactSoundsData
// Size: 0x18 (Inherited: 0x00)
struct FCharacterArmsImpactSoundsData {
	struct TArray<struct FCharacterArmsImpactSoundData> SoundsData; // 0x00(0x10)
	struct FCharacterImpactSounds FallbackSounds; // 0x10(0x08)
};

// ScriptStruct ConZ.CharacterArmsImpactSoundData
// Size: 0x28 (Inherited: 0x00)
struct FCharacterArmsImpactSoundData {
	struct TArray<enum class ECharacterImpactSourceSoundCategory> ImpactSourceCategories; // 0x00(0x10)
	struct TArray<enum class ECharacterArmsImpactSoundCategory> ImpactTargetCategories; // 0x10(0x10)
	struct FCharacterImpactSounds Sounds; // 0x20(0x08)
};

// ScriptStruct ConZ.CharacterTorsoImpactSoundsData
// Size: 0x18 (Inherited: 0x00)
struct FCharacterTorsoImpactSoundsData {
	struct TArray<struct FCharacterTorsoImpactSoundData> SoundsData; // 0x00(0x10)
	struct FCharacterImpactSounds FallbackSounds; // 0x10(0x08)
};

// ScriptStruct ConZ.CharacterTorsoImpactSoundData
// Size: 0x28 (Inherited: 0x00)
struct FCharacterTorsoImpactSoundData {
	struct TArray<enum class ECharacterImpactSourceSoundCategory> ImpactSourceCategories; // 0x00(0x10)
	struct TArray<enum class ECharacterTorsoImpactSoundCategory> ImpactTargetCategories; // 0x10(0x10)
	struct FCharacterImpactSounds Sounds; // 0x20(0x08)
};

// ScriptStruct ConZ.CharacterHeadImpactSoundsData
// Size: 0x18 (Inherited: 0x00)
struct FCharacterHeadImpactSoundsData {
	struct TArray<struct FCharacterHeadImpactSoundData> SoundsData; // 0x00(0x10)
	struct FCharacterImpactSounds FallbackSounds; // 0x10(0x08)
};

// ScriptStruct ConZ.CharacterHeadImpactSoundData
// Size: 0x28 (Inherited: 0x00)
struct FCharacterHeadImpactSoundData {
	struct TArray<enum class ECharacterImpactSourceSoundCategory> ImpactSourceCategories; // 0x00(0x10)
	struct TArray<enum class ECharacterHeadImpactSoundCategory> ImpactTargetCategories; // 0x10(0x10)
	struct FCharacterImpactSounds Sounds; // 0x20(0x08)
};

// ScriptStruct ConZ.CharacterMeshSlice
// Size: 0x1b0 (Inherited: 0x00)
struct FCharacterMeshSlice {
	struct FGameplayTagQuery Condition; // 0x00(0x48)
	struct FGameplayTagContainer Slots; // 0x48(0x20)
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x68(0x28)
	struct FGameplayTag SkeletalMeshSocket; // 0x90(0x08)
	struct TArray<struct FCharacterMeshSocketOverride> SkeletalMeshSocketOverrides; // 0x98(0x10)
	struct TMap<struct FName, struct FCharacterMeshMorphTargetArray> SkeletalMeshMorphTargets; // 0xa8(0x50)
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0xf8(0x28)
	struct FGameplayTag StaticMeshSocket; // 0x120(0x08)
	struct TArray<struct FCharacterMeshSocketOverride> StaticMeshSocketOverrides; // 0x128(0x10)
	struct TArray<struct FCharacterMeshMaterialOverride> OverrideMaterials; // 0x138(0x10)
	struct TSoftClassPtr<UObject> SpecificAnimationBlueprintClass; // 0x148(0x28)
	struct FTransform SpecificTransform; // 0x170(0x30)
	bool HidesUnderlyingLayer; // 0x1a0(0x01)
	char pad_1A1[0xf]; // 0x1a1(0x0f)
};

// ScriptStruct ConZ.CharacterMeshMaterialOverride
// Size: 0x78 (Inherited: 0x00)
struct FCharacterMeshMaterialOverride {
	struct FGameplayTagQuery Condition; // 0x00(0x48)
	struct FName MaterialSlot; // 0x48(0x08)
	struct TSoftObjectPtr<UMaterialInstance> OverrideMaterial; // 0x50(0x28)
};

// ScriptStruct ConZ.CharacterMeshSocketOverride
// Size: 0x50 (Inherited: 0x00)
struct FCharacterMeshSocketOverride {
	struct FGameplayTagQuery Condition; // 0x00(0x48)
	struct FGameplayTag MeshSocket; // 0x48(0x08)
};

// ScriptStruct ConZ.CharacterMeshMorphTargetArray
// Size: 0x10 (Inherited: 0x00)
struct FCharacterMeshMorphTargetArray {
	struct TArray<struct FCharacterMeshMorphTarget> MorphTargetArray; // 0x00(0x10)
};

// ScriptStruct ConZ.CharacterMeshMorphTarget
// Size: 0x50 (Inherited: 0x00)
struct FCharacterMeshMorphTarget {
	struct FGameplayTagQuery Condition; // 0x00(0x48)
	float Value; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ConZ.CharacterMeshManagerPerSlotData
// Size: 0x10 (Inherited: 0x00)
struct FCharacterMeshManagerPerSlotData {
	struct TArray<struct UCharacterMesh*> CharacterMeshLayers; // 0x00(0x10)
};

// ScriptStruct ConZ.CharacterMeshClassSet
// Size: 0x50 (Inherited: 0x00)
struct FCharacterMeshClassSet {
	struct TSet<struct UCharacterMesh*> Classes; // 0x00(0x50)
};

// ScriptStruct ConZ.CharacterMeshClassArray
// Size: 0x10 (Inherited: 0x00)
struct FCharacterMeshClassArray {
	struct TArray<struct UCharacterMesh*> Classes; // 0x00(0x10)
};

// ScriptStruct ConZ.ConZCharacterTagSoundArray
// Size: 0x10 (Inherited: 0x00)
struct FConZCharacterTagSoundArray {
	struct TArray<struct UAkAudioEvent*> AudioEvents; // 0x00(0x10)
};

// ScriptStruct ConZ.HitByMeleeImpactSoundsInfo
// Size: 0x10 (Inherited: 0x00)
struct FHitByMeleeImpactSoundsInfo {
	enum class ECharacterImpactSourceSoundCategory ImpactSourceSoundCategory; // 0x00(0x01)
	enum class EHitSeverity HitSeverity; // 0x01(0x01)
	enum class EDetectHitCollisionType ImpactBodyPart; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FVector ImpactPoint; // 0x04(0x0c)
};

// ScriptStruct ConZ.CharacterSpawnerMarker
// Size: 0x30 (Inherited: 0x00)
struct FCharacterSpawnerMarker {
	struct FTransform Transform; // 0x00(0x30)
};

// ScriptStruct ConZ.CharacterStatsItem
// Size: 0x48 (Inherited: 0x00)
struct FCharacterStatsItem {
	int32_t Rank; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString PlayerName; // 0x08(0x10)
	struct FCharacterStats CharacterStats; // 0x18(0x30)
};

// ScriptStruct ConZ.CharacterStats
// Size: 0x30 (Inherited: 0x00)
struct FCharacterStats {
	char pad_0[0x8]; // 0x00(0x08)
	float FamePoints; // 0x08(0x04)
	int32_t FameLevel; // 0x0c(0x04)
	float EventScore; // 0x10(0x04)
	int32_t EventKills; // 0x14(0x04)
	int32_t EventTeamKills; // 0x18(0x04)
	int32_t EventDeaths; // 0x1c(0x04)
	int32_t EventSuicides; // 0x20(0x04)
	int32_t EventAssists; // 0x24(0x04)
	int32_t EventHeadshots; // 0x28(0x04)
	bool IsBanned; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct ConZ.SpamConsequences
// Size: 0x08 (Inherited: 0x00)
struct FSpamConsequences {
	float Timeout; // 0x00(0x04)
	bool PermanentTimeout; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ConZ.SpamSeverityConditions
// Size: 0x08 (Inherited: 0x00)
struct FSpamSeverityConditions {
	float ResetDuration; // 0x00(0x04)
	int32_t OffenceRepetitions; // 0x04(0x04)
};

// ScriptStruct ConZ.ChoppingRecipe
// Size: 0x98 (Inherited: 0x00)
struct FChoppingRecipe {
	struct FText InteractionCaption; // 0x00(0x18)
	struct UAkAudioEvent* ChopAudioEvent; // 0x18(0x08)
	enum class ENoiseLevel noiseLevel; // 0x20(0x01)
	enum class EPrisonerMontage ChoppingMontage; // 0x21(0x01)
	enum class EPrisonerMontage ChoppingMontageEnd; // 0x22(0x01)
	bool EnforceDroppingItemOnGround; // 0x23(0x01)
	bool ShouldResultUsesDependOnSourceHP; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct TArray<struct FChoppingIngredient> Ingredients; // 0x28(0x10)
	struct FPossibleChoppingTools ToolRequiredToBeInRightHand; // 0x38(0x10)
	struct TArray<struct FPossibleChoppingTools> AdditionalToolsRequired; // 0x48(0x10)
	struct USkill* Skill; // 0x58(0x08)
	float ExperiencePointsAwarded; // 0x60(0x04)
	struct FChoppingParametersPerSkillLevel NoSkillLevelData; // 0x64(0x0c)
	struct FChoppingParametersPerSkillLevel BasicLevelData; // 0x70(0x0c)
	struct FChoppingParametersPerSkillLevel MediumLevelData; // 0x7c(0x0c)
	struct FChoppingParametersPerSkillLevel AdvancedLevelData; // 0x88(0x0c)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct ConZ.ChoppingParametersPerSkillLevel
// Size: 0x0c (Inherited: 0x00)
struct FChoppingParametersPerSkillLevel {
	struct FExperienceDependentFloat ChoppingTime; // 0x00(0x08)
	int32_t IngredientsQuantityBonus; // 0x08(0x04)
};

// ScriptStruct ConZ.ExperienceDependentFloat
// Size: 0x08 (Inherited: 0x00)
struct FExperienceDependentFloat {
	float ValueWhenExperienceIsMinimal; // 0x00(0x04)
	float ValueWhenExperienceIsMaximal; // 0x04(0x04)
};

// ScriptStruct ConZ.PossibleChoppingTools
// Size: 0x10 (Inherited: 0x00)
struct FPossibleChoppingTools {
	struct TArray<struct FChoppingTool2> PossibleTools; // 0x00(0x10)
};

// ScriptStruct ConZ.ChoppingTool2
// Size: 0x50 (Inherited: 0x00)
struct FChoppingTool2 {
	struct TArray<struct UBaseItemTag*> ItemTags; // 0x00(0x10)
	struct UBaseItemTag* ItemTagClass; // 0x10(0x08)
	struct TSoftClassPtr<UObject> ItemClass; // 0x18(0x28)
	bool OverrideChoppingTime; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float ChoppingTimeMultiplier; // 0x44(0x04)
	bool OverrideIngredientsQuantity; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32_t IngredientsQuantityBonus; // 0x4c(0x04)
};

// ScriptStruct ConZ.ChoppingIngredient
// Size: 0x50 (Inherited: 0x00)
struct FChoppingIngredient {
	struct TSoftClassPtr<UObject> Item; // 0x00(0x28)
	int32_t MinQuantity; // 0x28(0x04)
	int32_t MaxQuantity; // 0x2c(0x04)
	bool IsQuantityAffectedByTool; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float InitialDamage; // 0x34(0x04)
	float RandomizeDamage; // 0x38(0x04)
	bool OverrideAutoDestructTime; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float AutoDestructTime; // 0x40(0x04)
	bool IsHealthAffectedByChoppedItem; // 0x44(0x01)
	char pad_45[0xb]; // 0x45(0x0b)
};

// ScriptStruct ConZ.SelectedChoppingTool
// Size: 0x60 (Inherited: 0x00)
struct FSelectedChoppingTool {
	struct AItem* Item; // 0x00(0x08)
	struct FChoppingTool2 Tool; // 0x08(0x50)
	bool IsRequiredToBeInHands; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct ConZ.CircularSegmentContainer
// Size: 0x18 (Inherited: 0x00)
struct FCircularSegmentContainer {
	struct TArray<struct UCircularMenuSegmentWidget*> SegmentWidgets; // 0x00(0x10)
	int32_t SegmentCountOverride; // 0x10(0x04)
	float Offset; // 0x14(0x04)
};

// ScriptStruct ConZ.CircularLayerData
// Size: 0x08 (Inherited: 0x00)
struct FCircularLayerData {
	float CenterCutoffPercentage; // 0x00(0x04)
	float Size; // 0x04(0x04)
};

// ScriptStruct ConZ.PlayerUnsubscribeData
// Size: 0x78 (Inherited: 0x00)
struct FPlayerUnsubscribeData {
	char pad_0[0x78]; // 0x00(0x78)
};

// ScriptStruct ConZ.TraderUnsubscribeData
// Size: 0x28 (Inherited: 0x00)
struct FTraderUnsubscribeData {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ConZ.NetPackedProjectileDamageEvent
// Size: 0x120 (Inherited: 0xc0)
struct FNetPackedProjectileDamageEvent : FScumPointDamageEvent {
	struct FVector_NetQuantize100 DealerLocation; // 0xc0(0x0c)
	struct FVector_NetQuantize100 TargetLocation; // 0xcc(0x0c)
	float ProjectileMass; // 0xd8(0x04)
	float ProjectileSpeed; // 0xdc(0x04)
	float ProjectileMuzzleVelocity; // 0xe0(0x04)
	char SharpnessHardnessPacked; // 0xe4(0x01)
	char ArmorPiercingFactorPacked; // 0xe5(0x01)
	char EventDataPacked; // 0xe6(0x01)
	char pad_E7[0x1]; // 0xe7(0x01)
	struct AActor* WeaponClass; // 0xe8(0x08)
	struct UObject* DamageDealer; // 0xf0(0x08)
	struct UVehicleAttachment* DamageReceiverVehicleAttachment; // 0xf8(0x08)
	float DistanceTravelled; // 0x100(0x04)
	float ExperienceMultiplier; // 0x104(0x04)
	bool IsVehicleCollision; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	int64_t BaseElementId; // 0x110(0x08)
	struct UProjectileImpactEffects* overrideProjectileImpactEffects; // 0x118(0x08)
};

// ScriptStruct ConZ.CollisionPointDamageEvent
// Size: 0x170 (Inherited: 0xc0)
struct FCollisionPointDamageEvent : FScumPointDamageEvent {
	char pad_C0[0xb0]; // 0xc0(0xb0)
};

// ScriptStruct ConZ.RepActionData
// Size: 0x03 (Inherited: 0x00)
struct FRepActionData {
	enum class EAnimalAction action; // 0x00(0x01)
	char IndexParameter; // 0x01(0x01)
	char Version; // 0x02(0x01)
};

// ScriptStruct ConZ.AnimalStationaryRotationRateSettings
// Size: 0x3c (Inherited: 0x00)
struct FAnimalStationaryRotationRateSettings {
	struct FRotator RunRotationRate; // 0x00(0x0c)
	struct FRotator TrotRotationRate; // 0x0c(0x0c)
	struct FRotator WalkRotationRate; // 0x18(0x0c)
	struct FRotator SneakRotationRate; // 0x24(0x0c)
	struct FRotator StandRotationRate; // 0x30(0x0c)
};

// ScriptStruct ConZ.AnimalPaceSettings
// Size: 0x10 (Inherited: 0x00)
struct FAnimalPaceSettings {
	float RunSpeed; // 0x00(0x04)
	float TrotSpeed; // 0x04(0x04)
	float WalkSpeed; // 0x08(0x04)
	float SneakSpeed; // 0x0c(0x04)
};

// ScriptStruct ConZ.TurnMontages
// Size: 0x10 (Inherited: 0x00)
struct FTurnMontages {
	struct UAnimMontage* TurnInPlaceLeft; // 0x00(0x08)
	struct UAnimMontage* TurnInPlaceRight; // 0x08(0x08)
};

// ScriptStruct ConZ.AnimalActionMontageData
// Size: 0x18 (Inherited: 0x00)
struct FAnimalActionMontageData {
	struct UAnimMontage* SleepMontage; // 0x00(0x08)
	struct UAnimMontage* EatMontage; // 0x08(0x08)
	struct UAnimMontage* IntimidateMontage; // 0x10(0x08)
};

// ScriptStruct ConZ.CloseRangeAttackData
// Size: 0x18 (Inherited: 0x00)
struct FCloseRangeAttackData {
	struct UAnimMontage* Montage; // 0x00(0x08)
	float RegainControlDurationModifier; // 0x08(0x04)
	float Range; // 0x0c(0x04)
	float angle; // 0x10(0x04)
	float HorizontalHalfAngleRange; // 0x14(0x04)
};

// ScriptStruct ConZ.ChargeAttackData
// Size: 0x20 (Inherited: 0x00)
struct FChargeAttackData {
	struct UAnimMontage* Montage; // 0x00(0x08)
	float RegainControlDurationModifier; // 0x08(0x04)
	float Range; // 0x0c(0x04)
	float Speed; // 0x10(0x04)
	float Height; // 0x14(0x04)
	float lengthOverride; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ConZ.ContainerItemDescriptorData
// Size: 0x60 (Inherited: 0x00)
struct FContainerItemDescriptorData {
	char pad_0[0x38]; // 0x00(0x38)
	struct UTexture2D* Icon; // 0x38(0x08)
	char pad_40[0x20]; // 0x40(0x20)
};

// ScriptStruct ConZ.ControlMappingStyle
// Size: 0x158 (Inherited: 0x00)
struct FControlMappingStyle {
	struct FSlateBrush FocusBackgroundImage; // 0x00(0x88)
	struct FControlMappingTextStyle LabelText; // 0x88(0x68)
	struct FControlMappingTextStyle MappingText; // 0xf0(0x68)
};

// ScriptStruct ConZ.ControlMappingTextStyle
// Size: 0x68 (Inherited: 0x00)
struct FControlMappingTextStyle {
	struct FSlateFontInfo Font; // 0x00(0x58)
	struct FLinearColor ColorAndOpacity; // 0x58(0x10)
};

// ScriptStruct ConZ.ImageAssetToLoad
// Size: 0x18 (Inherited: 0x00)
struct FImageAssetToLoad {
	struct FGameplayTag Name; // 0x00(0x08)
	struct FString FilePath; // 0x08(0x10)
};

// ScriptStruct ConZ.BaseElementSpawnParams
// Size: 0x18 (Inherited: 0x00)
struct FBaseElementSpawnParams {
	float Quality; // 0x00(0x04)
	char OverrideColor0; // 0x04(0x01)
	char OverrideColor1; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FDbIntegerId ShelterId; // 0x08(0x08)
	struct FEntityId EntityId; // 0x10(0x08)
};

// ScriptStruct ConZ.BaseBuildingSizeVariation
// Size: 0x18 (Inherited: 0x00)
struct FBaseBuildingSizeVariation {
	struct UBaseBuildingComponent* Component; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct ConZ.BaseInteractionVisitor
// Size: 0x20 (Inherited: 0x00)
struct FBaseInteractionVisitor {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ConZ.ConZBaseRepairAreaDuration
// Size: 0x08 (Inherited: 0x00)
struct FConZBaseRepairAreaDuration {
	int32_t NumberOfBaseElementsTreshold; // 0x00(0x04)
	float RepairDuration; // 0x04(0x04)
};

// ScriptStruct ConZ.ConZOnDemandElementData
// Size: 0x30 (Inherited: 0x00)
struct FConZOnDemandElementData {
	struct FConZBaseElementIdentifier ElementIdentifier; // 0x00(0x20)
	struct FString OwnerName; // 0x20(0x10)
};

// ScriptStruct ConZ.ConZPlacementQueryParams
// Size: 0x20 (Inherited: 0x00)
struct FConZPlacementQueryParams {
	struct APrisoner* User; // 0x00(0x08)
	struct UObject* ClassToSpawn; // 0x08(0x08)
	int32_t MaxInstancesPerFlagArea; // 0x10(0x04)
	bool IsSnapping; // 0x14(0x01)
	bool MustBePlacedOnFoundations; // 0x15(0x01)
	bool CanEverBePlacedOnFoundations; // 0x16(0x01)
	bool CanBePlacedOnOtherBaseElements; // 0x17(0x01)
	bool CanBePlacedWithoutFlag; // 0x18(0x01)
	bool CanBePlacedInBuilding; // 0x19(0x01)
	bool CanBePlacedInRestrictedArea; // 0x1a(0x01)
	bool CanBePlacedInAbandonedBunker; // 0x1b(0x01)
	bool IgnoreDisabledBaseBuildingFlag; // 0x1c(0x01)
	bool ShouldUseParentClassForMaxInstances; // 0x1d(0x01)
	bool ShouldUseMilitaryPOIsMask; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
};

// ScriptStruct ConZ.ConZBaseElementInteractionData
// Size: 0x38 (Inherited: 0x00)
struct FConZBaseElementInteractionData {
	int64_t BaseElementId; // 0x00(0x08)
	uint16_t GardenId; // 0x08(0x02)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FVector BaseElementLocation; // 0x0c(0x0c)
	float RepairValue; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	int64_t InteractionTimestamp; // 0x20(0x08)
	int64_t IntegerData; // 0x28(0x08)
	struct UObject* PointerData; // 0x30(0x08)
};

// ScriptStruct ConZ.ConZBaseInteractionData
// Size: 0x18 (Inherited: 0x00)
struct FConZBaseInteractionData {
	int64_t BaseId; // 0x00(0x08)
	struct FVector BaseLocation; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.ElementMorphQuery
// Size: 0x50 (Inherited: 0x00)
struct FElementMorphQuery {
	bool DebugSolo; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName QueryName; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FElementQueryMarker> Markers; // 0x10(0x10)
	struct UStaticMesh* StaticMesh; // 0x20(0x08)
	struct FElementSnapMarkerOverride MarkersOverride; // 0x28(0x18)
	char pad_40[0x10]; // 0x40(0x10)
};

// ScriptStruct ConZ.ElementSnapMarkerOverride
// Size: 0x18 (Inherited: 0x00)
struct FElementSnapMarkerOverride {
	enum class ESnapMarkerOverrideType OverrideType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> SnapMarkersToRemove; // 0x08(0x10)
};

// ScriptStruct ConZ.ElementQueryMarker
// Size: 0x40 (Inherited: 0x00)
struct FElementQueryMarker {
	bool Include; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UModularBaseBuildingSocketType* SocketClass; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct ConZ.ModularElementSnapMarker
// Size: 0x80 (Inherited: 0x00)
struct FModularElementSnapMarker {
	struct FName Name; // 0x00(0x08)
	bool CopyTransformFromSocket; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FTransform Transform; // 0x10(0x30)
	struct FModularElementSnapMarkerSocket Socket; // 0x40(0x18)
	bool InfluenceStability; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float Stability; // 0x5c(0x04)
	bool InfluenceMarkerGroup; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t MarkerGroupIndex; // 0x64(0x04)
	bool RequiresServerSetting; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FName RequiredServerSettingName; // 0x6c(0x08)
	char pad_74[0xc]; // 0x74(0x0c)
};

// ScriptStruct ConZ.ModularElementSnapMarkerSocket
// Size: 0x18 (Inherited: 0x00)
struct FModularElementSnapMarkerSocket {
	struct UModularBaseBuildingSocketType* Type; // 0x00(0x08)
	struct UModularBaseBuildingSocketType* InType; // 0x08(0x08)
	struct UModularBaseBuildingSocketType* OutType; // 0x10(0x08)
};

// ScriptStruct ConZ.ElementSnapMarker
// Size: 0x80 (Inherited: 0x00)
struct FElementSnapMarker {
	struct FTransform Transform; // 0x00(0x30)
	struct FVector Slack; // 0x30(0x0c)
	bool HangOnOtherElement; // 0x3c(0x01)
	bool HasForbiddenArea; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct FVector ForbiddenAreaCenter; // 0x40(0x0c)
	struct FVector ForbiddenAreaExtent; // 0x4c(0x0c)
	bool ElementTypesMustMatch; // 0x58(0x01)
	bool IncreaseLevelOnSnap; // 0x59(0x01)
	char MaxLevelToSnap; // 0x5a(0x01)
	char pad_5B[0x1]; // 0x5b(0x01)
	struct FVector RequiredElementSize; // 0x5c(0x0c)
	struct FVector RequiredElementSizeTolerance; // 0x68(0x0c)
	bool DestroySnappedElementWhenDestroyed; // 0x74(0x01)
	char pad_75[0x1]; // 0x75(0x01)
	uint16_t OutSocketTypes; // 0x76(0x02)
	uint16_t InSocketTypes; // 0x78(0x02)
	char pad_7A[0x6]; // 0x7a(0x06)
};

// ScriptStruct ConZ.ConZBaseData
// Size: 0x190 (Inherited: 0x00)
struct FConZBaseData {
	int64_t BaseId; // 0x00(0x08)
	struct FString BaseName; // 0x08(0x10)
	struct FVector2D BaseSize; // 0x18(0x08)
	struct FVector BaseLocation; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	int64_t BaseOwnerPlayerId; // 0x30(0x08)
	bool IsOwnedByPlayer; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector2D BaseBoundsMin; // 0x3c(0x08)
	struct FVector2D BaseBoundsMax; // 0x44(0x08)
	char pad_4C[0x144]; // 0x4c(0x144)
};

// ScriptStruct ConZ.ConZElementColoringData
// Size: 0x02 (Inherited: 0x00)
struct FConZElementColoringData {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct ConZ.ConZItemElementData
// Size: 0x08 (Inherited: 0x00)
struct FConZItemElementData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ConZ.ConZFlagElementData
// Size: 0x18 (Inherited: 0x00)
struct FConZFlagElementData {
	int64_t OvertakeEndTime; // 0x00(0x08)
	struct FDbIntegerId OvertakerId; // 0x08(0x08)
	int32_t NumberOfExpandedElements; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.ConZBaseElementData
// Size: 0x70 (Inherited: 0x00)
struct FConZBaseElementData {
	int64_t ElementID; // 0x00(0x08)
	int64_t OwnerPlayerId; // 0x08(0x08)
	int64_t CreatorPrisonerId; // 0x10(0x08)
	struct FString OwnerName; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform Transform; // 0x30(0x30)
	struct UObject* ElementClass; // 0x60(0x08)
	float HealthPoints; // 0x68(0x04)
	float Quality; // 0x6c(0x04)
};

// ScriptStruct ConZ.ConZBaseElementTransformData
// Size: 0x30 (Inherited: 0x00)
struct FConZBaseElementTransformData {
	int64_t ElementID; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FQuat Rotation; // 0x20(0x10)
};

// ScriptStruct ConZ.BaseElementDestructionZone
// Size: 0x40 (Inherited: 0x00)
struct FBaseElementDestructionZone {
	struct FBox Bounds; // 0x00(0x1c)
	bool IsCompositeZone; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct TArray<struct FRotatedZone> CompositeZoneComponents; // 0x20(0x10)
	float DamageToItems; // 0x30(0x04)
	float FallDamagePerMeter; // 0x34(0x04)
	float MaxFallDamage; // 0x38(0x04)
	bool MustElementBeAboveZone; // 0x3c(0x01)
	bool IgnoreElementsThatCantBePlacedOnOtherElements; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct ConZ.RotatedZone
// Size: 0x24 (Inherited: 0x00)
struct FRotatedZone {
	struct FVector Center; // 0x00(0x0c)
	struct FVector Extent; // 0x0c(0x0c)
	struct FRotator Rotation; // 0x18(0x0c)
};

// ScriptStruct ConZ.BaseElementDamageZone
// Size: 0x28 (Inherited: 0x00)
struct FBaseElementDamageZone {
	struct FVector BoundsMin; // 0x00(0x0c)
	struct FVector BoundsMax; // 0x0c(0x0c)
	float MinDamagePerSecond; // 0x18(0x04)
	float MaxDamagePerSecond; // 0x1c(0x04)
	float MinSpeedForDamage; // 0x20(0x04)
	float MaxSpeedForDamage; // 0x24(0x04)
};

// ScriptStruct ConZ.BoatParametersPerMovementPace_Deprecated
// Size: 0x18 (Inherited: 0x00)
struct FBoatParametersPerMovementPace_Deprecated {
	bool IsValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BaseMaxForwardSpeed; // 0x04(0x04)
	bool CanReverse; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float BaseMaxReverseSpeed; // 0x0c(0x04)
	float MinPrisonerStrength; // 0x10(0x04)
	float ThrottleMultiplier; // 0x14(0x04)
};

// ScriptStruct ConZ.ActiveHit
// Size: 0x0c (Inherited: 0x00)
struct FActiveHit {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct ConZ.CharacterCreationMenuContext
// Size: 0x30 (Inherited: 0x00)
struct FCharacterCreationMenuContext {
	bool IsPreferringMultiplayer; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ServerIp; // 0x08(0x10)
	int32_t ServerResponsePort; // 0x18(0x04)
	int32_t ServerGameplayPort; // 0x1c(0x04)
	struct FString ServerAuthToken; // 0x20(0x10)
};

// ScriptStruct ConZ.CommonMaps
// Size: 0x78 (Inherited: 0x00)
struct FCommonMaps {
	struct TSoftObjectPtr<UWorld> MainMenu; // 0x00(0x28)
	struct TSoftObjectPtr<UWorld> CharacterCreationMenu; // 0x28(0x28)
	struct TSoftObjectPtr<UWorld> Singleplayer; // 0x50(0x28)
};

// ScriptStruct ConZ.ConZGerstnerWavesParameters
// Size: 0x10 (Inherited: 0x00)
struct FConZGerstnerWavesParameters {
	float angle; // 0x00(0x04)
	float Height; // 0x04(0x04)
	float Length; // 0x08(0x04)
	float Steepness; // 0x0c(0x04)
};

// ScriptStruct ConZ.ConZSliderStyle
// Size: 0x228 (Inherited: 0x00)
struct FConZSliderStyle {
	struct FProgressBarStyle Slider; // 0x00(0x1a0)
	struct FSlateBrush Thumb; // 0x1a0(0x88)
};

// ScriptStruct ConZ.ConZSquadMember
// Size: 0x20 (Inherited: 0x00)
struct FConZSquadMember {
	char pad_0[0x10]; // 0x00(0x10)
	struct FDbIntegerId UserProfileId; // 0x10(0x08)
	enum class EConZSquadMemberRank Rank; // 0x18(0x01)
	bool Online; // 0x19(0x01)
	bool InDanger; // 0x1a(0x01)
	bool IsAlive; // 0x1b(0x01)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ConZ.ConZSquadPendingMember
// Size: 0x10 (Inherited: 0x00)
struct FConZSquadPendingMember {
	struct FDbIntegerId UserProfileId; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ConZ.TimestampedObject
// Size: 0x10 (Inherited: 0x00)
struct FTimestampedObject {
	struct UObject* Object; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ConZ.ConZWaterSplineControlPoint
// Size: 0x58 (Inherited: 0x44)
struct FConZWaterSplineControlPoint : FSplinePoint {
	bool selected; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float Width; // 0x48(0x04)
	float MaxDepth; // 0x4c(0x04)
	float Speed; // 0x50(0x04)
	float Opacity; // 0x54(0x04)
};

// ScriptStruct ConZ.WaterQueryResult
// Size: 0xf0 (Inherited: 0x00)
struct FWaterQueryResult {
	struct FVector Location; // 0x00(0x0c)
	bool InWaterIncludingWaves; // 0x0c(0x01)
	bool InWaterExcludingWaves; // 0x0d(0x01)
	bool IsBottomValid; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	struct FVector Surface; // 0x10(0x0c)
	struct FVector Bottom; // 0x1c(0x0c)
	struct FVector Velocity; // 0x28(0x0c)
	float WaveHeight; // 0x34(0x04)
	struct FVector WaveNormal; // 0x38(0x0c)
	char pad_44[0xc]; // 0x44(0x0c)
	struct FVirtualizedWaterSpline WaterSpline; // 0x50(0xa0)
};

// ScriptStruct ConZ.VirtualizedWaterSpline
// Size: 0xa0 (Inherited: 0x00)
struct FVirtualizedWaterSpline {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct ConZ.ConZDeveloperId
// Size: 0x18 (Inherited: 0x00)
struct FConZDeveloperId {
	struct TArray<char> IdArray; // 0x00(0x10)
	enum class EConZDeveloperIdFlag Flags; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ConZ.ConZOceanLocationProperties
// Size: 0x24 (Inherited: 0x00)
struct FConZOceanLocationProperties {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct ConZ.ConZMapLocationProperties
// Size: 0x03 (Inherited: 0x00)
struct FConZMapLocationProperties {
	char pad_0[0x3]; // 0x00(0x03)
};

// ScriptStruct ConZ.CookedFoodIngredientNetData
// Size: 0x14 (Inherited: 0x00)
struct FCookedFoodIngredientNetData {
	struct FPrimaryAssetId Resource; // 0x00(0x10)
	float Mass; // 0x10(0x04)
};

// ScriptStruct ConZ.CookingCategoryDropdownEntryData
// Size: 0x40 (Inherited: 0x00)
struct FCookingCategoryDropdownEntryData {
	struct FGameplayTag CookingCategoryTag; // 0x00(0x08)
	struct FGameplayTag NavigationTag; // 0x08(0x08)
	struct TArray<struct FGameplayTag> NavigationHistory; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)
	int32_t IndentationLevel; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ConZ.HoverClickButtonVisualInfo
// Size: 0x20 (Inherited: 0x00)
struct FHoverClickButtonVisualInfo {
	struct FLinearColor BackgroundColor; // 0x00(0x10)
	struct FLinearColor BorderColor; // 0x10(0x10)
};

// ScriptStruct ConZ.CookingFoodProxyMesh
// Size: 0xb0 (Inherited: 0x00)
struct FCookingFoodProxyMesh {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	char pad_8[0x88]; // 0x08(0x88)
	struct UStaticMeshComponent* _meshComponent; // 0x90(0x08)
	struct UAkComponent* _thermalSoundEffectComponent; // 0x98(0x08)
	struct UAkAudioEvent* _startCookingEvent; // 0xa0(0x08)
	struct UAkAudioEvent* _stopCookingEvent; // 0xa8(0x08)
};

// ScriptStruct ConZ.MainPointSnappedUtilities
// Size: 0xc8 (Inherited: 0x00)
struct FMainPointSnappedUtilities {
	char pad_0[0xa0]; // 0x00(0xa0)
	struct TArray<struct FEntityId> _repSnappedKey; // 0xa0(0x10)
	struct TArray<struct FEntityId> _repSnappedValue; // 0xb0(0x10)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// ScriptStruct ConZ.CookingUtilitySlotArray
// Size: 0x1d0 (Inherited: 0x108)
struct FCookingUtilitySlotArray : FFastArraySerializer {
	struct TArray<struct FCookingUtilitySlotInstance> _slots; // 0x108(0x10)
	char pad_118[0xb8]; // 0x118(0xb8)
};

// ScriptStruct ConZ.CookingUtilitySlotInstance
// Size: 0x180 (Inherited: 0x0c)
struct FCookingUtilitySlotInstance : FFastArraySerializerItem {
	char pad_C[0x14]; // 0x0c(0x14)
	struct FDbIntegerId _uniqueId; // 0x20(0x08)
	struct FGameplayTag _utilityType; // 0x28(0x08)
	char _usage; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FEntityId _boundCookingUtility; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
	struct UCookingRecipe* _boundRecipe; // 0x48(0x08)
	struct UCookingRecipe* _clientReservedRecipe; // 0x50(0x08)
	char pad_58[0x2]; // 0x58(0x02)
	uint16_t _repTemperature; // 0x5a(0x02)
	char pad_5C[0x8]; // 0x5c(0x08)
	uint16_t _repCookTime; // 0x64(0x02)
	char pad_66[0xa]; // 0x66(0x0a)
	char _cookQualityPacked; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FEntityId _ownerCookingUtility; // 0x78(0x08)
	char pad_80[0x14]; // 0x80(0x14)
	int8_t _slotItemTagArrayIndex; // 0x94(0x01)
	char pad_95[0x5f]; // 0x95(0x5f)
	float _targetCookTime; // 0xf4(0x04)
	char pad_F8[0x4]; // 0xf8(0x04)
	bool _cookingFinished; // 0xfc(0x01)
	bool _cookingStartFailed; // 0xfd(0x01)
	char pad_FE[0x1]; // 0xfe(0x01)
	bool _cookingAborted; // 0xff(0x01)
	char pad_100[0x8]; // 0x100(0x08)
	struct FDbIntegerId _parentInstance; // 0x108(0x08)
	char pad_110[0x70]; // 0x110(0x70)
};

// ScriptStruct ConZ.CookingResult
// Size: 0x28 (Inherited: 0x00)
struct FCookingResult {
	struct TSoftClassPtr<UObject> Item; // 0x00(0x28)
};

// ScriptStruct ConZ.RecipeIngredient
// Size: 0x30 (Inherited: 0x00)
struct FRecipeIngredient {
	struct FText IngredientTitle; // 0x00(0x18)
	bool IsResource; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FPossibleRecipeIngredient> PossibleIngredient; // 0x20(0x10)
};

// ScriptStruct ConZ.PossibleRecipeIngredient
// Size: 0x48 (Inherited: 0x00)
struct FPossibleRecipeIngredient {
	bool IsResource; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftClassPtr<UObject> Item; // 0x08(0x28)
	bool ShouldConsumeWhole; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t Usage; // 0x34(0x04)
	struct UGameResourceType* ResourceType; // 0x38(0x08)
	float Liters; // 0x40(0x04)
	float NutrientInclusionFactor; // 0x44(0x04)
};

// ScriptStruct ConZ.CookingRecipeRegistryEntry
// Size: 0x14 (Inherited: 0x00)
struct FCookingRecipeRegistryEntry {
	bool Enabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FPrimaryAssetId AssetId; // 0x04(0x10)
};

// ScriptStruct ConZ.CookingSortingDropdownEntryData
// Size: 0xa8 (Inherited: 0x00)
struct FCookingSortingDropdownEntryData {
	struct FText DisplayName; // 0x00(0x18)
	enum class ECookingRecipesSort RecipesSort; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FSlateBrush Icon; // 0x20(0x88)
};

// ScriptStruct ConZ.CookingUtilityFilterDropdownEntryData
// Size: 0x20 (Inherited: 0x00)
struct FCookingUtilityFilterDropdownEntryData {
	struct FGameplayTag CookingUtilityTag; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
};

// ScriptStruct ConZ.CookingUtilityMainSnapPoint
// Size: 0x48 (Inherited: 0x00)
struct FCookingUtilityMainSnapPoint {
	struct FGameplayTag UtilitySlotType; // 0x00(0x08)
	struct FVector LocationOffset; // 0x08(0x0c)
	float SnapRadius; // 0x14(0x04)
	bool CanAllUtilityTypesBePlacedOn; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FGameplayTagContainer UtilityTypesThatCanBePlaced; // 0x20(0x20)
	int32_t RepresentativeSlotId; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ConZ.CookingUtilitySlot
// Size: 0x88 (Inherited: 0x00)
struct FCookingUtilitySlot {
	struct FGameplayTag UtilitySlotType; // 0x00(0x08)
	struct FVector LocationOffset; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FVector> MovementEndpoints; // 0x18(0x10)
	float CircularShapeRadius; // 0x28(0x04)
	float ThermalConduction; // 0x2c(0x04)
	bool CanAllUtilityTypesBePlacedOn; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FGameplayTagContainer UtilityTypesThatCanBePlaced; // 0x38(0x20)
	struct FVector CookMeshVisualOffset; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
	struct UCookingUtilityUIDataAsset* CookingUtilityUIDataAsset; // 0x68(0x08)
	bool HighlightSlot; // 0x70(0x01)
	char pad_71[0x17]; // 0x71(0x17)
};

// ScriptStruct ConZ.CookingUtilitySlotInstance_UserSetData
// Size: 0x18 (Inherited: 0x00)
struct FCookingUtilitySlotInstance_UserSetData {
	int32_t SlotId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<char> InternalCoordinates; // 0x08(0x10)
};

// ScriptStruct ConZ.CookingUtilityUITableRow
// Size: 0x18 (Inherited: 0x08)
struct FCookingUtilityUITableRow : FTableRowBase {
	struct FGameplayTag UtilitySlotType; // 0x08(0x08)
	struct UCookingUtilityUIDataAsset* CookingUtilityUIDataAsset; // 0x10(0x08)
};

// ScriptStruct ConZ.CraftingIngredientConsumptionData
// Size: 0x20 (Inherited: 0x00)
struct FCraftingIngredientConsumptionData {
	struct AItem* Ingredient; // 0x00(0x08)
	struct UCraftingIngredientTag* Type; // 0x08(0x08)
	int32_t Amount; // 0x10(0x04)
	float Multiplier; // 0x14(0x04)
	int32_t SlotIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ConZ.CraftingProcess
// Size: 0x20 (Inherited: 0x00)
struct FCraftingProcess {
	struct UCraftingRecipe* _recipe; // 0x00(0x08)
	struct TArray<struct FCraftingProcessPerIngredientSlotData> _perIngredientSlotData; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct ConZ.CraftingProcessPerIngredientSlotData
// Size: 0x28 (Inherited: 0x00)
struct FCraftingProcessPerIngredientSlotData {
	int32_t _requiredAmount; // 0x00(0x04)
	int32_t _providedAmount; // 0x04(0x04)
	float _accumulatedQuality; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FSoftObjectPath _limiter; // 0x10(0x18)
};

// ScriptStruct ConZ.CraftingIngredientSlot
// Size: 0x70 (Inherited: 0x00)
struct FCraftingIngredientSlot {
	struct TArray<struct UCraftingIngredientTag*> AllowedTypes; // 0x00(0x10)
	struct FPerSkillLevelIntegerData Amount; // 0x10(0x14)
	struct FPerSkillLevelIntegerData AdditionalAmount; // 0x24(0x14)
	float ProductQualityInfluence; // 0x38(0x04)
	enum class ECraftingIngredientPurpose Purpose; // 0x3c(0x01)
	enum class ECraftingIngredientMixingType MixingType; // 0x3d(0x01)
	bool ReturnOnUncraft; // 0x3e(0x01)
	char pad_3F[0x1]; // 0x3f(0x01)
	struct FPerSkillLevelIntegerData DamagePercentageOnUncraft; // 0x40(0x14)
	bool OverrideClassRepresentativeCaption; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FText ClassRepresentativeCaption; // 0x58(0x18)
};

// ScriptStruct ConZ.PerSkillLevelIntegerData
// Size: 0x14 (Inherited: 0x00)
struct FPerSkillLevelIntegerData {
	int32_t NoSkill; // 0x00(0x04)
	int32_t Basic; // 0x04(0x04)
	int32_t Medium; // 0x08(0x04)
	int32_t Advanced; // 0x0c(0x04)
	int32_t AboveAdvanced; // 0x10(0x04)
};

// ScriptStruct ConZ.CraftingCategoryData
// Size: 0x18 (Inherited: 0x00)
struct FCraftingCategoryData {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct TArray<struct UCraftingRecipe*> Recipes; // 0x08(0x10)
};

// ScriptStruct ConZ.CraftingCategoryTabButtonSharedStyle
// Size: 0x24 (Inherited: 0x00)
struct FCraftingCategoryTabButtonSharedStyle {
	struct FLinearColor BackgroundColor; // 0x00(0x10)
	struct FLinearColor IconColor; // 0x10(0x10)
	float Scale; // 0x20(0x04)
};

// ScriptStruct ConZ.CraftingRecipeAndIngredientButtonVisualData
// Size: 0x278 (Inherited: 0x00)
struct FCraftingRecipeAndIngredientButtonVisualData {
	char CraftingButtonsPerRowInCategory; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CraftingButtonsContainerRowWidth; // 0x04(0x04)
	float CraftingButtonsContainerButtonSpacing; // 0x08(0x04)
	struct FLinearColor SelectedBorderColor; // 0x0c(0x10)
	struct FLinearColor DefaultBorderColor; // 0x1c(0x10)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FSlateBrush EmptyWidgetImage; // 0x30(0x88)
	struct FSlateBrush CanCraftLinesImage; // 0xb8(0x88)
	struct FSlateBrush MissingSomeIngredientsLinesImage; // 0x140(0x88)
	struct FSlateBrush MissingAllIngredientsLinesImage; // 0x1c8(0x88)
	struct TSoftObjectPtr<UTexture2D> TransparentPixel; // 0x250(0x28)
};

// ScriptStruct ConZ.CraftingPanelCategoryButtonUIData
// Size: 0xc8 (Inherited: 0x00)
struct FCraftingPanelCategoryButtonUIData {
	struct FGameplayTag CategoryTag; // 0x00(0x08)
	struct FGameplayTag HighlightTag; // 0x08(0x08)
	struct FSlateBrush Icon; // 0x10(0x88)
	struct FText Name; // 0x98(0x18)
	struct FText Shortcut; // 0xb0(0x18)
};

// ScriptStruct ConZ.CriminalRecordUIData
// Size: 0x238 (Inherited: 0x00)
struct FCriminalRecordUIData {
	char pad_0[0x238]; // 0x00(0x238)
};

// ScriptStruct ConZ.SkillTemplateUIData
// Size: 0x38 (Inherited: 0x00)
struct FSkillTemplateUIData {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct ConZ.CTFParameters
// Size: 0x30 (Inherited: 0x00)
struct FCTFParameters {
	float FlagResetDuration; // 0x00(0x04)
	bool AllowReturns; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t CaptureLimit; // 0x08(0x04)
	struct FGameEventRewardPoints PointsPerPickup; // 0x0c(0x0c)
	struct FGameEventRewardPoints PointsPerCapture; // 0x18(0x0c)
	struct FGameEventRewardPoints PointsPerReturn; // 0x24(0x0c)
};

// ScriptStruct ConZ.GameEventRewardPoints
// Size: 0x0c (Inherited: 0x00)
struct FGameEventRewardPoints {
	int32_t Cash; // 0x00(0x04)
	int32_t Score; // 0x04(0x04)
	float FamePoints; // 0x08(0x04)
};

// ScriptStruct ConZ.CustomZoneDisplayData
// Size: 0x40 (Inherited: 0x00)
struct FCustomZoneDisplayData {
	struct FString Value; // 0x00(0x10)
	struct FText Name; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
};

// ScriptStruct ConZ.CustomZoneRegion
// Size: 0x38 (Inherited: 0x00)
struct FCustomZoneRegion {
	struct FString Name; // 0x00(0x10)
	struct FVector2D Location; // 0x10(0x08)
	struct FVector2D Size; // 0x18(0x08)
	enum class ECustomZoneShape Shape; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t ConfigurationIndex; // 0x24(0x04)
	struct FName UniqueDefaultZoneName; // 0x28(0x08)
	enum class EDefaultCustomZoneState DefaultZoneState; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct ConZ.CustomZoneConfiguration
// Size: 0x48 (Inherited: 0x00)
struct FCustomZoneConfiguration {
	struct FString Name; // 0x00(0x10)
	enum class ECustomZoneEventHandlingMethod EventHandlingMethod[0x1a]; // 0x10(0x1a)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FLinearColor Color; // 0x2c(0x10)
	struct FName UniqueDefaultZoneName; // 0x3c(0x08)
	enum class EDefaultCustomZoneState DefaultZoneState; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct ConZ.CutsceneSubtitlesTableRow
// Size: 0x30 (Inherited: 0x08)
struct FCutsceneSubtitlesTableRow : FTableRowBase {
	struct FText _subtitleText; // 0x08(0x18)
	struct FTimespan _startTime; // 0x20(0x08)
	struct FTimespan _endTime; // 0x28(0x08)
};

// ScriptStruct ConZ.VideoInfo
// Size: 0x18 (Inherited: 0x00)
struct FVideoInfo {
	struct FString VideoUrl; // 0x00(0x10)
	bool ShouldShowSkipText; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ConZ.DamageTargetTypeMapping
// Size: 0x18 (Inherited: 0x00)
struct FDamageTargetTypeMapping {
	enum class EDamageTargetType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct UObject*> Classes; // 0x08(0x10)
};

// ScriptStruct ConZ.RadialDamageDescription
// Size: 0x24 (Inherited: 0x00)
struct FRadialDamageDescription {
	float RandomDamageMultiplier; // 0x00(0x04)
	float MinRandomMultiplierChance; // 0x04(0x04)
	float MaxRandomMultiplierChance; // 0x08(0x04)
	struct FVector BlastDirection; // 0x0c(0x0c)
	float BlastInnerAngle; // 0x18(0x04)
	float BlastOuterAngle; // 0x1c(0x04)
	float BlastAngleDamageFalloff; // 0x20(0x04)
};

// ScriptStruct ConZ.DamageMultiplierTracker
// Size: 0x28 (Inherited: 0x00)
struct FDamageMultiplierTracker {
	float _baseDamage; // 0x00(0x04)
	float _finalDamage; // 0x04(0x04)
	struct TArray<struct FString> _appliedMultiplierNames; // 0x08(0x10)
	struct TArray<float> _appliedMultiplierValues; // 0x18(0x10)
};

// ScriptStruct ConZ.ScumRadialDamageEvent
// Size: 0x48 (Inherited: 0x40)
struct FScumRadialDamageEvent : FRadialDamageEvent {
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct ConZ.DashboardMaterialParameterCache
// Size: 0x110 (Inherited: 0x00)
struct FDashboardMaterialParameterCache {
	char pad_0[0x8]; // 0x00(0x08)
	struct FDashboardMaterialParameter _speedParam; // 0x08(0x20)
	struct FDashboardMaterialParameter _rpmParam; // 0x28(0x20)
	struct FDashboardMaterialParameter _fuelRatioParam; // 0x48(0x20)
	struct FDashboardMaterialParameter _batteryRatioParam; // 0x68(0x20)
	struct FDashboardMaterialParameter _handbrakeParam; // 0x88(0x20)
	struct FDashboardMaterialParameter _lightsParam; // 0xa8(0x20)
	struct FDashboardMaterialParameter _engineParam; // 0xc8(0x20)
	struct FDashboardMaterialParameter _gearParam; // 0xe8(0x20)
	char pad_108[0x8]; // 0x108(0x08)
};

// ScriptStruct ConZ.DashboardMaterialParameter
// Size: 0x20 (Inherited: 0x00)
struct FDashboardMaterialParameter {
	struct FName MaterialSlotName; // 0x00(0x08)
	struct FName MaterialParameterName; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x18(0x08)
};

// ScriptStruct ConZ.DcxWheeledVehicleFlatTireWheelConfiguration
// Size: 0x50 (Inherited: 0x00)
struct FDcxWheeledVehicleFlatTireWheelConfiguration {
	struct FDcxVehicleWheelData FlatTireWheelData; // 0x00(0x20)
	char pad_20[0x20]; // 0x20(0x20)
	struct UDcxVehicleTire* FlatTire; // 0x40(0x08)
	struct UDcxVehicleTire* OriginalTire; // 0x48(0x08)
};

// ScriptStruct ConZ.DcxWheeledVehicleTireEffectProperties
// Size: 0x14 (Inherited: 0x00)
struct FDcxWheeledVehicleTireEffectProperties {
	struct FVector TireLocalOffset; // 0x00(0x0c)
	char pad_C[0x8]; // 0x0c(0x08)
};

// ScriptStruct ConZ.DcxVehicleTireParticleData
// Size: 0x14 (Inherited: 0x00)
struct FDcxVehicleTireParticleData {
	float MinLateralSlip; // 0x00(0x04)
	float MaxLateralSlip; // 0x04(0x04)
	float MinLongitudinalSlip; // 0x08(0x04)
	float MaxLongitudinalSlip; // 0x0c(0x04)
	float ParticleScaleModifier; // 0x10(0x04)
};

// ScriptStruct ConZ.DeathmatchParameters
// Size: 0x14 (Inherited: 0x00)
struct FDeathmatchParameters {
	int32_t RoundScoreLimit; // 0x00(0x04)
	float AreaRestrictionInterval; // 0x04(0x04)
	float AreaRestrictionDuration; // 0x08(0x04)
	float AreaRestrictionStep; // 0x0c(0x04)
	float BarrierHeatUpDuration; // 0x10(0x04)
};

// ScriptStruct ConZ.PrisonerInjuryTypeLikelihoods
// Size: 0x20 (Inherited: 0x00)
struct FPrisonerInjuryTypeLikelihoods {
	struct FString Name; // 0x00(0x10)
	float BoneInjuryLikelihood; // 0x10(0x04)
	float MuscleInjuryLikelihood; // 0x14(0x04)
	float OrganInjuryLikelihood; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ConZ.DemolitionSkillParametersPerSkillLevel
// Size: 0x68 (Inherited: 0x00)
struct FDemolitionSkillParametersPerSkillLevel {
	float TrapQuality; // 0x00(0x04)
	int32_t NumberOfWires; // 0x04(0x04)
	int32_t GreenWiresNumber; // 0x08(0x04)
	int32_t RedWiresNumber; // 0x0c(0x04)
	int32_t NumberOfDefuseAttempts; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<enum class ETrapType, struct FDemolitionSkillParametersPerTrapType> ParametersPerTrapType; // 0x18(0x50)
};

// ScriptStruct ConZ.DemolitionSkillParametersPerTrapType
// Size: 0x04 (Inherited: 0x00)
struct FDemolitionSkillParametersPerTrapType {
	float DefuseTime; // 0x00(0x04)
};

// ScriptStruct ConZ.DemolitionSkillExperienceAwards
// Size: 0x20 (Inherited: 0x00)
struct FDemolitionSkillExperienceAwards {
	float PointsForArmedTrap; // 0x00(0x04)
	float PointsForDisarmedOwnedTrap; // 0x04(0x04)
	float PointsForDisarmedEnemyTrap; // 0x08(0x04)
	float PointsForDisarmedPracticeTrap; // 0x0c(0x04)
	float PointsDecreasePerPracticeTrapTimerSecondsIncrease; // 0x10(0x04)
	float PointsIncreasePerPracticeTrapTimerSecondsDecrease; // 0x14(0x04)
	float PointsForAddedTrigger; // 0x18(0x04)
	float PointsForCraftedTrap; // 0x1c(0x04)
};

// ScriptStruct ConZ.TooltipPanelData
// Size: 0x20 (Inherited: 0x00)
struct FTooltipPanelData {
	struct UObject* ItemClass; // 0x00(0x08)
	struct UUserWidget* WidgetClass; // 0x08(0x08)
	enum class ETooltipPanelType PanelType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t Layer; // 0x14(0x04)
	bool IsEditorOnly; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ConZ.WheelData
// Size: 0x28 (Inherited: 0x00)
struct FWheelData {
	char pad_0[0x8]; // 0x00(0x08)
	struct UStaticMeshComponent* WheelMesh; // 0x08(0x08)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct ConZ.DialogueInfoContainer
// Size: 0x20 (Inherited: 0x00)
struct FDialogueInfoContainer {
	struct TArray<struct FDialogueInfo> DialogueInfos; // 0x00(0x10)
	struct FName NextDialogueName; // 0x10(0x08)
	float NextDialogueDelay; // 0x18(0x04)
	int32_t PriorityLevel; // 0x1c(0x04)
};

// ScriptStruct ConZ.DialogueInfo
// Size: 0x40 (Inherited: 0x00)
struct FDialogueInfo {
	enum class EDialogueType DialogueType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAkAudioEvent* VoiceOver; // 0x08(0x08)
	struct FText Text; // 0x10(0x18)
	struct TArray<struct FDialogueSurvivalTipData> SurvivalTips; // 0x28(0x10)
	float Duration; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ConZ.DialogueSurvivalTipData
// Size: 0x0c (Inherited: 0x00)
struct FDialogueSurvivalTipData {
	struct FName SurvivalTipName; // 0x00(0x08)
	float SurvivalTipDelay; // 0x08(0x04)
};

// ScriptStruct ConZ.DistantLevelDescription
// Size: 0xa0 (Inherited: 0x00)
struct FDistantLevelDescription {
	struct FString Name; // 0x00(0x10)
	struct FTransform Transform; // 0x10(0x30)
	enum class EDistantMeshStreamingBehavior MeshStreamingBehavior; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float MaxDrawDistance; // 0x44(0x04)
	bool NeverDistanceCull; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FBoxSphereBounds MeshBounds; // 0x4c(0x1c)
	struct TSoftObjectPtr<UStaticMesh> CollisionMesh; // 0x68(0x28)
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> MeshLODs; // 0x90(0x10)
};

// ScriptStruct ConZ.RecentlyUsedDistantLevelStaticMeshLODs
// Size: 0x20 (Inherited: 0x00)
struct FRecentlyUsedDistantLevelStaticMeshLODs {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct FRecentlyUsedDistantLevelStaticMesh> MeshLODs; // 0x10(0x10)
};

// ScriptStruct ConZ.RecentlyUsedDistantLevelStaticMesh
// Size: 0x10 (Inherited: 0x00)
struct FRecentlyUsedDistantLevelStaticMesh {
	struct UStaticMesh* StaticMesh; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ConZ.DoorUnlockDataCollection
// Size: 0x10 (Inherited: 0x00)
struct FDoorUnlockDataCollection {
	struct TArray<struct FDoorUnlockDataDescription> Data; // 0x00(0x10)
};

// ScriptStruct ConZ.DoorUnlockDataDescription
// Size: 0x10 (Inherited: 0x00)
struct FDoorUnlockDataDescription {
	struct UDoorUnlockData* DoorUnlockData; // 0x00(0x08)
	int32_t ProbabilityCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ConZ.SlidingDoorPartInfo
// Size: 0x20 (Inherited: 0x00)
struct FSlidingDoorPartInfo {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ConZ.DrivingSkillParametersPerSkillLevel
// Size: 0x100 (Inherited: 0x00)
struct FDrivingSkillParametersPerSkillLevel {
	float EngineStartViaMotionDuration; // 0x00(0x04)
	float EngineStartViaMotionFailureChance; // 0x04(0x04)
	float EngineReadyDelay; // 0x08(0x04)
	float EngineFailedToStartDelay; // 0x0c(0x04)
	float EngineFailedToStartNoFuelDelay; // 0x10(0x04)
	float EngineFailedToStartNoBatteryDelay; // 0x14(0x04)
	float EngineStalledDelay; // 0x18(0x04)
	float MaxSpeedModifier; // 0x1c(0x04)
	float ThrottleModifier; // 0x20(0x04)
	float BrakeModifier; // 0x24(0x04)
	float WheelSteeringLerpSpeedMultiplier; // 0x28(0x04)
	struct FEngineHandlingParameters EngineHandlingParameters; // 0x2c(0x08)
	struct FGearboxHandlingParameters GearboxHandlingParameters; // 0x34(0x0c)
	struct FDrivingSkillEngineStallingParameters EngineStallingByAccelerationParameters; // 0x40(0x40)
	struct FDrivingSkillEngineStallingParameters EngineStallingByUpShiftParameters; // 0x80(0x40)
	struct FDrivingSkillEngineStallingParameters EngineStallingWhenStartingViaMotion; // 0xc0(0x40)
};

// ScriptStruct ConZ.GearboxHandlingParameters
// Size: 0x0c (Inherited: 0x00)
struct FGearboxHandlingParameters {
	float GearChangeDelayMultiplier; // 0x00(0x04)
	float GearUpRatioMultiplier; // 0x04(0x04)
	float GearDownRatioMultiplier; // 0x08(0x04)
};

// ScriptStruct ConZ.DroneVisitTimeData
// Size: 0x08 (Inherited: 0x00)
struct FDroneVisitTimeData {
	float MinVisitTime; // 0x00(0x04)
	float MaxVisitTime; // 0x04(0x04)
};

// ScriptStruct ConZ.DropshipDamageEffectData
// Size: 0x18 (Inherited: 0x00)
struct FDropshipDamageEffectData {
	struct UNiagaraSystem* ParticleSystem; // 0x00(0x08)
	float EffectsScaleDistanceStart; // 0x08(0x04)
	float EffectsScaleDistanceRange; // 0x0c(0x04)
	float EffectsScaleByDistanceFactor; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.DropshipDataPerStance
// Size: 0x18 (Inherited: 0x00)
struct FDropshipDataPerStance {
	float MaxSpeed; // 0x00(0x04)
	float MaxAcceleration; // 0x04(0x04)
	float BrakingFriction; // 0x08(0x04)
	struct FRotator RotationChangeRate; // 0x0c(0x0c)
};

// ScriptStruct ConZ.DropZoneParameters
// Size: 0x2c (Inherited: 0x00)
struct FDropZoneParameters {
	float IntroAnnouncementDelay; // 0x00(0x04)
	float WarmupPhaseDuration; // 0x04(0x04)
	float CrateDropDuration; // 0x08(0x04)
	float SearchPhaseTimeLimit; // 0x0c(0x04)
	float CargoDropDuration; // 0x10(0x04)
	float CapturePhaseTimeLimit; // 0x14(0x04)
	float CargoOpeningDuration; // 0x18(0x04)
	bool SkipKeyPhase; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FGameEventRewardPoints PointsPerActivation; // 0x20(0x0c)
};

// ScriptStruct ConZ.DummyCollisionCapsuleInfo
// Size: 0x50 (Inherited: 0x00)
struct FDummyCollisionCapsuleInfo {
	struct TWeakObjectPtr<struct AActor> AttachParent; // 0x00(0x08)
	struct FGameplayTag Attachment; // 0x08(0x08)
	struct FTransform RelativeTransform; // 0x10(0x30)
	float UnscaledRadius; // 0x40(0x04)
	float UnscaledHalfHeight; // 0x44(0x04)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct ConZ.BankCardTypeData
// Size: 0x48 (Inherited: 0x00)
struct FBankCardTypeData {
	struct TSoftClassPtr<UObject> ItemClass; // 0x00(0x28)
	int32_t PurchasePrice; // 0x28(0x04)
	enum class ECurrencyType PurchasePriceCurrency; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t MaxWrongPinAttempts; // 0x30(0x04)
	int32_t FreeRenewalNum; // 0x34(0x04)
	int32_t DailyWithdrawLimit; // 0x38(0x04)
	int32_t DailyDepositLimit; // 0x3c(0x04)
	int32_t PinComplexity; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ConZ.CurrencyDescription
// Size: 0x68 (Inherited: 0x00)
struct FCurrencyDescription {
	struct FString CurrencySymbol; // 0x00(0x10)
	struct FText CurrencyName; // 0x10(0x18)
	struct FString ConfigFileSymbol; // 0x28(0x10)
	struct FSlateColor UITextColor; // 0x38(0x28)
	enum class EBankCardType RequiredBankCardTypeToPerformTransactions; // 0x60(0x01)
	bool MustBeOwnerOfBankCard; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// ScriptStruct ConZ.VirtualizedEncounterBBForeignCharacterData
// Size: 0x70 (Inherited: 0x00)
struct FVirtualizedEncounterBBForeignCharacterData {
	struct TSoftClassPtr<UObject> CharacterClass; // 0x00(0x28)
	struct FGameplayTag PresetType; // 0x28(0x08)
	struct FTransform CharacterTransform; // 0x30(0x30)
	struct TArray<char> CharacterData; // 0x60(0x10)
};

// ScriptStruct ConZ.HordeParametersPresetPair
// Size: 0x10 (Inherited: 0x00)
struct FHordeParametersPresetPair {
	struct UEncounterManagerHordePreset* Preset; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ConZ.EncounterGroupedCharacterSpawnPoint
// Size: 0x38 (Inherited: 0x00)
struct FEncounterGroupedCharacterSpawnPoint {
	struct FBox GroupBounds; // 0x00(0x1c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FTransform> SpawnTransforms; // 0x20(0x10)
	enum class ESpawnType Type; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct ConZ.EncounterLegacyCharacterSpawnPoint
// Size: 0x40 (Inherited: 0x00)
struct FEncounterLegacyCharacterSpawnPoint {
	enum class ESpawnType Type; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct ConZ.EncounterSubZoneData
// Size: 0x40 (Inherited: 0x00)
struct FEncounterSubZoneData {
	struct TArray<struct FEncounterSubZoneBoxData> BoxDataArray; // 0x00(0x10)
	struct FBox SubZoneBox; // 0x10(0x1c)
	bool ShouldInstantlyLoadAllNecessaryClasses; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct UEncounterZoneData* EncounterZoneData; // 0x30(0x08)
	int32_t SubZonePriority; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ConZ.EncounterSubZoneBoxData
// Size: 0x28 (Inherited: 0x00)
struct FEncounterSubZoneBoxData {
	struct FBox AreaBox; // 0x00(0x1c)
	struct FRotator BoxRotation; // 0x1c(0x0c)
};

// ScriptStruct ConZ.EncounterSpawnTypeArrayData
// Size: 0x18 (Inherited: 0x00)
struct FEncounterSpawnTypeArrayData {
	struct TArray<struct FEncounterSpawnTypeData> HiddenSpawnTypeDataArray; // 0x00(0x10)
	int32_t MinimumNecessarySpawnedCharacterNum; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.EncounterSpawnTypeData
// Size: 0x08 (Inherited: 0x00)
struct FEncounterSpawnTypeData {
	enum class ECharacterHiddenSpawnType HiddenSpawnType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Weight; // 0x04(0x04)
};

// ScriptStruct ConZ.EncounterSpawnPointTypeArrayData
// Size: 0x20 (Inherited: 0x00)
struct FEncounterSpawnPointTypeArrayData {
	char SpawnPointTypes; // 0x00(0x01)
	enum class ESpawnType SpawnType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FEncounterSpawnTypeData> HiddenSpawnTypeDataArray; // 0x08(0x10)
	int32_t MinimumNecessarySpawnedCharacterNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ConZ.VirtualizedEncounterCharacterData
// Size: 0x90 (Inherited: 0x00)
struct FVirtualizedEncounterCharacterData {
	struct TSoftClassPtr<UObject> CharacterClass; // 0x00(0x28)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform CharacterTransform; // 0x30(0x30)
	char SpawnPointTypeFlag; // 0x60(0x01)
	char SpawnPointFlag; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	float AggressiveSpawnChance; // 0x64(0x04)
	struct FGameplayTag PresetType; // 0x68(0x08)
	int32_t GroupID; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<char> CharacterData; // 0x78(0x10)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct ConZ.EncounterSubZoneEditorData
// Size: 0x58 (Inherited: 0x00)
struct FEncounterSubZoneEditorData {
	struct TArray<struct FEncounterZoneSubZoneBoxComponentEditorData> VisualizationBoxes; // 0x00(0x10)
	struct FEncounterSubZoneData ZoneData; // 0x10(0x40)
	struct FColor VisualizationBoxColor; // 0x50(0x04)
	bool ShouldInstantlyLoadAllCharacterClasses; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// ScriptStruct ConZ.EncounterZoneSubZoneBoxComponentEditorData
// Size: 0x08 (Inherited: 0x00)
struct FEncounterZoneSubZoneBoxComponentEditorData {
	struct UEncounterZoneSubZoneBoxComponent* BoxComponent; // 0x00(0x08)
};

// ScriptStruct ConZ.EncounterStaticZoneDescription
// Size: 0x160 (Inherited: 0x00)
struct FEncounterStaticZoneDescription {
	char pad_0[0x10]; // 0x00(0x10)
	struct FTransform _transform; // 0x10(0x30)
	float _semiXAxisSize; // 0x40(0x04)
	float _semiYAxisSize; // 0x44(0x04)
	float _zoneActivationRadiusMultiplier; // 0x48(0x04)
	float _LPCZoneActivationRadiusMultiplier; // 0x4c(0x04)
	struct FBox _boundingBox; // 0x50(0x1c)
	struct FBox _zoneActivationBoundingBox; // 0x6c(0x1c)
	struct FBox _LPCZoneActivationBoundingBox; // 0x88(0x1c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct FTransform> _flyingSpawnedCharacterApproachLocations; // 0xa8(0x10)
	struct UEncounterZoneData* _zoneData; // 0xb8(0x08)
	struct UEncounterZoneData* _lpcZoneData; // 0xc0(0x08)
	struct TArray<struct FEncounterSubZoneData> _subZoneData; // 0xc8(0x10)
	char pad_D8[0x88]; // 0xd8(0x88)
};

// ScriptStruct ConZ.EnduranceSkillParametersPerSkillLevel
// Size: 0x18 (Inherited: 0x00)
struct FEnduranceSkillParametersPerSkillLevel {
	struct FExperienceDependentFloat EnergyConsumptionMultiplier; // 0x00(0x08)
	struct FExperienceDependentFloat WaterConsumptionMultiplier; // 0x08(0x08)
	struct FExperienceDependentFloat StaminaRecoveryMultiplier; // 0x10(0x08)
};

// ScriptStruct ConZ.EnduranceSkillExperienceAwards
// Size: 0x0c (Inherited: 0x00)
struct FEnduranceSkillExperienceAwards {
	float PointsPerMinuteOfWalking; // 0x00(0x04)
	float PointsPerMinuteOfJogging; // 0x04(0x04)
	float PointsPerMinuteOfRunning; // 0x08(0x04)
};

// ScriptStruct ConZ.EngineeringSkillExperienceAwards
// Size: 0x10 (Inherited: 0x00)
struct FEngineeringSkillExperienceAwards {
	float RepairExperienceMultiplier; // 0x00(0x04)
	float FillFuelExperienceMultiplier; // 0x04(0x04)
	float DrainFuelExperienceMultiplier; // 0x08(0x04)
	float ChargeBatteryExperienceMultiplier; // 0x0c(0x04)
};

// ScriptStruct ConZ.EngineeringSkillParametersPerSkillLevel
// Size: 0x1c (Inherited: 0x00)
struct FEngineeringSkillParametersPerSkillLevel {
	float RepairRadius; // 0x00(0x04)
	float RepairTimeMultiplier; // 0x04(0x04)
	float ResultQuality; // 0x08(0x04)
	float ToolUsageMultiplier; // 0x0c(0x04)
	float FillFuelDurationMultiplier; // 0x10(0x04)
	float DrainFuelDurationMultiplier; // 0x14(0x04)
	float ChargeBatteryDurationMultiplier; // 0x18(0x04)
};

// ScriptStruct ConZ.EntitySetup_Component
// Size: 0x10 (Inherited: 0x00)
struct FEntitySetup_Component {
	struct FName Name; // 0x00(0x08)
	struct UEntityComponentSetup* Component; // 0x08(0x08)
};

// ScriptStruct ConZ.EntityComponentId
// Size: 0x10 (Inherited: 0x00)
struct FEntityComponentId {
	struct FEntityId EntityId; // 0x00(0x08)
	struct FName ComponentName; // 0x08(0x08)
};

// ScriptStruct ConZ.EntityToCreateOnStartupParams
// Size: 0x10 (Inherited: 0x00)
struct FEntityToCreateOnStartupParams {
	struct UEntitySetup* Entity; // 0x00(0x08)
	bool CreateOnServer; // 0x08(0x01)
	bool CreateOnClient; // 0x09(0x01)
	bool CreateInShippingBuilds; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct ConZ.EventsRankingStatsItem
// Size: 0x48 (Inherited: 0x00)
struct FEventsRankingStatsItem {
	int32_t Rank; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString PlayerName; // 0x08(0x10)
	struct FEventsRankingStats CharacterStats; // 0x18(0x30)
};

// ScriptStruct ConZ.EventsRankingStats
// Size: 0x30 (Inherited: 0x00)
struct FEventsRankingStats {
	char pad_0[0x8]; // 0x00(0x08)
	float FamePoints; // 0x08(0x04)
	int32_t FameLevel; // 0x0c(0x04)
	float EventScore; // 0x10(0x04)
	int32_t EventKills; // 0x14(0x04)
	int32_t EventTeamKills; // 0x18(0x04)
	int32_t EventDeaths; // 0x1c(0x04)
	int32_t EventSuicides; // 0x20(0x04)
	int32_t EventAssists; // 0x24(0x04)
	int32_t EventHeadshots; // 0x28(0x04)
	bool IsBanned; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct ConZ.ExplosionRadialDamageEvent
// Size: 0xb8 (Inherited: 0x48)
struct FExplosionRadialDamageEvent : FScumRadialDamageEvent {
	struct UDamageCustomization* DamageCustomizationClass; // 0x48(0x08)
	float Force; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FTargetTypeDamageMultiplier TargetTypeMultiplier; // 0x58(0x10)
	struct UObject* DamageDealer; // 0x68(0x08)
	struct AActor* DirectlyHitActor; // 0x70(0x08)
	struct FName BoneName; // 0x78(0x08)
	bool IsEventDamage; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct UObject* OriginatingWeapon; // 0x88(0x08)
	char pad_90[0x28]; // 0x90(0x28)
};

// ScriptStruct ConZ.FamePointPenalties
// Size: 0x1c (Inherited: 0x00)
struct FFamePointPenalties {
	float IronLockLockpick; // 0x00(0x04)
	float SilverLockLockpick; // 0x04(0x04)
	float GoldLockLockpick; // 0x08(0x04)
	float DialLockLockpick; // 0x0c(0x04)
	float VehiclePurchased; // 0x10(0x04)
	float WheelBarrowPurchased; // 0x14(0x04)
	float PrisonerCommittedSuicide; // 0x18(0x04)
};

// ScriptStruct ConZ.FamePointAwards
// Size: 0x138 (Inherited: 0x00)
struct FFamePointAwards {
	float BaseFameInflux; // 0x00(0x04)
	float MovingOnFoot; // 0x04(0x04)
	float MovingDriving; // 0x08(0x04)
	float MovingFlying; // 0x0c(0x04)
	float RustyLockLockpick; // 0x10(0x04)
	float IronLockLockpick; // 0x14(0x04)
	float SilverLockLockpick; // 0x18(0x04)
	float GoldLockLockpick; // 0x1c(0x04)
	float DialLockLockpick; // 0x20(0x04)
	float BombDefuse; // 0x24(0x04)
	float OwningTheBase; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTimespan MaxTimeFromLastLogin; // 0x30(0x08)
	float BaseOvertakeMultiplier; // 0x38(0x04)
	float VehicleSold; // 0x3c(0x04)
	float WheelBarrowSold; // 0x40(0x04)
	float AcquiredGoldCreditCard; // 0x44(0x04)
	float TreatedWoundC1; // 0x48(0x04)
	float TreatedWoundC2; // 0x4c(0x04)
	float TreatedWoundC3; // 0x50(0x04)
	float TreatedWoundC4; // 0x54(0x04)
	float CuredInfectionC1; // 0x58(0x04)
	float CuredInfectionC2; // 0x5c(0x04)
	float CuredInfectionC3; // 0x60(0x04)
	float CuredSepsis; // 0x64(0x04)
	float AbundantFishCaughtMultiplier; // 0x68(0x04)
	float CommonFishCaughtMultiplier; // 0x6c(0x04)
	float UncommonFishCaughtMultiplier; // 0x70(0x04)
	float RareFishCaughtMultiplier; // 0x74(0x04)
	float VeryRareFishCaughtMultiplier; // 0x78(0x04)
	float ExtremelyRareFishCaughtMultiplier; // 0x7c(0x04)
	float FishCaughtFamePointsPerKg; // 0x80(0x04)
	float ConsecutivelyKept50Fish; // 0x84(0x04)
	float ConsecutivelyReleased50Fish; // 0x88(0x04)
	float UnlockedDoorKillbox; // 0x8c(0x04)
	float SurvivedConsecutiveDays2; // 0x90(0x04)
	float SurvivedConsecutiveDays4; // 0x94(0x04)
	float SurvivedConsecutiveDays8; // 0x98(0x04)
	float SurvivedConsecutiveDays16; // 0x9c(0x04)
	float SurvivedConsecutiveDays32; // 0xa0(0x04)
	float EscapedSharkBite; // 0xa4(0x04)
	float PuppetKills; // 0xa8(0x04)
	float PuppetKills10; // 0xac(0x04)
	float PuppetKills100; // 0xb0(0x04)
	float PuppetKills500; // 0xb4(0x04)
	float AnimalKills; // 0xb8(0x04)
	float AnimalKills10; // 0xbc(0x04)
	float AnimalKills100; // 0xc0(0x04)
	float AnimalKills500; // 0xc4(0x04)
	float FirearmKills10; // 0xc8(0x04)
	float FirearmKills100; // 0xcc(0x04)
	float FirearmKills500; // 0xd0(0x04)
	float FirearmHeadShotOver200m; // 0xd4(0x04)
	float BowHeadshotOver100m; // 0xd8(0x04)
	float MeleeKills10; // 0xdc(0x04)
	float MeleeKills100; // 0xe0(0x04)
	float MeleeKills500; // 0xe4(0x04)
	float BareHandedKills10; // 0xe8(0x04)
	float BareHandedKills100; // 0xec(0x04)
	float BareHandedKills500; // 0xf0(0x04)
	float FinishedHauntedHouseRitual; // 0xf4(0x04)
	float SkillLeveledUpToBasic; // 0xf8(0x04)
	float SkillLeveledUpToMedium; // 0xfc(0x04)
	float SkillLeveledUpToAdvanced; // 0x100(0x04)
	float SkillLeveledUpToAdvancedPlus; // 0x104(0x04)
	float MaxedOutAttributes; // 0x108(0x04)
	float Decontaminated; // 0x10c(0x04)
	float WashedClothing; // 0x110(0x04)
	float LandedWithParachute; // 0x114(0x04)
	float BuiltGarden; // 0x118(0x04)
	float SeedsPlanted; // 0x11c(0x04)
	float SuccessfulHarvest; // 0x120(0x04)
	float WeedsPlucked; // 0x124(0x04)
	float CollectedSeeds; // 0x128(0x04)
	float AppliedPesticideOrFungicide; // 0x12c(0x04)
	float HadPlasticSurgery; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
};

// ScriptStruct ConZ.FarmingSkillParametersPerSkillLevel
// Size: 0x70 (Inherited: 0x00)
struct FFarmingSkillParametersPerSkillLevel {
	float PlantingSeedTime; // 0x00(0x04)
	float PlantingSeedTimeDecreaseByStrength; // 0x04(0x04)
	float FertilizingTime; // 0x08(0x04)
	float WateringTime; // 0x0c(0x04)
	float WeedingByHandTime; // 0x10(0x04)
	float WeedingByToolTime; // 0x14(0x04)
	float ApplyWeedRepellentTime; // 0x18(0x04)
	float ApplyPesticideTime; // 0x1c(0x04)
	float GardenSlotCraftTime; // 0x20(0x04)
	float RemovePlantTime; // 0x24(0x04)
	float RemovePlantTimeDecreaseByStrength; // 0x28(0x04)
	float DestroyGardenTime; // 0x2c(0x04)
	float DestroyGardenTimeDecreaseByStrength; // 0x30(0x04)
	float BaseMultiplier; // 0x34(0x04)
	float ExpMultiplier; // 0x38(0x04)
	float SuccessfulHarvestChancePercentage; // 0x3c(0x04)
	struct FInt32Interval SuccessfulHarvestNumItemsToSpawn; // 0x40(0x08)
	float SkillLevelBonusExperience; // 0x48(0x04)
	float PlantingSeedExperience; // 0x4c(0x04)
	float AddFertilizerExperience; // 0x50(0x04)
	float WateringPlantExperiencePerLiter; // 0x54(0x04)
	float ReachingNextPlantStageExperience; // 0x58(0x04)
	float WeedingByHandExperience; // 0x5c(0x04)
	float WeedingByToolExperience; // 0x60(0x04)
	float ApplyWeedRepellentExperience; // 0x64(0x04)
	float ApplyPesticideExperience; // 0x68(0x04)
	float CraftGardenExperience; // 0x6c(0x04)
};

// ScriptStruct ConZ.FillItemWithReplenishableResourceInteractionData
// Size: 0x40 (Inherited: 0x00)
struct FFillItemWithReplenishableResourceInteractionData {
	struct FText InteractionCaptionOverride; // 0x00(0x18)
	bool CanShowDrinkAsDefaultInteraction; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float BaseActionDuration; // 0x1c(0x04)
	float ActionDurationPerAmountFilled; // 0x20(0x04)
	float ResourceFillingExperiencePerAmount; // 0x24(0x04)
	struct UAnimMontage* PrisonerFillingMontage; // 0x28(0x08)
	struct UAkAudioEvent* StartItemNoiseAudioEvent; // 0x30(0x08)
	struct UAkAudioEvent* StopItemNoiseAudioEvent; // 0x38(0x08)
};

// ScriptStruct ConZ.FilteredPrimaryAssetId
// Size: 0x10 (Inherited: 0x00)
struct FFilteredPrimaryAssetId {
	struct FPrimaryAssetId Value; // 0x00(0x10)
};

// ScriptStruct ConZ.FishingMinigameData
// Size: 0x74 (Inherited: 0x00)
struct FFishingMinigameData {
	char pad_0[0x74]; // 0x00(0x74)
};

// ScriptStruct ConZ.FishingData
// Size: 0x18 (Inherited: 0x00)
struct FFishingData {
	struct FVector Location; // 0x00(0x0c)
	float HookDepth; // 0x0c(0x04)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ConZ.AttachComponentData
// Size: 0x18 (Inherited: 0x00)
struct FAttachComponentData {
	struct UMeshComponent* MeshComponent; // 0x00(0x08)
	int32_t ParticleIndex; // 0x08(0x04)
	bool SimulateTension; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName SocketName; // 0x10(0x08)
};

// ScriptStruct ConZ.FishStateParameters
// Size: 0x10 (Inherited: 0x00)
struct FFishStateParameters {
	float MaxSpeed; // 0x00(0x04)
	float Acceleration; // 0x04(0x04)
	float Deceleration; // 0x08(0x04)
	float TurnSpeed; // 0x0c(0x04)
};

// ScriptStruct ConZ.FishSpawnData
// Size: 0x10 (Inherited: 0x00)
struct FFishSpawnData {
	struct UFishSpeciesData* FishSpeciesData; // 0x00(0x08)
	float SpawningWeight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ConZ.FloatingWidgetUIData
// Size: 0x1c (Inherited: 0x00)
struct FFloatingWidgetUIData {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct ConZ.FoliageCanopyData
// Size: 0x40 (Inherited: 0x00)
struct FFoliageCanopyData {
	bool UseSphere; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FTreeCanopySphere Sphere; // 0x04(0x14)
	bool UseCapsule; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FTreeCanopyCapsule Capsule; // 0x1c(0x24)
};

// ScriptStruct ConZ.TreeCanopyCapsule
// Size: 0x24 (Inherited: 0x00)
struct FTreeCanopyCapsule {
	struct FVector Center; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	float Length; // 0x1c(0x04)
	float CanopyDensity; // 0x20(0x04)
};

// ScriptStruct ConZ.TreeCanopySphere
// Size: 0x14 (Inherited: 0x00)
struct FTreeCanopySphere {
	struct FVector Center; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	float CanopyDensity; // 0x10(0x04)
};

// ScriptStruct ConZ.FoliageAIPerceptionData
// Size: 0x04 (Inherited: 0x00)
struct FFoliageAIPerceptionData {
	bool CanCoverPrisoner; // 0x00(0x01)
	bool CanBlockVisibilityTrace; // 0x01(0x01)
	bool UseOnlyUpperCanopyHemisphereForSeenCheck; // 0x02(0x01)
	enum class EPrisonerGroundStance MaxUndetectedPrisonerStance; // 0x03(0x01)
};

// ScriptStruct ConZ.FoliageEffectsData
// Size: 0x18 (Inherited: 0x00)
struct FFoliageEffectsData {
	struct UAkAudioEvent* StartMovingThroughFoliageAudioEvent; // 0x00(0x08)
	struct UAkAudioEvent* StopMovingThroughFoliageAudioEvent; // 0x08(0x08)
	struct UAkAudioEvent* OneShotMovingThroughFoliageAudioEvent; // 0x10(0x08)
};

// ScriptStruct ConZ.FoliageGeneralData
// Size: 0x14 (Inherited: 0x00)
struct FFoliageGeneralData {
	float CollisionBoundsScale; // 0x00(0x04)
	struct FVector CollisionBoundsOffset; // 0x04(0x0c)
	bool ShouldBeConsideredForEnemySpawning; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct ConZ.BuildingsReplicationHelper
// Size: 0x70 (Inherited: 0x00)
struct FBuildingsReplicationHelper {
	struct TMap<struct FString, struct FBuildingData> BuildingsData; // 0x00(0x50)
	char pad_50[0x20]; // 0x50(0x20)
};

// ScriptStruct ConZ.BuildingData
// Size: 0x10 (Inherited: 0x00)
struct FBuildingData {
	char pad_0[0x8]; // 0x00(0x08)
	struct FBuildingEntityData EntityData; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ConZ.BuildingEntityData
// Size: 0x01 (Inherited: 0x00)
struct FBuildingEntityData {
	bool IsCleared; // 0x00(0x01)
};

// ScriptStruct ConZ.FortificationData
// Size: 0x28 (Inherited: 0x00)
struct FFortificationData {
	struct FVector LocationZeroOrigin; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UObject* FortificationClass; // 0x10(0x08)
	struct FDbIntegerId OwnerUserProfileId; // 0x18(0x08)
	float health; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ConZ.EditableParameter
// Size: 0x10 (Inherited: 0x00)
struct FEditableParameter {
	struct FString Name; // 0x00(0x10)
};

// ScriptStruct ConZ.ParameterVector4
// Size: 0x20 (Inherited: 0x10)
struct FParameterVector4 : FEditableParameter {
	struct FVector4 Value; // 0x10(0x10)
};

// ScriptStruct ConZ.ParameterVector
// Size: 0x20 (Inherited: 0x10)
struct FParameterVector : FEditableParameter {
	struct FVector Value; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ConZ.ParameterFloat
// Size: 0x18 (Inherited: 0x10)
struct FParameterFloat : FEditableParameter {
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.ParameterInt32
// Size: 0x18 (Inherited: 0x10)
struct FParameterInt32 : FEditableParameter {
	int32_t Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.CombustibleItemParams
// Size: 0x08 (Inherited: 0x00)
struct FCombustibleItemParams {
	float DefaultTemp; // 0x00(0x04)
	float BurningRate; // 0x04(0x04)
};

// ScriptStruct ConZ.FundsOverviewUIData
// Size: 0x60 (Inherited: 0x00)
struct FFundsOverviewUIData {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct ConZ.GameEventParticipantInfo
// Size: 0x78 (Inherited: 0x00)
struct FGameEventParticipantInfo {
	struct FString UniqueId; // 0x00(0x10)
	struct TWeakObjectPtr<struct APrisoner> Prisoner; // 0x10(0x08)
	struct FString Name; // 0x18(0x10)
	enum class EGameEventParticipantState State; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t TeamIndex; // 0x2c(0x04)
	struct TArray<struct UGameEventParticipantStats*> RoundStats; // 0x30(0x10)
	struct UGameEventParticipantStats* EventStats; // 0x40(0x08)
	struct TArray<struct APrisoner*> HurtBy; // 0x48(0x10)
	int32_t RepHelper; // 0x58(0x04)
	char pad_5C[0x1c]; // 0x5c(0x1c)
};

// ScriptStruct ConZ.GameEventParameters
// Size: 0x188 (Inherited: 0x00)
struct FGameEventParameters {
	float AnnounceDuration; // 0x00(0x04)
	float CancelDuration; // 0x04(0x04)
	float RoundDuration; // 0x08(0x04)
	int32_t RoundLimit; // 0x0c(0x04)
	int32_t WinLimit; // 0x10(0x04)
	float RespawnDelay; // 0x14(0x04)
	float TimeoutDuration; // 0x18(0x04)
	int32_t MinParticipants; // 0x1c(0x04)
	int32_t MaxParticipants; // 0x20(0x04)
	bool AllowRespawn; // 0x24(0x01)
	bool FriendlyFire; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	struct TArray<int32_t> TeamLimit; // 0x28(0x10)
	int32_t EntryFee; // 0x38(0x04)
	struct FGameEventRewardPoints PointsPerEnemyKill; // 0x3c(0x0c)
	struct FGameEventRewardPoints PointsPerTeamKill; // 0x48(0x0c)
	struct FGameEventRewardPoints PointsPerDeath; // 0x54(0x0c)
	struct FGameEventRewardPoints PointsPerSuicide; // 0x60(0x0c)
	struct FGameEventRewardPoints PointsPerAssist; // 0x6c(0x0c)
	struct FGameEventRewardPoints PointsPerHeadshot; // 0x78(0x0c)
	struct FGameEventRewardPoints PointsPerRoundWin; // 0x84(0x0c)
	struct TArray<struct FGameEventRewardPoints> PointsPerRank; // 0x90(0x10)
	struct FGameEventRewardPoints PointsForParticipation; // 0xa0(0x0c)
	float ScoreToFameConversionFactor; // 0xac(0x04)
	struct TArray<struct TSoftObjectPtr<UItemSelection>> PossiblePrimaryWeapons; // 0xb0(0x10)
	struct TArray<struct TSoftObjectPtr<UItemSelection>> PossibleSecondaryWeapons; // 0xc0(0x10)
	struct TArray<struct TSoftObjectPtr<UItemSelection>> PossibleTertiaryWeapons; // 0xd0(0x10)
	struct TArray<struct TSoftObjectPtr<UItemSelection>> PossibleOutfits; // 0xe0(0x10)
	struct TArray<struct TSoftObjectPtr<UItemSelection>> PossibleSupportItems; // 0xf0(0x10)
	struct TArray<struct TSoftObjectPtr<UItemSelection>> MandatoryGear; // 0x100(0x10)
	struct FText EventName; // 0x110(0x18)
	struct FText EventDescription; // 0x128(0x18)
	struct FText PrerequisitesText; // 0x140(0x18)
	struct FText WeaponText; // 0x158(0x18)
	struct FText RewardsText; // 0x170(0x18)
};

// ScriptStruct ConZ.SpawnArea
// Size: 0x14 (Inherited: 0x00)
struct FSpawnArea {
	struct FVector Center; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	int32_t TeamIndex; // 0x10(0x04)
};

// ScriptStruct ConZ.GameEventNotificationUIData
// Size: 0x50 (Inherited: 0x00)
struct FGameEventNotificationUIData {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct ConZ.GameEventTeamColours
// Size: 0x60 (Inherited: 0x00)
struct FGameEventTeamColours {
	struct FLinearColor TeamName; // 0x00(0x10)
	struct FLinearColor ParticipantStatsDarker; // 0x10(0x10)
	struct FLinearColor ParticipantStatsLighter; // 0x20(0x10)
	struct FLinearColor ParticipantStatsHighlighted; // 0x30(0x10)
	struct FLinearColor ParticipantStatsDisabled; // 0x40(0x10)
	struct FLinearColor ParticipantStatsMini; // 0x50(0x10)
};

// ScriptStruct ConZ.GameResourceConsumptionDataForeignSubstance
// Size: 0x10 (Inherited: 0x00)
struct FGameResourceConsumptionDataForeignSubstance {
	struct UForeignSubstance* Class; // 0x00(0x08)
	float Amount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ConZ.GameResourceMixingRule
// Size: 0x18 (Inherited: 0x00)
struct FGameResourceMixingRule {
	struct UGameResourceType* Source; // 0x00(0x08)
	struct UGameResourceType* Destination; // 0x08(0x08)
	struct UGameResourceType* Result; // 0x10(0x08)
};

// ScriptStruct ConZ.GardenSlotArray
// Size: 0x120 (Inherited: 0x108)
struct FGardenSlotArray : FFastArraySerializer {
	struct TArray<struct FGardenSlot> _gardenSlots; // 0x108(0x10)
	char pad_118[0x8]; // 0x118(0x08)
};

// ScriptStruct ConZ.GardenSlot
// Size: 0x200 (Inherited: 0x0c)
struct FGardenSlot : FFastArraySerializerItem {
	struct FIntPoint _slotPosition; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct UPlantSpecies* _species; // 0x18(0x08)
	enum class EPlantGrowthStage _stage; // 0x20(0x01)
	char pad_21[0x1]; // 0x21(0x01)
	uint16_t _repWater; // 0x22(0x02)
	char pad_24[0x4]; // 0x24(0x04)
	char _repGrowthPercentage; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	bool _organicFertilizer; // 0x30(0x01)
	bool _industrialFertilizer; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct UPlantPestSpecies* _pests[0x3]; // 0x38(0x18)
	char _repPestsIntensities[0x3]; // 0x50(0x03)
	char pad_53[0xd]; // 0x53(0x0d)
	struct UPlantDiseaseSpecies* _diseases[0x3]; // 0x60(0x18)
	char _repDiseaseIntensities[0x3]; // 0x78(0x03)
	char pad_7B[0xd]; // 0x7b(0x0d)
	char _repWeedIntensity; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	bool _pesticideActive; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	bool _fungicideActive; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	bool _weedRepellentActive; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	char _repHealth; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	bool _isDead; // 0xb0(0x01)
	bool _isOld; // 0xb1(0x01)
	char pad_B2[0x14e]; // 0xb2(0x14e)
};

// ScriptStruct ConZ.PlayerPawnBirdInfo
// Size: 0x10 (Inherited: 0x00)
struct FPlayerPawnBirdInfo {
	int32_t CoastalBirdsinProximity; // 0x00(0x04)
	int32_t ContinetalBirdsinProximity; // 0x04(0x04)
	int32_t VirtualAssignedCoastalBirds; // 0x08(0x04)
	int32_t VirtualAssignedContinentalBirds; // 0x0c(0x04)
};

// ScriptStruct ConZ.GlobalRaidProtectionPlayerLoginMessagesData
// Size: 0x30 (Inherited: 0x00)
struct FGlobalRaidProtectionPlayerLoginMessagesData {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct ConZ.GlobalRaidProtectionRaidPeriod
// Size: 0x10 (Inherited: 0x00)
struct FGlobalRaidProtectionRaidPeriod {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ConZ.ButtonIcons
// Size: 0x110 (Inherited: 0x00)
struct FButtonIcons {
	struct FSlateBrush EnabledIcon; // 0x00(0x88)
	struct FSlateBrush DisabledIcon; // 0x88(0x88)
};

// ScriptStruct ConZ.GrappleActionMontagePair
// Size: 0x20 (Inherited: 0x00)
struct FGrappleActionMontagePair {
	struct UAnimMontage* GrapplerMontage; // 0x00(0x08)
	struct UAnimMontage* GrapplerMontageFP; // 0x08(0x08)
	struct UAnimMontage* VictimMontage; // 0x10(0x08)
	struct UAnimMontage* VictimMontageFP; // 0x18(0x08)
};

// ScriptStruct ConZ.HalloweenSacrificePitRequiredItemVariants
// Size: 0x10 (Inherited: 0x00)
struct FHalloweenSacrificePitRequiredItemVariants {
	struct TArray<struct TSoftClassPtr<UObject>> Variants; // 0x00(0x10)
};

// ScriptStruct ConZ.HeatSource
// Size: 0xa8 (Inherited: 0x00)
struct FHeatSource {
	struct FVector Location; // 0x00(0x0c)
	struct FHeatSourceParameters Parameters; // 0x0c(0x24)
	bool IsUsingFuelSimulation; // 0x30(0x01)
	char pad_31[0x23]; // 0x31(0x23)
	int32_t TimesUpdatedWithoutMoving; // 0x54(0x04)
	char pad_58[0x50]; // 0x58(0x50)
};

// ScriptStruct ConZ.HeatSourceParameters
// Size: 0x24 (Inherited: 0x00)
struct FHeatSourceParameters {
	float Temperature; // 0x00(0x04)
	float TemperatureMultiplier; // 0x04(0x04)
	float FuelMassRatio; // 0x08(0x04)
	float Emissivity; // 0x0c(0x04)
	float DistanceScale; // 0x10(0x04)
	float InnerRadiusTemperatureScale; // 0x14(0x04)
	float AdditionalTemperaturePerGramOfOxygen; // 0x18(0x04)
	float InnerRadius; // 0x1c(0x04)
	float OuterRadius; // 0x20(0x04)
};

// ScriptStruct ConZ.PhysicalHitReactData
// Size: 0x18 (Inherited: 0x00)
struct FPhysicalHitReactData {
	struct FName ProfileName; // 0x00(0x08)
	struct FName PelvisBoneName; // 0x08(0x08)
	float InitialStrengthMultiplier; // 0x10(0x04)
	float BlendDuration; // 0x14(0x04)
};

// ScriptStruct ConZ.HitReactLandingData
// Size: 0x28 (Inherited: 0x00)
struct FHitReactLandingData {
	float MinImpactSpeedToReact; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimMontage* MontageToPlay; // 0x08(0x08)
	float RegainControlDurationMultiplier; // 0x10(0x04)
	bool CanEverGoToRagdoll; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MinImpactSpeedForRagdoll; // 0x18(0x04)
	float MinRagdollDuration; // 0x1c(0x04)
	float MaxRagdollDuration; // 0x20(0x04)
	float RagdollDurationPerSpeedUnit; // 0x24(0x04)
};

// ScriptStruct ConZ.HitReactMagnitudeData
// Size: 0x120 (Inherited: 0x00)
struct FHitReactMagnitudeData {
	struct FHitReactDirectionData SmallHit; // 0x00(0x48)
	struct FHitReactDirectionData MediumHit; // 0x48(0x48)
	struct FHitReactDirectionData LargeHit; // 0x90(0x48)
	struct FHitReactDirectionData KnockoutHit; // 0xd8(0x48)
};

// ScriptStruct ConZ.HitReactDirectionData
// Size: 0x48 (Inherited: 0x00)
struct FHitReactDirectionData {
	struct TArray<struct FHitReactBodyPartDataItem> FrontHit; // 0x00(0x10)
	struct TArray<struct FHitReactBodyPartDataItem> LeftHit; // 0x10(0x10)
	struct TArray<struct FHitReactBodyPartDataItem> BackHit; // 0x20(0x10)
	struct TArray<struct FHitReactBodyPartDataItem> RightHit; // 0x30(0x10)
	float RegainControlDurationMultiplier; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ConZ.HitReactBodyPartDataItem
// Size: 0x18 (Inherited: 0x00)
struct FHitReactBodyPartDataItem {
	struct UAnimMontage* MontageToPlay; // 0x00(0x08)
	struct UAnimMontage* FollowupMontage; // 0x08(0x08)
	float RegainControlDurationMultiplier; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.HitReactResult
// Size: 0x18 (Inherited: 0x00)
struct FHitReactResult {
	struct UAnimMontage* MontageToPlay; // 0x00(0x08)
	struct UAnimMontage* FollowupMontage; // 0x08(0x08)
	float RegainControlDurationMultiplier; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.PhysicalAnimationDesc
// Size: 0x34 (Inherited: 0x00)
struct FPhysicalAnimationDesc {
	char pad_0[0x34]; // 0x00(0x34)
};

// ScriptStruct ConZ.HuntingClueVisuals
// Size: 0xa0 (Inherited: 0x00)
struct FHuntingClueVisuals {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UStaticMesh* ClueStaticMesh; // 0x08(0x08)
	struct UMaterialInstance* ClueStaticMeshMaterial; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform StaticMeshOverrideRelativeTransform; // 0x20(0x30)
	struct UMaterialInstance* ClueDecalMaterials; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
	struct FTransform ClueDecalOverrideRelativeTransform; // 0x60(0x30)
	bool ShouldOverrideBoxDimensions; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FVector ClueDecalOverrideBoxDimensions; // 0x94(0x0c)
};

// ScriptStruct ConZ.HuntingBiomeDescription
// Size: 0x70 (Inherited: 0x00)
struct FHuntingBiomeDescription {
	struct FTransform Transform; // 0x00(0x30)
	float Radius; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FHuntingBiomeParameters Parameters; // 0x38(0x38)
};

// ScriptStruct ConZ.HuntingBiomeParameters
// Size: 0x38 (Inherited: 0x00)
struct FHuntingBiomeParameters {
	struct UBiomeData* BiomeData; // 0x00(0x08)
	float AnimalSpawnChance; // 0x08(0x04)
	float DaytimeSpawnMultiplier[0x4]; // 0x0c(0x10)
	float SpawnCheckCooldownMin; // 0x1c(0x04)
	float SpawnCheckCooldownMax; // 0x20(0x04)
	int8_t MaxAnimalEncounters; // 0x24(0x01)
	int8_t MaxAnimalEncountersPerPlayer; // 0x25(0x01)
	int8_t MaxPlayerTriggers; // 0x26(0x01)
	bool PacksAllowed; // 0x27(0x01)
	char Priority; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float AnimalSoundCooldownMin; // 0x2c(0x04)
	float AnimalSoundCooldownMax; // 0x30(0x04)
	float AnimalSoundPlayProbability; // 0x34(0x04)
};

// ScriptStruct ConZ.IgnitableItemIgnitionRequirements
// Size: 0x18 (Inherited: 0x00)
struct FIgnitableItemIgnitionRequirements {
	struct TArray<struct UFireSourceItemTag*> PossibleItemTags; // 0x00(0x10)
	int32_t Uses; // 0x10(0x04)
	float UsageWeight; // 0x14(0x04)
};

// ScriptStruct ConZ.SpawnedItems
// Size: 0x18 (Inherited: 0x00)
struct FSpawnedItems {
	int32_t ID; // 0x00(0x04)
	enum class EPickupItemOperation Operation; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct AItem*> Items; // 0x08(0x10)
};

// ScriptStruct ConZ.InteractionStruct
// Size: 0x98 (Inherited: 0x00)
struct FInteractionStruct {
	enum class EInteractionType interactionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString InteractionCaption; // 0x08(0x10)
	char pad_18[0x80]; // 0x18(0x80)
};

// ScriptStruct ConZ.InteractionQueryParameters
// Size: 0x40 (Inherited: 0x00)
struct FInteractionQueryParameters {
	struct FVector InteractionLocation; // 0x00(0x0c)
	struct FVector InteractionNormal; // 0x0c(0x0c)
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x18(0x08)
	int32_t InstanceIndex; // 0x20(0x04)
	char pad_24[0x1c]; // 0x24(0x1c)
};

// ScriptStruct ConZ.InventoryItemPositionPair
// Size: 0x28 (Inherited: 0x00)
struct FInventoryItemPositionPair {
	struct FInventoryPositionDataRepHelper position; // 0x00(0x20)
	struct UObject* Item; // 0x20(0x08)
};

// ScriptStruct ConZ.InventoryContainer2DRepData
// Size: 0x20 (Inherited: 0x00)
struct FInventoryContainer2DRepData {
	struct TArray<struct FInventoryItemPositionPair> ItemsData; // 0x00(0x10)
	struct UObject* Parent; // 0x10(0x08)
	int32_t SizeX; // 0x18(0x04)
	int32_t SizeY; // 0x1c(0x04)
};

// ScriptStruct ConZ.InventoryContainerClothesData
// Size: 0x20 (Inherited: 0x00)
struct FInventoryContainerClothesData {
	struct TArray<struct FInventoryItemPositionPair> ItemsData; // 0x00(0x10)
	struct UObject* Parent; // 0x10(0x08)
	int32_t RepCounter; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ConZ.InventoryContainerHandsHolstersData
// Size: 0x20 (Inherited: 0x00)
struct FInventoryContainerHandsHolstersData {
	struct TArray<struct FInventoryItemPositionPair> ItemsData; // 0x00(0x10)
	struct UObject* Parent; // 0x10(0x08)
	int32_t RepCounter; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ConZ.InventoryStackMemberData
// Size: 0x08 (Inherited: 0x00)
struct FInventoryStackMemberData {
	int32_t position; // 0x00(0x04)
	int32_t Size; // 0x04(0x04)
};

// ScriptStruct ConZ.InventoryNodeWidgetData
// Size: 0x40 (Inherited: 0x00)
struct FInventoryNodeWidgetData {
	struct FName Slot; // 0x00(0x08)
	enum class EInventoryNodeWidgetDataType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float NumberData; // 0x0c(0x04)
	int32_t IntegerNumberData; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText TextData; // 0x18(0x18)
	struct UTexture2D* IconData; // 0x30(0x08)
	enum class ESlateVisibility VisibilityData; // 0x38(0x01)
	bool IsAnimated; // 0x39(0x01)
	bool IsSaturated; // 0x3a(0x01)
	bool IsOpened; // 0x3b(0x01)
	float Opacity; // 0x3c(0x04)
};

// ScriptStruct ConZ.UnlockLocation
// Size: 0x30 (Inherited: 0x00)
struct FUnlockLocation {
	struct FTransform Transform; // 0x00(0x30)
};

// ScriptStruct ConZ.ItemContainersArray
// Size: 0x10 (Inherited: 0x00)
struct FItemContainersArray {
	struct TArray<struct AItemContainer*> _itemContainers; // 0x00(0x10)
};

// ScriptStruct ConZ.ItemContainersReplicationHelper
// Size: 0x70 (Inherited: 0x00)
struct FItemContainersReplicationHelper {
	struct TMap<struct FString, struct FItemContainerRepData> ItemContainerData; // 0x00(0x50)
	char pad_50[0x20]; // 0x50(0x20)
};

// ScriptStruct ConZ.ItemContainerRepData
// Size: 0x20 (Inherited: 0x00)
struct FItemContainerRepData {
	struct TArray<struct UObject*> Locks; // 0x00(0x10)
	struct TArray<int32_t> RemainingNeutralizationAttemptsPerLock; // 0x10(0x10)
};

// ScriptStruct ConZ.ItemGeneralParametersTableRow
// Size: 0x78 (Inherited: 0x08)
struct FItemGeneralParametersTableRow : FTableRowBase {
	struct FText _caption; // 0x08(0x18)
	struct FText _description; // 0x20(0x18)
	struct TSoftObjectPtr<UTexture2D> _outsideInventoryIcon; // 0x38(0x28)
	struct TArray<struct FCraftingIngredientInstance> _craftingIngredientInstances; // 0x60(0x10)
	bool _isSubjectToAllowMinesAndTrapsSetting; // 0x70(0x01)
	enum class EDeluxeVersion _requiredDLC; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
};

// ScriptStruct ConZ.ItemObstructionTestCapsule
// Size: 0x50 (Inherited: 0x00)
struct FItemObstructionTestCapsule {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct ConZ.ItemSpawnerMarker
// Size: 0x180 (Inherited: 0x00)
struct FItemSpawnerMarker {
	struct FTransform Transform; // 0x00(0x30)
	struct FItemSpawnerDataBasedOnPreset Spawner; // 0x30(0x90)
	struct FItemSpawnerPresetWithOverrides SpawnerPreset; // 0xc0(0xb8)
	char pad_178[0x8]; // 0x178(0x08)
};

// ScriptStruct ConZ.ItemSpawnerDataBasedOnPreset
// Size: 0x90 (Inherited: 0x00)
struct FItemSpawnerDataBasedOnPreset {
	struct UItemSpawnerPreset* Preset; // 0x00(0x08)
	bool OverrideItemClasses; // 0x08(0x01)
	bool OverrideItemSpawnTypes; // 0x09(0x01)
	bool OverrideAlwaysSpawn; // 0x0a(0x01)
	bool OverrideProbability; // 0x0b(0x01)
	bool OverrideUseItemZone; // 0x0c(0x01)
	bool OverrideUseItemRarity; // 0x0d(0x01)
	bool OverrideUseItemSpawnGroup; // 0x0e(0x01)
	bool OverrideInitialDamage; // 0x0f(0x01)
	bool OverrideRandomizeDamage; // 0x10(0x01)
	bool OverrideInitialUsage; // 0x11(0x01)
	bool OverrideRandomizeUsage; // 0x12(0x01)
	bool OverrideInitialDirtiness; // 0x13(0x01)
	bool OverrideRandomizeDirtiness; // 0x14(0x01)
	bool OverrideMinAmmoCount; // 0x15(0x01)
	bool OverrideMaxAmmoCount; // 0x16(0x01)
	bool OverrideMinCashAmount; // 0x17(0x01)
	bool OverrideMaxCashAmount; // 0x18(0x01)
	bool OverrideUseCollisionTraceToAdjustSpawnLocation; // 0x19(0x01)
	bool OverrideUseCollisionTraceToAdjustSpawnRotation; // 0x1a(0x01)
	bool OverridePostItemsSpawnedActions; // 0x1b(0x01)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct TSoftClassPtr<UObject>> ItemClasses; // 0x20(0x10)
	struct FGameplayTagContainer ItemSpawnTypes; // 0x30(0x20)
	bool AlwaysSpawn; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float Probability; // 0x54(0x04)
	bool UseItemZone; // 0x58(0x01)
	bool UseItemRarity; // 0x59(0x01)
	bool UseItemSpawnGroup; // 0x5a(0x01)
	char pad_5B[0x1]; // 0x5b(0x01)
	float InitialDamage; // 0x5c(0x04)
	float RandomizeDamage; // 0x60(0x04)
	float InitialUsage; // 0x64(0x04)
	float RandomizeUsage; // 0x68(0x04)
	float InitialDirtiness; // 0x6c(0x04)
	float RandomizeDirtiness; // 0x70(0x04)
	int32_t MinAmmoCount; // 0x74(0x04)
	int32_t MaxAmmoCount; // 0x78(0x04)
	int32_t MinCashAmount; // 0x7c(0x04)
	int32_t MaxCashAmount; // 0x80(0x04)
	bool UseCollisionTraceToAdjustSpawnLocation; // 0x84(0x01)
	bool UseCollisionTraceToAdjustSpawnRotation; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	struct UItemPostSpawnAction* PostItemsSpawnedActions; // 0x88(0x08)
};

// ScriptStruct ConZ.ItemSpawningSettings
// Size: 0x40 (Inherited: 0x00)
struct FItemSpawningSettings {
	float RelevantSpawnerGroupsUpdateInterval; // 0x00(0x04)
	float MinPlayerLocationDeltaToUpdateRelevantSpawnerGroups; // 0x04(0x04)
	float SpawnerGroupsCullDistance; // 0x08(0x04)
	float SpawnerExpirationTimeInMinutes; // 0x0c(0x04)
	float ExamineSpawnerExpirationTimeInMinutes; // 0x10(0x04)
	float SpawnerTasksProcessingInterval; // 0x14(0x04)
	float SpawnerTasksProcessingBudgetInMilliseconds; // 0x18(0x04)
	int32_t MaxNumberOfSpawnerTasksPerUpdate; // 0x1c(0x04)
	bool ShouldDestroySpawnedItemsIfNoPlayersAround; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float RarityRatio; // 0x24(0x04)
	float SpawnerProbabilityMultiplier; // 0x28(0x04)
	float ExamineSpawnerProbabilityMultiplier; // 0x2c(0x04)
	float ItemHealthMultiplierWhenUnderwater; // 0x30(0x04)
	bool IgnoreSpawnerProbability; // 0x34(0x01)
	bool IgnoreItemLimit; // 0x35(0x01)
	bool IgnoreItemZone; // 0x36(0x01)
	bool IgnoreItemRarity; // 0x37(0x01)
	bool DebugDrawItemSpawnTransforms; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float DebugDrawItemSpawnTransformsDuration; // 0x3c(0x04)
};

// ScriptStruct ConZ.ExamineItemSpawnerData
// Size: 0xb0 (Inherited: 0x00)
struct FExamineItemSpawnerData {
	int32_t MinQuantity; // 0x00(0x04)
	int32_t MaxQuantity; // 0x04(0x04)
	bool AllowDuplicates; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FItemSpawnerDataBasedOnPreset Spawner; // 0x10(0x90)
	struct TArray<struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes> MaxOccurrencesPerSpawnTypes; // 0xa0(0x10)
};

// ScriptStruct ConZ.ExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes
// Size: 0x28 (Inherited: 0x00)
struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes {
	struct FGameplayTagContainer ItemSpawnTypes; // 0x00(0x20)
	int32_t MaxNumberOfOccurrences; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ConZ.ItemSpawnerData
// Size: 0x70 (Inherited: 0x00)
struct FItemSpawnerData {
	struct TArray<struct TSoftClassPtr<UObject>> ItemClasses; // 0x00(0x10)
	struct FGameplayTagContainer ItemSpawnTypes; // 0x10(0x20)
	bool AlwaysSpawn; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Probability; // 0x34(0x04)
	bool UseItemZone; // 0x38(0x01)
	bool UseItemRarity; // 0x39(0x01)
	bool UseItemSpawnGroup; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	float InitialDamage; // 0x3c(0x04)
	float RandomizeDamage; // 0x40(0x04)
	float InitialUsage; // 0x44(0x04)
	float RandomizeUsage; // 0x48(0x04)
	float InitialDirtiness; // 0x4c(0x04)
	float RandomizeDirtiness; // 0x50(0x04)
	int32_t MinAmmoCount; // 0x54(0x04)
	int32_t MaxAmmoCount; // 0x58(0x04)
	int32_t MinCashAmount; // 0x5c(0x04)
	int32_t MaxCashAmount; // 0x60(0x04)
	bool UseCollisionTraceToAdjustSpawnLocation; // 0x64(0x01)
	bool UseCollisionTraceToAdjustSpawnRotation; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	struct UItemPostSpawnAction* PostItemsSpawnedActions; // 0x68(0x08)
};

// ScriptStruct ConZ.ItemLootTreeNodeTableRow
// Size: 0x38 (Inherited: 0x20)
struct FItemLootTreeNodeTableRow : FGameplayTagTableRow {
	enum class EItemRarity Rarity; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct TSoftClassPtr<UObject>> PostSpawnActions; // 0x28(0x10)
};

// ScriptStruct ConZ.ItemSpawningParametersTableRow
// Size: 0x78 (Inherited: 0x08)
struct FItemSpawningParametersTableRow : FTableRowBase {
	int32_t MaxOccurrences; // 0x08(0x04)
	struct FItemLocation AllowedLocations; // 0x0c(0x0f)
	char pad_1B[0x1]; // 0x1b(0x01)
	struct FFloatInterval CooldownPerSquadMember; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct FDataTableRowHandle CooldownGroup; // 0x28(0x10)
	bool IsSubjectToAllowTrapsConfig; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct TSoftClassPtr<UObject>> Variations; // 0x40(0x10)
	bool ShouldOverrideInitialAndRandomUsage; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float InitialUsageOverride; // 0x54(0x04)
	float RandomUsageOverride; // 0x58(0x04)
	struct FVector SpawnLocationOffset; // 0x5c(0x0c)
	struct FRotator SpawnRotationOffset; // 0x68(0x0c)
	float SpawnRotationRandomization; // 0x74(0x04)
};

// ScriptStruct ConZ.ItemSpawningCooldownGroupTableRow
// Size: 0x18 (Inherited: 0x08)
struct FItemSpawningCooldownGroupTableRow : FTableRowBase {
	struct FFloatInterval cooldown; // 0x08(0x08)
	bool IsAffectedByLowerGroups; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ConZ.RoomDefinition
// Size: 0x20 (Inherited: 0x00)
struct FRoomDefinition {
	struct ADoor* RoomDoor; // 0x00(0x08)
	struct UStaticMeshComponent* Locker; // 0x08(0x08)
	struct AKillBoxC4SpawnPoint* C4; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct ConZ.RoomDifficultyConfiguration
// Size: 0x38 (Inherited: 0x00)
struct FRoomDifficultyConfiguration {
	struct TArray<struct AItem*> Locks; // 0x00(0x10)
	struct TArray<struct AItem*> Zappers; // 0x10(0x10)
	bool IsC4Present; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FSpawnerConfiguration> PossibleSpawners; // 0x28(0x10)
};

// ScriptStruct ConZ.SpawnerConfiguration
// Size: 0x18 (Inherited: 0x00)
struct FSpawnerConfiguration {
	struct UItemSpawnerPreset* Spawner; // 0x00(0x08)
	struct UItemSpawnerPreset2* SpawnerPreset; // 0x08(0x08)
	int32_t MinimumItemsCount; // 0x10(0x04)
	int32_t MaximumItemsCount; // 0x14(0x04)
};

// ScriptStruct ConZ.LadderMarker
// Size: 0xa0 (Inherited: 0x00)
struct FLadderMarker {
	struct FTransform FirstStep; // 0x00(0x30)
	struct FVector LastStep; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FTransform Edge; // 0x40(0x30)
	struct FVector CapsuleBias; // 0x70(0x0c)
	float StepHeight; // 0x7c(0x04)
	float StepWidth; // 0x80(0x04)
	float HitDetectionExtraAboveLastStep; // 0x84(0x04)
	float HitDetectionExtraBelowFirstStep; // 0x88(0x04)
	float HitDetectionExtraOnTheSides; // 0x8c(0x04)
	bool HasEdge; // 0x90(0x01)
	bool IsNarrow; // 0x91(0x01)
	enum class EPhysicalSurface PhysicalSurfaceForSounds; // 0x92(0x01)
	char pad_93[0xd]; // 0x93(0x0d)
};

// ScriptStruct ConZ.LandingEffectDataPerPhysicalSurface
// Size: 0x30 (Inherited: 0x00)
struct FLandingEffectDataPerPhysicalSurface {
	struct FLandingEffectDataPerSeverity Light; // 0x00(0x10)
	struct FLandingEffectDataPerSeverity Medium; // 0x10(0x10)
	struct FLandingEffectDataPerSeverity Heavy; // 0x20(0x10)
};

// ScriptStruct ConZ.LandingEffectDataPerSeverity
// Size: 0x10 (Inherited: 0x00)
struct FLandingEffectDataPerSeverity {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	bool SpawnParticlesInDirectionOfVelocity; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ConZ.LazyLoadedObjectPtr
// Size: 0x30 (Inherited: 0x00)
struct FLazyLoadedObjectPtr {
	struct TSoftObjectPtr<UObject> Object; // 0x00(0x28)
	struct UObject* _loadedObject; // 0x28(0x08)
};

// ScriptStruct ConZ.AerodynamicSurface
// Size: 0x80 (Inherited: 0x00)
struct FAerodynamicSurface {
	struct FName Name; // 0x00(0x08)
	struct FGameplayTag Tag; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	float LiftSlope; // 0x40(0x04)
	float SkinFriction; // 0x44(0x04)
	float ZeroLiftAoA; // 0x48(0x04)
	float StallAngleHigh; // 0x4c(0x04)
	float StallAngleLow; // 0x50(0x04)
	float Chord; // 0x54(0x04)
	float Span; // 0x58(0x04)
	float AspectRatio; // 0x5c(0x04)
	float FlapFraction; // 0x60(0x04)
	bool IsControlable; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float FlapAngle; // 0x68(0x04)
	float FlapAngleSensitivity; // 0x6c(0x04)
	float MaxFlapAngle; // 0x70(0x04)
	float AreaMultiplier; // 0x74(0x04)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct ConZ.CombinationLockGetCombinationRequestData
// Size: 0x14 (Inherited: 0x00)
struct FCombinationLockGetCombinationRequestData {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct ConZ.CombinationLockUnlockAttemptRequestData
// Size: 0x1c (Inherited: 0x00)
struct FCombinationLockUnlockAttemptRequestData {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct ConZ.ThieverySkillExperienceAwards
// Size: 0x08 (Inherited: 0x00)
struct FThieverySkillExperienceAwards {
	float PointsForSuccessfulLockpicking; // 0x00(0x04)
	float PointsForUnsuccessfulLockpicking; // 0x04(0x04)
};

// ScriptStruct ConZ.ManualEnhancedImageTextInformation
// Size: 0x28 (Inherited: 0x00)
struct FManualEnhancedImageTextInformation {
	struct FVector2D DesiredLocation; // 0x00(0x08)
	float DesiredWidth; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Text; // 0x10(0x18)
};

// ScriptStruct ConZ.VehicleMarkerData
// Size: 0x20 (Inherited: 0x00)
struct FVehicleMarkerData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ConZ.MapLimits
// Size: 0x68 (Inherited: 0x00)
struct FMapLimits {
	struct FMapLimits_Wall NorthWall; // 0x00(0x30)
	struct FMapLimits_Wall EastWall; // 0x30(0x30)
	float SouthLimit; // 0x60(0x04)
	float WestLimit; // 0x64(0x04)
};

// ScriptStruct ConZ.MapLimits_Wall
// Size: 0x30 (Inherited: 0x00)
struct FMapLimits_Wall {
	struct FBox Bounds; // 0x00(0x1c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FMapLimits_WallSegment> Segments; // 0x20(0x10)
};

// ScriptStruct ConZ.MapLimits_WallSegment
// Size: 0x10 (Inherited: 0x00)
struct FMapLimits_WallSegment {
	float Key; // 0x00(0x04)
	float Value; // 0x04(0x04)
	float TerrainZ; // 0x08(0x04)
	float MaxZ; // 0x0c(0x04)
};

// ScriptStruct ConZ.VehicleAttachmentAssociatedTradeables
// Size: 0x50 (Inherited: 0x00)
struct FVehicleAttachmentAssociatedTradeables {
	struct TSoftClassPtr<UObject> RepairServiceClass; // 0x00(0x28)
	struct TSoftClassPtr<UObject> InstallationServiceClass; // 0x28(0x28)
};

// ScriptStruct ConZ.VehicleAttachmentPriceDataPerClassMap
// Size: 0x50 (Inherited: 0x00)
struct FVehicleAttachmentPriceDataPerClassMap {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct ConZ.MedicalSkillParametersPerSkillLevel
// Size: 0x08 (Inherited: 0x00)
struct FMedicalSkillParametersPerSkillLevel {
	float ManualBCUUpgradeSuccessChance; // 0x00(0x04)
	float ExtractBloodSampleDurationMultiplier; // 0x04(0x04)
};

// ScriptStruct ConZ.MeleeAction
// Size: 0x20 (Inherited: 0x00)
struct FMeleeAction {
	enum class EMeleeActionType ActionType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct TWeakObjectPtr<struct UAnimMontage> Montage; // 0x04(0x08)
	float StartDelay; // 0x0c(0x04)
	float PlayRate; // 0x10(0x04)
	float BlockDuration; // 0x14(0x04)
	float OrientToTargetSpeedFactor; // 0x18(0x04)
	float RegainControlDurationModifier; // 0x1c(0x04)
};

// ScriptStruct ConZ.MeleeDodge
// Size: 0x10 (Inherited: 0x00)
struct FMeleeDodge {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ConZ.MeleeAttack
// Size: 0x20 (Inherited: 0x00)
struct FMeleeAttack {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ConZ.CheckMeleeAttackCapsuleCollisionData
// Size: 0xd0 (Inherited: 0x00)
struct FCheckMeleeAttackCapsuleCollisionData {
	char pad_0[0xd0]; // 0x00(0xd0)
};

// ScriptStruct ConZ.AttackedByMeleeData
// Size: 0x18 (Inherited: 0x00)
struct FAttackedByMeleeData {
	struct TWeakObjectPtr<struct AActor> attacker; // 0x00(0x08)
	struct TWeakObjectPtr<struct UAnimMontage> Montage; // 0x08(0x08)
	float PlayRate; // 0x10(0x04)
	float Duration; // 0x14(0x04)
};

// ScriptStruct ConZ.MeleeSkillExperienceAwards
// Size: 0x10 (Inherited: 0x00)
struct FMeleeSkillExperienceAwards {
	float PointsForHit; // 0x00(0x04)
	float PointsForKill; // 0x04(0x04)
	float SubsequentHitMultiplier; // 0x08(0x04)
	float SkillLevelBonusPoints; // 0x0c(0x04)
};

// ScriptStruct ConZ.MeleeSkillParametersPerSkillLevel
// Size: 0x88 (Inherited: 0x00)
struct FMeleeSkillParametersPerSkillLevel {
	struct FExperienceDependentFloat StartDelay; // 0x00(0x08)
	struct FExperienceDependentFloat StartDelayPenaltyPerStrengthShortage; // 0x08(0x08)
	struct FExperienceDependentFloat AnimationPlayRateModifier; // 0x10(0x08)
	struct FExperienceDependentFloat AnimationPlayRatePenaltyPerStrengthShortage; // 0x18(0x08)
	struct FExperienceDependentFloat RegainControlDurationModifier; // 0x20(0x08)
	struct FExperienceDependentFloat StaminaDrain; // 0x28(0x08)
	struct FExperienceDependentFloat StaminaDrainPenaltyPerStrengthShortage; // 0x30(0x08)
	struct FExperienceDependentFloat StaminaRecoveryDelay; // 0x38(0x08)
	struct FExperienceDependentFloat StaminaRecoveryDuration; // 0x40(0x08)
	struct FExperienceDependentFloat StaminaInfluenceWindowMin; // 0x48(0x08)
	struct FExperienceDependentFloat StaminaInfluenceWindowMax; // 0x50(0x08)
	struct FExperienceDependentFloat StaminaInfluenceWindowLinearity; // 0x58(0x08)
	struct FExperienceDependentFloat StartDelayWhenExhausted; // 0x60(0x08)
	struct FExperienceDependentFloat AnimationPlayRateModifierWhenExhausted; // 0x68(0x08)
	struct FExperienceDependentFloat RegainControlDurationModifierWhenExhausted; // 0x70(0x08)
	struct FExperienceDependentFloat StaminaMultiplierPerExcessGearWeight; // 0x78(0x08)
	struct FExperienceDependentFloat ComboCooldownDuration; // 0x80(0x08)
};

// ScriptStruct ConZ.MeleeSkillAnimations
// Size: 0x98 (Inherited: 0x00)
struct FMeleeSkillAnimations {
	struct UAnimSequenceBase* PrimaryIdleAnimationTP; // 0x00(0x08)
	struct UAnimSequenceBase* PrimaryIdleAnimationFP; // 0x08(0x08)
	struct UAnimSequenceBase* TiredIdleAnimationTP; // 0x10(0x08)
	struct UAnimSequenceBase* TiredIdleAnimationFP; // 0x18(0x08)
	struct UAnimSequenceBase* WalkingIdleAnimationTP; // 0x20(0x08)
	struct UAnimSequenceBase* WalkingIdleAnimationFP; // 0x28(0x08)
	struct UAnimSequenceBase* BlockIdleAnimationTP; // 0x30(0x08)
	struct UAnimSequenceBase* BlockIdleAnimationFP; // 0x38(0x08)
	struct UBlendSpace* AimOffsetBlendSpaceTP; // 0x40(0x08)
	struct UBlendSpace* AimOffsetBlendSpaceFP; // 0x48(0x08)
	struct UAnimMontage* EnterCombatModeMontage; // 0x50(0x08)
	struct UAnimMontage* LeaveCombatModeMontage; // 0x58(0x08)
	struct TArray<struct UAnimSequenceBase*> InactivityIdleAnimations; // 0x60(0x10)
	float IdleToBlockBlendDuration; // 0x70(0x04)
	float BlockToIdleBlendDuration; // 0x74(0x04)
	struct TArray<struct FMeleeSkillAttack> Attacks; // 0x78(0x10)
	struct TArray<struct FMeleeSkillDodge> Dodges; // 0x88(0x10)
};

// ScriptStruct ConZ.MeleeSkillDodge
// Size: 0x18 (Inherited: 0x00)
struct FMeleeSkillDodge {
	enum class EDodgeDirectionType DodgeDirectionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAnimMontage* Montage; // 0x08(0x08)
	float RegainControlDurationMultiplier; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.MeleeSkillAttack
// Size: 0x78 (Inherited: 0x00)
struct FMeleeSkillAttack {
	struct FGameplayTagContainer AttackTypes; // 0x00(0x20)
	struct FGameplayTagContainer IgnoreReason; // 0x20(0x20)
	struct UAnimMontage* Montage; // 0x40(0x08)
	struct UAnimMontage* MontageFP; // 0x48(0x08)
	struct FFloatInterval PitchRange; // 0x50(0x08)
	float MaxDistance; // 0x58(0x04)
	float MinDistance; // 0x5c(0x04)
	float MinStamina; // 0x60(0x04)
	float OrientToTargetSpeedFactor; // 0x64(0x04)
	float RegainControlDurationMultiplier; // 0x68(0x04)
	float StaminaDrainMultiplier; // 0x6c(0x04)
	bool CanBeUsedAsInitialAttack; // 0x70(0x01)
	bool CanBeUsedToCloseLargeDistanceToTarget; // 0x71(0x01)
	bool Solo; // 0x72(0x01)
	bool Mute; // 0x73(0x01)
	bool IsAlwaysCandidate; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// ScriptStruct ConZ.MeshHitZone
// Size: 0x1c (Inherited: 0x00)
struct FMeshHitZone {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct ConZ.MeshInstanceId
// Size: 0x08 (Inherited: 0x00)
struct FMeshInstanceId {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ConZ.MetabolismAPBFontStyle
// Size: 0x48 (Inherited: 0x00)
struct FMetabolismAPBFontStyle {
	struct UFont* Font; // 0x00(0x08)
	int32_t FontSize; // 0x08(0x04)
	struct FMargin TitlePadding; // 0x0c(0x10)
	struct FMargin ValuePadding; // 0x1c(0x10)
	enum class EVerticalAlignment TitleVerticalAlignment; // 0x2c(0x01)
	enum class EHorizontalAlignment TitleHorizontalAlignment; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	struct FSlateChildSize TitleSize; // 0x30(0x08)
	enum class EVerticalAlignment ValueVerticalAlignment; // 0x38(0x01)
	enum class EHorizontalAlignment ValueHorizontalAlignment; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	struct FSlateChildSize ValueSize; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ConZ.MetabolismConfiguration
// Size: 0x460 (Inherited: 0x00)
struct FMetabolismConfiguration {
	float InitialAbsorbedEnergyRatio; // 0x00(0x04)
	float InitialAbsorbedWaterRatio; // 0x04(0x04)
	float InitialAbsorbedVitaminsRatio; // 0x08(0x04)
	float InitialAbsorbedMineralsRatio; // 0x0c(0x04)
	float InitialColonFullness; // 0x10(0x04)
	float InitialBladderFullness; // 0x14(0x04)
	float MaxStomachVolume; // 0x18(0x04)
	float MaxIntestineVolume; // 0x1c(0x04)
	float MaxColonVolume; // 0x20(0x04)
	float MaxBladderVolume; // 0x24(0x04)
	float EnergyAbsorptionCapacityMultiplier; // 0x28(0x04)
	float WaterAbsorptionCapacityMultiplier; // 0x2c(0x04)
	float AlcoholAbsorptionBaseCapacity; // 0x30(0x04)
	float AbsorbedAlcoholDiscardRate; // 0x34(0x04)
	float MaxEnergyToRecoverFromFatPerHour; // 0x38(0x04)
	float MaxAbsorbedEnergyExcessToStoreAsFatPerHour; // 0x3c(0x04)
	struct FSubstancesData NutrientsAbsorptionRateModifier; // 0x40(0xd0)
	float MinSubstancesToAbsorbRatio; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct FSubstancesData AbsorbedNonEnergyProvidingNutrientsExcessDiscardRateMultiplier; // 0x118(0xd0)
	struct FSubstancesData AdditionalRequiredWaterPerNutrientAbsorbed; // 0x1e8(0xd0)
	float IntestineToColonFecesTransferRate; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FSubstancesData NutrientAbsorptionWasteFecesRatios; // 0x2c0(0xd0)
	struct FSubstancesData NutrientAbsorptionWasteUrineRatios; // 0x390(0xd0)
};

// ScriptStruct ConZ.SubstancesData
// Size: 0xd0 (Inherited: 0x00)
struct FSubstancesData {
	float Nutrients[0x20]; // 0x00(0x80)
	struct TMap<int32_t, float> ForeignSubstances; // 0x80(0x50)
};

// ScriptStruct ConZ.MetabolismRadialAttributeProgressBarColor
// Size: 0x30 (Inherited: 0x00)
struct FMetabolismRadialAttributeProgressBarColor {
	struct FLinearColor PositiveColor; // 0x00(0x10)
	struct FLinearColor NeutralColor; // 0x10(0x10)
	struct FLinearColor NegativeColor; // 0x20(0x10)
};

// ScriptStruct ConZ.MetabolismRadialProgressBarFontSettings
// Size: 0x14 (Inherited: 0x00)
struct FMetabolismRadialProgressBarFontSettings {
	int32_t FontSize; // 0x00(0x04)
	struct FMargin FontPadding; // 0x04(0x10)
};

// ScriptStruct ConZ.MetabolismRadialProgressBarColorScheme
// Size: 0x80 (Inherited: 0x00)
struct FMetabolismRadialProgressBarColorScheme {
	struct FLinearColor BackgroundColor; // 0x00(0x10)
	struct FLinearColor PrimaryBarColor; // 0x10(0x10)
	struct FLinearColor PrimaryBarGlowColor; // 0x20(0x10)
	struct FLinearColor SecondaryBarColor; // 0x30(0x10)
	struct FLinearColor SecondaryBarGlowColor; // 0x40(0x10)
	struct FLinearColor FontColor; // 0x50(0x10)
	struct FLinearColor FontInnerGlowColor; // 0x60(0x10)
	struct FLinearColor FontOuterGlowColor; // 0x70(0x10)
};

// ScriptStruct ConZ.DigestionItemSave
// Size: 0x2e0 (Inherited: 0x00)
struct FDigestionItemSave {
	struct FConsumableSave Consumable; // 0x00(0x120)
	float RemainingMassToConsume; // 0x120(0x04)
	float MassConsumed; // 0x124(0x04)
	float MassAbsorbed; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FSubstancesData SubstancesInStomach; // 0x130(0xd0)
	struct FSubstancesData SubstancesInIntestine; // 0x200(0xd0)
	struct TArray<struct FConsumableDigestionHandlerSave> DigestionHandlers; // 0x2d0(0x10)
};

// ScriptStruct ConZ.ConsumableDigestionHandlerSave
// Size: 0x10 (Inherited: 0x00)
struct FConsumableDigestionHandlerSave {
	struct TArray<char> Data; // 0x00(0x10)
};

// ScriptStruct ConZ.ConsumableSave
// Size: 0x120 (Inherited: 0x00)
struct FConsumableSave {
	struct FString Name; // 0x00(0x10)
	struct FString MergeGroup; // 0x10(0x10)
	float MassToConsume; // 0x20(0x04)
	float ConsumptionDuration; // 0x24(0x04)
	float Density; // 0x28(0x04)
	bool IsLiquid; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FSubstancesData Substances; // 0x30(0xd0)
	struct TArray<struct FString> ForeignSubstanceClasses; // 0x100(0x10)
	struct TArray<char> UserData; // 0x110(0x10)
};

// ScriptStruct ConZ.ForeignSubstanceSave
// Size: 0x10 (Inherited: 0x00)
struct FForeignSubstanceSave {
	struct TArray<char> Data; // 0x00(0x10)
};

// ScriptStruct ConZ.MetabolismSPBColorScheme
// Size: 0x50 (Inherited: 0x00)
struct FMetabolismSPBColorScheme {
	struct FLinearColor BaseColor; // 0x00(0x10)
	struct FLinearColor FillColorBottom; // 0x10(0x10)
	struct FLinearColor FillColorTop; // 0x20(0x10)
	struct FLinearColor OutlineColorBottom; // 0x30(0x10)
	struct FLinearColor OutlineColorTop; // 0x40(0x10)
};

// ScriptStruct ConZ.MinigameToolRequestData
// Size: 0x18 (Inherited: 0x00)
struct FMinigameToolRequestData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ConZ.ModularTooltipSectionData
// Size: 0x28 (Inherited: 0x00)
struct FModularTooltipSectionData {
	char pad_0[0x18]; // 0x00(0x18)
	struct TArray<struct UModularTooltipElementData*> Elements; // 0x18(0x10)
};

// ScriptStruct ConZ.MovingSplineSoundData
// Size: 0x18 (Inherited: 0x00)
struct FMovingSplineSoundData {
	struct UAkAudioEvent* StartAudioEvent; // 0x00(0x08)
	struct UAkAudioEvent* StopAudioEvent; // 0x08(0x08)
	float LifetimeAfterStopping; // 0x10(0x04)
	float AudioMovementSpeed; // 0x14(0x04)
};

// ScriptStruct ConZ.MovableMeshComponentData
// Size: 0x14 (Inherited: 0x00)
struct FMovableMeshComponentData {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct ConZ.MovableCollisionFieldState
// Size: 0x03 (Inherited: 0x00)
struct FMovableCollisionFieldState {
	bool IsTurnedOn; // 0x00(0x01)
	char PackedCurrentPercentage; // 0x01(0x01)
	enum class EMovableCollisionFieldMoveType MoveType; // 0x02(0x01)
};

// ScriptStruct ConZ.MovableCollisionFieldMoveInfo
// Size: 0x08 (Inherited: 0x00)
struct FMovableCollisionFieldMoveInfo {
	float Duration; // 0x00(0x04)
	enum class EMovableCollisionFieldMovementCurveType curveType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ConZ.NotificationDescriptionReplicationHelper
// Size: 0x18 (Inherited: 0x00)
struct FNotificationDescriptionReplicationHelper {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ConZ.NotificationAndDelay
// Size: 0x10 (Inherited: 0x00)
struct FNotificationAndDelay {
	struct UNotificationDescription* Notification; // 0x00(0x08)
	float Delay; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ConZ.NPCGuardAttackDescription
// Size: 0x18 (Inherited: 0x00)
struct FNPCGuardAttackDescription {
	enum class ENPCGuardAttackType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAnimMontage* Montage; // 0x08(0x08)
	float cooldown; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.NutrientsRDA
// Size: 0x6c (Inherited: 0x00)
struct FNutrientsRDA {
	float MinProteinsPerLeanBodyMass; // 0x00(0x04)
	float MaxProteinsPerLeanBodyMass; // 0x04(0x04)
	float Fats; // 0x08(0x04)
	float Water; // 0x0c(0x04)
	float VitaminA; // 0x10(0x04)
	float VitaminB1; // 0x14(0x04)
	float VitaminB2; // 0x18(0x04)
	float VitaminB3; // 0x1c(0x04)
	float VitaminB4; // 0x20(0x04)
	float VitaminB5; // 0x24(0x04)
	float VitaminB6; // 0x28(0x04)
	float VitaminB9; // 0x2c(0x04)
	float VitaminB12; // 0x30(0x04)
	float VitaminC; // 0x34(0x04)
	float VitaminD; // 0x38(0x04)
	float VitaminE; // 0x3c(0x04)
	float VitaminK; // 0x40(0x04)
	float Calcium; // 0x44(0x04)
	float Magnesium; // 0x48(0x04)
	float Potassium; // 0x4c(0x04)
	float Copper; // 0x50(0x04)
	float Selenium; // 0x54(0x04)
	float Iron; // 0x58(0x04)
	float Phosphorus; // 0x5c(0x04)
	float Zinc; // 0x60(0x04)
	float Manganese; // 0x64(0x04)
	float Sodium; // 0x68(0x04)
};

// ScriptStruct ConZ.PackedLocation
// Size: 0x08 (Inherited: 0x00)
struct FPackedLocation {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ConZ.PackedState
// Size: 0x10 (Inherited: 0x00)
struct FPackedState {
	uint64_t _value; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ConZ.PaintJobColor
// Size: 0x10 (Inherited: 0x00)
struct FPaintJobColor {
	struct FColor WeaponColor; // 0x00(0x04)
	struct FColor VehicleColor; // 0x04(0x04)
	struct FColor BaseElementColor; // 0x08(0x04)
	struct FColor TurretColor; // 0x0c(0x04)
};

// ScriptStruct ConZ.ParachuteAnimParams
// Size: 0x10 (Inherited: 0x00)
struct FParachuteAnimParams {
	struct UAnimSequence* OpeningAnimation; // 0x00(0x08)
	struct FFloatInterval OpeningAnimationTimeRange; // 0x08(0x08)
};

// ScriptStruct ConZ.PerSkillLevelFloatData
// Size: 0x14 (Inherited: 0x00)
struct FPerSkillLevelFloatData {
	float NoSkill; // 0x00(0x04)
	float Basic; // 0x04(0x04)
	float Medium; // 0x08(0x04)
	float Advanced; // 0x0c(0x04)
	float AboveAdvanced; // 0x10(0x04)
};

// ScriptStruct ConZ.PhysicalSurfaceData
// Size: 0x28 (Inherited: 0x00)
struct FPhysicalSurfaceData {
	float DirtinessFactor; // 0x00(0x04)
	float WetnessFactor; // 0x04(0x04)
	float LandingImpactVelocityModifier; // 0x08(0x04)
	float NoiseLoudnessModifier; // 0x0c(0x04)
	float FootstepEnhancerChance; // 0x10(0x04)
	float FootwearDamageMultiplier; // 0x14(0x04)
	float FootAbrasionsMultiplier; // 0x18(0x04)
	float VisualCoverageWhileInProne; // 0x1c(0x04)
	float VisualCoverageWhileCrouching; // 0x20(0x04)
	float VisualCoverageWhileStanding; // 0x24(0x04)
};

// ScriptStruct ConZ.PhysicalSurfaceEffectsData
// Size: 0x50 (Inherited: 0x00)
struct FPhysicalSurfaceEffectsData {
	struct FPhysicalSurfaceVehicleEffectsData Vehicle; // 0x00(0x50)
};

// ScriptStruct ConZ.PhysicalSurfaceVehicleEffectsData
// Size: 0x50 (Inherited: 0x00)
struct FPhysicalSurfaceVehicleEffectsData {
	struct UParticleSystem* ParticleTrail; // 0x00(0x08)
	float ParticleTrailSlipModifier; // 0x08(0x04)
	float ParticleTrailDestructionDelay; // 0x0c(0x04)
	struct UParticleSystem* ParticleWave; // 0x10(0x08)
	float ParticleWaveSlipModifier; // 0x18(0x04)
	float ParticleWaveDestructionDelay; // 0x1c(0x04)
	struct FPhysicalSurfaceVehicleTireParticleData SmallTireParticles; // 0x20(0x10)
	struct FPhysicalSurfaceVehicleTireParticleData MediumTireParticles; // 0x30(0x10)
	struct FPhysicalSurfaceVehicleTireParticleData LargeTireParticles; // 0x40(0x10)
};

// ScriptStruct ConZ.PhysicalSurfaceVehicleTireParticleData
// Size: 0x10 (Inherited: 0x00)
struct FPhysicalSurfaceVehicleTireParticleData {
	struct UParticleSystem* ParticleTrail; // 0x00(0x08)
	struct UParticleSystem* ParticleWave; // 0x08(0x08)
};

// ScriptStruct ConZ.PlaceableActorStateReplicationHelper
// Size: 0x08 (Inherited: 0x00)
struct FPlaceableActorStateReplicationHelper {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ConZ.TilesData
// Size: 0x18 (Inherited: 0x00)
struct FTilesData {
	struct UHierarchicalInstancedStaticMeshComponent* HISMComponentMain; // 0x00(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISMComponentOutline; // 0x08(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* HISMComponentDepth; // 0x10(0x08)
};

// ScriptStruct ConZ.SizeVariatedTilesData
// Size: 0x40 (Inherited: 0x18)
struct FSizeVariatedTilesData : FTilesData {
	char pad_18[0x28]; // 0x18(0x28)
};

// ScriptStruct ConZ.LineTraceSocketPair
// Size: 0x10 (Inherited: 0x00)
struct FLineTraceSocketPair {
	struct FName TraceStart; // 0x00(0x08)
	struct FName TraceEnd; // 0x08(0x08)
};

// ScriptStruct ConZ.PlantGrowthStageData
// Size: 0x60 (Inherited: 0x00)
struct FPlantGrowthStageData {
	float MinWaterMililiters; // 0x00(0x04)
	float MinSunHours; // 0x04(0x04)
	struct FFloatInterval OptimalAvgTemperature; // 0x08(0x08)
	float WaterDeficiencyGrowthExtendHours; // 0x10(0x04)
	float WaterDeficiencyDeathTimeHours; // 0x14(0x04)
	float TemperatureDeficiencyGrowthExtendHours; // 0x18(0x04)
	float TemperatureDeficiencyDeathTimeHours; // 0x1c(0x04)
	float SunDeficiencyGrowthExtendHours; // 0x20(0x04)
	float PlantPestGrowthExtendPercentage; // 0x24(0x04)
	float DeathFromPlantPestTimeHours; // 0x28(0x04)
	float PlantDiseaseGrowthExendPercentage; // 0x2c(0x04)
	float DeathFromPlantDiseaseTimeHours; // 0x30(0x04)
	float WeedGrowthExtendPercentage; // 0x34(0x04)
	float RecoveryTimeHours; // 0x38(0x04)
	float WeedHarvestingReductionPercentage; // 0x3c(0x04)
	float OrganicFertilizerHarvestingIncreasePercentage; // 0x40(0x04)
	float IndustrialFertilizerHarvestingIncreasePercentage; // 0x44(0x04)
	float WaterDeficiencyHarvestingDecreasePercentage; // 0x48(0x04)
	float TemperatureDeficiencyHarvestingDecreasePercentage; // 0x4c(0x04)
	float WaterDeficiencyHarvestingSearchTimeIncrease; // 0x50(0x04)
	float TemperatureDeficiencyHarvestingSearchTimeIncrease; // 0x54(0x04)
	float PlantHealthAtWhichProduceStartsDecaying; // 0x58(0x04)
	float HarvestedProduceMinHealthPercentage; // 0x5c(0x04)
};

// ScriptStruct ConZ.PlantMeshData
// Size: 0x70 (Inherited: 0x00)
struct FPlantMeshData {
	bool PlantGrowsUpright; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Translation; // 0x04(0x0c)
	struct FFloatInterval RandomVerticalOffsetInterval; // 0x10(0x08)
	struct FFloatInterval RandomHorizontalOffsetInterval; // 0x18(0x08)
	struct FFloatInterval RandomScaleInterval; // 0x20(0x08)
	struct FPlantStageMeshData VegetatingPlantMesh; // 0x28(0x18)
	struct FPlantStageMeshData FloweringPlantMesh; // 0x40(0x18)
	struct FPlantStageMeshData RipeningPlantMesh; // 0x58(0x18)
};

// ScriptStruct ConZ.PlantStageMeshData
// Size: 0x18 (Inherited: 0x00)
struct FPlantStageMeshData {
	bool SkipStage; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ProduceReadyStagePercent; // 0x04(0x04)
	struct TArray<struct FPlantMesh> Meshes; // 0x08(0x10)
};

// ScriptStruct ConZ.PlantMesh
// Size: 0x60 (Inherited: 0x00)
struct FPlantMesh {
	struct FStaticMeshMaterialPair Mesh; // 0x00(0x18)
	struct FFloatInterval StageMorphTargetInterpolationRange; // 0x18(0x08)
	struct FVector GrowthExponents; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform Transform; // 0x30(0x30)
};

// ScriptStruct ConZ.StaticMeshMaterialPair
// Size: 0x18 (Inherited: 0x00)
struct FStaticMeshMaterialPair {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x08(0x10)
};

// ScriptStruct ConZ.PlayerLoginInfo
// Size: 0x48 (Inherited: 0x00)
struct FPlayerLoginInfo {
	struct FString UserId; // 0x00(0x10)
	struct FDbIntegerId UserProfileId; // 0x10(0x08)
	struct FString UserProfileName; // 0x18(0x10)
	bool IsUserAdmin; // 0x28(0x01)
	bool IsUserServerSettingsAdmin; // 0x29(0x01)
	bool PlayAsDrone; // 0x2a(0x01)
	struct FDeluxeVersion DeluxeVersion; // 0x2b(0x0c)
	char pad_37[0x1]; // 0x37(0x01)
	int32_t ServerResponsePort; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FDbIntegerId ServerUserProfileId; // 0x40(0x08)
};

// ScriptStruct ConZ.TrackingDataNetPackedBits
// Size: 0x90 (Inherited: 0x00)
struct FTrackingDataNetPackedBits {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct ConZ.QuestCycleStatsKey
// Size: 0x30 (Inherited: 0x00)
struct FQuestCycleStatsKey {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct ConZ.QuestLifetimeStatsKey
// Size: 0x38 (Inherited: 0x00)
struct FQuestLifetimeStatsKey {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct ConZ.TrackedQuest
// Size: 0x10 (Inherited: 0x00)
struct FTrackedQuest {
	struct FTrackingDataSetId ID; // 0x00(0x08)
	enum class EQuestType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ConZ.TrackingDataSetId
// Size: 0x08 (Inherited: 0x08)
struct FTrackingDataSetId : FDbIntegerId {
};

// ScriptStruct ConZ.PlayerRpcChannelServerDataResponseNetSerializer
// Size: 0x08 (Inherited: 0x00)
struct FPlayerRpcChannelServerDataResponseNetSerializer {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ConZ.PlayerRpcChannelServerDataRequestNetSerializer
// Size: 0x08 (Inherited: 0x00)
struct FPlayerRpcChannelServerDataRequestNetSerializer {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ConZ.PossibleEncounterData
// Size: 0x10 (Inherited: 0x00)
struct FPossibleEncounterData {
	struct UEncounterBase* EncounterClass; // 0x00(0x08)
	float EncounterWeight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ConZ.AmbientOcclusionPostProcessSettings
// Size: 0x38 (Inherited: 0x00)
struct FAmbientOcclusionPostProcessSettings {
	char bOverride_AmbientOcclusionIntensity : 1; // 0x00(0x01)
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0x00(0x01)
	char bOverride_AmbientOcclusionRadius : 1; // 0x00(0x01)
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0x00(0x01)
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0x00(0x01)
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0x00(0x01)
	char bOverride_AmbientOcclusionPower : 1; // 0x00(0x01)
	char bOverride_AmbientOcclusionBias : 1; // 0x00(0x01)
	char bOverride_AmbientOcclusionQuality : 1; // 0x01(0x01)
	char bOverride_AmbientOcclusionMipBlend : 1; // 0x01(0x01)
	char bOverride_AmbientOcclusionMipScale : 1; // 0x01(0x01)
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0x01(0x01)
	char bOverride_AmbientOcclusionTemporalBlendWeight : 1; // 0x01(0x01)
	char pad_1_5 : 3; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float AmbientOcclusionIntensity; // 0x04(0x04)
	float AmbientOcclusionRadius; // 0x08(0x04)
	float AmbientOcclusionStaticFraction; // 0x0c(0x04)
	char AmbientOcclusionRadiusInWS : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float AmbientOcclusionFadeDistance; // 0x14(0x04)
	float AmbientOcclusionFadeRadius; // 0x18(0x04)
	float AmbientOcclusionPower; // 0x1c(0x04)
	float AmbientOcclusionBias; // 0x20(0x04)
	float AmbientOcclusionQuality; // 0x24(0x04)
	float AmbientOcclusionMipBlend; // 0x28(0x04)
	float AmbientOcclusionMipScale; // 0x2c(0x04)
	float AmbientOcclusionMipThreshold; // 0x30(0x04)
	float AmbientOcclusionTemporalBlendWeight; // 0x34(0x04)
};

// ScriptStruct ConZ.PowerNodeConnector
// Size: 0x20 (Inherited: 0x00)
struct FPowerNodeConnector {
	struct FName SocketName; // 0x00(0x08)
	bool ShouldHaveCable; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t CableMeshIndex; // 0x0c(0x04)
	int32_t TargetConnectorIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UStaticMeshComponent* CableMeshComponent; // 0x18(0x08)
};

// ScriptStruct ConZ.PowerCableMeshInfo
// Size: 0x10 (Inherited: 0x00)
struct FPowerCableMeshInfo {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	float Length; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ConZ.PrisonerFPWeaponFOVSettings
// Size: 0x10 (Inherited: 0x00)
struct FPrisonerFPWeaponFOVSettings {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ConZ.InstrumentEvent
// Size: 0x10 (Inherited: 0x00)
struct FInstrumentEvent {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ConZ.PrisonerActionDifficultyCurve
// Size: 0x18 (Inherited: 0x00)
struct FPrisonerActionDifficultyCurve {
	float _resting; // 0x00(0x04)
	float _idle; // 0x04(0x04)
	float _easy; // 0x08(0x04)
	float _demanding; // 0x0c(0x04)
	float _veryDemanding; // 0x10(0x04)
	float _extremelyDemanding; // 0x14(0x04)
};

// ScriptStruct ConZ.VisualParameter
// Size: 0x14 (Inherited: 0x00)
struct FVisualParameter {
	struct FName MorphName; // 0x00(0x08)
	struct FName MaterialParamName; // 0x08(0x08)
	float Value; // 0x10(0x04)
};

// ScriptStruct ConZ.PrisonerAppearanceId
// Size: 0x08 (Inherited: 0x00)
struct FPrisonerAppearanceId {
	enum class EConZGender Gender; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Index; // 0x04(0x04)
};

// ScriptStruct ConZ.PrisonerAppearance_IrisVariation
// Size: 0x50 (Inherited: 0x00)
struct FPrisonerAppearance_IrisVariation {
	struct TSoftObjectPtr<UTexture2D> IrisHeight; // 0x00(0x28)
	struct TSoftObjectPtr<UTexture2D> IrisMasks; // 0x28(0x28)
};

// ScriptStruct ConZ.PrisonerAppearance_IrisColor
// Size: 0x30 (Inherited: 0x00)
struct FPrisonerAppearance_IrisColor {
	struct FLinearColor PreviewColor; // 0x00(0x10)
	struct FVector4 IrisColor; // 0x10(0x10)
	enum class EConZColor ColorName; // 0x20(0x01)
	char pad_21[0xf]; // 0x21(0x0f)
};

// ScriptStruct ConZ.PrisonerAppearance_SkinParams
// Size: 0x38 (Inherited: 0x00)
struct FPrisonerAppearance_SkinParams {
	struct TArray<struct FPrisonerAppearance_FaceVariation> FaceVariations; // 0x00(0x10)
	struct TArray<struct FPrisonerAppearance_SkinTone> SkinTones; // 0x10(0x10)
	struct TArray<struct FPrisonerAppearance_HairColorPreset> HairColorPresets; // 0x20(0x10)
	int32_t DefaultSkinToneIndex; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ConZ.PrisonerAppearance_HairColorPreset
// Size: 0x8c (Inherited: 0x00)
struct FPrisonerAppearance_HairColorPreset {
	struct FLinearColor PreviewColor; // 0x00(0x10)
	enum class EConZColor ColorName; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float Brightness; // 0x14(0x04)
	struct FLinearColor RootColor; // 0x18(0x10)
	struct FLinearColor RootColorOnHead; // 0x28(0x10)
	float Roughness; // 0x38(0x04)
	float Scatter; // 0x3c(0x04)
	struct FLinearColor TipColor; // 0x40(0x10)
	float RandomHueVariation; // 0x50(0x04)
	float RandomValueVariation; // 0x54(0x04)
	float FacialHair_Brightness; // 0x58(0x04)
	struct FLinearColor FacialHair_RootColor; // 0x5c(0x10)
	float FacialHair_Roughness; // 0x6c(0x04)
	float FacialHair_Scatter; // 0x70(0x04)
	struct FLinearColor FacialHair_TipColor; // 0x74(0x10)
	float FacialHair_RandomHueVariation; // 0x84(0x04)
	float FacialHair_RandomValueVariation; // 0x88(0x04)
};

// ScriptStruct ConZ.PrisonerAppearance_SkinTone
// Size: 0x30 (Inherited: 0x00)
struct FPrisonerAppearance_SkinTone {
	struct FLinearColor PreviewColor; // 0x00(0x10)
	struct FLinearColor SkinColorOffset; // 0x10(0x10)
	struct FLinearColor AverageLipColor; // 0x20(0x10)
};

// ScriptStruct ConZ.PrisonerAppearance_FaceVariation
// Size: 0x50 (Inherited: 0x00)
struct FPrisonerAppearance_FaceVariation {
	struct TSoftObjectPtr<UTexture2D> SkinColor; // 0x00(0x28)
	struct TSoftObjectPtr<UTexture2D> SkinNormal; // 0x28(0x28)
};

// ScriptStruct ConZ.PrisonerAppearance_HairStyle
// Size: 0x18 (Inherited: 0x00)
struct FPrisonerAppearance_HairStyle {
	enum class EDeluxeVersion GameUpgradeRequired; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCharacterMesh* Mesh; // 0x08(0x08)
	float Haircontrast; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.PrisonerAppearance_TattooArray
// Size: 0x10 (Inherited: 0x00)
struct FPrisonerAppearance_TattooArray {
	struct TArray<struct FPrisonerAppearance_Tattoo> Tattoos; // 0x00(0x10)
};

// ScriptStruct ConZ.PrisonerAppearance_Tattoo
// Size: 0x58 (Inherited: 0x00)
struct FPrisonerAppearance_Tattoo {
	enum class EDeluxeVersion GameUpgradeRequired; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<struct FName, struct TSoftObjectPtr<UTexture2D>> TattooTextures; // 0x08(0x50)
};

// ScriptStruct ConZ.Bandages
// Size: 0x18 (Inherited: 0x00)
struct FBandages {
	float _amount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FBandage> _bandages; // 0x08(0x10)
};

// ScriptStruct ConZ.Bandage
// Size: 0x10 (Inherited: 0x00)
struct FBandage {
	float _ratio; // 0x00(0x04)
	float _asepsis; // 0x04(0x04)
	float _stabilizationDurationReduction; // 0x08(0x04)
	float _recoveryDurationReduction; // 0x0c(0x04)
};

// ScriptStruct ConZ.PrisonerBodyOrganGroupsVsSeverity
// Size: 0x10 (Inherited: 0x00)
struct FPrisonerBodyOrganGroupsVsSeverity {
	struct TArray<struct FPrisonerBodyOrganGroupsVsSeverityKey> Keys; // 0x00(0x10)
};

// ScriptStruct ConZ.PrisonerBodyOrganGroupsVsSeverityKey
// Size: 0x60 (Inherited: 0x00)
struct FPrisonerBodyOrganGroupsVsSeverityKey {
	struct FFloatRange SeverityRange; // 0x00(0x10)
	struct TSet<enum class EPrisonerBodyOrganGroup> Values; // 0x10(0x50)
};

// ScriptStruct ConZ.PrisonerBodyMuscleGroupsVsSeverity
// Size: 0x10 (Inherited: 0x00)
struct FPrisonerBodyMuscleGroupsVsSeverity {
	struct TArray<struct FPrisonerBodyMuscleGroupsVsSeverityKey> Keys; // 0x00(0x10)
};

// ScriptStruct ConZ.PrisonerBodyMuscleGroupsVsSeverityKey
// Size: 0x60 (Inherited: 0x00)
struct FPrisonerBodyMuscleGroupsVsSeverityKey {
	struct FFloatRange SeverityRange; // 0x00(0x10)
	struct TSet<enum class EPrisonerBodyMuscleGroup> Values; // 0x10(0x50)
};

// ScriptStruct ConZ.PrisonerBodyBoneGroupsVsSeverity
// Size: 0x10 (Inherited: 0x00)
struct FPrisonerBodyBoneGroupsVsSeverity {
	struct TArray<struct FPrisonerBodyBoneGroupsVsSeverityKey> Keys; // 0x00(0x10)
};

// ScriptStruct ConZ.PrisonerBodyBoneGroupsVsSeverityKey
// Size: 0x60 (Inherited: 0x00)
struct FPrisonerBodyBoneGroupsVsSeverityKey {
	struct FFloatRange SeverityRange; // 0x00(0x10)
	struct TSet<enum class EPrisonerBodyBoneGroup> Values; // 0x10(0x50)
};

// ScriptStruct ConZ.PBCTI_ApplyBandagesOrDisinfect_ApplyBandagesData
// Size: 0x50 (Inherited: 0x00)
struct FPBCTI_ApplyBandagesOrDisinfect_ApplyBandagesData {
	float BaseActionDuration; // 0x00(0x04)
	struct FFloatRange ActionDurationLimits; // 0x04(0x10)
	float BaseExperienceGainVsSkillLevel[0x5]; // 0x14(0x14)
	float StabilizationDurationReductionVsSkillLevel[0x5]; // 0x28(0x14)
	float RecoveryDurationReductionVsSkillLevel[0x5]; // 0x3c(0x14)
};

// ScriptStruct ConZ.PBCTI_ApplyBandagesOrDisinfect_DisinfectData
// Size: 0x38 (Inherited: 0x00)
struct FPBCTI_ApplyBandagesOrDisinfect_DisinfectData {
	float BaseActionDuration; // 0x00(0x04)
	struct FFloatRange ActionDurationLimits; // 0x04(0x10)
	float BaseExperienceGainVsSkillLevel[0x5]; // 0x14(0x14)
	struct UAkAudioEvent* BeginInteractionPatientAudioEvent; // 0x28(0x08)
	struct UAkAudioEvent* EndInteractionPatientAudioEvent; // 0x30(0x08)
};

// ScriptStruct ConZ.PBCTIIT_ApplyBandagesOrDisinfect_ApplyBandages_PerSkillData
// Size: 0x10 (Inherited: 0x00)
struct FPBCTIIT_ApplyBandagesOrDisinfect_ApplyBandages_PerSkillData {
	struct TArray<int32_t> NumUsesPerSeverityLevel; // 0x00(0x10)
};

// ScriptStruct ConZ.PBCTIIT_ApplyBandagesOrDisinfect_Disinfect_PerSkillData
// Size: 0x10 (Inherited: 0x00)
struct FPBCTIIT_ApplyBandagesOrDisinfect_Disinfect_PerSkillData {
	struct TArray<int32_t> NumUsesPerSeverityLevel; // 0x00(0x10)
};

// ScriptStruct ConZ.PBCTI_ApplyGelData
// Size: 0x38 (Inherited: 0x00)
struct FPBCTI_ApplyGelData {
	float BaseActionDuration; // 0x00(0x04)
	struct FFloatRange ActionDurationLimits; // 0x04(0x10)
	float BaseExperienceGainVsSkillLevel[0x5]; // 0x14(0x14)
	struct UAkAudioEvent* BeginInteractionPatientAudioEvent; // 0x28(0x08)
	struct UAkAudioEvent* EndInteractionPatientAudioEvent; // 0x30(0x08)
};

// ScriptStruct ConZ.PBCTIIT_ApplyGel_PerSkillData
// Size: 0x10 (Inherited: 0x00)
struct FPBCTIIT_ApplyGel_PerSkillData {
	struct TArray<int32_t> NumUsesPerSeverityLevel; // 0x00(0x10)
};

// ScriptStruct ConZ.PrisonerBodySimulationData_BodyPartMappingArray
// Size: 0x10 (Inherited: 0x00)
struct FPrisonerBodySimulationData_BodyPartMappingArray {
	struct TArray<enum class EBodyPart> BodyParts; // 0x00(0x10)
};

// ScriptStruct ConZ.PrisonerBodySimulationData_ConsumableDigestionHandlersForValueRanges
// Size: 0x10 (Inherited: 0x00)
struct FPrisonerBodySimulationData_ConsumableDigestionHandlersForValueRanges {
	struct TArray<struct FPrisonerBodySimulationData_ConsumableDigestionHandlersForValueRange> ValueRanges; // 0x00(0x10)
};

// ScriptStruct ConZ.PrisonerBodySimulationData_ConsumableDigestionHandlersForValueRange
// Size: 0x28 (Inherited: 0x00)
struct FPrisonerBodySimulationData_ConsumableDigestionHandlersForValueRange {
	struct FFloatRange ValueRange; // 0x00(0x10)
	bool IsConstrainedByConsumptionMethod; // 0x10(0x01)
	enum class EGameResourceConsumptionMethod ConsumptionMethodConstraint; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<struct UConsumableDigestionHandler*> DigestionHandlers; // 0x18(0x10)
};

// ScriptStruct ConZ.PrisonerBodySimulationData_Effects
// Size: 0x58 (Inherited: 0x00)
struct FPrisonerBodySimulationData_Effects {
	struct UPrisonerBodyCondition_Knockout* KnockoutWithoutBlackout; // 0x00(0x08)
	struct UPrisonerBodyCondition_Knockout* KnockoutWithBlackout; // 0x08(0x08)
	struct UPrisonerBodyCondition_BleedingInjury* BleedingInjury; // 0x10(0x08)
	struct UPrisonerBodyMuscleGroupToBurnInjuryClassMappings* DefaultMuscleGroupToBurnInjuryClassMappings; // 0x18(0x08)
	struct UPrisonerBodyCondition_Choking* Choking; // 0x20(0x08)
	struct UPrisonerBodyCondition_FoodDisgust* FoodDisgust; // 0x28(0x08)
	struct UPrisonerBodyCondition_TearGasExposure* TearGasExposure; // 0x30(0x08)
	struct UPrisonerBodyEffect_Limping* Limping; // 0x38(0x08)
	struct FPrisonerBodySimulationData_Effects_ExhaustionChange ExhaustionChange; // 0x40(0x18)
};

// ScriptStruct ConZ.PrisonerBodySimulationData_Effects_ExhaustionChange
// Size: 0x18 (Inherited: 0x00)
struct FPrisonerBodySimulationData_Effects_ExhaustionChange {
	struct UPrisonerBodyEffect_ExhaustionChange* Consumption; // 0x00(0x08)
	struct UPrisonerBodyEffect_ExhaustionChange* Resting; // 0x08(0x08)
	struct UPrisonerBodyEffect_ExhaustionChange* Smoking; // 0x10(0x08)
};

// ScriptStruct ConZ.PrisonerBodyEffectSave
// Size: 0x10 (Inherited: 0x00)
struct FPrisonerBodyEffectSave {
	struct TArray<char> Data; // 0x00(0x10)
};

// ScriptStruct ConZ.PrisonerMaxMovementPaceVsSeverity
// Size: 0x10 (Inherited: 0x00)
struct FPrisonerMaxMovementPaceVsSeverity {
	struct TArray<struct FPrisonerMaxMovementPaceVsSeverityKey> Keys; // 0x00(0x10)
};

// ScriptStruct ConZ.PrisonerMaxMovementPaceVsSeverityKey
// Size: 0x14 (Inherited: 0x00)
struct FPrisonerMaxMovementPaceVsSeverityKey {
	struct FFloatRange SeverityRange; // 0x00(0x10)
	enum class EPrisonerMovementPace MaxMovementPace; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct ConZ.PrisonerHallucinationIllusionInfo
// Size: 0x88 (Inherited: 0x00)
struct FPrisonerHallucinationIllusionInfo {
	struct TSoftClassPtr<UObject> Class; // 0x00(0x28)
	struct TSet<struct TSoftClassPtr<UObject>> IncompatibleClasses; // 0x28(0x50)
	struct FInt32Range SeverityLevelConstraint; // 0x78(0x10)
};

// ScriptStruct ConZ.PrisonerHallucinationSymptomSeverityLevelParams
// Size: 0x04 (Inherited: 0x00)
struct FPrisonerHallucinationSymptomSeverityLevelParams {
	int32_t MaxNumHallucinationIllusions; // 0x00(0x04)
};

// ScriptStruct ConZ.BasicPrisonerBodySymptomNotificationParameters
// Size: 0x28 (Inherited: 0x00)
struct FBasicPrisonerBodySymptomNotificationParameters {
	struct FFloatRange SeverityRange; // 0x00(0x10)
	struct UNotificationDescription* Notification; // 0x10(0x08)
	int32_t MaxNumTriggers; // 0x18(0x04)
	struct FFloatInterval TriggerInterval; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ConZ.PrisonerCharacterMeshDecayMultiplierData
// Size: 0x28 (Inherited: 0x00)
struct FPrisonerCharacterMeshDecayMultiplierData {
	float DamageMultiplierPerPace[0x4]; // 0x00(0x10)
	float DamageMultiplierPerStance[0x3]; // 0x10(0x0c)
	float WetnessDamageThreshold; // 0x1c(0x04)
	float WetnessDamageMultiplier; // 0x20(0x04)
	bool DamagedByFloor; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct ConZ.WindowInfo
// Size: 0xc0 (Inherited: 0x00)
struct FWindowInfo {
	struct FTransform Transform; // 0x00(0x30)
	struct FTransform TransformInverse; // 0x30(0x30)
	struct FVector Anchor; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FWindowClimbingAnimationInfo AnimationInfo; // 0x70(0x48)
	int32_t AnimationIndex; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct ConZ.WindowClimbingAnimationInfo
// Size: 0x48 (Inherited: 0x00)
struct FWindowClimbingAnimationInfo {
	struct FVector AnchorOffset; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAnimSequenceBase* AnchoringAnimation; // 0x10(0x08)
	float AnchoringAnimationTime; // 0x18(0x04)
	float AnchoringDuration; // 0x1c(0x04)
	struct UAnimMontage* ClimbingMontage; // 0x20(0x08)
	float MinWindowWidth; // 0x28(0x04)
	float MinWindowHeight; // 0x2c(0x04)
	float MinSpacingToLeftWindowEdge; // 0x30(0x04)
	float MinSpacingToRightWindowEdge; // 0x34(0x04)
	float MinWindowDistanceToFloor; // 0x38(0x04)
	float MaxWindowDistanceToFloor; // 0x3c(0x04)
	float StaminaDrain; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ConZ.WindowDetectionParams
// Size: 0x38 (Inherited: 0x00)
struct FWindowDetectionParams {
	struct FVector CharacterHeadLocation; // 0x00(0x0c)
	struct FVector CharacterFeetLocation; // 0x0c(0x0c)
	struct FVector CharacterForwardVector; // 0x18(0x0c)
	float MaxHorzDistanceToWindow; // 0x24(0x04)
	float MaxCharacterToWindowAngle; // 0x28(0x04)
	float HorzHitDetectionBias; // 0x2c(0x04)
	float HitDetectionBiasBelowWindow; // 0x30(0x04)
	float HitDetectionBiasAboveWindow; // 0x34(0x04)
};

// ScriptStruct ConZ.LadderInfoRepData
// Size: 0x50 (Inherited: 0x00)
struct FLadderInfoRepData {
	struct FTransform LadderTransform; // 0x00(0x30)
	struct FVector CapsuleBias; // 0x30(0x0c)
	struct FVector RootBoneOffset; // 0x3c(0x0c)
	float StepHeight; // 0x48(0x04)
	enum class EPhysicalSurface PhysicalSurfaceForSounds; // 0x4c(0x01)
	char NumberOfSteps; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
};

// ScriptStruct ConZ.LadderDetectionParams
// Size: 0x20 (Inherited: 0x00)
struct FLadderDetectionParams {
	struct FVector RayOrigin; // 0x00(0x0c)
	struct FVector RayDirection; // 0x0c(0x0c)
	float MaxHorzDistanceToLadder; // 0x18(0x04)
	float MaxRayToLadderAngle; // 0x1c(0x04)
};

// ScriptStruct ConZ.ClimbableObstacleInfo
// Size: 0x60 (Inherited: 0x00)
struct FClimbableObstacleInfo {
	struct FVector CapsuleLocationAtAnchorZero; // 0x00(0x0c)
	struct FRotator CapsuleRotationAtAnchor; // 0x0c(0x0c)
	struct TWeakObjectPtr<struct UPrimitiveComponent> BaseComponent; // 0x18(0x08)
	struct FPrisonerClimbAnimationInfo AnimationInfo; // 0x20(0x40)
};

// ScriptStruct ConZ.PrisonerClimbAnimationInfo
// Size: 0x40 (Inherited: 0x00)
struct FPrisonerClimbAnimationInfo {
	float MinEdgeHeight; // 0x00(0x04)
	float MaxEdgeHeight; // 0x04(0x04)
	float VaultDistance; // 0x08(0x04)
	float MaxVaultLandHeightError; // 0x0c(0x04)
	struct FVector AnchorOffset; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UAnimSequenceBase* AnchoringAnimation; // 0x20(0x08)
	float AnchoringAnimationTime; // 0x28(0x04)
	float AnchoringDuration; // 0x2c(0x04)
	struct UAnimMontage* ClimbingMontage; // 0x30(0x08)
	float StaminaDrain; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ConZ.PrisonerCommonData_ResponseIdles
// Size: 0x08 (Inherited: 0x00)
struct FPrisonerCommonData_ResponseIdles {
	struct UPrisonerResponseIdle* DirtyAfterProne; // 0x00(0x08)
};

// ScriptStruct ConZ.CorpsePoseData
// Size: 0x40 (Inherited: 0x00)
struct FCorpsePoseData {
	struct FVector_NetQuantize Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector_NetQuantize LinearVelocity; // 0x20(0x0c)
	struct FVector_NetQuantize AngularVelocity; // 0x2c(0x0c)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct ConZ.CorpseSkeletalMeshRepData
// Size: 0x70 (Inherited: 0x00)
struct FCorpseSkeletalMeshRepData {
	struct FName DisplayName; // 0x00(0x08)
	struct USkeletalMesh* Mesh; // 0x08(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x10(0x10)
	bool Visibility; // 0x20(0x01)
	char pad_21[0xf]; // 0x21(0x0f)
	struct FTransform Transform; // 0x30(0x30)
	struct FName AttachSocket; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
};

// ScriptStruct ConZ.CorpseStaticMeshRepData
// Size: 0x70 (Inherited: 0x00)
struct FCorpseStaticMeshRepData {
	struct FName DisplayName; // 0x00(0x08)
	struct UStaticMesh* Mesh; // 0x08(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x10(0x10)
	bool Visibility; // 0x20(0x01)
	char pad_21[0xf]; // 0x21(0x0f)
	struct FTransform Transform; // 0x30(0x30)
	struct FName AttachSocket; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
};

// ScriptStruct ConZ.FirstPersonViewParameters
// Size: 0x28 (Inherited: 0x00)
struct FFirstPersonViewParameters {
	struct FFloatInterval MinMaxViewPitch; // 0x00(0x08)
	struct FFloatInterval MinMaxViewYaw; // 0x08(0x08)
	struct FFloatInterval MinMaxViewYawInCombatMode; // 0x10(0x08)
	struct FFloatInterval MinMaxViewYawIfBlocked; // 0x18(0x08)
	struct UCurveLinearColor* MinMaxViewPitchByYaw; // 0x20(0x08)
};

// ScriptStruct ConZ.PrisonerFirstPersonSubviewBlendOverride
// Size: 0x08 (Inherited: 0x00)
struct FPrisonerFirstPersonSubviewBlendOverride {
	enum class EPrisonerFirstPersonSubview Source; // 0x00(0x01)
	enum class EPrisonerFirstPersonSubview Target; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Duration; // 0x04(0x04)
};

// ScriptStruct ConZ.PrisonerInitialSkillInfo
// Size: 0x10 (Inherited: 0x00)
struct FPrisonerInitialSkillInfo {
	struct USkill* Skill; // 0x00(0x08)
	enum class ESkillLevel InitialLevel; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float InitialExperiencePoints; // 0x0c(0x04)
};

// ScriptStruct ConZ.ClothesPartSet
// Size: 0x50 (Inherited: 0x00)
struct FClothesPartSet {
	struct TSet<enum class EClothesPart> ClothesParts; // 0x00(0x50)
};

// ScriptStruct ConZ.PrisonerConditionalSpawnEquipment
// Size: 0x78 (Inherited: 0x00)
struct FPrisonerConditionalSpawnEquipment {
	struct FGameplayTagQuery Condition; // 0x00(0x48)
	struct TSoftClassPtr<UObject> ItemClass; // 0x48(0x28)
	enum class EBiomeType BiomeRequirement; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct ConZ.ConditionalPrisonerMovementParams
// Size: 0x58 (Inherited: 0x00)
struct FConditionalPrisonerMovementParams {
	struct FGameplayTagQuery Condition; // 0x00(0x48)
	struct FPrisonerMovementParams Value; // 0x48(0x10)
};

// ScriptStruct ConZ.PrisonerMovementParams
// Size: 0x10 (Inherited: 0x00)
struct FPrisonerMovementParams {
	float MaxSpeed; // 0x00(0x04)
	float Acceleration; // 0x04(0x04)
	float Deceleration; // 0x08(0x04)
	float Friction; // 0x0c(0x04)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Misc
// Size: 0x18 (Inherited: 0x00)
struct FPrisonerMovementSettings_Misc {
	struct FFloatInterval RotationRateMultiplierVsPerformanceScore; // 0x00(0x08)
	struct FFloatInterval ClimbingSpeedMultiplierVsPerformanceScore; // 0x08(0x08)
	struct FFloatInterval WindowClimbingSpeedMultiplierVsPerformanceScore; // 0x10(0x08)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Water
// Size: 0x0c (Inherited: 0x00)
struct FPrisonerMovementSettings_Water {
	struct FFloatInterval MaxSpeedMultiplierVsPerformanceScore; // 0x00(0x08)
	float DivingWaterEdgeMargin; // 0x08(0x04)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Air
// Size: 0xf8 (Inherited: 0x00)
struct FPrisonerMovementSettings_Air {
	struct FPrisonerAirMovementParameters Fall; // 0x00(0x18)
	struct FPrisonerAirMovementParameters SkydiveSlow; // 0x18(0x18)
	struct FPrisonerAirMovementParameters SkydiveFast; // 0x30(0x18)
	struct FPrisonerAirMovementParameters HandsBound; // 0x48(0x18)
	struct TMap<struct FPrisonerAerialPosePair, struct FPrisonerAerialPoseTransition> PoseTransitionParamsMap; // 0x60(0x50)
	float JumpZVelocity; // 0xb0(0x04)
	char pad_B4[0x3c]; // 0xb4(0x3c)
	struct FFloatInterval JumpZVelocityMultiplierVsPerformanceScore; // 0xf0(0x08)
};

// ScriptStruct ConZ.PrisonerAerialPosePair
// Size: 0x02 (Inherited: 0x00)
struct FPrisonerAerialPosePair {
	enum class EPrisonerAerialPose PoseA; // 0x00(0x01)
	enum class EPrisonerAerialPose PoseB; // 0x01(0x01)
};

// ScriptStruct ConZ.PrisonerAerialPoseTransition
// Size: 0x20 (Inherited: 0x00)
struct FPrisonerAerialPoseTransition {
	float Duration; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* Animation; // 0x08(0x08)
	struct FFloatInterval AnimationTimeRange; // 0x10(0x08)
	struct UCurveFloat* PitchBlendCurve; // 0x18(0x08)
};

// ScriptStruct ConZ.PrisonerAirMovementParameters
// Size: 0x18 (Inherited: 0x00)
struct FPrisonerAirMovementParameters {
	float TerminalVelocity; // 0x00(0x04)
	float LateralMaxSpeed; // 0x04(0x04)
	float LateralDrag; // 0x08(0x04)
	float DesiredPitch; // 0x0c(0x04)
	float YawRotationRateFactor; // 0x10(0x04)
	float DragIntensity; // 0x14(0x04)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground
// Size: 0x1c (Inherited: 0x00)
struct FPrisonerMovementSettings_Ground {
	struct FFloatInterval MaxSpeedMultiplierVsPerformanceScore; // 0x00(0x08)
	struct FFloatInterval AccelerationMultiplierVsPerformanceScore; // 0x08(0x08)
	float AccelerationMultiplierWhenImmersedInWater; // 0x10(0x04)
	struct FFloatInterval FrictionMultiplierVsPerformanceScore; // 0x14(0x08)
};

// ScriptStruct ConZ.LedgeMantlingAnimationInfo
// Size: 0x40 (Inherited: 0x00)
struct FLedgeMantlingAnimationInfo {
	struct FVector AnchorOffset; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAnimSequenceBase* AnchoringAnimation; // 0x10(0x08)
	float AnchoringAnimationTime; // 0x18(0x04)
	float AnchoringDuration; // 0x1c(0x04)
	struct UAnimMontage* ClimbingMontage; // 0x20(0x08)
	float StaminaDrain; // 0x28(0x04)
	float MinEdgeHeight; // 0x2c(0x04)
	float MaxEdgeHeight; // 0x30(0x04)
	float VaultDistance; // 0x34(0x04)
	float MaxVaultLandHeightError; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ConZ.WindowMantlingAnimationInfo
// Size: 0x48 (Inherited: 0x00)
struct FWindowMantlingAnimationInfo {
	struct FVector AnchorOffset; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAnimSequenceBase* AnchoringAnimation; // 0x10(0x08)
	float AnchoringAnimationTime; // 0x18(0x04)
	float AnchoringDuration; // 0x1c(0x04)
	struct UAnimMontage* ClimbingMontage; // 0x20(0x08)
	float StaminaDrain; // 0x28(0x04)
	float MinWindowWidth; // 0x2c(0x04)
	float MinWindowHeight; // 0x30(0x04)
	float MinSpacingToLeftWindowEdge; // 0x34(0x04)
	float MinSpacingToRightWindowEdge; // 0x38(0x04)
	float MinWindowDistanceToFloor; // 0x3c(0x04)
	float MaxWindowDistanceToFloor; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ConZ.PrisonerAerialPoseData
// Size: 0x18 (Inherited: 0x00)
struct FPrisonerAerialPoseData {
	float TerminalVelocity; // 0x00(0x04)
	float LateralMaxSpeed; // 0x04(0x04)
	float LateralDrag; // 0x08(0x04)
	float DesiredPitch; // 0x0c(0x04)
	float DragIntensity; // 0x10(0x04)
	float YawRotationRate; // 0x14(0x04)
};

// ScriptStruct ConZ.PrisonerAquaticModeData
// Size: 0x0c (Inherited: 0x00)
struct FPrisonerAquaticModeData {
	float CapsuleHalfHeight; // 0x00(0x04)
	enum class EPrisonerMovementPace MaxMovementPace; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float YawRotationRate; // 0x08(0x04)
};

// ScriptStruct ConZ.PrisonerGroundStanceData
// Size: 0x0c (Inherited: 0x00)
struct FPrisonerGroundStanceData {
	float CapsuleHalfHeight; // 0x00(0x04)
	enum class EPrisonerMovementPace MaxMovementPace; // 0x04(0x01)
	enum class EPrisonerMovementPace MaxLimpingMovementPace; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float YawRotationRate; // 0x08(0x04)
};

// ScriptStruct ConZ.WaterForceWhenSwimmingParams
// Size: 0x14 (Inherited: 0x00)
struct FWaterForceWhenSwimmingParams {
	float DownstreamWaterForceMultiplier; // 0x00(0x04)
	float UpstreamWaterForceMultiplier; // 0x04(0x04)
	float ImpulseThreshold; // 0x08(0x04)
	float ImpulseMultiplier; // 0x0c(0x04)
	float MinSpeedForUpstream; // 0x10(0x04)
};

// ScriptStruct ConZ.MusicPlayerPlaybackOptions
// Size: 0x28 (Inherited: 0x00)
struct FMusicPlayerPlaybackOptions {
	struct TArray<struct FString> MusicPlaylist; // 0x00(0x10)
	int32_t CurrentPlaylistIndex; // 0x10(0x04)
	bool PlaybackPaused; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float CurrentPlaybackVolume; // 0x18(0x04)
	bool ShouldRepeatCurrent; // 0x1c(0x01)
	bool ShouldLoop; // 0x1d(0x01)
	bool ShouldShuffle; // 0x1e(0x01)
	bool ShouldPlayRadio; // 0x1f(0x01)
	bool IsTurnedOn; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ConZ.PrisonerNameChangeRequestData
// Size: 0x20 (Inherited: 0x00)
struct FPrisonerNameChangeRequestData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ConZ.PrisonerReportingEventsMap
// Size: 0x60 (Inherited: 0x00)
struct FPrisonerReportingEventsMap {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct ConZ.PrisonerReportingEvents
// Size: 0x288 (Inherited: 0x00)
struct FPrisonerReportingEvents {
	char pad_0[0x288]; // 0x00(0x288)
};

// ScriptStruct ConZ.PrisonerRestingDataAutonomous
// Size: 0x1c (Inherited: 0x00)
struct FPrisonerRestingDataAutonomous {
	bool HasDisabledMovement; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector_NetQuantize Location; // 0x04(0x0c)
	struct FVector_NetQuantize EulerRotation; // 0x10(0x0c)
};

// ScriptStruct ConZ.PrisonerRestingData
// Size: 0x18 (Inherited: 0x00)
struct FPrisonerRestingData {
	enum class EPrisonerRestingMode mode; // 0x00(0x01)
	bool IsRestingOnGround; // 0x01(0x01)
	bool HasChangedTransform; // 0x02(0x01)
	bool HasDisabledCapsuleCollision; // 0x03(0x01)
	bool HasLockedRestingLocation; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TWeakObjectPtr<struct UAnimSequenceBase> RestingAnimation; // 0x08(0x08)
	float FeetIKOffset; // 0x10(0x04)
	bool IsRestingOnBedroll; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ConZ.PrisonerRestingParameters
// Size: 0x60 (Inherited: 0x00)
struct FPrisonerRestingParameters {
	enum class EPrisonerRestingMode mode; // 0x00(0x01)
	bool ShouldUpdateTransform; // 0x01(0x01)
	bool ShouldDisableMovement; // 0x02(0x01)
	bool ShouldDisableCapsuleCollision; // 0x03(0x01)
	bool ShouldLockRestingLocation; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TWeakObjectPtr<struct UAnimSequenceBase> RestingAnimation; // 0x08(0x08)
	struct TArray<struct FVector> EndRestLocations; // 0x10(0x10)
	struct FTransform Transform; // 0x20(0x30)
	bool IsRestingOnGround; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float FeetIKOffset; // 0x54(0x04)
	struct TWeakObjectPtr<struct AItem> Item; // 0x58(0x08)
};

// ScriptStruct ConZ.LastDamageDealtInfo
// Size: 0x28 (Inherited: 0x00)
struct FLastDamageDealtInfo {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ConZ.ThrowingItemData
// Size: 0x10 (Inherited: 0x00)
struct FThrowingItemData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ConZ.PrisonerDistanceTravelledContext
// Size: 0x20 (Inherited: 0x00)
struct FPrisonerDistanceTravelledContext {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ConZ.PrisonerMeleeAttackTypes
// Size: 0x88 (Inherited: 0x00)
struct FPrisonerMeleeAttackTypes {
	struct FGameplayTag PrimaryMeleeAttackTypeWhenNotMoving; // 0x00(0x08)
	struct FGameplayTag PrimaryMeleeAttackTypeWhenWalking; // 0x08(0x08)
	struct FGameplayTag PrimaryMeleeAttackTypeWhenJogging; // 0x10(0x08)
	struct FGameplayTag PrimaryMeleeAttackTypeWhenRunning; // 0x18(0x08)
	struct FGameplayTag PrimaryMeleeAttackTypeWhenFalling; // 0x20(0x08)
	struct FGameplayTag SecondaryMeleeAttackTypeWhenNotMoving; // 0x28(0x08)
	struct FGameplayTag SecondaryMeleeAttackTypeWhenWalking; // 0x30(0x08)
	struct FGameplayTag SecondaryMeleeAttackTypeWhenJogging; // 0x38(0x08)
	struct FGameplayTag SecondaryMeleeAttackTypeWhenRunning; // 0x40(0x08)
	struct FGameplayTag SecondaryMeleeAttackTypeWhenFalling; // 0x48(0x08)
	struct FGameplayTag ComboMeleeAttackTypeWhenNotMoving; // 0x50(0x08)
	struct FGameplayTag ComboMeleeAttackTypeWhenWalking; // 0x58(0x08)
	struct FGameplayTag ComboMeleeAttackTypeWhenJogging; // 0x60(0x08)
	struct FGameplayTag ComboMeleeAttackTypeWhenRunning; // 0x68(0x08)
	struct FGameplayTag ComboMeleeAttackTypeWhenFalling; // 0x70(0x08)
	struct FGameplayTag BashMeleeAttackType; // 0x78(0x08)
	struct FGameplayTag WeaponBayonetMeleeAttackType; // 0x80(0x08)
};

// ScriptStruct ConZ.PrisonerTurnMontageDescription
// Size: 0x30 (Inherited: 0x00)
struct FPrisonerTurnMontageDescription {
	struct UAnimSequenceBase* AnimationL90; // 0x00(0x08)
	struct UAnimSequenceBase* AnimationR90; // 0x08(0x08)
	struct FName TurnAngleCurveName; // 0x10(0x08)
	struct FName SlotName; // 0x18(0x08)
	float BlendInTime; // 0x20(0x04)
	float BlendOutTime; // 0x24(0x04)
	float BlendOutTriggerTime; // 0x28(0x04)
	float PlayRate; // 0x2c(0x04)
};

// ScriptStruct ConZ.SkillExperienceChange
// Size: 0x08 (Inherited: 0x00)
struct FSkillExperienceChange {
	float ExperienceChange; // 0x00(0x04)
	float Time; // 0x04(0x04)
};

// ScriptStruct ConZ.ActiveMovingThroughFoliageSounds
// Size: 0x20 (Inherited: 0x00)
struct FActiveMovingThroughFoliageSounds {
	char pad_0[0x8]; // 0x00(0x08)
	struct UAkAudioEvent* StartAudioEvent; // 0x08(0x08)
	struct UAkAudioEvent* StopAudioEvent; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct ConZ.PrisonerThirdPersonSubviewBlendOverride
// Size: 0x08 (Inherited: 0x00)
struct FPrisonerThirdPersonSubviewBlendOverride {
	enum class EPrisonerThirdPersonSubview Source; // 0x00(0x01)
	enum class EPrisonerThirdPersonSubview Target; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Duration; // 0x04(0x04)
};

// ScriptStruct ConZ.LocalOffsetCurves
// Size: 0x20 (Inherited: 0x00)
struct FLocalOffsetCurves {
	struct UCurveLinearColor* YawIdle; // 0x00(0x08)
	struct UCurveLinearColor* YawMoving; // 0x08(0x08)
	struct UCurveLinearColor* PitchIdle; // 0x10(0x08)
	struct UCurveLinearColor* PitchMoving; // 0x18(0x08)
};

// ScriptStruct ConZ.BodyConditionSpriteData
// Size: 0x160 (Inherited: 0x00)
struct FBodyConditionSpriteData {
	char pad_0[0x160]; // 0x00(0x160)
};

// ScriptStruct ConZ.DerivedPrisonerSkillComponentUIData
// Size: 0x38 (Inherited: 0x00)
struct FDerivedPrisonerSkillComponentUIData {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct ConZ.ControllerDigestionItem
// Size: 0x28 (Inherited: 0x00)
struct FControllerDigestionItem {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ConZ.PrisonerViewInfo
// Size: 0x610 (Inherited: 0x5f0)
struct FPrisonerViewInfo : FMinimalViewInfo {
	float WeaponFOV; // 0x5f0(0x04)
	struct FVector WeaponFoveationOffset; // 0x5f4(0x0c)
	float MinViewYaw; // 0x600(0x04)
	float MaxViewYaw; // 0x604(0x04)
	float MinViewPitch; // 0x608(0x04)
	float MaxViewPitch; // 0x60c(0x04)
};

// ScriptStruct ConZ.ProjectileData
// Size: 0x60 (Inherited: 0x00)
struct FProjectileData {
	struct FText Caption; // 0x00(0x18)
	float Caliber; // 0x18(0x04)
	float Weight; // 0x1c(0x04)
	float MuzzleVelocity; // 0x20(0x04)
	float BallisticCoefficient; // 0x24(0x04)
	enum class EBallisticDragModel BallisticDragModel; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float InitialDamage; // 0x2c(0x04)
	float InitialDamageInGameEvent; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FTargetTypeDamageMultiplier TargetTypeMultiplier; // 0x38(0x10)
	float PenetrationFactor; // 0x48(0x04)
	float GlancingAngle; // 0x4c(0x04)
	bool AllowGlanceOrForceBounce; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float BounceAngle; // 0x54(0x04)
	float ArmorPiercingFactor; // 0x58(0x04)
	bool CanCauseHeadExplosion; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// ScriptStruct ConZ.ProjectileArrowData
// Size: 0x20 (Inherited: 0x00)
struct FProjectileArrowData {
	struct UObject* AmmunitionArrowClass; // 0x00(0x08)
	float ItemsHealth; // 0x08(0x04)
	float StiffnessFactor; // 0x0c(0x04)
	float FlightRotationCorrectionSpeed; // 0x10(0x04)
	float DeviationDegrees; // 0x14(0x04)
	bool IsPartOfEvent; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ConZ.ImpactEffectData
// Size: 0x18 (Inherited: 0x00)
struct FImpactEffectData {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct UNiagaraSystem* NiagaraParticleSystem; // 0x08(0x08)
	struct UMaterial* Decal; // 0x10(0x08)
};

// ScriptStruct ConZ.FiredShotDescriptionRep
// Size: 0x04 (Inherited: 0x00)
struct FFiredShotDescriptionRep {
	uint32_t PackedData; // 0x00(0x04)
};

// ScriptStruct ConZ.PageSplatterInfo
// Size: 0x20 (Inherited: 0x00)
struct FPageSplatterInfo {
	int32_t MaxNumOfSplatters; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FSlateBrush> SplatterTextures; // 0x08(0x10)
	float Frequency; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ConZ.MapLocationMarker
// Size: 0x10 (Inherited: 0x00)
struct FMapLocationMarker {
	struct FVector Location; // 0x00(0x0c)
	float SizeFactor; // 0x0c(0x04)
};

// ScriptStruct ConZ.TaskInstance
// Size: 0x20 (Inherited: 0x00)
struct FTaskInstance {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ConZ.QuestInstance
// Size: 0x20 (Inherited: 0x00)
struct FQuestInstance {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ConZ.QuestGiverIdentifier
// Size: 0x20 (Inherited: 0x00)
struct FQuestGiverIdentifier {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ConZ.TaskInstanceId
// Size: 0x08 (Inherited: 0x08)
struct FTaskInstanceId : FDbIntegerId {
};

// ScriptStruct ConZ.TrackingDataId
// Size: 0x08 (Inherited: 0x08)
struct FTrackingDataId : FDbIntegerId {
};

// ScriptStruct ConZ.InteractableDescription
// Size: 0x80 (Inherited: 0x00)
struct FInteractableDescription {
	struct FString AnchorMeshPathStringRef; // 0x00(0x10)
	int32_t InstanceIndex; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FTransform FallbackTransform; // 0x20(0x30)
	struct TSoftObjectPtr<UStaticMesh> VisibleMesh; // 0x50(0x28)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct ConZ.QuestItemSet_Data
// Size: 0x10 (Inherited: 0x00)
struct FQuestItemSet_Data {
	struct TArray<struct FQuestItem> Items; // 0x00(0x10)
};

// ScriptStruct ConZ.QuestItem
// Size: 0x70 (Inherited: 0x00)
struct FQuestItem {
	struct TSet<struct TSoftClassPtr<UObject>> AcceptedItems; // 0x00(0x50)
	int32_t Count; // 0x50(0x04)
	int32_t MaxRandomAdditionalCount; // 0x54(0x04)
	int32_t MinAcceptedItemUses; // 0x58(0x04)
	enum class EFoodCookLevel MinAcceptedCookLevel; // 0x5c(0x01)
	enum class EFoodCookLevel MaxAcceptedCookLevel; // 0x5d(0x01)
	enum class EFoodCookQuality MinAcceptedCookQuality; // 0x5e(0x01)
	char pad_5F[0x1]; // 0x5f(0x01)
	float MinAcceptedItemMass; // 0x60(0x04)
	float MinAcceptedItemHealth; // 0x64(0x04)
	float MinAcceptedItemResourceAmount; // 0x68(0x04)
	float MinAcceptedItemResourceRatio; // 0x6c(0x04)
};

// ScriptStruct ConZ.VicinityItems
// Size: 0x18 (Inherited: 0x00)
struct FVicinityItems {
	struct TArray<struct TSoftClassPtr<UObject>> AcceptedItems; // 0x00(0x10)
	int32_t Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.CircularAreaGroup
// Size: 0x10 (Inherited: 0x00)
struct FCircularAreaGroup {
	struct TArray<struct FCircularArea> CircularAreaArray; // 0x00(0x10)
};

// ScriptStruct ConZ.CircularArea
// Size: 0x10 (Inherited: 0x00)
struct FCircularArea {
	struct FVector Location; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
};

// ScriptStruct ConZ.SpecialQuestSetupArray
// Size: 0x58 (Inherited: 0x00)
struct FSpecialQuestSetupArray {
	struct FGameplayTagQuery TagsRequirements; // 0x00(0x48)
	struct TArray<struct UQuestSetup*> Quests; // 0x48(0x10)
};

// ScriptStruct ConZ.ComponentReferenceCollection
// Size: 0x10 (Inherited: 0x00)
struct FComponentReferenceCollection {
	struct TArray<struct FComponentSoftPtrWithZeroTransform> ComponentRefs; // 0x00(0x10)
};

// ScriptStruct ConZ.ComponentSoftPtrWithZeroTransform
// Size: 0x40 (Inherited: 0x00)
struct FComponentSoftPtrWithZeroTransform {
	struct FTransform ZeroTransform; // 0x00(0x30)
	struct FString ComponentPath; // 0x30(0x10)
};

// ScriptStruct ConZ.QuestGiverSetup
// Size: 0x110 (Inherited: 0x00)
struct FQuestGiverSetup {
	int32_t MaxQuestsGeneratedPerDay; // 0x00(0x04)
	int32_t InitiallyGeneratedQuests; // 0x04(0x04)
	int32_t MaxAvailableQuests; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<int32_t, int32_t> MinQuestsAvailablePerTier; // 0x10(0x50)
	struct TMap<int32_t, float> QuestsProbabilityPerTier; // 0x60(0x50)
	struct TSoftClassPtr<UObject> AllowedOnlyFromNPC; // 0xb0(0x28)
	struct TSoftClassPtr<UObject> RequireCompletedQuestFromOtherNPC; // 0xd8(0x28)
	int32_t RequireCompletedQuestsFromOtherNPCTier; // 0x100(0x04)
	int32_t RequireCompletedQuestsFromOtherNPCNum; // 0x104(0x04)
	bool AllowAutoComplete; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// ScriptStruct ConZ.QuestRewards
// Size: 0x128 (Inherited: 0x00)
struct FQuestRewards {
	struct FTraderSpecialDeal RewardTradeDeal; // 0x00(0x70)
	struct TArray<struct FTraderSpecialDeal> RewardTradeDeals; // 0x70(0x10)
	struct TMap<enum class ECurrencyType, int64_t> RewardCurrency; // 0x80(0x50)
	int32_t RewardFame; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TMap<struct TSoftClassPtr<UObject>, float> RewardSkillExperience; // 0xd8(0x50)
};

// ScriptStruct ConZ.TraderSpecialDeal
// Size: 0x70 (Inherited: 0x00)
struct FTraderSpecialDeal {
	char pad_0[0x38]; // 0x00(0x38)
	struct TSoftClassPtr<UObject> TradeableClass; // 0x38(0x28)
	int32_t BasePurchasePrice; // 0x60(0x04)
	int32_t AmountInStore; // 0x64(0x04)
	bool OverridePurchaseAbility; // 0x68(0x01)
	bool CanBePurchasedByPlayer; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	int32_t RequiredFamePoints; // 0x6c(0x04)
};

// ScriptStruct ConZ.QuestTrackingDataWidgetStyle
// Size: 0x150 (Inherited: 0x00)
struct FQuestTrackingDataWidgetStyle {
	struct FLinearColor IncompleteColor; // 0x00(0x10)
	struct FLinearColor IncompleteHighlightColor; // 0x10(0x10)
	struct FSlateBrush IncompleteIcon; // 0x20(0x88)
	struct FLinearColor CompleteColor; // 0xa8(0x10)
	struct FSlateBrush CompleteIcon; // 0xb8(0x88)
	uint32_t FontSize; // 0x140(0x04)
	struct FVector2D IconSize; // 0x144(0x08)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// ScriptStruct ConZ.QuestGiverUIData
// Size: 0x98 (Inherited: 0x00)
struct FQuestGiverUIData {
	struct FText Name; // 0x00(0x18)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x18(0x28)
	struct TArray<struct FText> PlayerQuestAcceptResponses; // 0x40(0x10)
	struct TArray<struct FText> QuestGiverQuestCompletedResponses; // 0x50(0x10)
	struct TArray<struct FText> QuestGiverQuestFailedResponses; // 0x60(0x10)
	struct UAkAudioEvent* QuestAcceptedAudioEvent; // 0x70(0x08)
	struct UAkAudioEvent* QuestCompletedAudioEvent; // 0x78(0x08)
	struct UAkAudioEvent* QuestBookOpenedAudioEvent; // 0x80(0x08)
	struct UAkAudioEvent* QuestBookNoQuestTakenAudioEvent; // 0x88(0x08)
	struct UAkAudioEvent* QuestBookNoQuestsAvailableAudioEvent; // 0x90(0x08)
};

// ScriptStruct ConZ.OutpostInformationTraderUIData
// Size: 0x28 (Inherited: 0x00)
struct FOutpostInformationTraderUIData {
	struct TSoftClassPtr<UObject> TraderClass; // 0x00(0x28)
};

// ScriptStruct ConZ.QuickAccessClientSyncData
// Size: 0x18 (Inherited: 0x00)
struct FQuickAccessClientSyncData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ConZ.QuickAccessSlotData
// Size: 0x14 (Inherited: 0x00)
struct FQuickAccessSlotData {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct ConZ.RadiationSourceDescription
// Size: 0x60 (Inherited: 0x00)
struct FRadiationSourceDescription {
	struct FTransform Transform; // 0x00(0x30)
	struct FVector Extents; // 0x30(0x0c)
	struct FVector EpicenterLocation; // 0x3c(0x0c)
	float EpicenterRadius; // 0x48(0x04)
	float MaxRadiationAmountIncreaseRate; // 0x4c(0x04)
	float RadiationAmountIncreaseRateFalloffExponent; // 0x50(0x04)
	float RadiationNoiseAmountScale; // 0x54(0x04)
	float RadiationNoiseLocationScale; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct ConZ.RadioProgramData
// Size: 0x18 (Inherited: 0x00)
struct FRadioProgramData {
	struct URadioProgram* ProgramClass; // 0x00(0x08)
	struct URadioProgram* Program; // 0x08(0x08)
	float Chance; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.RaidProtectionArray
// Size: 0x188 (Inherited: 0x108)
struct FRaidProtectionArray : FFastArraySerializer {
	struct TArray<struct FRaidProtection> _activeRaidProtections; // 0x108(0x10)
	char pad_118[0x70]; // 0x118(0x70)
};

// ScriptStruct ConZ.RaidProtection
// Size: 0x40 (Inherited: 0x0c)
struct FRaidProtection : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FDbIntegerId FlagId; // 0x10(0x08)
	char pad_18[0x18]; // 0x18(0x18)
	uint32_t _raidProtectionPacked; // 0x30(0x04)
	uint16_t _lastProtectionTimeChangedPacked; // 0x34(0x02)
	char pad_36[0xa]; // 0x36(0x0a)
};

// ScriptStruct ConZ.ConnectionSaveData
// Size: 0x18 (Inherited: 0x00)
struct FConnectionSaveData {
	struct FEntityComponentId ID; // 0x00(0x10)
	float Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.RangedWeaponSkillParametersPerSkillLevel
// Size: 0x04 (Inherited: 0x00)
struct FRangedWeaponSkillParametersPerSkillLevel {
	float CrosshairHidingDuration; // 0x00(0x04)
};

// ScriptStruct ConZ.RangedWeaponSkillExperienceAwards
// Size: 0x40 (Inherited: 0x00)
struct FRangedWeaponSkillExperienceAwards {
	float PointsPerShotDistance; // 0x00(0x04)
	float PointsPerSubsequentHit; // 0x04(0x04)
	float PointsForKill; // 0x08(0x04)
	float PointsForHeadshot; // 0x0c(0x04)
	float PointsForLowWindSpeed; // 0x10(0x04)
	float PointsForMediumWindSpeed; // 0x14(0x04)
	float PointsForHighWindSpeed; // 0x18(0x04)
	float PointsForProne; // 0x1c(0x04)
	float PointsForCrouching; // 0x20(0x04)
	float PointsForStanding; // 0x24(0x04)
	float ClearMalfunctionBadRound; // 0x28(0x04)
	float ClearMalfunctionStovePipe; // 0x2c(0x04)
	float ClearMalfunctionRoundNotLoaded; // 0x30(0x04)
	float ClearMalfunctionDoubleFeed; // 0x34(0x04)
	float ClearMalfunctionStuckBullet; // 0x38(0x04)
	float ClearMalfunctionClipPartiallyEjected; // 0x3c(0x04)
};

// ScriptStruct ConZ.RazorDeathAnimationData
// Size: 0x10 (Inherited: 0x00)
struct FRazorDeathAnimationData {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	struct FFloatInterval TimeToRagdollRange; // 0x08(0x08)
};

// ScriptStruct ConZ.RazorUpperBodyPitchRangeData
// Size: 0x14 (Inherited: 0x00)
struct FRazorUpperBodyPitchRangeData {
	struct FFloatRange ActualPitchRange; // 0x00(0x10)
	float AppliedPitch; // 0x10(0x04)
};

// ScriptStruct ConZ.RazorAttackMontageDescription
// Size: 0x18 (Inherited: 0x00)
struct FRazorAttackMontageDescription {
	struct UAnimMontage* Montage; // 0x00(0x08)
	float MaxCombatDistance; // 0x08(0x04)
	float MinCombatDistance; // 0x0c(0x04)
	float MinPitch; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.RazorTurnMontageDescription
// Size: 0x28 (Inherited: 0x00)
struct FRazorTurnMontageDescription {
	struct UAnimMontage* MontageL90; // 0x00(0x08)
	struct UAnimMontage* MontageL180; // 0x08(0x08)
	struct UAnimMontage* MontageR90; // 0x10(0x08)
	struct UAnimMontage* MontageR180; // 0x18(0x08)
	struct FName TurnAngleCurveName; // 0x20(0x08)
};

// ScriptStruct ConZ.EngineeringEventData
// Size: 0x08 (Inherited: 0x00)
struct FEngineeringEventData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ConZ.RepairToolItemParams
// Size: 0x58 (Inherited: 0x00)
struct FRepairToolItemParams {
	struct FGameplayTagContainer RepairableItemTypes; // 0x00(0x20)
	struct UAkAudioEvent* StartRepairSound; // 0x20(0x08)
	struct UAkAudioEvent* StopRepairSound; // 0x28(0x08)
	struct UAnimMontage* StartRepairMontage; // 0x30(0x08)
	struct UAnimMontage* StopRepairMontage; // 0x38(0x08)
	float HealthGainPerUseMultiplier; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FRequiredRepairingItemTagParams> RequiredRepairingItemTagsParms; // 0x48(0x10)
};

// ScriptStruct ConZ.RequiredRepairingItemTagParams
// Size: 0x10 (Inherited: 0x00)
struct FRequiredRepairingItemTagParams {
	struct UBaseItemTag* ItemTag; // 0x00(0x08)
	int32_t ItemUsageConsumption; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ConZ.RequiredItemForItemTagParams
// Size: 0x0c (Inherited: 0x00)
struct FRequiredItemForItemTagParams {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct ConZ.RepairableParams
// Size: 0x38 (Inherited: 0x00)
struct FRepairableParams {
	struct FGameplayTagContainer RepairableTypes; // 0x00(0x20)
	float HealthRepairedPerUse; // 0x20(0x04)
	float ExperienceAwardedPerHealthRepaired; // 0x24(0x04)
	float MinRepairDuration; // 0x28(0x04)
	float MaxRepairDuration; // 0x2c(0x04)
	bool ShouldRepairZeroHealth; // 0x30(0x01)
	enum class ESkillLevel MinSkillLevelRequired; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct ConZ.ReplenishableResource
// Size: 0xa0 (Inherited: 0x00)
struct FReplenishableResource {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct ConZ.ReplenishableResourceDescription
// Size: 0x88 (Inherited: 0x00)
struct FReplenishableResourceDescription {
	char pad_0[0x8]; // 0x00(0x08)
	struct UGameResourceType* Type; // 0x08(0x08)
	struct FGameplayTagContainer InSocketTypes; // 0x10(0x20)
	struct FGameplayTagContainer OutSocketTypes; // 0x30(0x20)
	float PricePerUnit; // 0x50(0x04)
	bool IsReplenishedPeriodically; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FPeriodicallyReplenishedResourceDescription PeriodicReplenishment; // 0x58(0x10)
	struct FProximityReplenishedResourceDescription ProximityReplenishment; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)
};

// ScriptStruct ConZ.ProximityReplenishedResourceDescription
// Size: 0x10 (Inherited: 0x00)
struct FProximityReplenishedResourceDescription {
	float ReplenishChance; // 0x00(0x04)
	struct FFloatInterval ReplenishAmount; // 0x04(0x08)
	float ReplenishTimeout; // 0x0c(0x04)
};

// ScriptStruct ConZ.PeriodicallyReplenishedResourceDescription
// Size: 0x10 (Inherited: 0x00)
struct FPeriodicallyReplenishedResourceDescription {
	float InitialAmount; // 0x00(0x04)
	float MaxAmount; // 0x04(0x04)
	float ReplenishInterval; // 0x08(0x04)
	float ReplenishAmount; // 0x0c(0x04)
};

// ScriptStruct ConZ.ReplenishableResourceSlotDescription
// Size: 0x1c (Inherited: 0x00)
struct FReplenishableResourceSlotDescription {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct ConZ.RequestSpamFilter
// Size: 0x14 (Inherited: 0x00)
struct FRequestSpamFilter {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct ConZ.AreaResourceLockNetwork
// Size: 0x20 (Inherited: 0x00)
struct FAreaResourceLockNetwork {
	struct FResourceNetworkGUID LockOwnerGUID; // 0x00(0x04)
	struct FBox Area; // 0x04(0x1c)
};

// ScriptStruct ConZ.ResourceNetworkGUID
// Size: 0x04 (Inherited: 0x00)
struct FResourceNetworkGUID {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct ConZ.ActorResourceLockNetwork
// Size: 0x0c (Inherited: 0x00)
struct FActorResourceLockNetwork {
	struct FResourceNetworkGUID LockOwnerGUID; // 0x00(0x04)
	struct FResourceNetworkGUID ResourceGUID; // 0x04(0x04)
	int32_t ResourceId; // 0x08(0x04)
};

// ScriptStruct ConZ.RespawnParameters
// Size: 0x6c (Inherited: 0x00)
struct FRespawnParameters {
	int32_t RandomLocationPrice; // 0x00(0x04)
	int32_t SectorLocationPrice; // 0x04(0x04)
	enum class ECurrencyType SectorLocationPriceCurrency; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ShelterLocationPrice; // 0x0c(0x04)
	enum class ECurrencyType ShelterLocationPriceCurrency; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t SquadLocationPrice; // 0x14(0x04)
	enum class ECurrencyType SquadLocationPriceCurrency; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t PermadeathThreshold; // 0x1c(0x04)
	enum class ECurrencyType PermadeathThresholdPriceCurrency; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float RandomPriceModifier; // 0x24(0x04)
	float SectorPriceModifier; // 0x28(0x04)
	float HomePriceModifier; // 0x2c(0x04)
	float RandomInitialTime; // 0x30(0x04)
	float SectorInitialTime; // 0x34(0x04)
	float ShelterInitialTime; // 0x38(0x04)
	float SquadInitialTime; // 0x3c(0x04)
	float RandomCooldownTime; // 0x40(0x04)
	float SectorCooldownTime; // 0x44(0x04)
	float ShelterCooldownTime; // 0x48(0x04)
	float SquadCooldownTime; // 0x4c(0x04)
	float RandomCooldownResetMultiplier; // 0x50(0x04)
	float SectorCooldownResetMultiplier; // 0x54(0x04)
	float ShelterCooldownResetMultiplier; // 0x58(0x04)
	float SquadCooldownResetMultiplier; // 0x5c(0x04)
	float CommitSuicideInitialTime; // 0x60(0x04)
	float CommitSuicideCooldownTime; // 0x64(0x04)
	float CommitSuicideCooldownResetMultiplier; // 0x68(0x04)
};

// ScriptStruct ConZ.MeshInstancesRestoreOptions
// Size: 0x04 (Inherited: 0x00)
struct FMeshInstancesRestoreOptions {
	float RestoreInterval; // 0x00(0x04)
};

// ScriptStruct ConZ.RestorableMeshInstanceId
// Size: 0x18 (Inherited: 0x00)
struct FRestorableMeshInstanceId {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ConZ.RunningSkillParametersPerSkillLevel
// Size: 0x10 (Inherited: 0x00)
struct FRunningSkillParametersPerSkillLevel {
	struct FExperienceDependentFloat MaxSpeedMultiplier; // 0x00(0x08)
	struct FExperienceDependentFloat StaminaConsumptionMultiplier; // 0x08(0x08)
};

// ScriptStruct ConZ.RunningSkillExperienceAwards
// Size: 0x08 (Inherited: 0x00)
struct FRunningSkillExperienceAwards {
	float PointsPerMinuteOfJogging; // 0x00(0x04)
	float PointsPerMinuteOfRunning; // 0x04(0x04)
};

// ScriptStruct ConZ.ScopeZoomLevelSettings
// Size: 0x570 (Inherited: 0x00)
struct FScopeZoomLevelSettings {
	float Magnification; // 0x00(0x04)
	float DisplayedMagnification; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FPostProcessSettings PostProcessSettings; // 0x10(0x560)
};

// ScriptStruct ConZ.SearchPerItemData
// Size: 0xe8 (Inherited: 0x00)
struct FSearchPerItemData {
	struct TArray<struct UPhysicalMaterial*> NeededMaterials; // 0x00(0x10)
	struct TArray<struct UPhysicalMaterial*> RequiredMaterials; // 0x10(0x10)
	struct TArray<struct UPhysicalMaterial*> ProhibitedMaterials; // 0x20(0x10)
	struct FItemSpawnerPresetWithOverrides SpawnerPreset; // 0x30(0xb8)
};

// ScriptStruct ConZ.SedentaryNPCHeadAnimationAndAudio
// Size: 0x18 (Inherited: 0x00)
struct FSedentaryNPCHeadAnimationAndAudio {
	struct UAnimMontage* HeadAnimation; // 0x00(0x08)
	struct UAkAudioEvent* AudioEvent; // 0x08(0x08)
	bool OverrideNativeTrackingAnimations; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ConZ.SedentaryNPCMarker
// Size: 0x70 (Inherited: 0x00)
struct FSedentaryNPCMarker {
	struct TSoftClassPtr<UObject> SedentaryNPCClass; // 0x00(0x28)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform SpawnTransform; // 0x30(0x30)
	bool ShouldRaycastSpawnPosition; // 0x60(0x01)
	char pad_61[0xf]; // 0x61(0x0f)
};

// ScriptStruct ConZ.SentryDamageEffectData
// Size: 0x18 (Inherited: 0x00)
struct FSentryDamageEffectData {
	struct UNiagaraSystem* ParticleSystem; // 0x00(0x08)
	float EffectsScaleDistanceStart; // 0x08(0x04)
	float EffectsScaleDistanceRange; // 0x0c(0x04)
	float EffectsScaleByDistanceFactor; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.InPlaceTurningData
// Size: 0x2c (Inherited: 0x00)
struct FInPlaceTurningData {
	struct FInPlaceTurnAnimationInfo LAnimationInfo; // 0x00(0x14)
	struct FInPlaceTurnAnimationInfo RAnimationInfo; // 0x14(0x14)
	float BlendAlphaInterpolationSpeed; // 0x28(0x04)
};

// ScriptStruct ConZ.InPlaceTurnAnimationInfo
// Size: 0x14 (Inherited: 0x00)
struct FInPlaceTurnAnimationInfo {
	float Duration; // 0x00(0x04)
	float TurnSpeed; // 0x04(0x04)
	float AnimationPlayRate; // 0x08(0x04)
	float BlendInDuration; // 0x0c(0x04)
	float BlendOutDuration; // 0x10(0x04)
};

// ScriptStruct ConZ.SentryGlitchingPartInfo
// Size: 0x08 (Inherited: 0x00)
struct FSentryGlitchingPartInfo {
	bool IsGlitching; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NextUpdateTime; // 0x04(0x04)
};

// ScriptStruct ConZ.SentryHotZoneVolumeData
// Size: 0x08 (Inherited: 0x00)
struct FSentryHotZoneVolumeData {
	struct USentryHotZoneBoxComponent* HotZoneBoxComponent; // 0x00(0x08)
};

// ScriptStruct ConZ.SentryCombatBehaviorMode
// Size: 0x20 (Inherited: 0x00)
struct FSentryCombatBehaviorMode {
	float CombatVariationWeights[0x5]; // 0x00(0x14)
	float GrenadeLaunchVariationWeights[0x3]; // 0x14(0x0c)
};

// ScriptStruct ConZ.SentryMeleeAttackDescription
// Size: 0x10 (Inherited: 0x00)
struct FSentryMeleeAttackDescription {
	struct UAnimMontage* AttackAnimation; // 0x00(0x08)
	float EnemyAngleMin; // 0x08(0x04)
	float EnemyAngleMax; // 0x0c(0x04)
};

// ScriptStruct ConZ.SentryPatrolPoint
// Size: 0x20 (Inherited: 0x00)
struct FSentryPatrolPoint {
	struct FVector LocationRelativeToSentry; // 0x00(0x0c)
	char pad_C[0x14]; // 0x0c(0x14)
};

// ScriptStruct ConZ.ServerInfo
// Size: 0x50 (Inherited: 0x00)
struct FServerInfo {
	struct FString Address; // 0x00(0x10)
	int32_t Port; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Name; // 0x18(0x10)
	char PlayerCount; // 0x28(0x01)
	char MaxPlayerCount; // 0x29(0x01)
	char AverageFPS; // 0x2a(0x01)
	bool PasswordProtected; // 0x2b(0x01)
	float Ping; // 0x2c(0x04)
	float InGameTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString Version; // 0x38(0x10)
	char pad_48[0x1]; // 0x48(0x01)
	bool IsOfficial; // 0x49(0x01)
	bool IsComplete; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
};

// ScriptStruct ConZ.PriceUpdateData
// Size: 0x90 (Inherited: 0x00)
struct FPriceUpdateData {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct ConZ.DamageMultipliers
// Size: 0x18 (Inherited: 0x00)
struct FDamageMultipliers {
	struct AActor* DamageCauserClass; // 0x00(0x08)
	struct TArray<struct FMultiplierByClass> DamageMultipliers; // 0x08(0x10)
};

// ScriptStruct ConZ.MultiplierByClass
// Size: 0x10 (Inherited: 0x00)
struct FMultiplierByClass {
	struct UObject* ObjectClass; // 0x00(0x08)
	float Multiplier; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ConZ.ProjectileImpulseMultiplier
// Size: 0x10 (Inherited: 0x00)
struct FProjectileImpulseMultiplier {
	struct AActor* ActorClass; // 0x00(0x08)
	float Multiplier; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ConZ.SkillEventWeapon
// Size: 0x01 (Inherited: 0x00)
struct FSkillEventWeapon {
	enum class EWeaponCategory WeaponCategory; // 0x00(0x01)
};

// ScriptStruct ConZ.SkillEventWeaponClearedMalfunction
// Size: 0x02 (Inherited: 0x01)
struct FSkillEventWeaponClearedMalfunction : FSkillEventWeapon {
	enum class EWeaponMalfunction malfunction; // 0x01(0x01)
};

// ScriptStruct ConZ.SkillEventWeaponProjectileHitTarget
// Size: 0x28 (Inherited: 0x01)
struct FSkillEventWeaponProjectileHitTarget : FSkillEventWeapon {
	char pad_1[0x7]; // 0x01(0x07)
	struct AActor* Target; // 0x08(0x08)
	float Distance; // 0x10(0x04)
	float EnergyRatio; // 0x14(0x04)
	bool IsHeadShot; // 0x18(0x01)
	bool IsKill; // 0x19(0x01)
	bool WasSniping; // 0x1a(0x01)
	enum class EPrisonerGroundStance stance; // 0x1b(0x01)
	enum class EWindSpeedCategory WindSpeedCategory; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float ExperienceMultiplier; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ConZ.SkillEventWeaponReload
// Size: 0x01 (Inherited: 0x01)
struct FSkillEventWeaponReload : FSkillEventWeapon {
};

// ScriptStruct ConZ.SkillEventWeaponFireShot
// Size: 0x01 (Inherited: 0x01)
struct FSkillEventWeaponFireShot : FSkillEventWeapon {
};

// ScriptStruct ConZ.SkillRecord
// Size: 0x20 (Inherited: 0x00)
struct FSkillRecord {
	enum class ESkillReplicationID ID; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ExperiencePoints; // 0x04(0x04)
	enum class ESkillLevel Level; // 0x08(0x01)
	int8_t Counter; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<char> SkillSpecificData; // 0x10(0x10)
};

// ScriptStruct ConZ.SliderWithLabelAndNumberStyle
// Size: 0x158 (Inherited: 0x00)
struct FSliderWithLabelAndNumberStyle {
	struct FSlateBrush FocusBackgroundImage; // 0x00(0x88)
	struct FSliderWithLabelAndNumberTextStyle LabelText; // 0x88(0x68)
	struct FSliderWithLabelAndNumberTextStyle NumberText; // 0xf0(0x68)
};

// ScriptStruct ConZ.SliderWithLabelAndNumberTextStyle
// Size: 0x68 (Inherited: 0x00)
struct FSliderWithLabelAndNumberTextStyle {
	struct FSlateFontInfo Font; // 0x00(0x58)
	struct FLinearColor ColorAndOpacity; // 0x58(0x10)
};

// ScriptStruct ConZ.SmokableSubstance
// Size: 0x10 (Inherited: 0x00)
struct FSmokableSubstance {
	struct UPrisonerBodyCondition_InhalationPoisoning* InhalationPoisoningType; // 0x00(0x08)
	float Amount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ConZ.SnipingSkillExperienceAwards
// Size: 0x34 (Inherited: 0x00)
struct FSnipingSkillExperienceAwards {
	float PointsPerShotDistance; // 0x00(0x04)
	float PointsPerSubsequentHit; // 0x04(0x04)
	float PointsForKillUnderDistanceLimit; // 0x08(0x04)
	float PointsForHeadshotUnderDistanceLimit; // 0x0c(0x04)
	float PointsForHit; // 0x10(0x04)
	float PointsForKill; // 0x14(0x04)
	float PointsForHeadshot; // 0x18(0x04)
	float PointsForLowWindSpeed; // 0x1c(0x04)
	float PointsForMediumWindSpeed; // 0x20(0x04)
	float PointsForHighWindSpeed; // 0x24(0x04)
	float PointsForProne; // 0x28(0x04)
	float PointsForCrouching; // 0x2c(0x04)
	float PointsForStanding; // 0x30(0x04)
};

// ScriptStruct ConZ.ParticleCollisionDecalData
// Size: 0x18 (Inherited: 0x00)
struct FParticleCollisionDecalData {
	struct UMaterialInterface* Decal; // 0x00(0x08)
	float MinSize; // 0x08(0x04)
	float MaxSize; // 0x0c(0x04)
	float MinLifetime; // 0x10(0x04)
	float MaxLifetime; // 0x14(0x04)
};

// ScriptStruct ConZ.SquadLeaveInfo
// Size: 0x10 (Inherited: 0x00)
struct FSquadLeaveInfo {
	struct FDateTime LastProbationStartTimestamp; // 0x00(0x08)
	char LastProbationSquadSize; // 0x08(0x01)
	char LastPenaltySquadSize; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct ConZ.StartLocationDescription
// Size: 0x50 (Inherited: 0x00)
struct FStartLocationDescription {
	char TypeFlags; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FTransform Transform; // 0x10(0x30)
	bool IsDisabled; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)
};

// ScriptStruct ConZ.StealthSkillExperienceAwards
// Size: 0x08 (Inherited: 0x00)
struct FStealthSkillExperienceAwards {
	float PointsForCrouchedMovementPerSecond; // 0x00(0x04)
	float PointsForProneMovementPerSecond; // 0x04(0x04)
};

// ScriptStruct ConZ.CompassSkillParametersPerSkillLevel
// Size: 0x01 (Inherited: 0x00)
struct FCompassSkillParametersPerSkillLevel {
	char CompassSkillLevel; // 0x00(0x01)
};

// ScriptStruct ConZ.SurvivalStats
// Size: 0x190 (Inherited: 0x00)
struct FSurvivalStats {
	char pad_0[0x8]; // 0x00(0x08)
	float HighestPositiveFamePoints; // 0x08(0x04)
	int32_t DoorsClaimed; // 0x0c(0x04)
	int32_t AnimalsKilled; // 0x10(0x04)
	float MinutesSurvived; // 0x14(0x04)
	int32_t Kills; // 0x18(0x04)
	int32_t Deaths; // 0x1c(0x04)
	int32_t LocksPicked; // 0x20(0x04)
	int32_t PuppetsKilled; // 0x24(0x04)
	int32_t GunsCrafted; // 0x28(0x04)
	int32_t AmmoCrafted; // 0x2c(0x04)
	int32_t BulletsCrafted; // 0x30(0x04)
	int32_t ArrowsCrafted; // 0x34(0x04)
	int32_t ClothingCrafted; // 0x38(0x04)
	float LongestKillDistance; // 0x3c(0x04)
	int32_t MeleeKills; // 0x40(0x04)
	int32_t ArcheryKills; // 0x44(0x04)
	int32_t PlayersKnockedOut; // 0x48(0x04)
	int32_t TotalDefecations; // 0x4c(0x04)
	int32_t TotalUrinations; // 0x50(0x04)
	int32_t LightsFired; // 0x54(0x04)
	int32_t ContainersLooted; // 0x58(0x04)
	int32_t ItemsPutIntoContainers; // 0x5c(0x04)
	int32_t DeathsByPrisoners; // 0x60(0x04)
	int32_t AnimalsSkinned; // 0x64(0x04)
	float FoodEaten; // 0x68(0x04)
	float DistanceTravelledByFoot; // 0x6c(0x04)
	int32_t WoundsPatched; // 0x70(0x04)
	int32_t ItemsPickedUp; // 0x74(0x04)
	float LiquidDrank; // 0x78(0x04)
	int32_t TeethLost; // 0x7c(0x04)
	int32_t TotalCaloriesIntake; // 0x80(0x04)
	int32_t ShotsFired; // 0x84(0x04)
	int32_t ShotsHit; // 0x88(0x04)
	float RangeWeaponAccuracy; // 0x8c(0x04)
	int32_t Headshots; // 0x90(0x04)
	int32_t MeleeWeaponSwings; // 0x94(0x04)
	int32_t MeleeWeaponHits; // 0x98(0x04)
	float MeleeWeaponAccuracy; // 0x9c(0x04)
	int32_t MeleeWeaponsCrafted; // 0xa0(0x04)
	int32_t DroneKills; // 0xa4(0x04)
	int32_t SentryKills; // 0xa8(0x04)
	int32_t PrisonerKills; // 0xac(0x04)
	int32_t PuppetsKnockedOut; // 0xb0(0x04)
	int32_t Diarrheas; // 0xb4(0x04)
	int32_t Vomits; // 0xb8(0x04)
	float DistanceTravelledInVehicle; // 0xbc(0x04)
	int32_t MushroomsEaten; // 0xc0(0x04)
	float HighestMuscleMass; // 0xc4(0x04)
	float HighestFat; // 0xc8(0x04)
	int32_t HeartAttacks; // 0xcc(0x04)
	int32_t Overdose; // 0xd0(0x04)
	int32_t Starvation; // 0xd4(0x04)
	float HighestDamageTaken; // 0xd8(0x04)
	float HighestWeightCarried; // 0xdc(0x04)
	int32_t EventsWon; // 0xe0(0x04)
	int32_t EventsLost; // 0xe4(0x04)
	float LowestNegativeFamePoints; // 0xe8(0x04)
	float DistanceTravelledSwimming; // 0xec(0x04)
	int32_t EventsEnemyKills; // 0xf0(0x04)
	int32_t EventsDeaths; // 0xf4(0x04)
	int32_t FlagCaptures; // 0xf8(0x04)
	int32_t CrowsKilled; // 0xfc(0x04)
	int32_t SeagullsKilled; // 0x100(0x04)
	int32_t HorsesKilled; // 0x104(0x04)
	int32_t BoarsKilled; // 0x108(0x04)
	int32_t BearsKilled; // 0x10c(0x04)
	int32_t GoatsKilled; // 0x110(0x04)
	int32_t DeersKilled; // 0x114(0x04)
	int32_t ChickensKilled; // 0x118(0x04)
	int32_t RabbitsKilled; // 0x11c(0x04)
	int32_t DonkeysKilled; // 0x120(0x04)
	int32_t WolvesKilled; // 0x124(0x04)
	int32_t TimesMauledByABear; // 0x128(0x04)
	float LongestAnimalKillDistance; // 0x12c(0x04)
	int32_t EventTeamKills; // 0x130(0x04)
	float KillDeathRatio; // 0x134(0x04)
	float EventsKillDeathRatio; // 0x138(0x04)
	float AlcoholDrank; // 0x13c(0x04)
	int32_t FoliageCut; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FFishingStats FishingStats; // 0x148(0x28)
	float DistanceTravelledByBoat; // 0x170(0x04)
	float DistanceSailed; // 0x174(0x04)
	int32_t TimesCaughtByShark; // 0x178(0x04)
	int32_t TimesEscapedSharkBite; // 0x17c(0x04)
	int32_t LastFamePointAwardConsecutiveDays; // 0x180(0x04)
	int32_t FirearmKills; // 0x184(0x04)
	int32_t BareHandedKills; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
};

// ScriptStruct ConZ.FishingStats
// Size: 0x28 (Inherited: 0x00)
struct FFishingStats {
	int32_t FishCaught; // 0x00(0x04)
	int32_t FishKept; // 0x04(0x04)
	int32_t FishReleased; // 0x08(0x04)
	int32_t LinesBroken; // 0x0c(0x04)
	float HeaviestFishCaught; // 0x10(0x04)
	float LongestFishCaught; // 0x14(0x04)
	struct TArray<struct FCaughtFishData> FishSpeciesCaught; // 0x18(0x10)
};

// ScriptStruct ConZ.CaughtFishData
// Size: 0x08 (Inherited: 0x00)
struct FCaughtFishData {
	enum class EFishSpecies fishSpecies; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Amount; // 0x04(0x04)
};

// ScriptStruct ConZ.TipAndItems
// Size: 0x30 (Inherited: 0x00)
struct FTipAndItems {
	struct FName SurvivalTip; // 0x00(0x08)
	struct TArray<struct TSoftClassPtr<UObject>> NeededItemsClasses; // 0x08(0x10)
	bool AllowChildClassesToMatch; // 0x18(0x01)
	char pad_19[0x17]; // 0x19(0x17)
};

// ScriptStruct ConZ.SurvivalTipData
// Size: 0x30 (Inherited: 0x08)
struct FSurvivalTipData : FTableRowBase {
	struct FText Text; // 0x08(0x18)
	struct FName DeenaDialogueName; // 0x20(0x08)
	float Duration; // 0x28(0x04)
	char Priority; // 0x2c(0x01)
	enum class ESurvivalTipLevel Level; // 0x2d(0x01)
	enum class ESurvivalTipCodexCategory Category; // 0x2e(0x01)
	char pad_2F[0x1]; // 0x2f(0x01)
};

// ScriptStruct ConZ.SwitchMaterialEmissiveColorProperties
// Size: 0x2c (Inherited: 0x00)
struct FSwitchMaterialEmissiveColorProperties {
	struct FLinearColor OnEmissiveColor; // 0x00(0x10)
	struct FLinearColor OffEmissiveColor; // 0x10(0x10)
	int32_t EmissiveMaterialIndex; // 0x20(0x04)
	struct FName EmissiveColorPropertyName; // 0x24(0x08)
};

// ScriptStruct ConZ.ConZWeaponDescRow
// Size: 0x38 (Inherited: 0x08)
struct FConZWeaponDescRow : FTableRowBase {
	float Damage; // 0x08(0x04)
	float DamageInGameEvent; // 0x0c(0x04)
	struct FTargetTypeDamageMultiplier TargetTypeMultiplier; // 0x10(0x10)
	float Energy; // 0x20(0x04)
	float SharpnessSlash; // 0x24(0x04)
	float SharpnessPierce; // 0x28(0x04)
	enum class ECharacterImpactSourceSoundCategory ImpactSoundCategory; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct UProjectileImpactEffects* ImpactEffects; // 0x30(0x08)
};

// ScriptStruct ConZ.ConZConsoleVariableRow
// Size: 0x28 (Inherited: 0x08)
struct FConZConsoleVariableRow : FTableRowBase {
	struct FString ConsoleVariable; // 0x08(0x10)
	struct FString Description; // 0x18(0x10)
};

// ScriptStruct ConZ.ConZDimensionRow
// Size: 0x20 (Inherited: 0x08)
struct FConZDimensionRow : FTableRowBase {
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Description; // 0x10(0x10)
};

// ScriptStruct ConZ.ConZFontRow
// Size: 0x70 (Inherited: 0x08)
struct FConZFontRow : FTableRowBase {
	struct FSlateFontInfo Font; // 0x08(0x58)
	struct FString Description; // 0x60(0x10)
};

// ScriptStruct ConZ.ConZColorRow
// Size: 0x28 (Inherited: 0x08)
struct FConZColorRow : FTableRowBase {
	struct FLinearColor Color; // 0x08(0x10)
	struct FString Description; // 0x18(0x10)
};

// ScriptStruct ConZ.ItemFirstPersonUpperBodyAnimationsData
// Size: 0x50 (Inherited: 0x00)
struct FItemFirstPersonUpperBodyAnimationsData {
	struct UAnimSequenceBase* StandIdle; // 0x00(0x08)
	struct UBlendSpace1D* StandWalk; // 0x08(0x08)
	struct UBlendSpace1D* StandWalkLimping; // 0x10(0x08)
	struct UBlendSpace1D* StandJog; // 0x18(0x08)
	struct UBlendSpace1D* StandJogLimping; // 0x20(0x08)
	struct UAnimSequenceBase* StandRun; // 0x28(0x08)
	struct UAnimSequenceBase* CrouchIdle; // 0x30(0x08)
	struct UBlendSpace1D* CrouchWalk; // 0x38(0x08)
	struct UBlendSpace1D* CrouchWalkLimping; // 0x40(0x08)
	struct UAnimSequenceBase* ProneIdle; // 0x48(0x08)
};

// ScriptStruct ConZ.HandsPoseCorrections
// Size: 0x40 (Inherited: 0x00)
struct FHandsPoseCorrections {
	struct UAnimSequenceBase* RightHand; // 0x00(0x08)
	struct UAnimSequenceBase* RightFist; // 0x08(0x08)
	struct UAnimSequenceBase* RightFistInCombatMode; // 0x10(0x08)
	float RightHandToIdleBlendAlpha; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UAnimSequenceBase* LeftHand; // 0x20(0x08)
	struct UAnimSequenceBase* LeftFist; // 0x28(0x08)
	struct UAnimSequenceBase* LeftFistInCombatMode; // 0x30(0x08)
	float LeftHandToIdleBlendAlpha; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ConZ.TeamDeathmatchParameters
// Size: 0x14 (Inherited: 0x00)
struct FTeamDeathmatchParameters {
	int32_t RoundScoreLimit; // 0x00(0x04)
	float AreaRestrictionInterval; // 0x04(0x04)
	float AreaRestrictionDuration; // 0x08(0x04)
	float AreaRestrictionStep; // 0x0c(0x04)
	float BarrierHeatUpDuration; // 0x10(0x04)
};

// ScriptStruct ConZ.TeleportRepData
// Size: 0x30 (Inherited: 0x00)
struct FTeleportRepData {
	char RequestID; // 0x00(0x01)
	bool IsInProgress; // 0x01(0x01)
	bool IsRespawn; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct TWeakObjectPtr<struct AActor> Subject; // 0x04(0x08)
	struct FVector TargetLocation; // 0x0c(0x0c)
	struct FRotator TargetRotation; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct FTeleportUserDataReplicator UserDataReplicator; // 0x28(0x08)
};

// ScriptStruct ConZ.TeleportUserDataReplicator
// Size: 0x08 (Inherited: 0x00)
struct FTeleportUserDataReplicator {
	struct UTeleportUserData* UserData; // 0x00(0x08)
};

// ScriptStruct ConZ.TeleportRequest
// Size: 0x2c (Inherited: 0x00)
struct FTeleportRequest {
	struct TWeakObjectPtr<struct AActor> Subject; // 0x00(0x08)
	struct FVector TargetLocation; // 0x08(0x0c)
	struct FRotator TargetRotation; // 0x14(0x0c)
	struct TWeakObjectPtr<struct UTeleportUserData> UserData; // 0x20(0x08)
	char pad_28[0x4]; // 0x28(0x04)
};

// ScriptStruct ConZ.TextBoxWithLabelStyle
// Size: 0x158 (Inherited: 0x00)
struct FTextBoxWithLabelStyle {
	struct FSlateBrush FocusBackgroundImage; // 0x00(0x88)
	struct FTextBoxTextStyle LabelText; // 0x88(0x68)
	struct FTextBoxTextStyle InputBoxText; // 0xf0(0x68)
};

// ScriptStruct ConZ.TextBoxTextStyle
// Size: 0x68 (Inherited: 0x00)
struct FTextBoxTextStyle {
	struct FSlateFontInfo Font; // 0x00(0x58)
	struct FLinearColor ColorAndOpacity; // 0x58(0x10)
};

// ScriptStruct ConZ.ThrowingAnimationSet
// Size: 0x20 (Inherited: 0x00)
struct FThrowingAnimationSet {
	struct UAnimMontage* PlayerLongThrowMontage; // 0x00(0x08)
	struct UAnimMontage* PlayerLongThrowLoopMontage; // 0x08(0x08)
	struct UAnimMontage* PlayerShortThrowMontage; // 0x10(0x08)
	struct UAnimMontage* PlayerThrowbackMontage; // 0x18(0x08)
};

// ScriptStruct ConZ.TireSurfaceAudioEntry
// Size: 0x18 (Inherited: 0x00)
struct FTireSurfaceAudioEntry {
	struct UAkAudioEvent* SoundGroup; // 0x00(0x08)
	struct TArray<enum class EPhysicalSurface> RelatedPhysicalSurfaces; // 0x08(0x10)
};

// ScriptStruct ConZ.TournamentStats
// Size: 0x30 (Inherited: 0x00)
struct FTournamentStats {
	struct FDbIntegerId UserProfileId; // 0x00(0x08)
	struct FString PlayerName; // 0x08(0x10)
	bool Online; // 0x18(0x01)
	bool Alive; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	int32_t FamePoints; // 0x1c(0x04)
	int32_t Kills; // 0x20(0x04)
	int32_t Deaths; // 0x24(0x04)
	struct FDateTime LastDeathTime; // 0x28(0x08)
};

// ScriptStruct ConZ.TournamentParameters
// Size: 0x10 (Inherited: 0x00)
struct FTournamentParameters {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ConZ.TrackingDataSet
// Size: 0x30 (Inherited: 0x00)
struct FTrackingDataSet {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct ConZ.TradeOutpostManagerDescription
// Size: 0xb8 (Inherited: 0x00)
struct FTradeOutpostManagerDescription {
	char pad_0[0xb8]; // 0x00(0xb8)
};

// ScriptStruct ConZ.SpawnedDepotsHelperStruct
// Size: 0x58 (Inherited: 0x00)
struct FSpawnedDepotsHelperStruct {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct ConZ.TraderDropdownMenuEntry
// Size: 0x50 (Inherited: 0x00)
struct FTraderDropdownMenuEntry {
	struct FText Title; // 0x00(0x18)
	int32_t IndentationLevel; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FGameplayTagContainer TradeCategories; // 0x20(0x20)
	struct UUserWidget* RelatedCategoryButton; // 0x40(0x08)
	struct UPanelWidget* PanelToOpenOnClick; // 0x48(0x08)
};

// ScriptStruct ConZ.TraderLocationMarker
// Size: 0x40 (Inherited: 0x00)
struct FTraderLocationMarker {
	enum class ETraderLocationMarkerType MarkerType; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct ConZ.TraderMarker
// Size: 0xd0 (Inherited: 0x70)
struct FTraderMarker : FSedentaryNPCMarker {
	struct UTraderPersonalityDataAsset* TraderPersonality; // 0x68(0x08)
	struct FTransform PurchasedTradeablesSpawnTransform; // 0x70(0x30)
	struct FTransform DepotSpawnTransform; // 0xa0(0x30)
};

// ScriptStruct ConZ.TraderMarkerTradeableOverrideStruct
// Size: 0x48 (Inherited: 0x00)
struct FTraderMarkerTradeableOverrideStruct {
	struct TSoftClassPtr<UObject> TradeableClass; // 0x00(0x28)
	int32_t BasePlayerPurchasePrice; // 0x28(0x04)
	enum class ECurrencyType PurchaseCurrencyType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t PurchasePriceAlternateCurrencyPrice; // 0x30(0x04)
	int32_t BasePlayerSellPrice; // 0x34(0x04)
	float DeltaPrice; // 0x38(0x04)
	bool IsOverridingPurchaseAbility; // 0x3c(0x01)
	bool CanBePurchasedByPlayer; // 0x3d(0x01)
	bool IsLocallyImmuneToUserOverrides; // 0x3e(0x01)
	char pad_3F[0x1]; // 0x3f(0x01)
	int32_t RequiredFamePoints; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ConZ.TradeableClassAndQuantity
// Size: 0x20 (Inherited: 0x00)
struct FTradeableClassAndQuantity {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ConZ.PendingTraderPersonalityDataHelperStruct
// Size: 0x18 (Inherited: 0x00)
struct FPendingTraderPersonalityDataHelperStruct {
	char pad_0[0x10]; // 0x00(0x10)
	struct UTraderPersonalityDataAsset* Personality; // 0x10(0x08)
};

// ScriptStruct ConZ.EconomyManagerRequestData
// Size: 0xb0 (Inherited: 0x00)
struct FEconomyManagerRequestData {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct ConZ.TradeablesResponseData
// Size: 0x40 (Inherited: 0x00)
struct FTradeablesResponseData {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct ConZ.ConZTradeableDescRow
// Size: 0x158 (Inherited: 0x08)
struct FConZTradeableDescRow : FTableRowBase {
	struct TSoftClassPtr<UObject> TradeableClass; // 0x08(0x28)
	bool CanBePurchasedByPlayer; // 0x30(0x01)
	bool CanBeSoldByPlayer; // 0x31(0x01)
	enum class ETradeCategory TradeCategory; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
	struct TSet<enum class ETraderType> TraderTypes; // 0x38(0x50)
	float BasePurchasePriceModifier; // 0x88(0x04)
	float BaseSalePriceReductionModifier; // 0x8c(0x04)
	enum class ECurrencyType PurchaseCurrencyType; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	int32_t AlternateCurrencyPurchasePrice; // 0x94(0x04)
	enum class ETradeableSpawnType SpawnType; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FText TradingEntryCaption; // 0xa0(0x18)
	struct TSoftObjectPtr<UTexture2D> TradingEntryIconTexture; // 0xb8(0x28)
	int32_t MaxAmountPurchasedAtOnce; // 0xe0(0x04)
	bool IsStockAmountUnlimited; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct FGameplayTag TradeableFamePointPenaltyGroup; // 0xe8(0x08)
	int32_t RequiredFamePoints; // 0xf0(0x04)
	struct FGameplayTag TradeableRotationRarity; // 0xf4(0x08)
	bool OnlyAvailableAfterPlayerSale; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	int32_t CustomStockAmountMin; // 0x100(0x04)
	int32_t CustomStockAmountMax; // 0x104(0x04)
	struct UTradeableDiscountCondition* TradeableDiscountCondition; // 0x108(0x08)
	struct FGameplayTagContainer TraderSearchTypes; // 0x110(0x20)
	struct FGameplayTagContainer TraderSearchRelated; // 0x130(0x20)
	bool IsImmuneToUserOverrides; // 0x150(0x01)
	enum class EDeluxeVersion RequiredDLC; // 0x151(0x01)
	char pad_152[0x6]; // 0x152(0x06)
};

// ScriptStruct ConZ.TradeOutpostProsperityLevelInfo
// Size: 0x28 (Inherited: 0x00)
struct FTradeOutpostProsperityLevelInfo {
	struct FString ProsperityLevelName; // 0x00(0x10)
	float ProsperityLevelThreshold; // 0x10(0x04)
	float FundsChangeRatePerHour; // 0x14(0x04)
	int32_t ProsperityLevelThresholdGold; // 0x18(0x04)
	float GBCRefreshRatePerHour; // 0x1c(0x04)
	float GSCRefreshRatePerHour; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ConZ.TradeableClassDataOverrideReplicationHelper
// Size: 0x70 (Inherited: 0x00)
struct FTradeableClassDataOverrideReplicationHelper {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct ConZ.PerTraderOverrideDataHelper
// Size: 0x70 (Inherited: 0x00)
struct FPerTraderOverrideDataHelper {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct ConZ.TradeableOverrideData
// Size: 0x1c (Inherited: 0x00)
struct FTradeableOverrideData {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct ConZ.TraderRuntimeId
// Size: 0x0c (Inherited: 0x00)
struct FTraderRuntimeId {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct ConZ.LegalTender
// Size: 0x08 (Inherited: 0x00)
struct FLegalTender {
	int32_t Amount; // 0x00(0x04)
	enum class ECurrencyType Currency; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ConZ.TrapTriggerParams
// Size: 0x10 (Inherited: 0x00)
struct FTrapTriggerParams {
	struct AActor* TriggeredActor; // 0x00(0x08)
	float DeltaTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ConZ.TurretPaintjobPatternParams
// Size: 0x30 (Inherited: 0x00)
struct FTurretPaintjobPatternParams {
	struct FText Name; // 0x00(0x18)
	struct UTexture2D* Texture; // 0x18(0x08)
	int32_t ColorCount; // 0x20(0x04)
	float ScaleMultiplier; // 0x24(0x04)
	enum class EDeluxeVersion DeluxeVersionRequired; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ConZ.CountedAmmunitionData
// Size: 0x38 (Inherited: 0x00)
struct FCountedAmmunitionData {
	struct TSoftClassPtr<UObject> AmmunitionItemClass; // 0x00(0x28)
	float health; // 0x28(0x04)
	float MaxHealth; // 0x2c(0x04)
	enum class EAmmunitionCartridgeState State; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t Count; // 0x34(0x04)
};

// ScriptStruct ConZ.QuestUISounds
// Size: 0x58 (Inherited: 0x00)
struct FQuestUISounds {
	struct UAkAudioEvent* QuestHover; // 0x00(0x08)
	struct UAkAudioEvent* QuestZoomIn; // 0x08(0x08)
	struct UAkAudioEvent* AcceptQuest; // 0x10(0x08)
	struct UAkAudioEvent* AcceptQuestFailed; // 0x18(0x08)
	struct UAkAudioEvent* QuestCompleted; // 0x20(0x08)
	struct UAkAudioEvent* QuestStepCompleted; // 0x28(0x08)
	struct UAkAudioEvent* QuestFailed; // 0x30(0x08)
	struct UAkAudioEvent* OpenQuestDetails; // 0x38(0x08)
	struct UAkAudioEvent* FlipQuestBookPage; // 0x40(0x08)
	struct UAkAudioEvent* OpenQuestBook; // 0x48(0x08)
	struct UAkAudioEvent* CloseQuestBook; // 0x50(0x08)
};

// ScriptStruct ConZ.SettingsUISounds
// Size: 0x50 (Inherited: 0x00)
struct FSettingsUISounds {
	struct UAkAudioEvent* CarouselSelectionClick; // 0x00(0x08)
	struct UAkAudioEvent* CarouselHover; // 0x08(0x08)
	struct UAkAudioEvent* SliderIncrement; // 0x10(0x08)
	struct UAkAudioEvent* SliderDecrement; // 0x18(0x08)
	struct UAkAudioEvent* SliderHover; // 0x20(0x08)
	struct UAkAudioEvent* ControlMappingClick; // 0x28(0x08)
	struct UAkAudioEvent* ControlMappingHover; // 0x30(0x08)
	struct UAkAudioEvent* TextBoxFocusReceived; // 0x38(0x08)
	struct UAkAudioEvent* TextBoxTextInput; // 0x40(0x08)
	struct UAkAudioEvent* TextBoxHover; // 0x48(0x08)
};

// ScriptStruct ConZ.EventsUISounds
// Size: 0x10 (Inherited: 0x00)
struct FEventsUISounds {
	struct UAkAudioEvent* EventSelectionCollapseExpandToggleClick; // 0x00(0x08)
	struct UAkAudioEvent* EventSelectionClick; // 0x08(0x08)
};

// ScriptStruct ConZ.SquadUISounds
// Size: 0x18 (Inherited: 0x00)
struct FSquadUISounds {
	struct UAkAudioEvent* CreateSquadClick; // 0x00(0x08)
	struct UAkAudioEvent* EditSquadClick; // 0x08(0x08)
	struct UAkAudioEvent* LeaveSquadClick; // 0x10(0x08)
};

// ScriptStruct ConZ.ManualUISounds
// Size: 0x18 (Inherited: 0x00)
struct FManualUISounds {
	struct UAkAudioEvent* CategoryCollapseExpandToggleClick; // 0x00(0x08)
	struct UAkAudioEvent* CodexEntryClick; // 0x08(0x08)
	struct UAkAudioEvent* TaskEntryClick; // 0x10(0x08)
};

// ScriptStruct ConZ.JournalUISounds
// Size: 0x28 (Inherited: 0x00)
struct FJournalUISounds {
	struct UAkAudioEvent* QuestEntryClick; // 0x00(0x08)
	struct UAkAudioEvent* QuestEntryHover; // 0x08(0x08)
	struct UAkAudioEvent* TrackQuest; // 0x10(0x08)
	struct UAkAudioEvent* UntrackQuest; // 0x18(0x08)
	struct UAkAudioEvent* AbandonQuest; // 0x20(0x08)
};

// ScriptStruct ConZ.CookingUISounds
// Size: 0x18 (Inherited: 0x00)
struct FCookingUISounds {
	struct UAkAudioEvent* AddRecipeClick; // 0x00(0x08)
	struct UAkAudioEvent* DetailsButtonClick; // 0x08(0x08)
	struct UAkAudioEvent* BackButtonClick; // 0x10(0x08)
};

// ScriptStruct ConZ.BaseBuildingUISounds
// Size: 0x18 (Inherited: 0x00)
struct FBaseBuildingUISounds {
	struct UAkAudioEvent* PlaceButtonClick; // 0x00(0x08)
	struct UAkAudioEvent* DetailsButtonClick; // 0x08(0x08)
	struct UAkAudioEvent* BackButtonClick; // 0x10(0x08)
};

// ScriptStruct ConZ.ItemsCraftingUISounds
// Size: 0x20 (Inherited: 0x00)
struct FItemsCraftingUISounds {
	struct UAkAudioEvent* CraftButtonClick; // 0x00(0x08)
	struct UAkAudioEvent* AutoCraftButtonClick; // 0x08(0x08)
	struct UAkAudioEvent* DetailsButtonClick; // 0x10(0x08)
	struct UAkAudioEvent* BackButtonClick; // 0x18(0x08)
};

// ScriptStruct ConZ.TraderUISounds
// Size: 0x18 (Inherited: 0x00)
struct FTraderUISounds {
	struct UAkAudioEvent* ExitButtonClick; // 0x00(0x08)
	struct UAkAudioEvent* BackButtonClick; // 0x08(0x08)
	struct UAkAudioEvent* CartButtonClick; // 0x10(0x08)
};

// ScriptStruct ConZ.BankATMUISounds
// Size: 0x20 (Inherited: 0x00)
struct FBankATMUISounds {
	struct UAkAudioEvent* ButtonClick; // 0x00(0x08)
	struct UAkAudioEvent* ButtonHover; // 0x08(0x08)
	struct UAkAudioEvent* TransactionFailed; // 0x10(0x08)
	struct UAkAudioEvent* TransactionSuccessful; // 0x18(0x08)
};

// ScriptStruct ConZ.NotificationUISounds
// Size: 0x10 (Inherited: 0x00)
struct FNotificationUISounds {
	struct UAkAudioEvent* PlayerKillIndicator; // 0x00(0x08)
	struct UAkAudioEvent* DialogueInterruptIndicator; // 0x08(0x08)
};

// ScriptStruct ConZ.GenericUISounds
// Size: 0x40 (Inherited: 0x00)
struct FGenericUISounds {
	struct UAkAudioEvent* StopDeena; // 0x00(0x08)
	struct UAkAudioEvent* ButtonClick; // 0x08(0x08)
	struct UAkAudioEvent* ButtonHover; // 0x10(0x08)
	struct UAkAudioEvent* TabMenuTabClick; // 0x18(0x08)
	struct UAkAudioEvent* TabMenuSubtabClick; // 0x20(0x08)
	struct UAkAudioEvent* TabMenuCategoryTabClick; // 0x28(0x08)
	struct UAkAudioEvent* FilterClick; // 0x30(0x08)
	struct UAkAudioEvent* DropdownCollapseExpandToggleClick; // 0x38(0x08)
};

// ScriptStruct ConZ.TabTextStyle
// Size: 0x98 (Inherited: 0x00)
struct FTabTextStyle {
	struct FMargin Padding; // 0x00(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x10(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct FSlateFontInfo Font; // 0x18(0x58)
	struct FLinearColor Color; // 0x70(0x10)
	struct FVector2D ShadowOffset; // 0x80(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x88(0x10)
};

// ScriptStruct ConZ.TabButtonStyle
// Size: 0x288 (Inherited: 0x00)
struct FTabButtonStyle {
	struct FVector2D Size; // 0x00(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x08(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FButtonStyle ButtonStyle; // 0x10(0x278)
};

// ScriptStruct ConZ.ItemUnpackingSpawnedItem
// Size: 0x18 (Inherited: 0x00)
struct FItemUnpackingSpawnedItem {
	struct AItem* ItemClass; // 0x00(0x08)
	enum class EUnpackedItemCountType CountType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Count; // 0x0c(0x04)
	struct UItemUnpackingSpawnMethod* CustomSpawnMethod; // 0x10(0x08)
};

// ScriptStruct ConZ.UserProfileAuthorityInfo
// Size: 0x40 (Inherited: 0x00)
struct FUserProfileAuthorityInfo {
	struct FString Name; // 0x00(0x10)
	struct FString Ip; // 0x10(0x10)
	int32_t ResponsePort; // 0x20(0x04)
	int32_t GameplayPort; // 0x24(0x04)
	struct FDbIntegerId UserProfileId; // 0x28(0x08)
	struct FString AuthToken; // 0x30(0x10)
};

// ScriptStruct ConZ.UserServerHistoryItem
// Size: 0x28 (Inherited: 0x00)
struct FUserServerHistoryItem {
	struct FString Name; // 0x00(0x10)
	struct FString Host; // 0x10(0x10)
	int32_t Port; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ConZ.VehicleInfo
// Size: 0x60 (Inherited: 0x00)
struct FVehicleInfo {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct ConZ.VehicleAttachmentDestructionEffect
// Size: 0x28 (Inherited: 0x00)
struct FVehicleAttachmentDestructionEffect {
	struct TArray<struct FVehicleAttachmentDestructionEffectMesh> DestructionMeshes; // 0x00(0x10)
	struct TArray<struct FVehicleAttachmentDestructionEffectParticle> DestructionParticles; // 0x10(0x10)
	float MeshesLifetime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ConZ.VehicleAttachmentDestructionEffectParticle
// Size: 0x40 (Inherited: 0x00)
struct FVehicleAttachmentDestructionEffectParticle {
	struct UParticleSystem* ParticleEffect; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Offset; // 0x10(0x30)
};

// ScriptStruct ConZ.VehicleAttachmentDestructionEffectMesh
// Size: 0x50 (Inherited: 0x00)
struct FVehicleAttachmentDestructionEffectMesh {
	struct FSoftObjectPath Mesh; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform Offset; // 0x20(0x30)
};

// ScriptStruct ConZ.VehicleAttachmentAlternatorSetup
// Size: 0x08 (Inherited: 0x00)
struct FVehicleAttachmentAlternatorSetup {
	struct UCurveFloat* RpmChargeCurve; // 0x00(0x08)
};

// ScriptStruct ConZ.VehicleAttachmentBatterySimulationData
// Size: 0x04 (Inherited: 0x00)
struct FVehicleAttachmentBatterySimulationData {
	float CurrentCharge; // 0x00(0x04)
};

// ScriptStruct ConZ.VehicleAttachmentBatterySetup
// Size: 0x30 (Inherited: 0x00)
struct FVehicleAttachmentBatterySetup {
	struct UGameResourceType* BatteryResourceType; // 0x00(0x08)
	float Charge; // 0x08(0x04)
	float ChargingBaseDuration; // 0x0c(0x04)
	float ChargingDurationPerAmountCharged; // 0x10(0x04)
	float ExperienceAwardedPerAmountCharged; // 0x14(0x04)
	struct UAnimMontage* PrisonerChargingMontage; // 0x18(0x08)
	struct UAkAudioEvent* StartChargingAudioEvent; // 0x20(0x08)
	struct UAkAudioEvent* StopChargingAudioEvent; // 0x28(0x08)
};

// ScriptStruct ConZ.VehicleServiceItemSlot
// Size: 0x18 (Inherited: 0x00)
struct FVehicleServiceItemSlot {
	struct FName ItemLocationSocketName; // 0x00(0x08)
	struct FName AttachPointSocketName; // 0x08(0x08)
	struct FGameplayTag ServiceTag; // 0x10(0x08)
};

// ScriptStruct ConZ.VehicleAttachmentDoorSetup
// Size: 0x30 (Inherited: 0x00)
struct FVehicleAttachmentDoorSetup {
	struct FRotator OpenRotator; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FVehicleAttachmentDoorAnimationSet> DoorAnimationSets; // 0x10(0x10)
	float DestinationAcceptanceRadius; // 0x20(0x04)
	float MinDestinationAcceptanceRadius; // 0x24(0x04)
	float MaxSlopeAngleForOpen; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ConZ.VehicleAttachmentDoorAnimationSet
// Size: 0x50 (Inherited: 0x00)
struct FVehicleAttachmentDoorAnimationSet {
	struct FTransform PrisonerTransformToInteract; // 0x00(0x30)
	struct UAnimMontage* PrisonerUnmountedOpenMontage; // 0x30(0x08)
	struct UAnimMontage* PrisonerUnmountedCloseMontage; // 0x38(0x08)
	struct UAnimMontage* PrisonerMountedOpenMontage; // 0x40(0x08)
	struct UAnimMontage* PrisonerMountedCloseMontage; // 0x48(0x08)
};

// ScriptStruct ConZ.VehicleAttachmentEngineBlockSimulationData
// Size: 0x2c (Inherited: 0x00)
struct FVehicleAttachmentEngineBlockSimulationData {
	enum class EEngineBlockState State; // 0x00(0x01)
	char pad_1[0xb]; // 0x01(0x0b)
	float IgnitionDurationMultiplier; // 0x0c(0x04)
	float IgnitionFailureChance; // 0x10(0x04)
	bool StarterMotorTurnedOn; // 0x14(0x01)
	bool ShouldApplyTorque; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float CurrentRpm; // 0x18(0x04)
	float Load; // 0x1c(0x04)
	float CurrentFuelCapacity; // 0x20(0x04)
	float TargetTemperature; // 0x24(0x04)
	float CurrentTemperature; // 0x28(0x04)
};

// ScriptStruct ConZ.VehicleAttachmentEngineBlockSetup
// Size: 0x168 (Inherited: 0x00)
struct FVehicleAttachmentEngineBlockSetup {
	struct UCurveFloat* AccelerationCurve; // 0x00(0x08)
	struct UCurveFloat* TorqueCurve; // 0x08(0x08)
	float RpmMax; // 0x10(0x04)
	float RpmLimiter; // 0x14(0x04)
	float RpmIdle; // 0x18(0x04)
	float RpmRise; // 0x1c(0x04)
	float RpmFall; // 0x20(0x04)
	float RpmCrank; // 0x24(0x04)
	float FuelCapacity; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UGameResourceType* FuelResourceType; // 0x30(0x08)
	struct UCurveFloat* FuelConsumptionVsEngineRpm; // 0x38(0x08)
	struct UCurveFloat* FuelConsumptionMultiplierVsEngineLoad; // 0x40(0x08)
	struct UCurveFloat* FuelConsumptionMultiplierVsAdditionalMass; // 0x48(0x08)
	float FuelFillingBaseDuration; // 0x50(0x04)
	float FuelDrainingBaseDuration; // 0x54(0x04)
	float FillingDurationPerFuelAmountFilled; // 0x58(0x04)
	float DrainingDurationPerFuelAmountDrained; // 0x5c(0x04)
	float ExperienceAwardedPerFuelAmountFilled; // 0x60(0x04)
	float ExperienceAwardedPerFuelAmountDrained; // 0x64(0x04)
	struct UAnimMontage* PrisonerFillingFuelMontage; // 0x68(0x08)
	struct UAnimMontage* PrisonerDrainingFuelMontage; // 0x70(0x08)
	struct FGameplayTagContainer InSocketTypes; // 0x78(0x20)
	struct FGameplayTagContainer OutSocketTypes; // 0x98(0x20)
	struct UAkAudioEvent* StartFillingFuelAudioEvent; // 0xb8(0x08)
	struct UAkAudioEvent* StopFillingFuelAudioEvent; // 0xc0(0x08)
	struct UAkAudioEvent* StartFillingFuelWithReplenishableResourceAudioEvent; // 0xc8(0x08)
	struct UAkAudioEvent* StopFillingFuelWithReplenishableResourceAudioEvent; // 0xd0(0x08)
	struct UAkAudioEvent* StartDrainingFuelAudioEvent; // 0xd8(0x08)
	struct UAkAudioEvent* StopDrainingFuelAudioEvent; // 0xe0(0x08)
	struct FVector ReplenishableFillSourceOverlapBoxExtent; // 0xe8(0x0c)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct UAkAudioEvent* RunningAudioEventStart; // 0xf8(0x08)
	struct UAkAudioEvent* RunningAudioEventStop; // 0x100(0x08)
	float RTPCRpmMaxMultiplier; // 0x108(0x04)
	float RTPCRpmMinMultiplier; // 0x10c(0x04)
	float RTPCRpmMultiplier; // 0x110(0x04)
	float RTPCRpmMultiplierReverse; // 0x114(0x04)
	float WorkingTemperature; // 0x118(0x04)
	float MaxTemperature; // 0x11c(0x04)
	struct UCurveFloat* CoolantRatioToTemperatureRiseCurve; // 0x120(0x08)
	float IgnitionBatteryDrainPerSecond; // 0x128(0x04)
	float IgnitionDuration; // 0x12c(0x04)
	struct UAkAudioEvent* IgnitionAudioEventStart; // 0x130(0x08)
	struct UAkAudioEvent* IgnitionAudioEventStop; // 0x138(0x08)
	struct UAkAudioEvent* IgnitionSuccessAudioEvent; // 0x140(0x08)
	float StallingDuration; // 0x148(0x04)
	float StallingRecoveryChance; // 0x14c(0x04)
	struct UAkAudioEvent* StallingAudioEventStart; // 0x150(0x08)
	struct UAkAudioEvent* StallingAudioEventStop; // 0x158(0x08)
	struct UAkAudioEvent* RemovedAudioEventStart; // 0x160(0x08)
};

// ScriptStruct ConZ.VehicleAttachmentGearboxSimulationData
// Size: 0x14 (Inherited: 0x00)
struct FVehicleAttachmentGearboxSimulationData {
	char pad_0[0x4]; // 0x00(0x04)
	int32_t CurrentGearIndex; // 0x04(0x04)
	char pad_8[0xc]; // 0x08(0x0c)
};

// ScriptStruct ConZ.VehicleAttachmentGearboxSetup
// Size: 0x28 (Inherited: 0x00)
struct FVehicleAttachmentGearboxSetup {
	struct TArray<struct FVehicleGearSetup> Gears; // 0x00(0x10)
	struct TArray<struct FVehicleGearSetup> GearsReduced; // 0x10(0x10)
	bool IsAutomatic; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float GearChangeDelay; // 0x24(0x04)
};

// ScriptStruct ConZ.VehicleGearSetup
// Size: 0x14 (Inherited: 0x00)
struct FVehicleGearSetup {
	struct FName Name; // 0x00(0x08)
	float GearUpRatio; // 0x08(0x04)
	float GearDownRatio; // 0x0c(0x04)
	float GearRatio; // 0x10(0x04)
};

// ScriptStruct ConZ.VehicleLightsData
// Size: 0x98 (Inherited: 0x00)
struct FVehicleLightsData {
	struct FGameplayTagContainer ToggleTags; // 0x00(0x20)
	struct FGameplayTagContainer EnableTags; // 0x20(0x20)
	struct FGameplayTagContainer DisableTags; // 0x40(0x20)
	float ElectricityConsumption; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FVehicleLightReference> LightReferences; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)
	struct TArray<struct FVATMaterialParam> MaterialParameters; // 0x88(0x10)
};

// ScriptStruct ConZ.VATMaterialParam
// Size: 0x18 (Inherited: 0x00)
struct FVATMaterialParam {
	char pad_0[0x10]; // 0x00(0x10)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x10(0x08)
};

// ScriptStruct ConZ.VehicleLightReference
// Size: 0x18 (Inherited: 0x00)
struct FVehicleLightReference {
	struct FName Name; // 0x00(0x08)
	enum class EVehicleLightSourceType LightType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName MaterialSlotName; // 0x0c(0x08)
	float MaterialSlotFloatValue; // 0x14(0x04)
};

// ScriptStruct ConZ.LightsAttachmentSimulationData
// Size: 0x01 (Inherited: 0x00)
struct FLightsAttachmentSimulationData {
	char TurnedOnMask; // 0x00(0x01)
};

// ScriptStruct ConZ.WeaponMountSetup
// Size: 0x20 (Inherited: 0x00)
struct FWeaponMountSetup {
	struct FSoftClassPath WeaponClass; // 0x00(0x18)
	struct FName MountingWeaponSocket; // 0x18(0x08)
};

// ScriptStruct ConZ.VehicleAttachmentWheelSetup
// Size: 0x44 (Inherited: 0x00)
struct FVehicleAttachmentWheelSetup {
	float Radius; // 0x00(0x04)
	float SteeringAngle; // 0x04(0x04)
	bool ApplyTorque; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float BrakeStrengthMultiplier; // 0x0c(0x04)
	bool ApplyHandbrake; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float SuspensionLength; // 0x14(0x04)
	float SuspensionStrength; // 0x18(0x04)
	float SuspensionDamping; // 0x1c(0x04)
	float SuspensionRestLength; // 0x20(0x04)
	float SuspensionAngle; // 0x24(0x04)
	struct FName SteeringBoneName; // 0x28(0x08)
	struct FName SuspensionBoneName; // 0x30(0x08)
	float MinWobbleAngleDeg; // 0x38(0x04)
	float MaxWobbleAngleDeg; // 0x3c(0x04)
	bool ShouldSpawnParticles; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
};

// ScriptStruct ConZ.VehicleAttachmentSave
// Size: 0x10 (Inherited: 0x00)
struct FVehicleAttachmentSave {
	struct TArray<char> Data; // 0x00(0x10)
};

// ScriptStruct ConZ.VehicleAttachmentSlot
// Size: 0x58 (Inherited: 0x00)
struct FVehicleAttachmentSlot {
	struct TArray<struct FPrimaryAssetId> PossibleAttachmentAssetIds; // 0x00(0x10)
	struct FGameplayTagContainer StateTags; // 0x10(0x20)
	struct TArray<struct FVehicleAttachmentMissingParticleEffect> ParticleEffectsToPlayWhileMissingAttachment; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
	struct UMaterialInstanceDynamic* ServiceModeMaterial; // 0x48(0x08)
	struct UMeshComponent* _previewMesh; // 0x50(0x08)
};

// ScriptStruct ConZ.VehicleAttachmentMissingParticleEffect
// Size: 0x50 (Inherited: 0x00)
struct FVehicleAttachmentMissingParticleEffect {
	struct UParticleSystem* ParticleEffect; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Offset; // 0x10(0x30)
	struct UParticleSystemComponent* SpawnedEffect; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct ConZ.DamageAdjacentAttachment
// Size: 0x04 (Inherited: 0x00)
struct FDamageAdjacentAttachment {
	float DamagePropagationMultiplier; // 0x00(0x04)
};

// ScriptStruct ConZ.VehicleAttachmentAdditionalSocket
// Size: 0x40 (Inherited: 0x00)
struct FVehicleAttachmentAdditionalSocket {
	struct FName Name; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct ConZ.VehicleAttachmentMeshSetup
// Size: 0x80 (Inherited: 0x00)
struct FVehicleAttachmentMeshSetup {
	bool ShouldCreate; // 0x00(0x01)
	bool ShouldCreateOnServer; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FSoftObjectPath Mesh; // 0x08(0x18)
	struct UAnimInstance* AnimationBlueprintClass; // 0x20(0x08)
	bool RefPoseAttach; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FTransform Offset; // 0x30(0x30)
	float Mass; // 0x60(0x04)
	bool ShouldWeld; // 0x64(0x01)
	bool SimulatePhysics; // 0x65(0x01)
	bool EnableGravity; // 0x66(0x01)
	bool ApplyImpulseOnDamage; // 0x67(0x01)
	bool CastShadow; // 0x68(0x01)
	bool Visibility; // 0x69(0x01)
	bool ShouldNotifyRigidBodyCollision; // 0x6a(0x01)
	bool CanEverAffectNavigation; // 0x6b(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct FName CollisionProfileName; // 0x70(0x08)
	struct UPhysicalMaterial* PhysicalMaterialOverride; // 0x78(0x08)
};

// ScriptStruct ConZ.VehicleAttachmentSlotId
// Size: 0x18 (Inherited: 0x00)
struct FVehicleAttachmentSlotId {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ConZ.InputValue
// Size: 0x0c (Inherited: 0x00)
struct FInputValue {
	struct FName Name; // 0x00(0x08)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct ConZ.ClientEffectData
// Size: 0xb4 (Inherited: 0x00)
struct FClientEffectData {
	char pad_0[0xb4]; // 0x00(0xb4)
};

// ScriptStruct ConZ.VehicleBaseTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FVehicleBaseTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct ConZ.WaterParticleTransform
// Size: 0x50 (Inherited: 0x00)
struct FWaterParticleTransform {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FVector Direction; // 0x40(0x0c)
	float MaxAngle; // 0x4c(0x04)
};

// ScriptStruct ConZ.VehicleCorpseBurningParticles
// Size: 0x70 (Inherited: 0x00)
struct FVehicleCorpseBurningParticles {
	struct UParticleSystem* Particles; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform ParticlesTransform; // 0x10(0x30)
	struct FHeatSourceParameters DEPRECATED_HeatSourceParameters; // 0x40(0x24)
	char pad_64[0x4]; // 0x64(0x04)
	struct FDbIntegerId DEPRECATED_HeatSourceId; // 0x68(0x08)
};

// ScriptStruct ConZ.VehicleDamageHandlerParams
// Size: 0x10 (Inherited: 0x00)
struct FVehicleDamageHandlerParams {
	struct TArray<struct FGameplayTag> DamageRegions; // 0x00(0x10)
};

// ScriptStruct ConZ.VehicleForcePushParams
// Size: 0x38 (Inherited: 0x00)
struct FVehicleForcePushParams {
	struct FText InteractionName; // 0x00(0x18)
	float ActionDuration; // 0x18(0x04)
	bool IsRadialImpulse; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FVector Impulse; // 0x20(0x0c)
	struct FVector Location; // 0x2c(0x0c)
};

// ScriptStruct ConZ.VehicleHandlingExperienceAwards
// Size: 0x08 (Inherited: 0x00)
struct FVehicleHandlingExperienceAwards {
	float PointsForStartingEngine; // 0x00(0x04)
	float PointsPerDrivenDistanceInKm; // 0x04(0x04)
};

// ScriptStruct ConZ.VehicleManualSpawnPresetArray
// Size: 0x20 (Inherited: 0x00)
struct FVehicleManualSpawnPresetArray {
	struct UVehiclePreset* PresetPerSpawnType[0x4]; // 0x00(0x20)
};

// ScriptStruct ConZ.VehicleSpawnerInfo
// Size: 0x80 (Inherited: 0x00)
struct FVehicleSpawnerInfo {
	struct FEntityId VehicleEntityId; // 0x00(0x08)
	struct FPrimaryAssetId VehicleAssetId; // 0x08(0x10)
	struct FEntityId ContainerId; // 0x18(0x08)
	struct TWeakObjectPtr<struct AVehicleBase> VehicleBase; // 0x20(0x08)
	struct FString VehicleAlias; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform VehicleTransform; // 0x40(0x30)
	int64_t VehicleLastAccessTime; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct ConZ.VehiclePaintjobPatternParams
// Size: 0x30 (Inherited: 0x00)
struct FVehiclePaintjobPatternParams {
	struct FText Name; // 0x00(0x18)
	struct UTexture2D* Texture; // 0x18(0x08)
	int32_t ColorCount; // 0x20(0x04)
	float ScaleMultiplier; // 0x24(0x04)
	enum class EDeluxeVersion DeluxeVersionRequired; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ConZ.VehiclePartDescription
// Size: 0x0c (Inherited: 0x00)
struct FVehiclePartDescription {
	struct FGameplayTag PartType; // 0x00(0x08)
	float health; // 0x08(0x04)
};

// ScriptStruct ConZ.VehicleServiceRequest_InstallAttachment
// Size: 0x01 (Inherited: 0x00)
struct FVehicleServiceRequest_InstallAttachment {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ConZ.VehicleServiceData
// Size: 0x18 (Inherited: 0x00)
struct FVehicleServiceData {
	char pad_0[0x10]; // 0x00(0x10)
	struct UVehicleServiceStationSaveObject* ServiceStationSaveObject; // 0x10(0x08)
};

// ScriptStruct ConZ.VehicleWeaponAimingStanceData
// Size: 0x78 (Inherited: 0x00)
struct FVehicleWeaponAimingStanceData {
	struct TArray<struct FVehicleWeaponAimingStanceTransitionMontages> StanceTransitionMontages; // 0x00(0x10)
	struct TArray<struct FVehicleWeaponAimingStanceTransitionCurves> SupportedAnglesForTransition; // 0x10(0x10)
	struct FVehicleWeaponAimingFirstPersonData FirstPerson; // 0x20(0x48)
	struct FVehicleWeaponAimingThirdPersonData ThirdPerson; // 0x68(0x10)
};

// ScriptStruct ConZ.VehicleWeaponAimingThirdPersonData
// Size: 0x10 (Inherited: 0x00)
struct FVehicleWeaponAimingThirdPersonData {
	struct TArray<struct FVehicleThirdPersonWeaponTypeData> WeaponTypeData; // 0x00(0x10)
};

// ScriptStruct ConZ.VehicleThirdPersonWeaponTypeData
// Size: 0x38 (Inherited: 0x00)
struct FVehicleThirdPersonWeaponTypeData {
	enum class EWeaponType WeaponType; // 0x00(0x01)
	bool alwaysIgnorePreMountAimOffsets; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FBasePoseAimOffsetPair IdlePoseAndAimOffset[0x2]; // 0x08(0x30)
};

// ScriptStruct ConZ.BasePoseAimOffsetPair
// Size: 0x18 (Inherited: 0x00)
struct FBasePoseAimOffsetPair {
	struct UAnimSequenceBase* UpperBodyPose; // 0x00(0x08)
	struct UAnimSequenceBase* LowerBodyPose; // 0x08(0x08)
	struct UBlendSpace* AimOffset; // 0x10(0x08)
};

// ScriptStruct ConZ.VehicleWeaponAimingFirstPersonData
// Size: 0x48 (Inherited: 0x00)
struct FVehicleWeaponAimingFirstPersonData {
	struct FFirstPersonViewParameters ViewParameters; // 0x00(0x28)
	struct FVector LocationOffset; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct UCurveVector* LocationOffsetByYaw; // 0x38(0x08)
	struct UCurveVector* LocationOffsetByPitch; // 0x40(0x08)
};

// ScriptStruct ConZ.VehicleWeaponAimingStanceTransitionCurves
// Size: 0x10 (Inherited: 0x00)
struct FVehicleWeaponAimingStanceTransitionCurves {
	enum class EVehicleWeaponAimingStance stance; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveFloat* SupportedYawAngles; // 0x08(0x08)
};

// ScriptStruct ConZ.VehicleWeaponAimingStanceTransitionMontages
// Size: 0x18 (Inherited: 0x00)
struct FVehicleWeaponAimingStanceTransitionMontages {
	enum class EVehicleWeaponAimingStance stance; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FWeaponTypeMontage> WeaponTypeMontages; // 0x08(0x10)
};

// ScriptStruct ConZ.WeaponTypeMontage
// Size: 0x18 (Inherited: 0x00)
struct FWeaponTypeMontage {
	enum class EWeaponType WeaponType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAnimMontage* Montage; // 0x08(0x08)
	struct UCurveFloat* SupportedYawAngles; // 0x10(0x08)
};

// ScriptStruct ConZ.VehicleTireEffectProperties
// Size: 0x14 (Inherited: 0x00)
struct FVehicleTireEffectProperties {
	struct FVector TireLocalOffset; // 0x00(0x0c)
	char pad_C[0x8]; // 0x0c(0x08)
};

// ScriptStruct ConZ.VehicleMaterialParameterDescription
// Size: 0x10 (Inherited: 0x00)
struct FVehicleMaterialParameterDescription {
	struct FName ParameterName; // 0x00(0x08)
	float MinValue; // 0x08(0x04)
	float MaxValue; // 0x0c(0x04)
};

// ScriptStruct ConZ.VehicleEngineStallingParameters
// Size: 0x58 (Inherited: 0x00)
struct FVehicleEngineStallingParameters {
	float MinDuration; // 0x00(0x04)
	float MaxDuration; // 0x04(0x04)
	float StopEngineChance; // 0x08(0x04)
	bool ShouldStallingStopOnThrottleOrBreakRelease; // 0x0c(0x01)
	bool ShouldEngineStopOnThrottleOrBreakRelease; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct UCurveFloat* ThrottleCurve; // 0x10(0x08)
	float ThrottleCurveFrequencyMultiplier; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* BrakeCurve; // 0x20(0x08)
	float BrakeCurveFrequencyMultiplier; // 0x28(0x04)
	float ForceMagnitudeScale; // 0x2c(0x04)
	struct UCurveFloat* ForceMagnitudeScaleCurve; // 0x30(0x08)
	float ForceMagnitudeScaleCurveFrequencyMultiplier; // 0x38(0x04)
	float ForceDirectionRandomizationAngle; // 0x3c(0x04)
	struct UAkAudioEvent* AudioEvent; // 0x40(0x08)
	struct TArray<float> AudioEventTriggerTimeRatios; // 0x48(0x10)
};

// ScriptStruct ConZ.VehicleImpactEffects
// Size: 0x38 (Inherited: 0x00)
struct FVehicleImpactEffects {
	float HitImpulseThreshold; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UParticleSystem* ParticleSystem; // 0x08(0x08)
	struct FVector ParticlesScale; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UAkAudioEvent* AudioEvent; // 0x20(0x08)
	struct UMatineeCameraShake* CameraShake; // 0x28(0x08)
	float CameraShakeScale; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ConZ.VehicleExhaustEffects
// Size: 0x48 (Inherited: 0x00)
struct FVehicleExhaustEffects {
	struct TArray<struct FVehicleExhaustParticles> Particles; // 0x00(0x10)
	float ThrottleImpulseMinValue; // 0x10(0x04)
	float ThrottleImpulseMaxValue; // 0x14(0x04)
	float ThrottleImpulseSpeedTermMaxValue; // 0x18(0x04)
	float ThrottleImpulseAttackDuration; // 0x1c(0x04)
	float ThrottleImpulseSustainDuration; // 0x20(0x04)
	float ThrottleImpulseReleaseDuration; // 0x24(0x04)
	float ParticlesDestructionDelay; // 0x28(0x04)
	char pad_2C[0x1c]; // 0x2c(0x1c)
};

// ScriptStruct ConZ.VehicleExhaustParticles
// Size: 0x18 (Inherited: 0x00)
struct FVehicleExhaustParticles {
	struct FName AttachSocketName; // 0x00(0x08)
	struct UParticleSystem* ParticleSystem; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ConZ.VehicleExhaustEffectsParameters
// Size: 0x70 (Inherited: 0x00)
struct FVehicleExhaustEffectsParameters {
	struct FTransform Transform; // 0x00(0x30)
	struct UParticleSystem* EngineStartedParticleSystem; // 0x30(0x08)
	struct UParticleSystem* EngineIdleParticleSystem; // 0x38(0x08)
	struct UParticleSystem* ThrottlePressedParticleSystem; // 0x40(0x08)
	struct UAkAudioEvent* ThrottlePressedAudioEvent; // 0x48(0x08)
	float MinDurationBetweenThrottlePressedEffects; // 0x50(0x04)
	float DeactivationDelay; // 0x54(0x04)
	char pad_58[0x18]; // 0x58(0x18)
};

// ScriptStruct ConZ.VehicleDamagedEffectsParameters
// Size: 0x60 (Inherited: 0x00)
struct FVehicleDamagedEffectsParameters {
	struct FFloatRange HealthRatioRange; // 0x00(0x10)
	struct FTransform Transform; // 0x10(0x30)
	struct UParticleSystem* ParticleSystem; // 0x40(0x08)
	struct UAkAudioEvent* StartAudioEvent; // 0x48(0x08)
	struct UAkAudioEvent* StopAudioEvent; // 0x50(0x08)
	float DeactivationDelay; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct ConZ.VehicleSpawnerMarker
// Size: 0x40 (Inherited: 0x00)
struct FVehicleSpawnerMarker {
	struct FTransform Transform; // 0x00(0x30)
	struct UVehicleGroupSpawningPreset* VehicleGroupSpawningPreset; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct ConZ.VehicleSpawnPointData
// Size: 0x40 (Inherited: 0x00)
struct FVehicleSpawnPointData {
	struct FTransform SpawnTransform; // 0x00(0x30)
	struct TArray<struct UVehiclePreset*> VehicleSpawnPresets; // 0x30(0x10)
};

// ScriptStruct ConZ.WeaponMountData
// Size: 0x18 (Inherited: 0x00)
struct FWeaponMountData {
	struct FName MountedSocket; // 0x00(0x08)
	struct TWeakObjectPtr<struct AWeapon> Weapon; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ConZ.Version
// Size: 0x14 (Inherited: 0x00)
struct FVersion {
	uint16_t Release; // 0x00(0x02)
	uint16_t Major; // 0x02(0x02)
	uint32_t Minor; // 0x04(0x04)
	uint32_t Hotfix; // 0x08(0x04)
	uint32_t Changeset; // 0x0c(0x04)
	uint32_t Shelveset; // 0x10(0x04)
};

// ScriptStruct ConZ.ClassesArray
// Size: 0x20 (Inherited: 0x00)
struct FClassesArray {
	struct TArray<struct UObject*> Classes; // 0x00(0x10)
	struct TArray<struct UObject*> ProhibitedClasses; // 0x10(0x10)
};

// ScriptStruct ConZ.VoltageMatchingElementRow
// Size: 0x18 (Inherited: 0x00)
struct FVoltageMatchingElementRow {
	struct TArray<struct FName> ElementSockets; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ConZ.VoltageMatchingSwitchElementsPairing
// Size: 0x18 (Inherited: 0x00)
struct FVoltageMatchingSwitchElementsPairing {
	struct FGameplayTag SwitchTag; // 0x00(0x08)
	struct TArray<struct FName> ElementSockets; // 0x08(0x10)
};

// ScriptStruct ConZ.VoltageMatchingElementIndicator
// Size: 0x10 (Inherited: 0x00)
struct FVoltageMatchingElementIndicator {
	struct FName SocketId; // 0x00(0x08)
	struct FName IndicatorWidgetName; // 0x08(0x08)
};

// ScriptStruct ConZ.MessageStruct
// Size: 0x30 (Inherited: 0x00)
struct FMessageStruct {
	struct FText Text; // 0x00(0x18)
	float Duration; // 0x18(0x04)
	struct FLinearColor Color; // 0x1c(0x10)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ConZ.MeshMaterialPair
// Size: 0x10 (Inherited: 0x00)
struct FMeshMaterialPair {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
	struct UMaterialInstance* EquippedMaterialOverride; // 0x08(0x08)
};

// ScriptStruct ConZ.WeaponBowArmsShake
// Size: 0x30 (Inherited: 0x00)
struct FWeaponBowArmsShake {
	struct UAnimSequenceBase* ThirdPerson[0x3]; // 0x00(0x18)
	struct UAnimSequenceBase* FirstPerson[0x3]; // 0x18(0x18)
};

// ScriptStruct ConZ.WeaponBowAimOffsets
// Size: 0x18 (Inherited: 0x00)
struct FWeaponBowAimOffsets {
	struct UBlendSpace* DrawPercentage[0x3]; // 0x00(0x18)
};

// ScriptStruct ConZ.WeaponBowStateDataReplicated
// Size: 0x0c (Inherited: 0x00)
struct FWeaponBowStateDataReplicated {
	enum class EBowDrawPercentage BowDrawPercentage; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float HoldTimeInFullDraw; // 0x04(0x04)
	enum class EWeaponBowState WeaponBowState; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ConZ.WeaponBowDrawData
// Size: 0x0c (Inherited: 0x00)
struct FWeaponBowDrawData {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct ConZ.ClearMalfunctionData
// Size: 0x18 (Inherited: 0x00)
struct FClearMalfunctionData {
	bool ShouldClearMalfunction; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FBodyWeaponAnimation Animations; // 0x08(0x10)
};

// ScriptStruct ConZ.WeaponMalfunctionProbabilityCurves
// Size: 0x3b8 (Inherited: 0x00)
struct FWeaponMalfunctionProbabilityCurves {
	struct FRuntimeFloatCurve ProbabilityCurve[0x7]; // 0x00(0x3b8)
};

// ScriptStruct ConZ.WeaponPaintjobPatternParams
// Size: 0x30 (Inherited: 0x00)
struct FWeaponPaintjobPatternParams {
	struct FText Name; // 0x00(0x18)
	struct UTexture2D* Texture; // 0x18(0x08)
	int32_t ColorCount; // 0x20(0x04)
	float ScaleMultiplier; // 0x24(0x04)
	enum class EDeluxeVersion DeluxeVersionRequired; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ConZ.WeaponTypeAimOffset
// Size: 0x18 (Inherited: 0x00)
struct FWeaponTypeAimOffset {
	enum class EWeaponType WeaponType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UBlendSpace* AimOffset[0x2]; // 0x08(0x10)
};

// ScriptStruct ConZ.WeaponCheckAmmoData
// Size: 0x08 (Inherited: 0x00)
struct FWeaponCheckAmmoData {
	struct UObject* ActionSequenceClass; // 0x00(0x08)
};

// ScriptStruct ConZ.WeaponUnloadAmmoData
// Size: 0x10 (Inherited: 0x00)
struct FWeaponUnloadAmmoData {
	struct UObject* ActionSequenceClass; // 0x00(0x08)
	int32_t AmmoCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ConZ.MultistageRandomRoll
// Size: 0x68 (Inherited: 0x00)
struct FMultistageRandomRoll {
	struct FFloatInterval _valueRange; // 0x00(0x08)
	bool _shouldWrapValue; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FRandomRollStage> _baseValueRollStages; // 0x10(0x10)
	bool _isVarianceEnabled; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FFloatInterval _varianceRollInterval; // 0x24(0x08)
	struct FFloatInterval _varianceTargetInterval; // 0x2c(0x08)
	float _varianceTargetInterpSpeed; // 0x34(0x04)
	char pad_38[0x2c]; // 0x38(0x2c)
	int32_t _baseValueStageToSetWhenForcingBaseValue; // 0x64(0x04)
};

// ScriptStruct ConZ.RandomRollStage
// Size: 0x98 (Inherited: 0x00)
struct FRandomRollStage {
	struct FFloatInterval BaseValueRollInterval; // 0x00(0x08)
	struct FRuntimeFloatCurve BaseValueTargetCurve; // 0x08(0x88)
	float BaseValueTargetInterpSpeed; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct ConZ.WeatherReplicatedStateSnapshot
// Size: 0x30 (Inherited: 0x00)
struct FWeatherReplicatedStateSnapshot {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct ConZ.WheelBarrowParametersPerMovementPace
// Size: 0x20 (Inherited: 0x00)
struct FWheelBarrowParametersPerMovementPace {
	bool IsValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BaseMaxForwardSpeed; // 0x04(0x04)
	float BaseMaxForwardSpeedLimping; // 0x08(0x04)
	bool CanReverse; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float BaseMaxReverseSpeed; // 0x10(0x04)
	float BaseMaxReverseSpeedLimping; // 0x14(0x04)
	float BaseMaxLoad; // 0x18(0x04)
	float MinPrisonerStrength; // 0x1c(0x04)
};

// ScriptStruct ConZ.WindowMarker
// Size: 0x88 (Inherited: 0x00)
struct FWindowMarker {
	bool IsVaultable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FNavAgentSelector NavSupportedAgents; // 0x04(0x04)
	float NavLinkDistance; // 0x08(0x04)
	float NavLinkGroundOffset; // 0x0c(0x04)
	bool IsFortifiable; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UWindowFortificationsType* WindowFortificationsType; // 0x18(0x08)
	struct TArray<int32_t> AdditionalMarkerIndicesToModify; // 0x20(0x10)
	struct FVector Vertex1; // 0x30(0x0c)
	struct FVector Vertex2; // 0x3c(0x0c)
	char pad_48[0xc]; // 0x48(0x0c)
	struct FVector2D FortificationScaleXZ; // 0x54(0x08)
	float Thickness; // 0x5c(0x04)
	struct FVector FortificationLocationCorrection; // 0x60(0x0c)
	float CollisionBoxVertBias; // 0x6c(0x04)
	float CollisionBoxHorzBias; // 0x70(0x04)
	bool ShouldIgnoreCollisionWithOwner; // 0x74(0x01)
	char pad_75[0xb]; // 0x75(0x0b)
	bool DidIFailToCorrectlyPlaceWindowMarkers; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct ConZ.WorldEventDrawData
// Size: 0x50 (Inherited: 0x00)
struct FWorldEventDrawData {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct ConZ.ZombieSleepingAnimationData
// Size: 0x18 (Inherited: 0x00)
struct FZombieSleepingAnimationData {
	struct UAnimSequenceBase* SleepingLoopAnimation; // 0x00(0x08)
	struct UAnimMontage* GettingUpAnimation; // 0x08(0x08)
	float Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ConZ.ZombieCombatStanceVariation2
// Size: 0x30 (Inherited: 0x00)
struct FZombieCombatStanceVariation2 {
	struct FZombieCombatStanceAnimations Animations; // 0x00(0x18)
	float RunAcceleration; // 0x18(0x04)
	float RunDeceleration; // 0x1c(0x04)
	float RunSpeed; // 0x20(0x04)
	float RunSpeedInAnimation; // 0x24(0x04)
	float RunTurnRate; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ConZ.ZombieCombatStanceAnimations
// Size: 0x18 (Inherited: 0x00)
struct FZombieCombatStanceAnimations {
	struct UAnimSequenceBase* RunStartAnimation; // 0x00(0x08)
	struct UAnimSequenceBase* RunLoopAnimation; // 0x08(0x08)
	struct UAnimSequenceBase* RunStopAnimation; // 0x10(0x08)
};

// ScriptStruct ConZ.ZombieRelaxedStanceVariation2
// Size: 0x20 (Inherited: 0x00)
struct FZombieRelaxedStanceVariation2 {
	struct FZombieRelaxedStanceAnimations Animations; // 0x00(0x08)
	float WalkAcceleration; // 0x08(0x04)
	float WalkDeceleration; // 0x0c(0x04)
	float WalkSpeed; // 0x10(0x04)
	float WalkSpeedInAnimation; // 0x14(0x04)
	float WalkTurnRate; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ConZ.ZombieRelaxedStanceAnimations
// Size: 0x08 (Inherited: 0x00)
struct FZombieRelaxedStanceAnimations {
	struct UAnimSequenceBase* WalkLoopAnimation; // 0x00(0x08)
};

// ScriptStruct ConZ.ZombieMeshVariation2
// Size: 0x10 (Inherited: 0x00)
struct FZombieMeshVariation2 {
	struct USkeletalMesh* DressedMesh; // 0x00(0x08)
	struct USkeletalMesh* StrippedMesh; // 0x08(0x08)
};

// ScriptStruct ConZ.ZombieAttackDescription
// Size: 0x20 (Inherited: 0x00)
struct FZombieAttackDescription {
	struct UAnimMontage* Montage; // 0x00(0x08)
	struct FFloatInterval PitchRange; // 0x08(0x08)
	float MinDistance; // 0x10(0x04)
	float MaxDistance; // 0x14(0x04)
	float RegainControlMultiplier; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ConZ.ZombieRagdollAutoRecovery
// Size: 0x08 (Inherited: 0x00)
struct FZombieRagdollAutoRecovery {
	enum class EZombieRagdollAutoRecoveryType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Timespan; // 0x04(0x04)
};

// ScriptStruct ConZ.ZombieTurnMontageDescription
// Size: 0x28 (Inherited: 0x00)
struct FZombieTurnMontageDescription {
	struct UAnimMontage* MontageL90; // 0x00(0x08)
	struct UAnimMontage* MontageL180; // 0x08(0x08)
	struct UAnimMontage* MontageR90; // 0x10(0x08)
	struct UAnimMontage* MontageR180; // 0x18(0x08)
	struct FName TurnAngleCurveName; // 0x20(0x08)
};

// ScriptStruct ConZ.ZoneConfiguration
// Size: 0x18 (Inherited: 0x00)
struct FZoneConfiguration {
	bool IsOutpost; // 0x00(0x01)
	bool IsItemPlacementAllowed; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<enum class EInteractionType> InteractionsToDisable; // 0x08(0x10)
};

