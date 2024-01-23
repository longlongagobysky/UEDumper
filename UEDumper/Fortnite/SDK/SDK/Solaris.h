
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: VerseNative

/// Enum /Script/Solaris.EVerseDigestVariant
/// Size: 0x03
enum class EVerseDigestVariant : uint8_t
{
	EVerseDigestVariant__PublicOnly                                                  = 0,
	EVerseDigestVariant__PublicAndEpicInternal                                       = 1,
	EVerseDigestVariant__EVerseDigestVariant_MAX                                     = 2
};

/// Enum /Script/Solaris.EVerseEnumFlags
/// Size: 0x03
enum class EVerseEnumFlags : uint32_t
{
	EVerseEnumFlags__None                                                            = 0,
	EVerseEnumFlags__NativeBound                                                     = 1,
	EVerseEnumFlags__EVerseEnumFlags_MAX                                             = 2
};

/// Enum /Script/Solaris.EVersePackageScope
/// Size: 0x05
enum class EVersePackageScope : uint8_t
{
	EVersePackageScope__PublicAPI                                                    = 0,
	EVersePackageScope__InternalAPI                                                  = 1,
	EVersePackageScope__PublicUser                                                   = 2,
	EVersePackageScope__InternalUser                                                 = 3,
	EVersePackageScope__EVersePackageScope_MAX                                       = 4
};

/// Enum /Script/Solaris.EVersePackageType
/// Size: 0x05
enum class EVersePackageType : uint8_t
{
	EVersePackageType__VNI                                                           = 0,
	EVersePackageType__Content                                                       = 1,
	EVersePackageType__PublishedContent                                              = 2,
	EVersePackageType__Assets                                                        = 3,
	EVersePackageType__EVersePackageType_MAX                                         = 4
};

/// Class /Script/Solaris.VerseStruct
/// Size: 0x0038 (0x0000C0 - 0x0000F8)
class UVerseStruct : public UScriptStruct
{ 
public:
	uint32_t                                           VerseClassFlags;                                            // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	class UFunction*                                   InitFunction;                                               // 0x00C8   (0x0008)  
	class UVerseClass*                                 ModuleClass;                                                // 0x00D0   (0x0008)  
	FGuid                                              Guid;                                                       // 0x00D8   (0x0010)  
	class UFunction*                                   FactoryFunction;                                            // 0x00E8   (0x0008)  
	class UFunction*                                   OverrideFactoryFunction;                                    // 0x00F0   (0x0008)  
};

/// Class /Script/Solaris.SolarisWeakMapLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisWeakMapLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisWeakMapLibrary.Type
	// void Type(class UClass* KeyType, class UClass* ValueType);                                                            // [0x70bbc38] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisWeakMapLibrary.RefCall
	// void RefCall(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);                                     // [0x70bac28] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.PersistentVarRefCall
	// void PersistentVarRefCall(FString Path, TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);          // [0x70ba5f0] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.PersistentVarCall
	// void PersistentVarCall(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);                           // [0x70ba41c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.FitsInPlayerMap
	// void FitsInPlayerMap(FGenericValueType Value);                                                                        // [0x70b6170] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisWeakMapLibrary.CompletelyAssignedRefCall
	// void CompletelyAssignedRefCall(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);                   // [0x70b4bb4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.CompletelyAssignedPersistentVarRefCall
	// void CompletelyAssignedPersistentVarRefCall(FString Path, TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key); // [0x70b4998] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.Call
	// void Call(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);                                        // [0x70b4168] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Solaris.VerseDigest
/// Size: 0x0038 (0x000028 - 0x000060)
class UVerseDigest : public UObject
{ 
public:
	TArray<char>                                       DigestCode;                                                 // 0x0028   (0x0010)  
	TArray<char>                                       ManifestCode;                                               // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,15165) /* FString */              __um(ProjectName);                                          // 0x0048   (0x0010)  
	EVerseDigestVariant                                Variant;                                                    // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	uint32_t                                           VerseVersion;                                               // 0x005C   (0x0004)  
};

