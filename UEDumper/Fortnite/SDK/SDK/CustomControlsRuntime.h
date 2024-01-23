
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: TargetingSystem

/// Enum /Script/CustomControlsRuntime.ECustomControlsAttackType
/// Size: 0x05
enum class ECustomControlsAttackType : uint8_t
{
	ECustomControlsAttackType__None                                                  = 0,
	ECustomControlsAttackType__Ranged                                                = 1,
	ECustomControlsAttackType__Melee                                                 = 2,
	ECustomControlsAttackType__Throw                                                 = 3,
	ECustomControlsAttackType__ECustomControlsAttackType_MAX                         = 4
};

/// Enum /Script/CustomControlsRuntime.ECustomControlsTargetingType
/// Size: 0x05
enum class ECustomControlsTargetingType : uint8_t
{
	ECustomControlsTargetingType__None                                               = 0,
	ECustomControlsTargetingType__Aiming                                             = 1,
	ECustomControlsTargetingType__Windup                                             = 2,
	ECustomControlsTargetingType__MeleeLockOn                                        = 3,
	ECustomControlsTargetingType__ECustomControlsTargetingType_MAX                   = 4
};

/// Enum /Script/CustomControlsRuntime.ECustomControlsWeaponType
/// Size: 0x05
enum class ECustomControlsWeaponType : uint8_t
{
	ECustomControlsWeaponType__None                                                  = 0,
	ECustomControlsWeaponType__Ranged                                                = 1,
	ECustomControlsWeaponType__Melee                                                 = 2,
	ECustomControlsWeaponType__Other                                                 = 3,
	ECustomControlsWeaponType__ECustomControlsWeaponType_MAX                         = 4
};

/// Enum /Script/CustomControlsRuntime.EPlaceFireMissed
/// Size: 0x10
enum class EPlaceFireMissed : uint8_t
{
	EPlaceFireMissed__None                                                           = 0,
	EPlaceFireMissed__Left                                                           = 1,
	EPlaceFireMissed__Right                                                          = 2,
	EPlaceFireMissed__Up                                                             = 3,
	EPlaceFireMissed__Down                                                           = 4,
	EPlaceFireMissed__UpLeft                                                         = 5,
	EPlaceFireMissed__UpRight                                                        = 6,
	EPlaceFireMissed__DownLeft                                                       = 7,
	EPlaceFireMissed__DownRight                                                      = 8,
	EPlaceFireMissed__EPlaceFireMissed_MAX                                           = 9
};

/// Enum /Script/CustomControlsRuntime.ECustomControlsFacingMode
/// Size: 0x04
enum class ECustomControlsFacingMode : uint8_t
{
	ECustomControlsFacingMode__Movement                                              = 0,
	ECustomControlsFacingMode__Maintained                                            = 1,
	ECustomControlsFacingMode__Fixed                                                 = 2,
	ECustomControlsFacingMode__ECustomControlsFacingMode_MAX                         = 3
};

/// Struct /Script/CustomControlsRuntime.InteractionPointOptions
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInteractionPointOptions
{ 
	EInteractionOrigin                                 InteractionOrigin;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              InteractDistance;                                           // 0x0004   (0x0004)  
	float                                              InteractHighlightDistance;                                  // 0x0008   (0x0004)  
	float                                              InteractExtentRadius;                                       // 0x000C   (0x0004)  
};

/// Class /Script/CustomControlsRuntime.CustomControlOptions_Base
/// Size: 0x0030 (0x000028 - 0x000058)
class UCustomControlOptions_Base : public UObject
{ 
public:
	float                                              RangedAttackStateDuration;                                  // 0x0028   (0x0004)  
	float                                              MeleeAttackStateDuration;                                   // 0x002C   (0x0004)  
	FFortWeaponReticleData                             FortWeaponReticleData;                                      // 0x0030   (0x0014)  
	FInteractionPointOptions                           InteractionPointOptions;                                    // 0x0044   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED


	/// Functions
	// Function /Script/CustomControlsRuntime.CustomControlOptions_Base.GetOwningComponent
	// class UFortControllerComponent_CustomControls* GetOwningComponent();                                                  // [0xb4fe95c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomControlsRuntime.CustomControlOptions_Base.BP_OnDeactivate
	// void BP_OnDeactivate();                                                                                               // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/CustomControlsRuntime.CustomControlOptions_Base.BP_OnActivate
	// void BP_OnActivate();                                                                                                 // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Struct /Script/CustomControlsRuntime.FortMovementMode_ExtBaseCustomControlsCreationData
/// Size: 0x0000 (0x000008 - 0x000008)
struct FFortMovementMode_ExtBaseCustomControlsCreationData : FFortMovementMode_BaseExtCreationData
{ 
};

/// Struct /Script/CustomControlsRuntime.FortMovementMode_ExtCCThirdPersonCreationData
/// Size: 0x0018 (0x000008 - 0x000020)
struct FFortMovementMode_ExtCCThirdPersonCreationData : FFortMovementMode_ExtBaseCustomControlsCreationData
{ 
	bool                                               bModifyRotationRateYaw;                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              RotationRateYaw;                                            // 0x000C   (0x0004)  
	float                                              SpeedMultiplier;                                            // 0x0010   (0x0004)  
	ECustomControlsFacingMode                          FacingMode;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              FixedFacingYaw;                                             // 0x0018   (0x0004)  
	bool                                               bRotateTowardsTarget;                                       // 0x001C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/CustomControlsRuntime.CustomControlMovementModeData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FCustomControlMovementModeData
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UClass*                                      Class;                                                      // 0x0008   (0x0008)  
	FFortMovementMode_ExtCCThirdPersonCreationData     CreationData;                                               // 0x0010   (0x0020)  
};

/// Class /Script/CustomControlsRuntime.CustomControlOptions_ThirdPerson
/// Size: 0x0108 (0x000058 - 0x000160)
class UCustomControlOptions_ThirdPerson : public UCustomControlOptions_Base
{ 
public:
	FCustomControlMovementModeData                     BaseMovementMode;                                           // 0x0058   (0x0030)  
	FCustomControlMovementModeData                     ShootingMovementMode;                                       // 0x0088   (0x0030)  
	FCustomControlMovementModeData                     StrikingMovementMode;                                       // 0x00B8   (0x0030)  
	FCustomControlMovementModeData                     AimingMovementMode;                                         // 0x00E8   (0x0030)  
	class UTargetingPreset*                            RangedTargetingPresetTemplate;                              // 0x0118   (0x0008)  
	class UTargetingPreset*                            RetentionTargetingPresetTemplate;                           // 0x0120   (0x0008)  
	class UTargetingPreset*                            RangedAimingTargetingPresetTemplate;                        // 0x0128   (0x0008)  
	class UTargetingPreset*                            MeleeTargetingPresetTemplate;                               // 0x0130   (0x0008)  
	float                                              AngleToClampFire;                                           // 0x0138   (0x0004)  
	bool                                               bShootMovementRequiresTarget;                               // 0x013C   (0x0001)  
	bool                                               bStrikeMovementRequiresTarget;                              // 0x013D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x013E   (0x0002)  MISSED
	class UTargetingPreset*                            RangedTargetingPreset;                                      // 0x0140   (0x0008)  
	class UTargetingPreset*                            RetentionTargetingPreset;                                   // 0x0148   (0x0008)  
	class UTargetingPreset*                            RangedAimTargetingPreset;                                   // 0x0150   (0x0008)  
	class UTargetingPreset*                            MeleeTargetingPreset;                                       // 0x0158   (0x0008)  


