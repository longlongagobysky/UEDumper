
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Enum /Script/DelMarTrackRuntime.EDelMarTrackOobTubeTransitionType
/// Size: 0x07
enum class EDelMarTrackOobTubeTransitionType : uint8_t
{
	EDelMarTrackOobTubeTransitionType__Default                                       = 0,
	EDelMarTrackOobTubeTransitionType__IntoTunnel                                    = 1,
	EDelMarTrackOobTubeTransitionType__OutOfTunnel                                   = 2,
	EDelMarTrackOobTubeTransitionType__IntoPipe                                      = 3,
	EDelMarTrackOobTubeTransitionType__OutOfPipe                                     = 4,
	EDelMarTrackOobTubeTransitionType__NoMeshNeeded                                  = 5,
	EDelMarTrackOobTubeTransitionType__EDelMarTrackOobTubeTransitionType_MAX         = 6
};

/// Enum /Script/DelMarTrackRuntime.EDelMarTrackPropType
/// Size: 0x05
enum class EDelMarTrackPropType : uint8_t
{
	EDelMarTrackPropType__None                                                       = 0,
	EDelMarTrackPropType__SkeletalMesh                                               = 1,
	EDelMarTrackPropType__StaticMesh                                                 = 2,
	EDelMarTrackPropType__Blueprint                                                  = 3,
	EDelMarTrackPropType__EDelMarTrackPropType_MAX                                   = 4
};

/// Enum /Script/DelMarTrackRuntime.EDelMarTrackPropPlacementPosition
/// Size: 0x03
enum class EDelMarTrackPropPlacementPosition : uint8_t
{
	EDelMarTrackPropPlacementPosition__FromBeginning                                 = 0,
	EDelMarTrackPropPlacementPosition__FromEnding                                    = 1,
	EDelMarTrackPropPlacementPosition__EDelMarTrackPropPlacementPosition_MAX         = 2
};

/// Enum /Script/DelMarTrackRuntime.EDelMarTrackPropPlacementSpread
/// Size: 0x04
enum class EDelMarTrackPropPlacementSpread : uint8_t
{
	EDelMarTrackPropPlacementSpread__UseDistanceBetween                              = 0,
	EDelMarTrackPropPlacementSpread__UseNumberOfProps                                = 1,
	EDelMarTrackPropPlacementSpread__UseBothDistanceAndNumber                        = 2,
	EDelMarTrackPropPlacementSpread__EDelMarTrackPropPlacementSpread_MAX             = 3
};

/// Enum /Script/DelMarTrackRuntime.EDelMarTrackRoadPropType
/// Size: 0x03
enum class EDelMarTrackRoadPropType : uint8_t
{
	EDelMarTrackRoadPropType__StartLine                                              = 0,
	EDelMarTrackRoadPropType__FinishLine                                             = 1,
	EDelMarTrackRoadPropType__EDelMarTrackRoadPropType_MAX                           = 2
};

/// Enum /Script/DelMarTrackRuntime.EDelMarTrackSide
/// Size: 0x05
enum class EDelMarTrackSide : uint8_t
{
	EDelMarTrackSide__Neither                                                        = 0,
	EDelMarTrackSide__Left                                                           = 1,
	EDelMarTrackSide__Right                                                          = 2,
	EDelMarTrackSide__Both                                                           = 3,
	EDelMarTrackSide__EDelMarTrackSide_MAX                                           = 4
};

/// Enum /Script/DelMarTrackRuntime.EDelMarTrackSnapComponentMode
/// Size: 0x03
enum class EDelMarTrackSnapComponentMode : uint8_t
{
	EDelMarTrackSnapComponentMode__SetTransform                                      = 0,
	EDelMarTrackSnapComponentMode__SnapToComponent                                   = 1,
	EDelMarTrackSnapComponentMode__EDelMarTrackSnapComponentMode_MAX                 = 2
};

/// Enum /Script/DelMarTrackRuntime.EDelMarTrackSplinePointSnapMode
/// Size: 0x04
enum class EDelMarTrackSplinePointSnapMode : uint8_t
{
	EDelMarTrackSplinePointSnapMode__StartingPoint                                   = 0,
	EDelMarTrackSplinePointSnapMode__EndingPoint                                     = 1,
	EDelMarTrackSplinePointSnapMode__CustomPoint                                     = 2,
	EDelMarTrackSplinePointSnapMode__EDelMarTrackSplinePointSnapMode_MAX             = 3
};