/// Class /Script/Solaris.VerseEnum
/// Size: 0x0008 (0x000068 - 0x000070)
class UVerseEnum : public UEnum
{ 
public:
	EVerseEnumFlags                                    VerseEnumFlags;                                             // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/Solaris.SolarisArrayLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisArrayLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisArrayLibrary.UnsafeCall
	// void UnsafeCall(TArray<FGenericElementType>& Array, int64_t Index);                                                   // [0x70a097c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.RefCall
	// void RefCall(TArray<FGenericElementType>& Array, int64_t Index);                                                      // [0x70a0804] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Move
	// void Move(TArray<FGenericElementType>& Target, TArray<FGenericElementType>& Source);                                  // [0x70a06b0] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Length
	// int64_t Length(TArray<FGenericElementType>& Array);                                                                   // [0x70a05e0] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Empty
	// void Empty(TArray<FGenericElementType>& Array);                                                                       // [0x70a04fc] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.ConcatEquals
	// TArray<FGenericElementType> ConcatEquals(TArray<FGenericElementType>& LHS, TArray<FGenericElementType>& RHS);         // [0x70a03b0] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Concat
	// TArray<FGenericElementType> Concat(TArray<FGenericElementType>& LHS, TArray<FGenericElementType>& RHS);               // [0x70a02a0] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Call
	// void Call(TArray<FGenericElementType>& Array, int64_t Index);                                                         // [0x70a0018] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Add
	// int64_t Add(TArray<FGenericElementType>& Array, FGenericElementType& new_item);                                       // [0x709fdbc] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Solaris.SolarisCoroutineLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisCoroutineLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskMake
	// class UObject* TaskMake(class UClass* Type, class UObject* Caller, int64_t CallerResumeState, int64_t CallerCancelState, class UObject* OwnerInstance); // [0x70bba9c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskGetState
	// int64_t TaskGetState(class UObject* task);                                                                            // [0x70bba18] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskGetReturnProperty
	// void TaskGetReturnProperty(class UObject* task);                                                                      // [0x70bb7c4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskFree
	// void TaskFree(class UObject* task);                                                                                   // [0x70bb740] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskCancel
	// void TaskCancel(class UObject* task);                                                                                 // [0x70bb6d0] Final|Native|Static|Public 
};