	/// Functions
	// Function /Script/CustomControlsRuntime.CustomControlOptions_ThirdPerson.BP_InitRetentionTargetingPreset
	// void BP_InitRetentionTargetingPreset(class UTargetingPreset* Preset);                                                 // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/CustomControlsRuntime.CustomControlOptions_ThirdPerson.BP_InitRangedTargetingPreset
	// void BP_InitRangedTargetingPreset(class UTargetingPreset* Preset);                                                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/CustomControlsRuntime.CustomControlOptions_ThirdPerson.BP_InitMeleeTargetingPreset
	// void BP_InitMeleeTargetingPreset(class UTargetingPreset* Preset);                                                     // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/CustomControlsRuntime.CustomControlOptions_ThirdPerson.BP_InitAimingTargetingPreset
	// void BP_InitAimingTargetingPreset(class UTargetingPreset* Preset);                                                    // [0x2177018] Event|Protected|BlueprintEvent 
};

/// Struct /Script/CustomControlsRuntime.CustomControlsState
/// Size: 0x0004 (0x000000 - 0x000004)
struct FCustomControlsState
{ 
	bool                                               bHasFocusTarget;                                            // 0x0000   (0x0001)  
	ECustomControlsAttackType                          AttackType;                                                 // 0x0001   (0x0001)  
	ECustomControlsTargetingType                       TargetingType;                                              // 0x0002   (0x0001)  
	ECustomControlsWeaponType                          WeaponType;                                                 // 0x0003   (0x0001)  
};

/// Class /Script/CustomControlsRuntime.FortControllerComponent_CustomControls
/// Size: 0x0150 (0x0000A8 - 0x0001F8)
class UFortControllerComponent_CustomControls : public UFortControllerComponent
{ 
public:
	FCustomControlsState                               CurrentState;                                               // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	class UCustomControlOptions_Base*                  ActiveOptions;                                              // 0x00B0   (0x0008)  
	char                                               NotifyActiveOptionsUpdated;                                 // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	TArray<class UCustomControlOptions_Base*>          OwnedOptions;                                               // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData02_5[0x58];                                      // 0x00D0   (0x0058)  MISSED
	FGameplayTagQuery                                  BlockTagsQuery;                                             // 0x0128   (0x0048)  
	unsigned char                                      UnknownData03_6[0x88];                                      // 0x0170   (0x0088)  MISSED


	/// Functions
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.WeaponGetAimRotOverride
	// void WeaponGetAimRotOverride(class AFortWeapon* Weapon, EFortAbilityTargetingSource TargetingSource, FRotator& OutOverrideAimRot, bool& bOutExecutionResult); // [0xb4fec2c] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.SetOptionsEnabled
	// void SetOptionsEnabled(class UObject* ContextObject, bool bEnabled);                                                  // [0xb4feb64] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.ServerSetOptionsQueueBlocked
	// void ServerSetOptionsQueueBlocked(bool bIsBlocked);                                                                   // [0x8758060] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.ServerSetFocusTarget
	// void ServerSetFocusTarget(class AActor* NewFocusTarget);                                                              // [0x83bf908] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.RemoveOptions
	// void RemoveOptions(class UObject* ContextObject);                                                                     // [0xb4feae4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.OnRep_NotifyActiveOptionsUpdated
	// void OnRep_NotifyActiveOptionsUpdated();                                                                              // [0xb4fead0] Final|Native|Private 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.OnRep_ActiveOptions
	// void OnRep_ActiveOptions(class UCustomControlOptions_Base* OldOptions);                                               // [0xb4fea50] Final|Native|Private 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.NotifyOptionsUpdated
	// void NotifyOptionsUpdated(class UCustomControlOptions_Base* Options);                                                 // [0xb4fe9b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.GetOptions
	// class UCustomControlOptions_Base* GetOptions(class UObject* ContextObject);                                           // [0xb4fe87c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.CreateOptionsWithPriority
	// class UCustomControlOptions_Base* CreateOptionsWithPriority(class UObject* ContextObject, class UClass* OptionsClass, float Priority, bool bEnabled); // [0xb4fe5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomControlsRuntime.FortControllerComponent_CustomControls.ClientRegisterTagsQueries
	// void ClientRegisterTagsQueries();                                                                                     // [0x81b738c] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/CustomControlsRuntime.FortMovementMode_ExtLogicBaseCustomControls
/// Size: 0x0000 (0x000118 - 0x000118)
class UFortMovementMode_ExtLogicBaseCustomControls : public UFortMovementMode_BaseExtLogic
{ 
public:
};

/// Class /Script/CustomControlsRuntime.FortMovementMode_ExtLogicCCThirdPerson
/// Size: 0x0000 (0x000118 - 0x000118)
class UFortMovementMode_ExtLogicCCThirdPerson : public UFortMovementMode_ExtLogicBaseCustomControls
{ 
public:
};

/// Struct /Script/CustomControlsRuntime.FortMovementMode_ExtBaseCustomControlsRuntimeData
/// Size: 0x0000 (0x000010 - 0x000010)
struct FFortMovementMode_ExtBaseCustomControlsRuntimeData : FFortMovementMode_BaseExtRuntimeData
{ 
};

/// Struct /Script/CustomControlsRuntime.FortMovementMode_ExtCCThirdPersonRuntimeData
/// Size: 0x0048 (0x000010 - 0x000058)
struct FFortMovementMode_ExtCCThirdPersonRuntimeData : FFortMovementMode_ExtBaseCustomControlsRuntimeData
{ 
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0010   (0x0048)  MISSED
};

