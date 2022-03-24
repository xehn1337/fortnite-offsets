--- SIGS ---
[RVA7] Uworld         : 48 89 05 ? ? ? ? 48 8B 4B 78
[RVA7] GObjects       : 48 8B 05 ? ? ? ? 48 8B 0C C8 48 8B 04 D1
FreeFN         : 48 85 C9 0F 84 ? ? ? ? 53 48 83 EC 20 48 89 7C 24 30 48 8B D9 48 8B 3D ? ? ? ? 48 85 FF 0F 84 ? ? ? ? 48 8B 07 4C 8B 40 30 48 8D 05 ? ? ? ? 4C 3B C0
[RVA5] PW2S           : E8 ? ? ? ? 48 8B 5C 24 ? 41 88 07 48 83 C4 30
[RVA5] GetBoneMatrix  : E8 ? ? ? ? 48 8B 47 30 F3 0F 10 45
GetNameByIndex : 48 89 5C 24 ? 48 89 6C 24 ? 56 57 41 56 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 84 24 ? ? ? ? 48 8B F2 4C 8B F1 E8 ? ? ? ? 45 8B 06 33 ED 41 0F B7 16 41 C1 E8 10 89 54 24 24 44 89 44 24 ? 48 8B 4C 24 ? 48 C1 E9 20 8D 3C 09 4A 03 7C C0 ? 0F B7 17 C1 EA 06 41 39 6E 04
LineOfSightTo  : 48 8B C4 48 89 58 20 55 56 57 41 54 41 55 41 56 41 57 48 8D 5C 24 ? 48 81 EC ? ? ? ? 0F 29 70 B8 0F 29 78 A8 44 0F 29 40 ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 45 20 45 8A E9

--- BASIC OFFSETS ---
GObjects = 0xB5BC648
UWorld = 0xB78BC70
Levels = 0x148
PersistentLevel = 0x30
LocalPlayers = 0x38
OwningGameInstance = 0x190
ControlRotation = 0x290
PlayerCameraManager = 0x2C0
AcknowledgedPawn = 0x2A8
PlayerState = 0x238
RootComponent = 0x130
Mesh = 0x280
RelativeLocation = 0x11C
ComponentVelocity = 0x140
StaticMesh = 0x488
CachedWorldSpaceBounds = 0x638
CustomTimeDilation = 0x98
LastFireTimeVerified = 0x9E8
LastFireTime = 0x9E4
bIsDBNO = 0x572
bIsDying = 0x548
TeamIndex = 0xF28
PrimaryPickupItemEntry = 0x2A0
DisplayName = 0x88
Tier = 0x6C
ItemDefinition = 0x18
CurrentWeapon = 0x5F8
WeaponData = 0x378
RemoteViewPitch = 0x22A
LastFireAbilityTime = 0x1238
WeaponStatHandle = 0x8B8
FireStartLoc = 0x8B8
ReloadTime = 0x10C
ReloadScale = 0x110
ChargeDownTime = 0x13C
RecoilHoriz = 0x21C
RecoilVert = 0x20C
RecoilDownsightsMultiplier = 0x238
ReviveFromDBNOTime = 0x3758
bADSWhileNotOnGround = 0x3E51
WeaponReloadMontage = 0x1298
ReloadAnimation = 0x1268
OnPressTrigger = 0x268
OnReleaseTrigger = 0x278
bIsEquippingWeapon = 0x2B0
bIsReloadingWeapon = 0x2B1
bIsChargingWeapon = 0x2B2
bDisableEquipAnimation = 0x2B3
bIsAimingConsumable = 0x2B4
OnLocalAmmoChanged = 0x2D8
OnLocalReloadStarted = 0x2E8
OnLocalReloadCancelled = 0x2F8
OnLocalTargetingChanged = 0x308
bIsTargeting = 0x9F9
WeaponLevel = 0xA6C
AmmoCount = 0xA70
bSpotted = 0x54A

--- VIRTUAL FUNCTIONS / VTABLES ---
SetIgnoreLookInput : 0x7B0
ClientSetCameraMode : 0x9A8
GetFOVAngle: 0x748
GetCameraLocation: 0x790
GetCameraRotation: 0x788