/// Class /Script/Solaris.GameFeature_SolarisObserver
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeature_SolarisObserver : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/Solaris.SolarisMapLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMapLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMapLibrary.Move
	// void Move(TMap<FGenericKeyType, FGenericValueType>& Dest, TMap<FGenericKeyType, FGenericValueType>& Src);             // [0x70b95f4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.Length
	// int64_t Length(TMap<FGenericKeyType, FGenericValueType>& Map);                                                        // [0x70b7ee0] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.InitMap
	// void InitMap(TMap<FGenericKeyType, FGenericValueType>& Map);                                                          // [0x70b7560] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.GetValueByIndex
	// FGenericValueType GetValueByIndex(TMap<FGenericKeyType, FGenericValueType>& Map, int64_t Index);                      // [0x70b6e6c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.GetNextValidIndex
	// int64_t GetNextValidIndex(TMap<FGenericKeyType, FGenericValueType>& Map, int64_t InitialIndex);                       // [0x70b6bcc] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.GetKeyByIndex
	// FGenericKeyType GetKeyByIndex(TMap<FGenericKeyType, FGenericValueType>& Map, int64_t Index);                          // [0x70b6a20] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.Concat
	// TMap<FGenericKeyType, FGenericValueType> Concat(TMap<FGenericKeyType, FGenericValueType>& LHS, TMap<FGenericKeyType, FGenericValueType>& RHS); // [0x70b4c54] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.Add
	// void Add(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType& Key, FGenericValueType& Value);              // [0x70b2ee0] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Solaris.SolarisMathLibrary_Bool
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Bool : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Bool.Query
	// void Query();                                                                                                         // [0x70ba80c] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisMathLibrary_Int
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Int : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Int.UncheckedConvertI32I64
	// int32_t UncheckedConvertI32I64(int64_t RHS);                                                                          // [0x70bc01c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.SubtractEquals
	// void SubtractEquals(int64_t& LHS, int64_t RHS);                                                                       // [0x70bb4d4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Subtract
	// void Subtract(int64_t LHS, int64_t RHS);                                                                              // [0x70bb284] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateNotEqual
	// bool PredicateNotEqual(int64_t LHS, int64_t RHS);                                                                     // [0x66a1f20] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateLessEqual
	// bool PredicateLessEqual(int64_t LHS, int64_t RHS);                                                                    // [0x6689d00] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateLess
	// bool PredicateLess(int64_t LHS, int64_t RHS);                                                                         // [0x668a220] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateGreaterEqual
	// bool PredicateGreaterEqual(int64_t LHS, int64_t RHS);                                                                 // [0x667cfd0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateGreater
	// bool PredicateGreater(int64_t LHS, int64_t RHS);                                                                      // [0x667d35c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateEqual
	// bool PredicateEqual(int64_t LHS, int64_t RHS);                                                                        // [0x66692c4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Negate
	// void Negate(int64_t Value);                                                                                           // [0x70ba038] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.MultiplyEquals
	// void MultiplyEquals(int64_t& LHS, int64_t RHS);                                                                       // [0x70b9c2c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Multiply
	// void Multiply(int64_t LHS, int64_t RHS);                                                                              // [0x70b99e0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.LessEqual
	// void LessEqual(int64_t LHS, int64_t RHS);                                                                             // [0x70b83d8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Less
	// void Less(int64_t LHS, int64_t RHS);                                                                                  // [0x70b81d0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.GreaterEqual
	// void GreaterEqual(int64_t LHS, int64_t RHS);                                                                          // [0x70b7340] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Greater
	// void Greater(int64_t LHS, int64_t RHS);                                                                               // [0x70b713c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Divide
	// void Divide(int64_t LHS, int64_t RHS);                                                                                // [0x70b5d00] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.CheckConstrainedInt
	// void CheckConstrainedInt(int64_t Min, int64_t Max, int64_t Value);                                                    // [0x70b4860] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.AddEquals
	// void AddEquals(int64_t& LHS, int64_t RHS);                                                                            // [0x70b38a4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Add
	// void Add(int64_t LHS, int64_t RHS);                                                                                   // [0x70b3438] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.abs
	// void abs(int64_t Value);                                                                                              // [0x70b2df4] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisMathLibrary_Rational
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Rational : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Rational.floor
	// void floor(FVerseRational Val);                                                                                       // [0x70b64f4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Rational.ceil
	// void ceil(FVerseRational Val);                                                                                        // [0x70b4528] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisMathLibrary_Float
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Float : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Float.SubtractEquals
	// double SubtractEquals(double& LHS, double RHS);                                                                       // [0x70bb3b0] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Subtract
	// double Subtract(double LHS, double RHS);                                                                              // [0x70bb1b0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Negate
	// double Negate(double Value);                                                                                          // [0x70b9fb0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.MultiplyIntFloat
	// double MultiplyIntFloat(int64_t LHS, double RHS);                                                                     // [0x70b9ee4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.MultiplyFloatInt
	// double MultiplyFloatInt(double LHS, int64_t RHS);                                                                     // [0x70b9e18] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.MultiplyEquals
	// double MultiplyEquals(double& LHS, double RHS);                                                                       // [0x70b9b08] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Multiply
	// double Multiply(double LHS, double RHS);                                                                              // [0x70b990c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.LessEqual
	// void LessEqual(double LHS, double RHS);                                                                               // [0x70b82c0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Less
	// void Less(double LHS, double RHS);                                                                                    // [0x70b80bc] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.GreaterEqual
	// void GreaterEqual(double LHS, double RHS);                                                                            // [0x70b722c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Greater
	// void Greater(double LHS, double RHS);                                                                                 // [0x70b7028] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.DivideEquals
	// double DivideEquals(double& LHS, double RHS);                                                                         // [0x70b5e14] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Divide
	// double Divide(double LHS, double RHS);                                                                                // [0x70b5c2c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.CheckConstrainedFloat
	// void CheckConstrainedFloat(double Min, double Max, double Value);                                                     // [0x70b471c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.AddEquals
	// double AddEquals(double& LHS, double RHS);                                                                            // [0x70b3780] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Add
	// double Add(double LHS, double RHS);                                                                                   // [0x70b3364] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.abs
	// double abs(double Value);                                                                                             // [0x70b2d6c] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisMathLibrary_String
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_String : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_String.UncheckedCall
	// void UncheckedCall(int32_t& String, int64_t Index);                                                                   // [0x70bbe0c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.RefCall
	// void RefCall(int32_t& String, int64_t Index);                                                                         // [0x70ba9b8] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.Move
	// void Move(int32_t& Destination, int32_t& Source);                                                                     // [0x70b9708] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.MakeLiteral
	// int32_t MakeLiteral();                                                                                                // [0x70b895c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_String.Make
	// void Make();                                                                                                          // [0x70b861c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_String.Length
	// int64_t Length(int32_t& Array);                                                                                       // [0x70b7f98] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.ConcatEquals
	// int32_t ConcatEquals(int32_t& LHS, int32_t& RHS);                                                                     // [0x70b54a4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.Concat
	// int32_t Concat(int32_t& LHS, int32_t& RHS);                                                                           // [0x70b526c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.Call
	// void Call(int32_t& String, int64_t Index);                                                                            // [0x70b3dd0] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.Add
	// void Add(int32_t& String, int8_t Character);                                                                          // [0x70b3568] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Solaris.SolarisMathLibrary_Option
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Option : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Option.Query
	// void Query();                                                                                                         // [0x70ba8a8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Option.Make
	// void Make();                                                                                                          // [0x70b84c8] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisGameSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class USolarisGameSettings : public UObject
{ 
public:
	SDK_UNDEFINED(16,15166) /* TArray<FString> */      __um(Blacklist);                                            // 0x0028   (0x0010)  
	int32_t                                            MaxAllowedSize;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/Solaris.SolarisUtilLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisUtilLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.SolarisUtilLibrary.ReplaceOptionValue
	// int64_t ReplaceOptionValue(int64_t ResultProperty, int64_t Option, int64_t Value);                                    // [0x70bad30] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.ReferenceIsValid
	// bool ReferenceIsValid(int64_t Reference);                                                                             // [0x70bacc8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.ObjectHasNoFlags
	// bool ObjectHasNoFlags(class UObject* Object, int32_t Flags);                                                          // [0x70ba358] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.MakeUnsetOption
	// int64_t MakeUnsetOption();                                                                                            // [0x70b9548] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.MakeOptionFromValue
	// bool MakeOptionFromValue(class UObject* Property, int64_t Value);                                                     // [0x70b8adc] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.IsOptionSet
	// bool IsOptionSet(int64_t Option);                                                                                     // [0x70b7da0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.IsNonNullObject
	// bool IsNonNullObject(class UObject* Object);                                                                          // [0x70b7d2c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.InstantiateObject
	// void InstantiateObject(class UClass* Class, int64_t InstancingGraph);                                                 // [0x70b79c4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.InstanceFunction
	// void InstanceFunction(class UObject* Object, FName MethodName);                                                       // [0x70b78f4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.HasInterface
	// bool HasInterface(class UObject* Object, class UVerseClass* InterfaceClass);                                          // [0x70b7430] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.GetOptionValue
	// int64_t GetOptionValue(int64_t Option);                                                                               // [0x70b6cf8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.GetFunctionForInterfaceMethod
	// void GetFunctionForInterfaceMethod(class UObject* Object, FName MethodName);                                          // [0x70b6708] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.GetCurrentlyInstantiatedObject
	// class UObject* GetCurrentlyInstantiatedObject();                                                                      // [0x70b66e4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.Dereference
	// int64_t Dereference(int64_t Reference);                                                                               // [0x70b5ac4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.CallFunction
	// void CallFunction();                                                                                                  // [0x70b42b8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.CallFinalFunctionWithContext
	// void CallFinalFunctionWithContext();                                                                                  // [0x70b4204] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.Addressof
	// int64_t Addressof(int64_t Value);                                                                                     // [0x70b3ca8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.AddPropertyToSubobjectExclusionList
	// void AddPropertyToSubobjectExclusionList(int64_t InstancingGraph, int64_t Property);                                  // [0x70b3aa4] Final|Native|Static|Public 
};

