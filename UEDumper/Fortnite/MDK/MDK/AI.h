
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayEffectTemplates
/// dependency: IrwinRuntime
/// dependency: NavigationSystem

/// Class /Game/AI/NavAreas/FortNavArea_JumpDownSmashable3.FortNavArea_JumpDownSmashable3_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UFortNavArea_JumpDownSmashable3_C : public UFortNavArea_SmashableJump
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/AI/NavAreas/FortNavArea_JumpDownSmashable.FortNavArea_JumpDownSmashable_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UFortNavArea_JumpDownSmashable_C : public UFortNavArea_SmashableJump
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/AI/NavAreas/FortNavArea_JumpDownSmashable2.FortNavArea_JumpDownSmashable2_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UFortNavArea_JumpDownSmashable2_C : public UFortNavArea_SmashableJump
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/AI/AIBlueprintInterface/BPI_HuskDance.BPI_HuskDance_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UBPI_HuskDance_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/AI/AIBlueprintInterface/BPI_HuskDance.BPI_HuskDance_C.OnEndDance
	// void OnEndDance();                                                                                                       // [0x2177018] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/AIBlueprintInterface/BPI_HuskDance.BPI_HuskDance_C.OnBeginDance
	// void OnBeginDance();                                                                                                     // [0x2177018] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AI/NavAreas/FortNavArea_JumpDown.FortNavArea_JumpDown_C
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_JumpDown_C : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Irwin/AI/Interfaces/Fauna_Idle_AnimInterface.Fauna_Idle_AnimInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UFauna_Idle_AnimInterface_C : public UAnimLayerInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Irwin/AI/Interfaces/Fauna_Idle_AnimInterface.Fauna_Idle_AnimInterface_C.Fauna IdleTurn
	// void Fauna IdleTurn(FPoseLink InPose IdleTurn, FPoseLink& Fauna IdleTurn);                                               // [0x2177018] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Interfaces/Fauna_Idle_AnimInterface.Fauna_Idle_AnimInterface_C.Fauna Idle
	// void Fauna Idle(FPoseLink InPose Idle, FPoseLink& Fauna Idle);                                                           // [0x2177018] HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C
