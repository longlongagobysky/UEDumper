
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Entity
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem

/// Class /Script/VerseQuery.QueryIteratorBase
/// Size: 0x0018 (0x000028 - 0x000040)
class UQueryIteratorBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/VerseQuery.EntityQueryManager
/// Size: 0x0010 (0x000028 - 0x000038)
class UEntityQueryManager : public UObject
{ 
public:
	class UEntityTypeQueryContainer*                   EntityTypeQueryContainer;                                   // 0x0028   (0x0008)  
	class UTaggedObjectQueryContainer*                 TagQueryContainer;                                          // 0x0030   (0x0008)  
};

/// Class /Script/VerseQuery.EntityTypeQueryContainer
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UEntityTypeQueryContainer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0028   (0x00A0)  MISSED
};

/// Class /Script/VerseQuery.GlobalEntityQueryManagerComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UGlobalEntityQueryManagerComponent : public UActorComponent
{ 
public:
	class UEntityQueryManager*                         QueryManager;                                               // 0x00A0   (0x0008)  
};

/// Class /Script/VerseQuery.CoreEntityLevelPlayspaceAssociationComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UCoreEntityLevelPlayspaceAssociationComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(8,9252) /* TWeakObjectPtr<AGameplayVolume*> */ __um(Volume);                                     // 0x00A0   (0x0008)  
	SDK_UNDEFINED(8,9253) /* TWeakObjectPtr<APlayspace*> */ __um(Playspace);                                       // 0x00A8   (0x0008)  
};

/// Class /Script/VerseQuery.CoreEntityRegistry
/// Size: 0x0000 (0x000030 - 0x000030)
class UCoreEntityRegistry : public UCoreEntityRegistryBase
{ 
public:
};

/// Class /Script/VerseQuery.PlayspaceComponent_EntityQueryContainer
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UPlayspaceComponent_EntityQueryContainer : public UPlayspaceComponent
{ 
public:
	class UEntityQueryManager*                         QueryManager;                                               // 0x00A0   (0x0008)  
};

/// Class /Script/VerseQuery.TaggedObjectQueryContainer
/// Size: 0x0050 (0x000028 - 0x000078)
class UTaggedObjectQueryContainer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0028   (0x0050)  MISSED
};