/// Struct /Script/Solaris.VersePersistentVar
/// Size: 0x0030 (0x000000 - 0x000030)
struct FVersePersistentVar
{ 
	SDK_UNDEFINED(16,15167) /* FString */              __um(Path);                                                 // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0010   (0x0020)  MISSED
};

/// Struct /Script/Solaris.VerseSessionVar
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVerseSessionVar
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Class /Script/Solaris.VerseClass
/// Size: 0x00E8 (0x000200 - 0x0002E8)
class UVerseClass : public UVerseClassBase
{ 
public:
	uint32_t                                           SolClassFlags;                                              // 0x0200   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0204   (0x0004)  MISSED
	TArray<class UVerseClass*>                         TaskClasses;                                                // 0x0208   (0x0010)  
	SDK_UNDEFINED(80,15168) /* TSet<UVerseClass*> */   __um(InterfaceClasses);                                     // 0x0218   (0x0050)  
	SDK_UNDEFINED(80,15169) /* TMap<FName, InterfaceMethodFunctionProperties> */ __um(InterfaceMethodFunctionProperties); // 0x0268   (0x0050)  
	class UFunction*                                   InitInstanceFunction;                                       // 0x02B8   (0x0008)  
	TArray<FVersePersistentVar>                        PersistentVars;                                             // 0x02C0   (0x0010)  
	TArray<FVerseSessionVar>                           SessionVars;                                                // 0x02D0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02E0   (0x0008)  MISSED
};