/// Size: 0x4038 (0x0007C0 - 0x0047F8)
class UBurt_AnimBP_C : public UFortAIFaunaAnimInstance_Burt
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 18424;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x7C0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     OFFSET(getStruct<T>, {0x7C8, 104, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x830, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x838, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x840, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0x860, 176, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0x910, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0x958, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0x9A0, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root1                                         OFFSET(getStruct<T>, {0x9E8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose1                              OFFSET(getStruct<T>, {0xA08, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer2                               OFFSET(getStruct<T>, {0xAB8, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root2                                         OFFSET(getStruct<T>, {0xB00, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0xB20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult1                             OFFSET(getStruct<T>, {0xB48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult2                             OFFSET(getStruct<T>, {0xB70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult3                             OFFSET(getStruct<T>, {0xB98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult4                             OFFSET(getStruct<T>, {0xBC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult5                             OFFSET(getStruct<T>, {0xBE8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult6                             OFFSET(getStruct<T>, {0xC10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult7                             OFFSET(getStruct<T>, {0xC38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult8                             OFFSET(getStruct<T>, {0xC60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult9                             OFFSET(getStruct<T>, {0xC88, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult10                            OFFSET(getStruct<T>, {0xCB0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult11                            OFFSET(getStruct<T>, {0xCD8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult12                            OFFSET(getStruct<T>, {0xD00, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult13                            OFFSET(getStruct<T>, {0xD28, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult14                            OFFSET(getStruct<T>, {0xD50, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult15                            OFFSET(getStruct<T>, {0xD78, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult16                            OFFSET(getStruct<T>, {0xDA0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult17                            OFFSET(getStruct<T>, {0xDC8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult18                            OFFSET(getStruct<T>, {0xDF0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult19                            OFFSET(getStruct<T>, {0xE18, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult20                            OFFSET(getStruct<T>, {0xE40, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult21                            OFFSET(getStruct<T>, {0xE68, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer3                               OFFSET(getStruct<T>, {0xE90, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0xED8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer4                               OFFSET(getStruct<T>, {0xEF8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0xF40, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer5                               OFFSET(getStruct<T>, {0xF60, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult2                                  OFFSET(getStruct<T>, {0xFA8, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              OFFSET(getStruct<T>, {0xFC8, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 OFFSET(getStruct<T>, {0x1038, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer6                               OFFSET(getStruct<T>, {0x1100, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer7                               OFFSET(getStruct<T>, {0x1148, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool1                              OFFSET(getStruct<T>, {0x1190, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult3                                  OFFSET(getStruct<T>, {0x11D8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer8                               OFFSET(getStruct<T>, {0x11F8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult4                                  OFFSET(getStruct<T>, {0x1240, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer9                               OFFSET(getStruct<T>, {0x1260, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult5                                  OFFSET(getStruct<T>, {0x12A8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer10                              OFFSET(getStruct<T>, {0x12C8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult6                                  OFFSET(getStruct<T>, {0x1310, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult22                            OFFSET(getStruct<T>, {0x1330, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult23                            OFFSET(getStruct<T>, {0x1358, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer11                              OFFSET(getStruct<T>, {0x1380, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult7                                  OFFSET(getStruct<T>, {0x13C8, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  OFFSET(getStruct<T>, {0x13E8, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult8                                  OFFSET(getStruct<T>, {0x13F8, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0x1418, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive1                                OFFSET(getStruct<T>, {0x14E0, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive2                                OFFSET(getStruct<T>, {0x15A8, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer1                             OFFSET(getStruct<T>, {0x1670, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer2                             OFFSET(getStruct<T>, {0x16E0, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult9                                  OFFSET(getStruct<T>, {0x1750, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 OFFSET(getStruct<T>, {0x1770, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool2                              OFFSET(getStruct<T>, {0x1798, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              OFFSET(getStruct<T>, {0x17E0, 240, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool3                              OFFSET(getStruct<T>, {0x18D0, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose1                                OFFSET(getStruct<T>, {0x1918, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer12                              OFFSET(getStruct<T>, {0x1940, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer13                              OFFSET(getStruct<T>, {0x1988, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive3                                OFFSET(getStruct<T>, {0x19D0, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer3                             OFFSET(getStruct<T>, {0x1A98, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult10                                 OFFSET(getStruct<T>, {0x1B08, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine1                                 OFFSET(getStruct<T>, {0x1B28, 200, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          OFFSET(getStruct<T>, {0x1BF0, 72, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x1C38, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x1C58, 32, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot1                                         OFFSET(getStruct<T>, {0x1C78, 72, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK                                         OFFSET(getStruct<T>, {0x1CC0, 248, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive4                                OFFSET(getStruct<T>, {0x1DB8, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult24                            OFFSET(getStruct<T>, {0x1E80, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult25                            OFFSET(getStruct<T>, {0x1EA8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer14                              OFFSET(getStruct<T>, {0x1ED0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult11                                 OFFSET(getStruct<T>, {0x1F18, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose1                                 OFFSET(getStruct<T>, {0x1F38, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult12                                 OFFSET(getStruct<T>, {0x1F48, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine2                                 OFFSET(getStruct<T>, {0x1F68, 200, 0, 0})
	SMember(FFortAnimNode_QuadrupedSlopeWarping)       FortAnimGraphNode_QuadrupedSlopeWarping                     OFFSET(getStruct<T>, {0x2030, 1480, 0, 0})
	SMember(FFortAnimNode_WeightedLookAt)              FortAnimGraphNode_WeightedLookAt                            OFFSET(getStruct<T>, {0x2600, 592, 0, 0})
	SMember(FAnimNode_Inertialization)                 AnimGraphNode_Inertialization                               OFFSET(getStruct<T>, {0x2850, 280, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               OFFSET(getStruct<T>, {0x2968, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x2A30, 120, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool4                              OFFSET(getStruct<T>, {0x2AA8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer15                              OFFSET(getStruct<T>, {0x2AF0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool5                              OFFSET(getStruct<T>, {0x2B38, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult26                            OFFSET(getStruct<T>, {0x2B80, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult27                            OFFSET(getStruct<T>, {0x2BA8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult28                            OFFSET(getStruct<T>, {0x2BD0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult29                            OFFSET(getStruct<T>, {0x2BF8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult30                            OFFSET(getStruct<T>, {0x2C20, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult31                            OFFSET(getStruct<T>, {0x2C48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult32                            OFFSET(getStruct<T>, {0x2C70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult33                            OFFSET(getStruct<T>, {0x2C98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult34                            OFFSET(getStruct<T>, {0x2CC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult35                            OFFSET(getStruct<T>, {0x2CE8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult36                            OFFSET(getStruct<T>, {0x2D10, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult37                            OFFSET(getStruct<T>, {0x2D38, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult38                            OFFSET(getStruct<T>, {0x2D60, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult39                            OFFSET(getStruct<T>, {0x2D88, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult40                            OFFSET(getStruct<T>, {0x2DB0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult41                            OFFSET(getStruct<T>, {0x2DD8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult42                            OFFSET(getStruct<T>, {0x2E00, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult43                            OFFSET(getStruct<T>, {0x2E28, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool6                              OFFSET(getStruct<T>, {0x2E50, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer16                              OFFSET(getStruct<T>, {0x2E98, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer17                              OFFSET(getStruct<T>, {0x2EE0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult13                                 OFFSET(getStruct<T>, {0x2F28, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult44                            OFFSET(getStruct<T>, {0x2F48, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult45                            OFFSET(getStruct<T>, {0x2F70, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult46                            OFFSET(getStruct<T>, {0x2F98, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult47                            OFFSET(getStruct<T>, {0x2FC0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult48                            OFFSET(getStruct<T>, {0x2FE8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult49                            OFFSET(getStruct<T>, {0x3010, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult50                            OFFSET(getStruct<T>, {0x3038, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult51                            OFFSET(getStruct<T>, {0x3060, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer18                              OFFSET(getStruct<T>, {0x3088, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult14                                 OFFSET(getStruct<T>, {0x30D0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer19                              OFFSET(getStruct<T>, {0x30F0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult15                                 OFFSET(getStruct<T>, {0x3138, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer20                              OFFSET(getStruct<T>, {0x3158, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult16                                 OFFSET(getStruct<T>, {0x31A0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer21                              OFFSET(getStruct<T>, {0x31C0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult17                                 OFFSET(getStruct<T>, {0x3208, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult52                            OFFSET(getStruct<T>, {0x3228, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine3                                 OFFSET(getStruct<T>, {0x3250, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult18                                 OFFSET(getStruct<T>, {0x3318, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer22                              OFFSET(getStruct<T>, {0x3338, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult19                                 OFFSET(getStruct<T>, {0x3380, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer23                              OFFSET(getStruct<T>, {0x33A0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult20                                 OFFSET(getStruct<T>, {0x33E8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer24                              OFFSET(getStruct<T>, {0x3408, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult21                                 OFFSET(getStruct<T>, {0x3450, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult53                            OFFSET(getStruct<T>, {0x3470, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine4                                 OFFSET(getStruct<T>, {0x3498, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult22                                 OFFSET(getStruct<T>, {0x3560, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer25                              OFFSET(getStruct<T>, {0x3580, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer26                              OFFSET(getStruct<T>, {0x35C8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool7                              OFFSET(getStruct<T>, {0x3610, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult23                                 OFFSET(getStruct<T>, {0x3658, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool8                              OFFSET(getStruct<T>, {0x3678, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer27                              OFFSET(getStruct<T>, {0x36C0, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer4                             OFFSET(getStruct<T>, {0x3708, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive5                                OFFSET(getStruct<T>, {0x3778, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer28                              OFFSET(getStruct<T>, {0x3840, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer29                              OFFSET(getStruct<T>, {0x3888, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool9                              OFFSET(getStruct<T>, {0x38D0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult24                                 OFFSET(getStruct<T>, {0x3918, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer30                              OFFSET(getStruct<T>, {0x3938, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer5                             OFFSET(getStruct<T>, {0x3980, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive6                                OFFSET(getStruct<T>, {0x39F0, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool10                             OFFSET(getStruct<T>, {0x3AB8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer31                              OFFSET(getStruct<T>, {0x3B00, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult25                                 OFFSET(getStruct<T>, {0x3B48, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer32                              OFFSET(getStruct<T>, {0x3B68, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult26                                 OFFSET(getStruct<T>, {0x3BB0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer33                              OFFSET(getStruct<T>, {0x3BD0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult27                                 OFFSET(getStruct<T>, {0x3C18, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer6                             OFFSET(getStruct<T>, {0x3C38, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive7                                OFFSET(getStruct<T>, {0x3CA8, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer34                              OFFSET(getStruct<T>, {0x3D70, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool11                             OFFSET(getStruct<T>, {0x3DB8, 72, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer7                             OFFSET(getStruct<T>, {0x3E00, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive8                                OFFSET(getStruct<T>, {0x3E70, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer35                              OFFSET(getStruct<T>, {0x3F38, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool12                             OFFSET(getStruct<T>, {0x3F80, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult54                            OFFSET(getStruct<T>, {0x3FC8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult55                            OFFSET(getStruct<T>, {0x3FF0, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer36                              OFFSET(getStruct<T>, {0x4018, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult28                                 OFFSET(getStruct<T>, {0x4060, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose2                                 OFFSET(getStruct<T>, {0x4080, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult29                                 OFFSET(getStruct<T>, {0x4090, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine5                                 OFFSET(getStruct<T>, {0x40B0, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive9                                OFFSET(getStruct<T>, {0x4178, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive10                               OFFSET(getStruct<T>, {0x4240, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer8                             OFFSET(getStruct<T>, {0x4308, 112, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer9                             OFFSET(getStruct<T>, {0x4378, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult30                                 OFFSET(getStruct<T>, {0x43E8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer37                              OFFSET(getStruct<T>, {0x4408, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult31                                 OFFSET(getStruct<T>, {0x4450, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine6                                 OFFSET(getStruct<T>, {0x4470, 200, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot2                                         OFFSET(getStruct<T>, {0x4538, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive11                               OFFSET(getStruct<T>, {0x4580, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult56                            OFFSET(getStruct<T>, {0x4648, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult57                            OFFSET(getStruct<T>, {0x4670, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer38                              OFFSET(getStruct<T>, {0x4698, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult32                                 OFFSET(getStruct<T>, {0x46E0, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose3                                 OFFSET(getStruct<T>, {0x4700, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult33                                 OFFSET(getStruct<T>, {0x4710, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine7                                 OFFSET(getStruct<T>, {0x4730, 200, 0, 0})


	/// Functions
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.Fauna IdleTurn
	// void Fauna IdleTurn(FPoseLink InPose IdleTurn, FPoseLink& Fauna IdleTurn);                                               // [0x2177018] HasOutParms|BlueprintCallable 
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.Fauna Idle
	// void Fauna Idle(FPoseLink InPose Idle, FPoseLink& Fauna Idle);                                                           // [0x2177018] HasOutParms|BlueprintCallable 
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x2177018] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Burt_AnimBP_AnimGraphNode_BlendSpacePlayer_2DD8FBAB4C767B0770C81BBB25A41BD3
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Burt_AnimBP_AnimGraphNode_BlendSpacePlayer_2DD8FBAB4C767B0770C81BBB25A41BD3(); // [0x2177018] BlueprintEvent       
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.AnimNotify_FallExit
	// void AnimNotify_FallExit();                                                                                              // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.AnimNotify_LandAddExit
	// void AnimNotify_LandAddExit();                                                                                           // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.AnimNotify_LandEnter
	// void AnimNotify_LandEnter();                                                                                             // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.ExecuteUbergraph_Burt_AnimBP
	// void ExecuteUbergraph_Burt_AnimBP(int32_t EntryPoint);                                                                   // [0x2177018] Final                
};

/// Class /Irwin/AI/Interfaces/Fauna_Jump_AnimInterface.Fauna_Jump_AnimInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UFauna_Jump_AnimInterface_C : public UAnimLayerInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Irwin/AI/Interfaces/Fauna_Jump_AnimInterface.Fauna_Jump_AnimInterface_C.Fauna Jump
	// void Fauna Jump(FPoseLink& Fauna Jump);                                                                                  // [0x2177018] HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C
/// Size: 0x4888 (0x0007E0 - 0x005068)
class UGrandma_AnimBP_C : public UFortAIFaunaAnimInstance_Grandma
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 20584;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x7E0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     OFFSET(getStruct<T>, {0x7E8, 116, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x860, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x868, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x870, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              OFFSET(getStruct<T>, {0x890, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult1                             OFFSET(getStruct<T>, {0x8B8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult2                             OFFSET(getStruct<T>, {0x8E0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult3                             OFFSET(getStruct<T>, {0x908, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult4                             OFFSET(getStruct<T>, {0x930, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult5                             OFFSET(getStruct<T>, {0x958, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult6                             OFFSET(getStruct<T>, {0x980, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                OFFSET(getStruct<T>, {0x9A8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   OFFSET(getStruct<T>, {0x9F0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer1                               OFFSET(getStruct<T>, {0xA10, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult1                                  OFFSET(getStruct<T>, {0xA58, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer2                               OFFSET(getStruct<T>, {0xA78, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult2                                  OFFSET(getStruct<T>, {0xAC0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer3                               OFFSET(getStruct<T>, {0xAE0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult3                                  OFFSET(getStruct<T>, {0xB28, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  OFFSET(getStruct<T>, {0xB48, 200, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root1                                         OFFSET(getStruct<T>, {0xC10, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0xC30, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer4                               OFFSET(getStruct<T>, {0xCE0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer5                               OFFSET(getStruct<T>, {0xD28, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0xD70, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root2                                         OFFSET(getStruct<T>, {0xDB8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose1                              OFFSET(getStruct<T>, {0xDD8, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer6                               OFFSET(getStruct<T>, {0xE88, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root3                                         OFFSET(getStruct<T>, {0xED0, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult7                             OFFSET(getStruct<T>, {0xEF0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult8                             OFFSET(getStruct<T>, {0xF18, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult9                             OFFSET(getStruct<T>, {0xF40, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult10                            OFFSET(getStruct<T>, {0xF68, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult11                            OFFSET(getStruct<T>, {0xF90, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult12                            OFFSET(getStruct<T>, {0xFB8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult13                            OFFSET(getStruct<T>, {0xFE0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult14                            OFFSET(getStruct<T>, {0x1008, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult15                            OFFSET(getStruct<T>, {0x1030, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult16                            OFFSET(getStruct<T>, {0x1058, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult17                            OFFSET(getStruct<T>, {0x1080, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult18                            OFFSET(getStruct<T>, {0x10A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult19                            OFFSET(getStruct<T>, {0x10D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult20                            OFFSET(getStruct<T>, {0x10F8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult21                            OFFSET(getStruct<T>, {0x1120, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult22                            OFFSET(getStruct<T>, {0x1148, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult23                            OFFSET(getStruct<T>, {0x1170, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult24                            OFFSET(getStruct<T>, {0x1198, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult25                            OFFSET(getStruct<T>, {0x11C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult26                            OFFSET(getStruct<T>, {0x11E8, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer7                               OFFSET(getStruct<T>, {0x1210, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult4                                  OFFSET(getStruct<T>, {0x1258, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer8                               OFFSET(getStruct<T>, {0x1278, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult5                                  OFFSET(getStruct<T>, {0x12C0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer9                               OFFSET(getStruct<T>, {0x12E0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult6                                  OFFSET(getStruct<T>, {0x1328, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer10                              OFFSET(getStruct<T>, {0x1348, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult7                                  OFFSET(getStruct<T>, {0x1390, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer11                              OFFSET(getStruct<T>, {0x13B0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult8                                  OFFSET(getStruct<T>, {0x13F8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer12                              OFFSET(getStruct<T>, {0x1418, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult9                                  OFFSET(getStruct<T>, {0x1460, 32, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 OFFSET(getStruct<T>, {0x1480, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              OFFSET(getStruct<T>, {0x1548, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool1                              OFFSET(getStruct<T>, {0x15B8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer13                              OFFSET(getStruct<T>, {0x1600, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer14                              OFFSET(getStruct<T>, {0x1648, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult10                                 OFFSET(getStruct<T>, {0x1690, 32, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive1                                OFFSET(getStruct<T>, {0x16B0, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer1                             OFFSET(getStruct<T>, {0x1778, 112, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult27                            OFFSET(getStruct<T>, {0x17E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult28                            OFFSET(getStruct<T>, {0x1810, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer15                              OFFSET(getStruct<T>, {0x1838, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult11                                 OFFSET(getStruct<T>, {0x1880, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose                                  OFFSET(getStruct<T>, {0x18A0, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult12                                 OFFSET(getStruct<T>, {0x18B0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine1                                 OFFSET(getStruct<T>, {0x18D0, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive2                                OFFSET(getStruct<T>, {0x1998, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer2                             OFFSET(getStruct<T>, {0x1A60, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult13                                 OFFSET(getStruct<T>, {0x1AD0, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer3                             OFFSET(getStruct<T>, {0x1AF0, 112, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer16                              OFFSET(getStruct<T>, {0x1B60, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer17                              OFFSET(getStruct<T>, {0x1BA8, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 OFFSET(getStruct<T>, {0x1BF0, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool2                              OFFSET(getStruct<T>, {0x1C18, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              OFFSET(getStruct<T>, {0x1C60, 240, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive3                                OFFSET(getStruct<T>, {0x1D50, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool3                              OFFSET(getStruct<T>, {0x1E18, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose1                                OFFSET(getStruct<T>, {0x1E60, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult14                                 OFFSET(getStruct<T>, {0x1E88, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine2                                 OFFSET(getStruct<T>, {0x1EA8, 200, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          OFFSET(getStruct<T>, {0x1F70, 72, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x1FB8, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x1FD8, 32, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot1                                         OFFSET(getStruct<T>, {0x1FF8, 72, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK                                         OFFSET(getStruct<T>, {0x2040, 248, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot2                                         OFFSET(getStruct<T>, {0x2138, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot3                                         OFFSET(getStruct<T>, {0x2180, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x21C8, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose2                                OFFSET(getStruct<T>, {0x2240, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose3                                OFFSET(getStruct<T>, {0x2268, 40, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool4                              OFFSET(getStruct<T>, {0x2290, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend1                             OFFSET(getStruct<T>, {0x22D8, 240, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose4                                OFFSET(getStruct<T>, {0x23C8, 40, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot4                                         OFFSET(getStruct<T>, {0x23F0, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive4                                OFFSET(getStruct<T>, {0x2438, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult29                            OFFSET(getStruct<T>, {0x2500, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult30                            OFFSET(getStruct<T>, {0x2528, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult31                            OFFSET(getStruct<T>, {0x2550, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult32                            OFFSET(getStruct<T>, {0x2578, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer18                              OFFSET(getStruct<T>, {0x25A0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult15                                 OFFSET(getStruct<T>, {0x25E8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer19                              OFFSET(getStruct<T>, {0x2608, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult16                                 OFFSET(getStruct<T>, {0x2650, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose1                                 OFFSET(getStruct<T>, {0x2670, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult17                                 OFFSET(getStruct<T>, {0x2680, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine3                                 OFFSET(getStruct<T>, {0x26A0, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer20                              OFFSET(getStruct<T>, {0x2768, 72, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend2                             OFFSET(getStruct<T>, {0x27B0, 240, 0, 0})
	SMember(FFortAnimNode_QuadrupedSlopeWarping)       FortAnimGraphNode_QuadrupedSlopeWarping                     OFFSET(getStruct<T>, {0x28A0, 1480, 0, 0})
	SMember(FFortAnimNode_WeightedLookAt)              FortAnimGraphNode_WeightedLookAt                            OFFSET(getStruct<T>, {0x2E70, 592, 0, 0})
	SMember(FAnimNode_Inertialization)                 AnimGraphNode_Inertialization                               OFFSET(getStruct<T>, {0x30C0, 280, 0, 0})
	SMember(FAnimNode_LinkedAnimLayer)                 AnimGraphNode_LinkedAnimLayer                               OFFSET(getStruct<T>, {0x31D8, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose1                               OFFSET(getStruct<T>, {0x32A0, 120, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer21                              OFFSET(getStruct<T>, {0x3318, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool5                              OFFSET(getStruct<T>, {0x3360, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult33                            OFFSET(getStruct<T>, {0x33A8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult34                            OFFSET(getStruct<T>, {0x33D0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult35                            OFFSET(getStruct<T>, {0x33F8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult36                            OFFSET(getStruct<T>, {0x3420, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult37                            OFFSET(getStruct<T>, {0x3448, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult38                            OFFSET(getStruct<T>, {0x3470, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult39                            OFFSET(getStruct<T>, {0x3498, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult40                            OFFSET(getStruct<T>, {0x34C0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult41                            OFFSET(getStruct<T>, {0x34E8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult42                            OFFSET(getStruct<T>, {0x3510, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult43                            OFFSET(getStruct<T>, {0x3538, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult44                            OFFSET(getStruct<T>, {0x3560, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult45                            OFFSET(getStruct<T>, {0x3588, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult46                            OFFSET(getStruct<T>, {0x35B0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult47                            OFFSET(getStruct<T>, {0x35D8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult48                            OFFSET(getStruct<T>, {0x3600, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult49                            OFFSET(getStruct<T>, {0x3628, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult50                            OFFSET(getStruct<T>, {0x3650, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer22                              OFFSET(getStruct<T>, {0x3678, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer23                              OFFSET(getStruct<T>, {0x36C0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool6                              OFFSET(getStruct<T>, {0x3708, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult18                                 OFFSET(getStruct<T>, {0x3750, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer24                              OFFSET(getStruct<T>, {0x3770, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer25                              OFFSET(getStruct<T>, {0x37B8, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool7                              OFFSET(getStruct<T>, {0x3800, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult19                                 OFFSET(getStruct<T>, {0x3848, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult51                            OFFSET(getStruct<T>, {0x3868, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult52                            OFFSET(getStruct<T>, {0x3890, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult53                            OFFSET(getStruct<T>, {0x38B8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult54                            OFFSET(getStruct<T>, {0x38E0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult55                            OFFSET(getStruct<T>, {0x3908, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult56                            OFFSET(getStruct<T>, {0x3930, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult57                            OFFSET(getStruct<T>, {0x3958, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult58                            OFFSET(getStruct<T>, {0x3980, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer26                              OFFSET(getStruct<T>, {0x39A8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult20                                 OFFSET(getStruct<T>, {0x39F0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer27                              OFFSET(getStruct<T>, {0x3A10, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult21                                 OFFSET(getStruct<T>, {0x3A58, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer28                              OFFSET(getStruct<T>, {0x3A78, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult22                                 OFFSET(getStruct<T>, {0x3AC0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer29                              OFFSET(getStruct<T>, {0x3AE0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult23                                 OFFSET(getStruct<T>, {0x3B28, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult59                            OFFSET(getStruct<T>, {0x3B48, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine4                                 OFFSET(getStruct<T>, {0x3B70, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult24                                 OFFSET(getStruct<T>, {0x3C38, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer30                              OFFSET(getStruct<T>, {0x3C58, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult25                                 OFFSET(getStruct<T>, {0x3CA0, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer31                              OFFSET(getStruct<T>, {0x3CC0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult26                                 OFFSET(getStruct<T>, {0x3D08, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer32                              OFFSET(getStruct<T>, {0x3D28, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult27                                 OFFSET(getStruct<T>, {0x3D70, 32, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult60                            OFFSET(getStruct<T>, {0x3D90, 40, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine5                                 OFFSET(getStruct<T>, {0x3DB8, 200, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult28                                 OFFSET(getStruct<T>, {0x3E80, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer33                              OFFSET(getStruct<T>, {0x3EA0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult29                                 OFFSET(getStruct<T>, {0x3EE8, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer34                              OFFSET(getStruct<T>, {0x3F08, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive5                                OFFSET(getStruct<T>, {0x3F50, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer4                             OFFSET(getStruct<T>, {0x4018, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool8                              OFFSET(getStruct<T>, {0x4088, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer35                              OFFSET(getStruct<T>, {0x40D0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult30                                 OFFSET(getStruct<T>, {0x4118, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer36                              OFFSET(getStruct<T>, {0x4138, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult31                                 OFFSET(getStruct<T>, {0x4180, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer37                              OFFSET(getStruct<T>, {0x41A0, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool9                              OFFSET(getStruct<T>, {0x41E8, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive6                                OFFSET(getStruct<T>, {0x4230, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer5                             OFFSET(getStruct<T>, {0x42F8, 112, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool10                             OFFSET(getStruct<T>, {0x4368, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer38                              OFFSET(getStruct<T>, {0x43B0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer39                              OFFSET(getStruct<T>, {0x43F8, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult32                                 OFFSET(getStruct<T>, {0x4440, 32, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive7                                OFFSET(getStruct<T>, {0x4460, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer6                             OFFSET(getStruct<T>, {0x4528, 112, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer40                              OFFSET(getStruct<T>, {0x4598, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool11                             OFFSET(getStruct<T>, {0x45E0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer41                              OFFSET(getStruct<T>, {0x4628, 72, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool12                             OFFSET(getStruct<T>, {0x4670, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive8                                OFFSET(getStruct<T>, {0x46B8, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer7                             OFFSET(getStruct<T>, {0x4780, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive9                                OFFSET(getStruct<T>, {0x47F0, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer8                             OFFSET(getStruct<T>, {0x48B8, 112, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult61                            OFFSET(getStruct<T>, {0x4928, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult62                            OFFSET(getStruct<T>, {0x4950, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer42                              OFFSET(getStruct<T>, {0x4978, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult33                                 OFFSET(getStruct<T>, {0x49C0, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose2                                 OFFSET(getStruct<T>, {0x49E0, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult34                                 OFFSET(getStruct<T>, {0x49F0, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine6                                 OFFSET(getStruct<T>, {0x4A10, 200, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive10                               OFFSET(getStruct<T>, {0x4AD8, 200, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer9                             OFFSET(getStruct<T>, {0x4BA0, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult35                                 OFFSET(getStruct<T>, {0x4C10, 32, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer43                              OFFSET(getStruct<T>, {0x4C30, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult36                                 OFFSET(getStruct<T>, {0x4C78, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine7                                 OFFSET(getStruct<T>, {0x4C98, 200, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool13                             OFFSET(getStruct<T>, {0x4D60, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot5                                         OFFSET(getStruct<T>, {0x4DA8, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive11                               OFFSET(getStruct<T>, {0x4DF0, 200, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult63                            OFFSET(getStruct<T>, {0x4EB8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult64                            OFFSET(getStruct<T>, {0x4EE0, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer44                              OFFSET(getStruct<T>, {0x4F08, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult37                                 OFFSET(getStruct<T>, {0x4F50, 32, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose3                                 OFFSET(getStruct<T>, {0x4F70, 16, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult38                                 OFFSET(getStruct<T>, {0x4F80, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine8                                 OFFSET(getStruct<T>, {0x4FA0, 200, 0, 0})


	/// Functions
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.Fauna Jump
	// void Fauna Jump(FPoseLink& Fauna Jump);                                                                                  // [0x2177018] HasOutParms|BlueprintCallable 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.Fauna IdleTurn
	// void Fauna IdleTurn(FPoseLink InPose IdleTurn, FPoseLink& Fauna IdleTurn);                                               // [0x2177018] HasOutParms|BlueprintCallable 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.Fauna Idle
	// void Fauna Idle(FPoseLink InPose Idle, FPoseLink& Fauna Idle);                                                           // [0x2177018] HasOutParms|BlueprintCallable 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x2177018] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.AnimNotify_FallExit
	// void AnimNotify_FallExit();                                                                                              // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.AnimNotify_LandAddExit
	// void AnimNotify_LandAddExit();                                                                                           // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.AnimNotify_LandEnter
	// void AnimNotify_LandEnter();                                                                                             // [0x2177018] BlueprintCallable|BlueprintEvent 
	// Function /Irwin/AI/Predators/Grandma/Animations/Grandma_AnimBP.Grandma_AnimBP_C.ExecuteUbergraph_Grandma_AnimBP
	// void ExecuteUbergraph_Grandma_AnimBP(int32_t EntryPoint);                                                                // [0x2177018] Final                
};

/// Class /Irwin/AI/Prey/Burt/Abilities/GE_RidingSprint_PawnDmg.GE_RidingSprint_PawnDmg_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_RidingSprint_PawnDmg_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Irwin/AI/Prey/Burt/Abilities/GE_RidingSprint_VehicleDmg.GE_RidingSprint_VehicleDmg_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_RidingSprint_VehicleDmg_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Irwin/AI/Prey/Burt/Abilities/GE_NPC_Irwn_Prey_Burt_DiscoverLootCooldown.GE_NPC_Irwn_Prey_Burt_DiscoverLootCooldown_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Irwn_Prey_Burt_DiscoverLootCooldown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Struct /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x2727 (0x000001 - 0x002728)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 10024;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     __NameProperty2                                             OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     __NameProperty3                                             OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     __NameProperty4                                             OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     __NameProperty5                                             OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     __NameProperty6                                             OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	SMember(FName)                                     __NameProperty7                                             OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FName)                                     __NameProperty8                                             OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	SMember(FName)                                     __NameProperty9                                             OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty1                                            OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(float)                                     __FloatProperty                                             OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FName)                                     __NameProperty10                                            OFFSET(getStruct<T>, {0x54, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	SMember(FName)                                     __NameProperty11                                            OFFSET(getStruct<T>, {0x5C, 4, 0, 0})
	SMember(FName)                                     __NameProperty12                                            OFFSET(getStruct<T>, {0x60, 4, 0, 0})
	SMember(FName)                                     __NameProperty13                                            OFFSET(getStruct<T>, {0x64, 4, 0, 0})
	SMember(FName)                                     __NameProperty14                                            OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	SMember(FName)                                     __NameProperty15                                            OFFSET(getStruct<T>, {0x6C, 4, 0, 0})
	SMember(FName)                                     __NameProperty16                                            OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     __NameProperty17                                            OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     __NameProperty18                                            OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     __NameProperty19                                            OFFSET(getStruct<T>, {0x7C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty1                                              OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty2                                            OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FName)                                     __NameProperty20                                            OFFSET(getStruct<T>, {0x98, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty2                                              OFFSET(get<int32_t>, {0x9C, 4, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              OFFSET(get<T>, {0xA0, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty3                                            OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty4                                            OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FName)                                     __NameProperty21                                            OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty3                                              OFFSET(get<int32_t>, {0xCC, 4, 0, 0})
	SMember(FName)                                     __NameProperty22                                            OFFSET(getStruct<T>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty4                                              OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
	SMember(FName)                                     __NameProperty23                                            OFFSET(getStruct<T>, {0xD8, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty5                                              OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
	SMember(FName)                                     __NameProperty24                                            OFFSET(getStruct<T>, {0xE0, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty6                                              OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty5                                            OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(class UBlendProfile*)                      __BlendProfile                                              OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UCurveFloat*)                        __CurveFloat                                                OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty1                                             OFFSET(get<T>, {0x108, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty2                                             OFFSET(get<T>, {0x109, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty6                                            OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty3                                             OFFSET(get<T>, {0x120, 1, 0, 0})
	SMember(FName)                                     __NameProperty25                                            OFFSET(getStruct<T>, {0x124, 4, 0, 0})
	SMember(FName)                                     __NameProperty26                                            OFFSET(getStruct<T>, {0x128, 4, 0, 0})
	SMember(FName)                                     __NameProperty27                                            OFFSET(getStruct<T>, {0x12C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(float)                                     __FloatProperty1                                            OFFSET(get<float>, {0x134, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            OFFSET(getStruct<T>, {0x138, 44, 0, 0})
	DMember(float)                                     __FloatProperty2                                            OFFSET(get<float>, {0x164, 4, 0, 0})
	DMember(bool)                                      __BoolProperty1                                             OFFSET(get<bool>, {0x168, 1, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty4                                             OFFSET(get<T>, {0x169, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              OFFSET(get<T>, {0x16A, 1, 0, 0})
	SMember(FName)                                     __NameProperty28                                            OFFSET(getStruct<T>, {0x16C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty7                                              OFFSET(get<int32_t>, {0x170, 4, 0, 0})
	CMember(TEnumAsByte<ERefPoseType>)                 __ByteProperty1                                             OFFSET(get<T>, {0x174, 1, 0, 0})
	SMember(FName)                                     __NameProperty29                                            OFFSET(getStruct<T>, {0x178, 4, 0, 0})
	SMember(FName)                                     __NameProperty30                                            OFFSET(getStruct<T>, {0x17C, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty8                                              OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty1                                           OFFSET(getStruct<T>, {0x188, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x1A0, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x220, 24, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root                                        OFFSET(getStruct<T>, {0x238, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose                             OFFSET(getStruct<T>, {0x268, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool                             OFFSET(getStruct<T>, {0x298, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer                              OFFSET(getStruct<T>, {0x2C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer1                             OFFSET(getStruct<T>, {0x2F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root1                                       OFFSET(getStruct<T>, {0x328, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose1                            OFFSET(getStruct<T>, {0x358, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer2                             OFFSET(getStruct<T>, {0x388, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root2                                       OFFSET(getStruct<T>, {0x3B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult                            OFFSET(getStruct<T>, {0x3E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult1                           OFFSET(getStruct<T>, {0x418, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult2                           OFFSET(getStruct<T>, {0x448, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult3                           OFFSET(getStruct<T>, {0x478, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult4                           OFFSET(getStruct<T>, {0x4A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult5                           OFFSET(getStruct<T>, {0x4D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult6                           OFFSET(getStruct<T>, {0x508, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult7                           OFFSET(getStruct<T>, {0x538, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult8                           OFFSET(getStruct<T>, {0x568, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult9                           OFFSET(getStruct<T>, {0x598, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult10                          OFFSET(getStruct<T>, {0x5C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult11                          OFFSET(getStruct<T>, {0x5F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult12                          OFFSET(getStruct<T>, {0x628, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult13                          OFFSET(getStruct<T>, {0x658, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult14                          OFFSET(getStruct<T>, {0x688, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult15                          OFFSET(getStruct<T>, {0x6B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult16                          OFFSET(getStruct<T>, {0x6E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult17                          OFFSET(getStruct<T>, {0x718, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult18                          OFFSET(getStruct<T>, {0x748, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult19                          OFFSET(getStruct<T>, {0x778, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult20                          OFFSET(getStruct<T>, {0x7A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult21                          OFFSET(getStruct<T>, {0x7D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer3                             OFFSET(getStruct<T>, {0x808, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult                                 OFFSET(getStruct<T>, {0x838, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer4                             OFFSET(getStruct<T>, {0x868, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult1                                OFFSET(getStruct<T>, {0x898, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer5                             OFFSET(getStruct<T>, {0x8C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult2                                OFFSET(getStruct<T>, {0x8F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer                            OFFSET(getStruct<T>, {0x928, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive                               OFFSET(getStruct<T>, {0x958, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer6                             OFFSET(getStruct<T>, {0x988, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer7                             OFFSET(getStruct<T>, {0x9B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool1                            OFFSET(getStruct<T>, {0x9E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult3                                OFFSET(getStruct<T>, {0xA18, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer8                             OFFSET(getStruct<T>, {0xA48, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult4                                OFFSET(getStruct<T>, {0xA78, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer9                             OFFSET(getStruct<T>, {0xAA8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult5                                OFFSET(getStruct<T>, {0xAD8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer10                            OFFSET(getStruct<T>, {0xB08, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult6                                OFFSET(getStruct<T>, {0xB38, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult22                          OFFSET(getStruct<T>, {0xB68, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult23                          OFFSET(getStruct<T>, {0xB98, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer11                            OFFSET(getStruct<T>, {0xBC8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult7                                OFFSET(getStruct<T>, {0xBF8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_IdentityPose                                OFFSET(getStruct<T>, {0xC28, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult8                                OFFSET(getStruct<T>, {0xC58, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine                                OFFSET(getStruct<T>, {0xC88, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive1                              OFFSET(getStruct<T>, {0xCB8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive2                              OFFSET(getStruct<T>, {0xCE8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer1                           OFFSET(getStruct<T>, {0xD18, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer2                           OFFSET(getStruct<T>, {0xD48, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult9                                OFFSET(getStruct<T>, {0xD78, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose                               OFFSET(getStruct<T>, {0xDA8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool2                            OFFSET(getStruct<T>, {0xDD8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LayeredBoneBlend                            OFFSET(getStruct<T>, {0xE08, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool3                            OFFSET(getStruct<T>, {0xE38, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose1                              OFFSET(getStruct<T>, {0xE68, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer12                            OFFSET(getStruct<T>, {0xE98, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer13                            OFFSET(getStruct<T>, {0xEC8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive3                              OFFSET(getStruct<T>, {0xEF8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer3                           OFFSET(getStruct<T>, {0xF28, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult10                               OFFSET(getStruct<T>, {0xF58, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine1                               OFFSET(getStruct<T>, {0xF88, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Slot                                        OFFSET(getStruct<T>, {0xFB8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LocalToComponentSpace                       OFFSET(getStruct<T>, {0xFE8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ComponentToLocalSpace                       OFFSET(getStruct<T>, {0x1018, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Slot1                                       OFFSET(getStruct<T>, {0x1048, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LegIK                                       OFFSET(getStruct<T>, {0x1078, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive4                              OFFSET(getStruct<T>, {0x10A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult24                          OFFSET(getStruct<T>, {0x10D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult25                          OFFSET(getStruct<T>, {0x1108, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer14                            OFFSET(getStruct<T>, {0x1138, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult11                               OFFSET(getStruct<T>, {0x1168, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_IdentityPose1                               OFFSET(getStruct<T>, {0x1198, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult12                               OFFSET(getStruct<T>, {0x11C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine2                               OFFSET(getStruct<T>, {0x11F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) FortAnimGraphNode_QuadrupedSlopeWarping                   OFFSET(getStruct<T>, {0x1228, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) FortAnimGraphNode_WeightedLookAt                          OFFSET(getStruct<T>, {0x1258, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Inertialization                             OFFSET(getStruct<T>, {0x1288, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedAnimLayer                             OFFSET(getStruct<T>, {0x12B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SaveCachedPose                              OFFSET(getStruct<T>, {0x12E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool4                            OFFSET(getStruct<T>, {0x1318, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer15                            OFFSET(getStruct<T>, {0x1348, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool5                            OFFSET(getStruct<T>, {0x1378, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult26                          OFFSET(getStruct<T>, {0x13A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult27                          OFFSET(getStruct<T>, {0x13D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult28                          OFFSET(getStruct<T>, {0x1408, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult29                          OFFSET(getStruct<T>, {0x1438, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult30                          OFFSET(getStruct<T>, {0x1468, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult31                          OFFSET(getStruct<T>, {0x1498, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult32                          OFFSET(getStruct<T>, {0x14C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult33                          OFFSET(getStruct<T>, {0x14F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult34                          OFFSET(getStruct<T>, {0x1528, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult35                          OFFSET(getStruct<T>, {0x1558, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult36                          OFFSET(getStruct<T>, {0x1588, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult37                          OFFSET(getStruct<T>, {0x15B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult38                          OFFSET(getStruct<T>, {0x15E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult39                          OFFSET(getStruct<T>, {0x1618, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult40                          OFFSET(getStruct<T>, {0x1648, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult41                          OFFSET(getStruct<T>, {0x1678, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult42                          OFFSET(getStruct<T>, {0x16A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult43                          OFFSET(getStruct<T>, {0x16D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool6                            OFFSET(getStruct<T>, {0x1708, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer16                            OFFSET(getStruct<T>, {0x1738, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer17                            OFFSET(getStruct<T>, {0x1768, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult13                               OFFSET(getStruct<T>, {0x1798, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult44                          OFFSET(getStruct<T>, {0x17C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult45                          OFFSET(getStruct<T>, {0x17F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult46                          OFFSET(getStruct<T>, {0x1828, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult47                          OFFSET(getStruct<T>, {0x1858, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult48                          OFFSET(getStruct<T>, {0x1888, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult49                          OFFSET(getStruct<T>, {0x18B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult50                          OFFSET(getStruct<T>, {0x18E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult51                          OFFSET(getStruct<T>, {0x1918, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer18                            OFFSET(getStruct<T>, {0x1948, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult14                               OFFSET(getStruct<T>, {0x1978, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer19                            OFFSET(getStruct<T>, {0x19A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult15                               OFFSET(getStruct<T>, {0x19D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer20                            OFFSET(getStruct<T>, {0x1A08, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult16                               OFFSET(getStruct<T>, {0x1A38, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer21                            OFFSET(getStruct<T>, {0x1A68, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult17                               OFFSET(getStruct<T>, {0x1A98, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult52                          OFFSET(getStruct<T>, {0x1AC8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine3                               OFFSET(getStruct<T>, {0x1AF8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult18                               OFFSET(getStruct<T>, {0x1B28, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer22                            OFFSET(getStruct<T>, {0x1B58, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult19                               OFFSET(getStruct<T>, {0x1B88, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer23                            OFFSET(getStruct<T>, {0x1BB8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult20                               OFFSET(getStruct<T>, {0x1BE8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer24                            OFFSET(getStruct<T>, {0x1C18, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult21                               OFFSET(getStruct<T>, {0x1C48, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult53                          OFFSET(getStruct<T>, {0x1C78, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine4                               OFFSET(getStruct<T>, {0x1CA8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult22                               OFFSET(getStruct<T>, {0x1CD8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer25                            OFFSET(getStruct<T>, {0x1D08, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer26                            OFFSET(getStruct<T>, {0x1D38, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool7                            OFFSET(getStruct<T>, {0x1D68, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult23                               OFFSET(getStruct<T>, {0x1D98, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool8                            OFFSET(getStruct<T>, {0x1DC8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer27                            OFFSET(getStruct<T>, {0x1DF8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer4                           OFFSET(getStruct<T>, {0x1E28, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive5                              OFFSET(getStruct<T>, {0x1E58, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer28                            OFFSET(getStruct<T>, {0x1E88, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer29                            OFFSET(getStruct<T>, {0x1EB8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool9                            OFFSET(getStruct<T>, {0x1EE8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult24                               OFFSET(getStruct<T>, {0x1F18, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer30                            OFFSET(getStruct<T>, {0x1F48, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer5                           OFFSET(getStruct<T>, {0x1F78, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive6                              OFFSET(getStruct<T>, {0x1FA8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool10                           OFFSET(getStruct<T>, {0x1FD8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer31                            OFFSET(getStruct<T>, {0x2008, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult25                               OFFSET(getStruct<T>, {0x2038, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer32                            OFFSET(getStruct<T>, {0x2068, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult26                               OFFSET(getStruct<T>, {0x2098, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer33                            OFFSET(getStruct<T>, {0x20C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult27                               OFFSET(getStruct<T>, {0x20F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer6                           OFFSET(getStruct<T>, {0x2128, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive7                              OFFSET(getStruct<T>, {0x2158, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer34                            OFFSET(getStruct<T>, {0x2188, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool11                           OFFSET(getStruct<T>, {0x21B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer7                           OFFSET(getStruct<T>, {0x21E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive8                              OFFSET(getStruct<T>, {0x2218, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer35                            OFFSET(getStruct<T>, {0x2248, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool12                           OFFSET(getStruct<T>, {0x2278, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult54                          OFFSET(getStruct<T>, {0x22A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult55                          OFFSET(getStruct<T>, {0x22D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer36                            OFFSET(getStruct<T>, {0x2308, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult28                               OFFSET(getStruct<T>, {0x2338, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_IdentityPose2                               OFFSET(getStruct<T>, {0x2368, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult29                               OFFSET(getStruct<T>, {0x2398, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine5                               OFFSET(getStruct<T>, {0x23C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive9                              OFFSET(getStruct<T>, {0x23F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive10                             OFFSET(getStruct<T>, {0x2428, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer8                           OFFSET(getStruct<T>, {0x2458, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendSpacePlayer9                           OFFSET(getStruct<T>, {0x2488, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult30                               OFFSET(getStruct<T>, {0x24B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer37                            OFFSET(getStruct<T>, {0x24E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult31                               OFFSET(getStruct<T>, {0x2518, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine6                               OFFSET(getStruct<T>, {0x2548, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Slot2                                       OFFSET(getStruct<T>, {0x2578, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ApplyAdditive11                             OFFSET(getStruct<T>, {0x25A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult56                          OFFSET(getStruct<T>, {0x25D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TransitionResult57                          OFFSET(getStruct<T>, {0x2608, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SequencePlayer38                            OFFSET(getStruct<T>, {0x2638, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult32                               OFFSET(getStruct<T>, {0x2668, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_IdentityPose3                               OFFSET(getStruct<T>, {0x2698, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateResult33                               OFFSET(getStruct<T>, {0x26C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_StateMachine7                               OFFSET(getStruct<T>, {0x26F8, 48, 0, 0})
};

/// Struct /Irwin/AI/Prey/Burt/Animations/Burt_AnimBP.Burt_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0067 (0x000001 - 0x000068)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      __BoolProperty1                                             OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     __FloatProperty1                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     __FloatProperty2                                            OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     __FloatProperty3                                            OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      __BoolProperty2                                             OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      __BoolProperty3                                             OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(float)                                     __FloatProperty4                                            OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     __FloatProperty5                                            OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     __FloatProperty6                                            OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      __BoolProperty4                                             OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      __BoolProperty5                                             OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      __BoolProperty6                                             OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      __BoolProperty7                                             OFFSET(get<bool>, {0x2B, 1, 0, 0})
	DMember(bool)                                      __BoolProperty8                                             OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(float)                                     __FloatProperty7                                            OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(bool)                                      __BoolProperty9                                             OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(float)                                     __FloatProperty8                                            OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     __FloatProperty9                                            OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty10                                            OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(float)                                     __FloatProperty10                                           OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(bool)                                      __BoolProperty11                                            OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(float)                                     __FloatProperty11                                           OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     __FloatProperty12                                           OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     __FloatProperty13                                           OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      __BoolProperty12                                            OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(float)                                     __FloatProperty14                                           OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     __FloatProperty15                                           OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     __FloatProperty16                                           OFFSET(get<float>, {0x64, 4, 0, 0})
};