/// Enum /Script/DelMarTrackRuntime.EDelMarTrackType
/// Size: 0x04
enum class EDelMarTrackType : uint8_t
{
	EDelMarTrackType__Primary                                                        = 0,
	EDelMarTrackType__Secondary                                                      = 1,
	EDelMarTrackType__Cosmetic                                                       = 2,
	EDelMarTrackType__EDelMarTrackType_MAX                                           = 3
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackPointIndexRange
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarTrackPointIndexRange
{ 
	int32_t                                            BeginPointIndex;                                            // 0x0000   (0x0004)  
	int32_t                                            EndPointIndex;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackProp
/// Size: 0x0068 (0x000000 - 0x000068)
struct FDelMarTrackProp
{ 
	SDK_UNDEFINED(32,12545) /* TWeakObjectPtr<USkeletalMesh*> */ __um(SkeletalMesh);                               // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,12546) /* TWeakObjectPtr<UStaticMesh*> */ __um(StaticMesh);                                   // 0x0020   (0x0020)  
	SDK_UNDEFINED(32,12547) /* TWeakObjectPtr<UClass*> */ __um(Blueprint);                                         // 0x0040   (0x0020)  
	EDelMarTrackPropType                               PropType;                                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackPropSection
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FDelMarTrackPropSection
{ 
	TArray<FDelMarTrackPointIndexRange>                RangesToApplyTo;                                            // 0x0000   (0x0010)  
	FDelMarTrackProp                                   PropToPlace;                                                // 0x0010   (0x0068)  
	int32_t                                            NumPropsToPlace;                                            // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	double                                             DistanceBetweenProps;                                       // 0x0080   (0x0008)  
	FName                                              CustomizationPlacementBase;                                 // 0x0088   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	double                                             PlacementBeginPadding;                                      // 0x0090   (0x0008)  
	double                                             PlacementEndPadding;                                        // 0x0098   (0x0008)  
	double                                             PlacementDistanceOffset;                                    // 0x00A0   (0x0008)  
	FVector                                            PlacementScale;                                             // 0x00A8   (0x0018)  
	FRotator                                           PlacementRotationOffset;                                    // 0x00C0   (0x0018)  
	EDelMarTrackSide                                   SupportedTrackSide;                                         // 0x00D8   (0x0001)  
	EDelMarTrackPropPlacementPosition                  PlacementPosition;                                          // 0x00D9   (0x0001)  
	EDelMarTrackPropPlacementSpread                    PlacementSpread;                                            // 0x00DA   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x00DB   (0x0005)  MISSED
	SDK_UNDEFINED(16,12548) /* FString */              __um(RangesToApplyToEditorString);                          // 0x00E0   (0x0010)  
};

/// Struct /Script/DelMarTrackRuntime.DelMarSegmentActorCollection
/// Size: 0x0028 (0x000000 - 0x000028)
struct FDelMarSegmentActorCollection
{ 
	TArray<class ADelMarTrackSegmentBase*>             Segments;                                                   // 0x0000   (0x0010)  
	class ADelMarTrackBase*                            Track;                                                      // 0x0010   (0x0008)  
	TArray<class UActorComponent*>                     PropComponents;                                             // 0x0018   (0x0010)  
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackBase
/// Size: 0x0078 (0x000290 - 0x000308)
class ADelMarTrackBase : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0290   (0x0020)  MISSED
	class UDelMarTrackSplineComponent*                 Spline;                                                     // 0x02B0   (0x0008)  
	class UDelMarTrackPalette*                         TrackPalette;                                               // 0x02B8   (0x0008)  
	class UDelMarTrackPaletteTheme*                    TrackPalette_V2;                                            // 0x02C0   (0x0008)  
	class UDelMarTrackPointData*                       TrackSplinePointData;                                       // 0x02C8   (0x0008)  
	TArray<FDelMarTrackPropSection>                    TrackPropData;                                              // 0x02D0   (0x0010)  
	TArray<FDelMarSegmentActorCollection>              SegmentCollections;                                         // 0x02E0   (0x0010)  
	bool                                               bForceValidOOBTube;                                         // 0x02F0   (0x0001)  
	bool                                               bForceValidTrack;                                           // 0x02F1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x02F2   (0x0002)  MISSED
	float                                              DefaultMaxTrackWidth;                                       // 0x02F4   (0x0004)  
	bool                                               bEnableGlobalMaterialCollectionIndex;                       // 0x02F8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x02F9   (0x0003)  MISSED
	uint32_t                                           GlobalMaterialCollectionIndex;                              // 0x02FC   (0x0004)  
	int32_t                                            TotalSegmentActors;                                         // 0x0300   (0x0004)  
	float                                              TrackLength;                                                // 0x0304   (0x0004)  


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.SetTrackTypeTagAtIndex
	// void SetTrackTypeTagAtIndex(int32_t SplineIndex, FGameplayTag& tag);                                                  // [0xb6d5484] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.RebuildTrack
	// void RebuildTrack();                                                                                                  // [0xb6d5470] Final|Native|Public  
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.PreSplineSegmentGenerated
	// void PreSplineSegmentGenerated(class UDelMarTrackSplineComponent* SplineComp, int32_t PointIndex);                    // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.PostSplineSegmentGenerated
	// void PostSplineSegmentGenerated(class UDelMarTrackSplineComponent* SplineComp, int32_t PointIndex);                   // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.OnSplinePointRemoved
	// void OnSplinePointRemoved(class UDelMarTrackSplineComponent* InSpline, int32_t SplineIndex);                          // [0xb6d53ac] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.OnSplinePointChanged
	// void OnSplinePointChanged(class UDelMarTrackSplineComponent* InSpline, int32_t SplineIndex);                          // [0xb6d52e8] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.OnSplinePointAdded
	// void OnSplinePointAdded(class UDelMarTrackSplineComponent* InSpline, int32_t SplineIndex);                            // [0xb6d5224] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.OnSplineClosedLoopChanged
	// void OnSplineClosedLoopChanged(class UDelMarTrackSplineComponent* InSpline, int32_t SplineIndex);                     // [0xb6d5160] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.OnMetadataChanged
	// void OnMetadataChanged(class UDelMarTrackSplineComponent* InSpline, int32_t SplineIndex);                             // [0xb6d509c] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.IsTrackable
	// bool IsTrackable();                                                                                                   // [0xb6d4d1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.IsSecondary
	// bool IsSecondary();                                                                                                   // [0xb6d4c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.IsPrimary
	// bool IsPrimary();                                                                                                     // [0xb6d4bdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.IsPointInOOBTube
	// bool IsPointInOOBTube(FVector& Point);                                                                                // [0x2177018] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.IsDistanceWithinRange
	// bool IsDistanceWithinRange(float InDistance, float StartDistance, float EndDistance);                                 // [0xb6d4adc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.IsCosmetic
	// bool IsCosmetic();                                                                                                    // [0xb6d4ab8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.InitializeSpline
	// void InitializeSpline();                                                                                              // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetTransitionSegmentClass
	// class UClass* GetTransitionSegmentClass(int32_t FromSplineIndex, int32_t ToSplineIndex);                              // [0xb6d48e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetStartCapClass
	// class UClass* GetStartCapClass(int32_t SplineIndex);                                                                  // [0xb6d485c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetSegmentTrackTypeTag
	// FGameplayTag GetSegmentTrackTypeTag(int32_t SplineIndex);                                                             // [0xb6d4734] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetSegmentClassAtSplinePoint
	// class UClass* GetSegmentClassAtSplinePoint(int32_t SplineIndex);                                                      // [0xb6d46a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetPreviousSplineSegment
	// int32_t GetPreviousSplineSegment(int32_t InSplineSegmentIndex);                                                       // [0xb6d4534] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetPreviousSplinePoint
	// int32_t GetPreviousSplinePoint(int32_t InSplinePoint);                                                                // [0xb6d4534] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetNextSplineSegment
	// int32_t GetNextSplineSegment(int32_t InSplineSegmentIndex);                                                           // [0xb6d4474] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetNextSplinePoint
	// int32_t GetNextSplinePoint(int32_t InSplinePoint);                                                                    // [0xb6d43e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetMetaDataAtSplinePoint
	// FDelMarSplinePointMetaData GetMetaDataAtSplinePoint(int32_t SplineIndex);                                             // [0xb6d4350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetLoopDistance
	// float GetLoopDistance(float InTotalDistance);                                                                         // [0xb6d42bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetForwardDistance
	// float GetForwardDistance(float Start, float End);                                                                     // [0xb6d41f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetEndCapClass
	// class UClass* GetEndCapClass(int32_t SplineIndex);                                                                    // [0xb6d4164] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetDistanceRangeFromPointRange
	// FDelMarTrackPointDistanceRange GetDistanceRangeFromPointRange(FDelMarTrackPointIndexRange& InRange);                  // [0xb6d40cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.GetAllTrackSegmentActors
	// TArray<ADelMarTrackSegmentBase*> GetAllTrackSegmentActors();                                                          // [0xb6d3a18] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.ForceValidTrack
	// bool ForceValidTrack();                                                                                               // [0xb6d3a00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.ForceValidOOBTube
	// bool ForceValidOOBTube();                                                                                             // [0x9f6c284] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBase.ConvertTrackTagsToV2
	// void ConvertTrackTagsToV2();                                                                                          // [0xb6d3924] Final|Native|Public  
};

/// Class /Script/DelMarTrackRuntime.DelMarTrack
/// Size: 0x0048 (0x000308 - 0x000350)
class ADelMarTrack : public ADelMarTrackBase
{ 
public:
	EDelMarTrackType                                   TrackType;                                                  // 0x0308   (0x0001)  
	bool                                               bUserSelectedStartTrack;                                    // 0x0309   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x030A   (0x0006)  MISSED
	class ADelMarTrack*                                StartTrackConnection;                                       // 0x0310   (0x0008)  
	bool                                               bUserSelectedEndTrack;                                      // 0x0318   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0319   (0x0007)  MISSED
	class ADelMarTrack*                                EndTrackConnection;                                         // 0x0320   (0x0008)  
	float                                              ParentStartDistance;                                        // 0x0328   (0x0004)  
	float                                              ParentEndDistance;                                          // 0x032C   (0x0004)  
	float                                              PrimaryStartDistance;                                       // 0x0330   (0x0004)  
	float                                              PrimaryEndDistance;                                         // 0x0334   (0x0004)  
	float                                              PrimarySegmentLength;                                       // 0x0338   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x033C   (0x0004)  MISSED
	class UClass*                                      OobTubeClass;                                               // 0x0340   (0x0008)  
	SDK_UNDEFINED(8,12549) /* TWeakObjectPtr<ADelMarTrackOobTube*> */ __um(AttachedOobTube);                       // 0x0348   (0x0008)  


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrack.SplitTrackAtPoint
	// bool SplitTrackAtPoint(int32_t SplitAtPoint);                                                                         // [0xb6d55b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarTrackRuntime.DelMarTrack.MergeTrack
	// bool MergeTrack(class ADelMarTrack* OtherTrack, bool MergeToEndPoint, bool CopyFromStartPoint);                       // [0xb6d4d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarTrackRuntime.DelMarTrack.GetSecondaryStartTrack
	// class ADelMarTrack* GetSecondaryStartTrack();                                                                         // [0xb6d4690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrack.GetSecondaryEndTrack
	// class ADelMarTrack* GetSecondaryEndTrack();                                                                           // [0x3f2fdac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrack.GetPrimaryStartDistance
	// float GetPrimaryStartDistance();                                                                                      // [0x65ad8c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrack.GetPrimaryEndDistance
	// float GetPrimaryEndDistance();                                                                                        // [0xb6d4678] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrack.GetPrimaryDistance
	// float GetPrimaryDistance(float DistanceOnThisTrack);                                                                  // [0xb6d45c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrack.GetParentStartDistance
	// float GetParentStartDistance();                                                                                       // [0xb6d451c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrack.GetParentEndDistance
	// float GetParentEndDistance();                                                                                         // [0xb6d4504] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarTrackBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackBlueprintFunctionLibrary.TrackPositionDebugDrawEnabled
	// bool TrackPositionDebugDrawEnabled();                                                                                 // [0xb6d5640] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarTrackRuntime.DelMarTrackBlueprintFunctionLibrary.IsTrackRadiusCheckDisabled
	// bool IsTrackRadiusCheckDisabled();                                                                                    // [0xb6d4d00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackCustomizationInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarTrackCustomizationInterface : public UInterface
{ 
public:
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackSegmentBase
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ADelMarTrackSegmentBase : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0290   (0x0008)  MISSED
	bool                                               bIgnoreSplineLength;                                        // 0x0298   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0299   (0x0003)  MISSED
	SDK_UNDEFINED(8,12550) /* TWeakObjectPtr<ADelMarTrackBase*> */ __um(Track);                                    // 0x029C   (0x0008)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02A4   (0x0004)  MISSED
	class UDelMarTrackMatLayerComponent*               MaterialLayerComponent;                                     // 0x02A8   (0x0008)  
	float                                              BeginDistanceAlongSpline;                                   // 0x02B0   (0x0004)  
	float                                              EndDistanceAlongSpline;                                     // 0x02B4   (0x0004)  
	int32_t                                            TrackSegmentIndex;                                          // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x02BC   (0x0004)  MISSED


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackSegmentBase.GetSplineMeshComponent
	// class USplineMeshComponent* GetSplineMeshComponent();                                                                 // [0x15feb98] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSegmentBase.GetSplineDistanceRange
	// FDelMarTrackPointDistanceRange GetSplineDistanceRange();                                                              // [0xb6df3e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSegmentBase.ContainsDistanceAlongSpline
	// bool ContainsDistanceAlongSpline(float DistanceAlongSpline);                                                          // [0xb6df230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackCustomSegment
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class ADelMarTrackCustomSegment : public ADelMarTrackSegmentBase
{ 
public:
	float                                              SegmentLength;                                              // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02C4   (0x0004)  MISSED
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackMaterialCollectionEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDelMarTrackMaterialCollectionEntry
{ 
	TArray<class UMaterialInstanceConstant*>           MICs;                                                       // 0x0000   (0x0010)  
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackMaterialCollection
/// Size: 0x0030 (0x000030 - 0x000060)
class UDelMarTrackMaterialCollection : public UDataAsset
{ 
public:
	uint32_t                                           SelectedIndex;                                              // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<FDelMarTrackMaterialCollectionEntry>        Materials;                                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0048   (0x0018)  MISSED
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackMatLayerComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UDelMarTrackMatLayerComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(8,12551) /* TWeakObjectPtr<UStaticMeshComponent*> */ __um(RoadMesh);                             // 0x00A0   (0x0008)  
	SDK_UNDEFINED(8,12552) /* TWeakObjectPtr<ADelMarTrackBase*> */ __um(Track);                                    // 0x00A8   (0x0008)  
	class UDelMarTrackMaterialCollection*              MaterialCollection;                                         // 0x00B0   (0x0008)  
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackMeshCustomization
/// Size: 0x0010 (0x000770 - 0x000780)
class UDelMarTrackMeshCustomization : public USplineMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x9];                                       // 0x0770   (0x0009)  MISSED
	bool                                               bIsADefaultCustomization;                                   // 0x0779   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x077A   (0x0006)  MISSED
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackOobTubeMeshSection
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarTrackOobTubeMeshSection
{ 
	class USplineMeshComponent*                        TubeMesh;                                                   // 0x0000   (0x0008)  
	int32_t                                            PointIndex;                                                 // 0x0008   (0x0004)  
	float                                              StartDistanceAlongSpline;                                   // 0x000C   (0x0004)  
	float                                              EndDistanceAlongSpline;                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackOobTube
/// Size: 0x00E8 (0x000290 - 0x000378)
class ADelMarTrackOobTube : public AActor
{ 
public:
	class ADelMarTrack*                                AttachedTrack;                                              // 0x0290   (0x0008)  
	class UDelMarTrackSplineComponent*                 Spline;                                                     // 0x0298   (0x0008)  
	class UDelMarTrackOobTubePointData*                SplinePointData;                                            // 0x02A0   (0x0008)  
	SDK_UNDEFINED(32,12553) /* TWeakObjectPtr<UClass*> */ __um(TubeMeshComponentClass);                            // 0x02A8   (0x0020)  
	TArray<FDelMarTrackOobTubeMeshSection>             OobTubeMeshSections;                                        // 0x02C8   (0x0010)  
	SDK_UNDEFINED(32,12554) /* TWeakObjectPtr<UStaticMesh*> */ __um(TubeMesh);                                     // 0x02D8   (0x0020)  
	SDK_UNDEFINED(80,12555) /* TMap<EDelMarTrackOobTubeTransitionType, TWeakObjectPtr<UStaticMesh*>> */ __um(TransitionMeshes); // 0x02F8   (0x0050)  
	FCollisionProfileName                              EnabledMeshCollisionProfile;                                // 0x0348   (0x0004)  
	FCollisionProfileName                              DisabledMeshCollisionProfile;                               // 0x034C   (0x0004)  
	float                                              DefaultTransitionMeshLength;                                // 0x0350   (0x0004)  
	int32_t                                            DefaultNumSubsections;                                      // 0x0354   (0x0004)  
	float                                              SmallestSubsectionLength;                                   // 0x0358   (0x0004)  
	float                                              MinimumMeshScale;                                           // 0x035C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0360   (0x0018)  MISSED


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.OnPostContructedOOBTube
	// void OnPostContructedOOBTube();                                                                                       // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.OnConstructTubeMesh
	// void OnConstructTubeMesh(class USplineMeshComponent* TubeMeshComponent, bool bIsTransitionMesh, bool bIsTransitionIn); // [0x2177018] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.OnAttachedTrackPointRemoved
	// void OnAttachedTrackPointRemoved(class UDelMarTrackSplineComponent* InSpline, int32_t PointIndex);                    // [0xb6d4fd8] Final|Native|Private 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.OnAttachedTrackPointChanged
	// void OnAttachedTrackPointChanged(class UDelMarTrackSplineComponent* InSpline, int32_t PointIndex);                    // [0xb6d4f14] Final|Native|Private 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.OnAttachedTrackPointAdded
	// void OnAttachedTrackPointAdded(class UDelMarTrackSplineComponent* InSpline, int32_t PointIndex);                      // [0xb6d4e50] Final|Native|Private 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.IsSplinePointOffset
	// bool IsSplinePointOffset(int32_t PointIndex);                                                                         // [0xb6d4c24] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.IsAttachedToSecondaryTrack
	// bool IsAttachedToSecondaryTrack();                                                                                    // [0xb6d4a7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.IsAttachedToPrimaryTrack
	// bool IsAttachedToPrimaryTrack();                                                                                      // [0xb6d4a38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.HasTubeMeshAtDistance
	// bool HasTubeMeshAtDistance(float InDistance);                                                                         // [0xb6d49a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.GetSplinePointTagAtIndex
	// FGameplayTag GetSplinePointTagAtIndex(int32_t PointIndex);                                                            // [0xb6d47c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTube.DetermineTubeMeshTransitionType
	// EDelMarTrackOobTubeTransitionType DetermineTubeMeshTransitionType(int32_t CurrentPointIndex, int32_t NextPointIndex); // [0xb6d3938] Native|Event|Protected|BlueprintEvent|Const 
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackOobTubePointMetaData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FDelMarTrackOobTubePointMetaData
{ 
	FVector2D                                          LocationOffset;                                             // 0x0000   (0x0010)  
	FVector2D                                          ScaleOffset;                                                // 0x0010   (0x0010)  
	int32_t                                            NumSubsections;                                             // 0x0020   (0x0004)  
	bool                                               bShouldGenerateTube;                                        // 0x0024   (0x0001)  
	bool                                               bShouldMirrorAttachedTrackPoint;                            // 0x0025   (0x0001)  
	bool                                               bIgnoreAutoTransitionScaling;                               // 0x0026   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0027   (0x0001)  MISSED
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackOobTubePointData
/// Size: 0x0010 (0x000028 - 0x000038)
class UDelMarTrackOobTubePointData : public USplineMetadata
{ 
public:
	TArray<FDelMarTrackOobTubePointMetaData>           MetaData;                                                   // 0x0028   (0x0010)  
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackOobTubePositionalRenderingComponent
/// Size: 0x0070 (0x0000A0 - 0x000110)
class UDelMarTrackOobTubePositionalRenderingComponent : public UControllerComponent
{ 
public:
	SDK_UNDEFINED(8,12556) /* TWeakObjectPtr<UDelMarTrackPositionComponent*> */ __um(PlayerPositionComponent);     // 0x00A0   (0x0008)  
	SDK_UNDEFINED(80,12557) /* TSet<USplineMeshComponent*> */ __um(ActiveOOBTubeMeshes);                           // 0x00A8   (0x0050)  
	class ADelMarTrackOobTube*                         ActiveOOBTube;                                              // 0x00F8   (0x0008)  
	float                                              RenderDistanceInFrontOfPlayer;                              // 0x0100   (0x0004)  
	float                                              RenderDistanceBehindPlayer;                                 // 0x0104   (0x0004)  
	float                                              UpdateIntervalInSeconds;                                    // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarTrackOobTubeProxy : public UObject
{ 
public:


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy.GetSplineVisualizationOffset
	// double GetSplineVisualizationOffset();                                                                                // [0xb6df4c0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy.GetSplineMetadata
	// FDelMarTrackOobTubePointMetaData GetSplineMetadata(int32_t PointIndex);                                               // [0xb6df410] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy.GetSplineComponent
	// class USplineComponent* GetSplineComponent();                                                                         // [0x65ad8a0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy.GetSmallestSubsectionLength
	// double GetSmallestSubsectionLength();                                                                                 // [0xb6df3bc] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy.GetOobTubeActor
	// class AActor* GetOobTubeActor();                                                                                      // [0x7d99ed8] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy.GetMinimumMeshScale
	// double GetMinimumMeshScale();                                                                                         // [0xb6df2fc] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy.GetDefaultTransitionMeshLength
	// double GetDefaultTransitionMeshLength();                                                                              // [0xb6df2d0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy.GetDefaultSubsectionCount
	// int32_t GetDefaultSubsectionCount();                                                                                  // [0x636e828] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeProxy.GetAttachedTrack
	// class ADelMarTrack* GetAttachedTrack();                                                                               // [0x2e5a158] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackOobTubeCollectionProxy
/// Size: 0x0008 (0x000028 - 0x000030)
class UDelMarTrackOobTubeCollectionProxy : public UObject
{ 
public:
	class UClass*                                      OobTubeClass;                                               // 0x0028   (0x0008)  


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeCollectionProxy.RegisterOobTube
	// void RegisterOobTube(class AActor* OobTubeActor);                                                                     // [0xa61cef4] Native|Event|Public|BlueprintEvent 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeCollectionProxy.GetOobTubeProxy
	// class UDelMarTrackOobTubeProxy* GetOobTubeProxy(int32_t OobTubeIndex);                                                // [0xb6df328] Native|Event|Public|BlueprintEvent 
	// Function /Script/DelMarTrackRuntime.DelMarTrackOobTubeCollectionProxy.GetNumOobTubeProxies
	// int32_t GetNumOobTubeProxies();                                                                                       // [0x6358b48] Native|Event|Public|BlueprintEvent|Const 
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackPaletteTrackTypeEntry
/// Size: 0x0038 (0x000000 - 0x000038)
struct FDelMarTrackPaletteTrackTypeEntry
{ 
	FGameplayTag                                       StyleTag;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<class UClass*>                              SegmentActors;                                              // 0x0008   (0x0010)  
	class UClass*                                      FrontEndcap;                                                // 0x0018   (0x0008)  
	bool                                               bIsFrontEndcapReversable;                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	class UClass*                                      BackEndcap;                                                 // 0x0028   (0x0008)  
	class UTexture*                                    WidgetImage;                                                // 0x0030   (0x0008)  
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackPaletteTrackType
/// Size: 0x0020 (0x000030 - 0x000050)
class UDelMarTrackPaletteTrackType : public UDataAsset
{ 
public:
	TArray<FDelMarTrackPaletteTrackTypeEntry>          StyleArray;                                                 // 0x0030   (0x0010)  
	bool                                               bShouldOOBTubeFunnel;                                       // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	class UStaticMesh*                                 OOBTubeMeshOverride;                                        // 0x0048   (0x0008)  


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackPaletteTrackType.AddSegmentClassActorToStyle
	// void AddSegmentClassActorToStyle(FGameplayTag& StyleTag, class UClass* SegmentClass);                                 // [0xb6df0dc] Final|Native|Private|HasOutParms|BlueprintCallable 
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackPaletteTransitionEntry_v2
/// Size: 0x0040 (0x000000 - 0x000040)
struct FDelMarTrackPaletteTransitionEntry_v2
{ 
	FGameplayTag                                       TagA;                                                       // 0x0000   (0x0004)  
	FGameplayTag                                       TagB;                                                       // 0x0004   (0x0004)  
	class UClass*                                      TRANSITION;                                                 // 0x0008   (0x0008)  
	bool                                               bUseReverse;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	class UClass*                                      Reverse;                                                    // 0x0018   (0x0008)  
	bool                                               bEnableOOBTubeTransitions;                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	class UStaticMesh*                                 OOBTubeTransitionMesh;                                      // 0x0028   (0x0008)  
	bool                                               bOverrideReverseOOBTubeMesh;                                // 0x0030   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	class UStaticMesh*                                 ReverseOOBTubeTransitionMesh;                               // 0x0038   (0x0008)  
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackPaletteTransitions
/// Size: 0x0010 (0x000030 - 0x000040)
class UDelMarTrackPaletteTransitions : public UDataAsset
{ 
public:
	TArray<FDelMarTrackPaletteTransitionEntry_v2>      TransitionArray;                                            // 0x0030   (0x0010)  
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackPaletteTheme
/// Size: 0x0040 (0x000030 - 0x000070)
class UDelMarTrackPaletteTheme : public UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FName                                              ThemeName;                                                  // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	SDK_UNDEFINED(16,12558) /* FString */              __um(ThemeDescription);                                     // 0x0040   (0x0010)  
	TArray<class UDelMarTrackPaletteTrackType*>        Tracks;                                                     // 0x0050   (0x0010)  
	class UDelMarTrackPaletteTransitions*              Transitions;                                                // 0x0060   (0x0008)  
	class UStaticMesh*                                 OOBTubeMesh;                                                // 0x0068   (0x0008)  
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber
/// Size: 0x00B8 (0x000290 - 0x000348)
class ADelMarTrackPerformanceScrubber : public AActor
{ 
public:
	class UCameraComponent*                            Camera;                                                     // 0x0290   (0x0008)  
	SDK_UNDEFINED(8,12559) /* TWeakObjectPtr<UDelMarTrackSplineComponent*> */ __um(Spline);                        // 0x0298   (0x0008)  
	SDK_UNDEFINED(16,12560) /* FString */              __um(SplineSelection);                                      // 0x02A0   (0x0010)  
	int32_t                                            ScrubUnits;                                                 // 0x02B0   (0x0004)  
	float                                              CameraHeightOffset;                                         // 0x02B4   (0x0004)  
	class UCurveFloat*                                 FloatCurve;                                                 // 0x02B8   (0x0008)  
	int32_t                                            RuntimeSpeed;                                               // 0x02C0   (0x0004)  
	bool                                               bRunCsvProfilerDuringScrub : 1;                             // 0x02C4:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x1B];                                      // 0x02C5   (0x001B)  MISSED
	int32_t                                            ScrubUnitMax;                                               // 0x02E0   (0x0004)  
	bool                                               bRuntimeEnabled : 1;                                        // 0x02E4:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x02E5   (0x0003)  MISSED
	SDK_UNDEFINED(80,12561) /* TMap<FString, UDelMarTrackSplineComponent*> */ __um(StringToSplineMap);             // 0x02E8   (0x0050)  
	class UTimelineComponent*                          Timeline;                                                   // 0x0338   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0340   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber.UpdateSplines
	// TArray<FString> UpdateSplines();                                                                                      // [0xb6df658] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber.TimelineTickFloatCallback
	// void TimelineTickFloatCallback(float Progress);                                                                       // [0xb6df5d8] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber.TimelineTickCallback
	// void TimelineTickCallback();                                                                                          // [0xb6df5b4] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber.TimelineFinishedCallback
	// void TimelineFinishedCallback();                                                                                      // [0xb6df57c] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber.ReceiveRuntimeTrackScrubbingStart
	// void ReceiveRuntimeTrackScrubbingStart();                                                                             // [0xb6df558] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber.ReceiveRuntimeTrackScrubbingSpeed
	// void ReceiveRuntimeTrackScrubbingSpeed();                                                                             // [0xb6df4ec] Final|Native|Protected 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber.ClientStopScrub
	// void ClientStopScrub();                                                                                               // [0x2bfc0a0] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPerformanceScrubber.ClientStartScrub
	// void ClientStartScrub();                                                                                              // [0x1b779b8] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackRoadProp
/// Size: 0x0010 (0x000BC8 - 0x000BD8)
class ADelMarTrackRoadProp : public ABuildingProp
{ 
public:
	EDelMarTrackRoadPropType                           RoadPropType;                                               // 0x0BC8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0BC9   (0x0007)  MISSED
	class UDelMarTrackSnapToComponent*                 SnapToComponent;                                            // 0x0BD0   (0x0008)  
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackSegmentCollectionSpawnDataProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarTrackSegmentCollectionSpawnDataProvider : public UInterface
{ 
public:
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackTagConverterData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FDelMarTrackTagConverterData
{ 
	FGameplayTag                                       v1Tag;                                                      // 0x0000   (0x0004)  
	bool                                               bCheckCustomizations;                                       // 0x0004   (0x0001)  
	bool                                               bNeedRightRail;                                             // 0x0005   (0x0001)  
	bool                                               bNeedLeftRail;                                              // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0007   (0x0001)  MISSED
	FGameplayTag                                       v2Tag;                                                      // 0x0008   (0x0004)  
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackSettings
/// Size: 0x0020 (0x000030 - 0x000050)
class UDelMarTrackSettings : public UDeveloperSettings
{ 
public:
	FGameplayTag                                       RootTrackTag;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<FDelMarTrackTagConverterData>               TagConverterData;                                           // 0x0038   (0x0010)  
	FGameplayTag                                       DefaultConverterTag;                                        // 0x0048   (0x0004)  
	FGameplayTag                                       HiddenTrackTag;                                             // 0x004C   (0x0004)  
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackSnapToComponent
/// Size: 0x0030 (0x000290 - 0x0002C0)
class UDelMarTrackSnapToComponent : public USceneComponent
{ 
public:
	FVector                                            OffsetToOwnerActor;                                         // 0x0290   (0x0018)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x02A8   (0x0018)  MISSED
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackSnapToSplinePointComponent
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class UDelMarTrackSnapToSplinePointComponent : public UDelMarTrackSnapToComponent
{ 
public:
	class USplineComponent*                            SplineToSnapTo;                                             // 0x02C0   (0x0008)  
	EDelMarTrackSplinePointSnapMode                    SplinePointSnapMode;                                        // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02C9   (0x0003)  MISSED
	int32_t                                            SplinePointIndexToSnapTo;                                   // 0x02CC   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x02D0   (0x0010)  MISSED
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackStaticMeshSegment
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class ADelMarTrackStaticMeshSegment : public ADelMarTrackSegmentBase
{ 
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x02C0   (0x0008)  
};

/// Struct /Script/DelMarTrackRuntime.TrackPosition
/// Size: 0x0020 (0x000000 - 0x000020)
struct FTrackPosition
{ 
	class ADelMarTrackBase*                            Track;                                                      // 0x0000   (0x0008)  
	float                                              DistanceAlongSpline;                                        // 0x0008   (0x0004)  
	float                                              RawDistanceAlongSpline;                                     // 0x000C   (0x0004)  
	float                                              DistanceToVehicleSquared;                                   // 0x0010   (0x0004)  
	float                                              LastKnownGoodDistance;                                      // 0x0014   (0x0004)  
	int32_t                                            SegmentIndex;                                               // 0x0018   (0x0004)  
	bool                                               bIsValid;                                                   // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackPositionComponent
/// Size: 0x0080 (0x000290 - 0x000310)
class UDelMarTrackPositionComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0290   (0x0030)  MISSED
	FTrackPosition                                     ActiveTrackPosition;                                        // 0x02C0   (0x0020)  
	float                                              TrackRadius;                                                // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x2C];                                      // 0x02E4   (0x002C)  MISSED


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.SetActiveTrack
	// void SetActiveTrack(class ADelMarTrackBase* Track, int32_t TrackSegmentIndex, bool bForce);                           // [0xb6f2090] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.IsTouchingTrack
	// bool IsTouchingTrack();                                                                                               // [0x9e9fcc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.IsOnPrimaryTrack
	// bool IsOnPrimaryTrack();                                                                                              // [0xb6f2048] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.HasValidPosition
	// bool HasValidPosition();                                                                                              // [0x606162c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetWorldUpVectorAlongSpline
	// FVector GetWorldUpVectorAlongSpline();                                                                                // [0xb6f1d44] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetWorldTransformAlongSpline
	// FTransform GetWorldTransformAlongSpline();                                                                            // [0xb6f1cc8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetWorldRightVectorAlongSpline
	// FVector GetWorldRightVectorAlongSpline();                                                                             // [0xb6f1c48] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetWorldLocationAlongSpline
	// FVector GetWorldLocationAlongSpline();                                                                                // [0xb6f1c10] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetWorldDirectionAlongSpline
	// FVector GetWorldDirectionAlongSpline();                                                                               // [0xb6f1bd8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetTrackRadius
	// float GetTrackRadius(class ADelMarTrackBase* InTrack, float InDistanceAlongTrack);                                    // [0xb6f1ad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetRawDistanceAlongSpline
	// float GetRawDistanceAlongSpline();                                                                                    // [0x914d0d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetRawClosestSplineLocation
	// FVector GetRawClosestSplineLocation();                                                                                // [0xb6f14b4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetPrimaryWorldLocationAlongSpline
	// FVector GetPrimaryWorldLocationAlongSpline();                                                                         // [0xb6f147c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetPrimaryTrack
	// class ADelMarTrackBase* GetPrimaryTrack();                                                                            // [0xb6f1458] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetPrimaryDistance
	// float GetPrimaryDistance();                                                                                           // [0xb6f1430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetLastKnowGoodSplineLocation
	// FVector GetLastKnowGoodSplineLocation();                                                                              // [0xb6f117c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetDistanceAlongSpline
	// float GetDistanceAlongSpline();                                                                                       // [0x9d9f934] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetActiveTrackRadius
	// float GetActiveTrackRadius();                                                                                         // [0xb6f108c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetActiveTrackPosition
	// FTrackPosition GetActiveTrackPosition();                                                                              // [0xb6f1028] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetActiveTrackDistance
	// float GetActiveTrackDistance();                                                                                       // [0x9d9f934] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetActiveTrack
	// class ADelMarTrackBase* GetActiveTrack();                                                                             // [0x32c6804] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackPositionComponent.GetActiveSegmentIndex
	// int32_t GetActiveSegmentIndex();                                                                                      // [0xb6f1010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackVehiclePositionComponent
/// Size: 0x0000 (0x000310 - 0x000310)
class UDelMarTrackVehiclePositionComponent : public UDelMarTrackPositionComponent
{ 
public:
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackManager
/// Size: 0x0050 (0x000030 - 0x000080)
class UDelMarTrackManager : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0030   (0x0030)  MISSED
	TArray<class ADelMarTrackBase*>                    DelMarTracks;                                               // 0x0060   (0x0010)  
	class ADelMarTrackBase*                            PrimaryTrack;                                               // 0x0070   (0x0008)  
	class ADelMarTrackBase*                            LowestTrack;                                                // 0x0078   (0x0008)  
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackPaletteEntry
/// Size: 0x0048 (0x000000 - 0x000048)
struct FDelMarTrackPaletteEntry
{ 
	FGameplayTag                                       TrackTypeTag;                                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,12562) /* TWeakObjectPtr<UClass*> */ __um(TrackSegmentClass);                                 // 0x0008   (0x0020)  
	SDK_UNDEFINED(16,12563) /* TArray<FString> */      __um(MeshCustomizations);                                   // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,12564) /* FString */              __um(Title);                                                // 0x0038   (0x0010)  
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackPaletteTransitionEntry
/// Size: 0x0058 (0x000000 - 0x000058)
struct FDelMarTrackPaletteTransitionEntry
{ 
	FGameplayTag                                       TypeA;                                                      // 0x0000   (0x0004)  
	FGameplayTag                                       TypeB;                                                      // 0x0004   (0x0004)  
	SDK_UNDEFINED(32,12565) /* TWeakObjectPtr<UClass*> */ __um(AtoB);                                              // 0x0008   (0x0020)  
	SDK_UNDEFINED(32,12566) /* TWeakObjectPtr<UClass*> */ __um(BtoA);                                              // 0x0028   (0x0020)  
	SDK_UNDEFINED(16,12567) /* FString */              __um(Title);                                                // 0x0048   (0x0010)  
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackCapEntry
/// Size: 0x0048 (0x000000 - 0x000048)
struct FDelMarTrackCapEntry
{ 
	FGameplayTag                                       tag;                                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,12568) /* TWeakObjectPtr<UClass*> */ __um(StartCap);                                          // 0x0008   (0x0020)  
	SDK_UNDEFINED(32,12569) /* TWeakObjectPtr<UClass*> */ __um(EndCap);                                            // 0x0028   (0x0020)  
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackPalette
/// Size: 0x0030 (0x000030 - 0x000060)
class UDelMarTrackPalette : public UDataAsset
{ 
public:
	TArray<FDelMarTrackPaletteEntry>                   Palette;                                                    // 0x0030   (0x0010)  
	TArray<FDelMarTrackPaletteTransitionEntry>         Transitions;                                                // 0x0040   (0x0010)  
	TArray<FDelMarTrackCapEntry>                       Caps;                                                       // 0x0050   (0x0010)  
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackPrefabSegment
/// Size: 0x0018 (0x0002C0 - 0x0002D8)
class ADelMarTrackPrefabSegment : public ADelMarTrackSegmentBase
{ 
public:
	float                                              TangentLength;                                              // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02C4   (0x0004)  MISSED
	class UStaticMeshComponent*                        PrefabStaticMesh;                                           // 0x02C8   (0x0008)  
	FName                                              StartSocketName;                                            // 0x02D0   (0x0004)  
	FName                                              EndSocketName;                                              // 0x02D4   (0x0004)  


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackPrefabSegment.GetSockets
	// TArray<FString> GetSockets();                                                                                         // [0xb6f18a0] Final|Native|Private|Const 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackSegmentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarTrackSegmentInterface : public UInterface
{ 
public:
};

/// Struct /Script/DelMarTrackRuntime.DelMarSplinePointMetaData
/// Size: 0x0080 (0x000000 - 0x000080)
struct FDelMarSplinePointMetaData
{ 
	FGameplayTag                                       TrackTypeTag;                                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,12570) /* TWeakObjectPtr<UClass*> */ __um(SegmentClass);                                      // 0x0008   (0x0020)  
	SDK_UNDEFINED(80,12571) /* TMap<FString, bool> */  __um(EnabledMeshCustomizations);                            // 0x0028   (0x0050)  
	bool                                               bUseStableRoll;                                             // 0x0078   (0x0001)  
	bool                                               bUseFrontEndcap;                                            // 0x0079   (0x0001)  
	bool                                               bUseBackEndcap;                                             // 0x007A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x007B   (0x0005)  MISSED
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackPointData
/// Size: 0x0018 (0x000028 - 0x000040)
class UDelMarTrackPointData : public USplineMetadata
{ 
public:
	TArray<FDelMarSplinePointMetaData>                 MetaData;                                                   // 0x0028   (0x0010)  
	class UDelMarTrackSplineComponent*                 Spline;                                                     // 0x0038   (0x0008)  
};

/// Struct /Script/DelMarTrackRuntime.DelMarRotationalMinimalFrame
/// Size: 0x0068 (0x000000 - 0x000068)
struct FDelMarRotationalMinimalFrame
{ 
	float                                              InputKey;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            Origin;                                                     // 0x0008   (0x0018)  
	FVector                                            Tangent;                                                    // 0x0020   (0x0018)  
	FVector                                            RotationAxis;                                               // 0x0038   (0x0018)  
	FVector                                            Normal;                                                     // 0x0050   (0x0018)  
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackSplineComponent
/// Size: 0x0090 (0x000670 - 0x000700)
class UDelMarTrackSplineComponent : public USplineComponent
{ 
public:
	int32_t                                            WorldPlaneLookupSubsteps;                                   // 0x0670   (0x0004)  
	unsigned char                                      UnknownData00_5[0x7C];                                      // 0x0674   (0x007C)  MISSED
	TArray<FDelMarRotationalMinimalFrame>              RotationalMinimalFrameNormals;                              // 0x06F0   (0x0010)  


	/// Functions
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.IsDistanceWithinRange
	// bool IsDistanceWithinRange(float InDistance, float StartDistance, float EndDistance);                                 // [0xb6f1f4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.IsDistanceBehindOtherDistance
	// bool IsDistanceBehindOtherDistance(float Distance, float DistanceToCheck);                                            // [0xb6f1e88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.IsDistanceAheadOfOtherDistance
	// bool IsDistanceAheadOfOtherDistance(float Distance, float DistanceToCheck);                                           // [0xb6f1dc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetSplinePointClosestToWorldLocation
	// int32_t GetSplinePointClosestToWorldLocation(FVector& WorldLocation);                                                 // [0xb6f19fc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetSplinePointClosestToDistanceAlongSpline
	// int32_t GetSplinePointClosestToDistanceAlongSpline(float DistanceAlongSpline);                                        // [0xb6f196c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetSplinePointAtDistanceAlongSpline
	// int32_t GetSplinePointAtDistanceAlongSpline(float DistanceAlongSpline);                                               // [0xb6f18dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetRotationalMinimalUpVectorAtSplinePoint
	// FVector GetRotationalMinimalUpVectorAtSplinePoint(int32_t SplinePoint, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xb6f17d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetRotationalMinimalUpVectorAtDistanceAlongSpline
	// FVector GetRotationalMinimalUpVectorAtDistanceAlongSpline(float DistanceAlongSpline, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xb6f15ac] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetRotationalMinimalFrames
	// TArray<FDelMarRotationalMinimalFrame> GetRotationalMinimalFrames();                                                   // [0xb6f1534] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetPreviousSplineSegment
	// int32_t GetPreviousSplineSegment(int32_t InSplineSegmentIndex);                                                       // [0xb6f13a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetPreviousSplinePoint
	// int32_t GetPreviousSplinePoint(int32_t InSplinePoint);                                                                // [0xb6f13a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetNextSplineSegment
	// int32_t GetNextSplineSegment(int32_t InSplineSegmentIndex);                                                           // [0xb6f1318] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetNextSplinePoint
	// int32_t GetNextSplinePoint(int32_t InSplinePoint);                                                                    // [0xb6f128c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetLoopDistance
	// float GetLoopDistance(float InTotalDistance);                                                                         // [0xb6f11fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.GetForwardDistance
	// float GetForwardDistance(float Start, float End);                                                                     // [0xb6f10b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.FindInputKeyForSegmentClosestToWorldPlane
	// float FindInputKeyForSegmentClosestToWorldPlane(FVector& WorldPlaneOrigin, FVector& WorldPlaneNormal, int32_t SegmentIndex); // [0xb6f0e14] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.FindInputKeyForNeighboringSegmentClosestToWorldPlane
	// float FindInputKeyForNeighboringSegmentClosestToWorldPlane(FVector& WorldPlaneOrigin, FVector& WorldPlaneNormal, int32_t SegmentIndex, int32_t& OutClosestSegmentIndex); // [0xb6f0c18] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.FindInputKeyClosestToWorldPlane
	// float FindInputKeyClosestToWorldPlane(FVector& WorldPlaneOrigin, FVector& WorldPlaneNormal);                          // [0xb6f0ab0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.FindClosestLocationToWorldPlane
	// FVector FindClosestLocationToWorldPlane(FVector& WorldPlaneOrigin, FVector& WorldPlaneNormal, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xb6f0884] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarTrackRuntime.DelMarTrackSplineComponent.FindClosestLocationForSegmentToWorldPlane
	// FVector FindClosestLocationForSegmentToWorldPlane(FVector& WorldPlaneOrigin, FVector& WorldPlaneNormal, int32_t SegmentIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace); // [0xb6f0610] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackSplineMeshSegment
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class ADelMarTrackSplineMeshSegment : public ADelMarTrackSegmentBase
{ 
public:
	class USplineMeshComponent*                        SplineMesh;                                                 // 0x02C0   (0x0008)  
	float                                              SegmentLengthScaler;                                        // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02CC   (0x0004)  MISSED
};

/// Class /Script/DelMarTrackRuntime.DelMarTrackVariableSplineMeshSegment
/// Size: 0x0050 (0x0002D0 - 0x000320)
class ADelMarTrackVariableSplineMeshSegment : public ADelMarTrackSplineMeshSegment
{ 
public:
	SDK_UNDEFINED(80,12572) /* TMap<int32_t, UStaticMesh*> */ __um(VariableStaticMeshes);                          // 0x02D0   (0x0050)  
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackAddedEvent
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarTrackAddedEvent
{ 
	SDK_UNDEFINED(8,12573) /* TWeakObjectPtr<ADelMarTrackBase*> */ __um(Track);                                    // 0x0000   (0x0008)  
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackPointDistanceRange
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarTrackPointDistanceRange
{ 
	float                                              BeginDistanceAlongSpline;                                   // 0x0000   (0x0004)  
	float                                              EndDistanceAlongSpline;                                     // 0x0004   (0x0004)  
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackSegmentSpawnInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarTrackSegmentSpawnInfo
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackSegmentCollectionProxyData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDelMarTrackSegmentCollectionProxyData
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/DelMarTrackRuntime.DelMarTrackTransformData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FDelMarTrackTransformData
{ 
	SDK_UNDEFINED(8,12574) /* TWeakObjectPtr<ADelMarTrackBase*> */ __um(Track);                                    // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         TrackTransform;                                             // 0x0010   (0x0060)  
};

/// Struct /Script/DelMarTrackRuntime.DelMarSplineSegmentInfo
/// Size: 0x00C8 (0x000000 - 0x0000C8)
struct FDelMarSplineSegmentInfo
{ 
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0000   (0x00C8)  MISSED
};