/// Class /Script/Solaris.VerseDebugData
/// Size: 0x0010 (0x000028 - 0x000038)
class UVerseDebugData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/Solaris.VerseDynamicallyTypedValueLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseDynamicallyTypedValueLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.NotEqual
	// void NotEqual(int32_t Left, int32_t Right);                                                                           // [0x70ba120] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeTuple
	// void MakeRuntimeTypeTuple(TArray<int32_t> ValueType);                                                                 // [0x70b9390] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeStruct
	// void MakeRuntimeTypeStruct(class UStruct* Struct);                                                                    // [0x70b9310] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeString
	// void MakeRuntimeTypeString();                                                                                         // [0x70b92ec] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeOption
	// void MakeRuntimeTypeOption(int32_t ValueType);                                                                        // [0x70b91bc] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeObject
	// void MakeRuntimeTypeObject();                                                                                         // [0x70b9198] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeMap
	// void MakeRuntimeTypeMap(int32_t KeyType, int32_t ValueType);                                                          // [0x70b8f88] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeLogic
	// void MakeRuntimeTypeLogic();                                                                                          // [0x70b8f64] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeInt64
	// void MakeRuntimeTypeInt64();                                                                                          // [0x70b8f40] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFunction
	// void MakeRuntimeTypeFunction();                                                                                       // [0x70b8f1c] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFloat
	// void MakeRuntimeTypeFloat();                                                                                          // [0x70b8ef8] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeEnum
	// void MakeRuntimeTypeEnum(FName Name);                                                                                 // [0x70b8e78] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeDynamic
	// void MakeRuntimeTypeDynamic();                                                                                        // [0x70b8e54] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeClass
	// void MakeRuntimeTypeClass();                                                                                          // [0x70b8e30] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar8
	// void MakeRuntimeTypeChar8();                                                                                          // [0x70b8e0c] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar32
	// void MakeRuntimeTypeChar32();                                                                                         // [0x70b8de8] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeArray
	// void MakeRuntimeTypeArray(int32_t ElementType);                                                                       // [0x70b8cb8] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.Equal
	// void Equal(int32_t Left, int32_t Right);                                                                              // [0x70b5f38] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.ConvertToDynamicallyTypedValue
	// void ConvertToDynamicallyTypedValue(int32_t RuntimeType, int32_t Value);                                              // [0x70b58b8] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.ConvertFromDynamicallyTypedValue
	// void ConvertFromDynamicallyTypedValue(int32_t RuntimeType, int32_t Value);                                            // [0x70b5708] Final|Native|Static|Public 
};

/// Struct /Script/Solaris.GenericKeyType
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGenericKeyType
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Solaris.GenericValueType
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGenericValueType
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Solaris.VersePackageContainerSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FVersePackageContainerSettings
{ 
	SDK_UNDEFINED(16,15170) /* FString */              __um(VersePath);                                            // 0x0000   (0x0010)  
	EVersePackageScope                                 VerseScope;                                                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	SDK_UNDEFINED(16,15171) /* TArray<FString> */      __um(DependencyPackages);                                   // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,15172) /* FString */              __um(VniDestDir);                                           // 0x0030   (0x0010)  
};

/// Struct /Script/Solaris.VerseSourceCode
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVerseSourceCode
{ 
	TArray<char>                                       Code;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/Solaris.VerseSourceFile
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVerseSourceFile
{ 
	SDK_UNDEFINED(16,15173) /* FString */              __um(Filename);                                             // 0x0000   (0x0010)  
	TArray<FVerseSourceCode>                           CodeChunks;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Solaris.VersePackageContainer
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FVersePackageContainer
{ 
	SDK_UNDEFINED(16,15174) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,15175) /* FString */              __um(DirPath);                                              // 0x0010   (0x0010)  
	EVersePackageType                                  PackageType;                                                // 0x0020   (0x0001)  
	bool                                               bEnableVerseAssetReflection;                                // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0022   (0x0006)  MISSED
	FVersePackageContainerSettings                     Settings;                                                   // 0x0028   (0x0040)  
	TArray<FVerseSourceFile>                           SourceFiles;                                                // 0x0068   (0x0010)  
	TArray<char>                                       AssetDigest;                                                // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,15176) /* TArray<FString> */      __um(AssetDependencies);                                    // 0x0088   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0098   (0x0010)  MISSED
};

/// Struct /Script/Solaris.VerseProjectContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVerseProjectContainer
{ 
	TArray<FVersePackageContainer>                     Packages;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Solaris.GenericElementType
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGenericElementType
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

