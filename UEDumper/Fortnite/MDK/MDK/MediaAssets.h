
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MediaAssets.MediaSourceRendererInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMediaSourceRendererInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MediaAssets.MediaTexture
/// Size: 0x00E8 (0x000130 - 0x000218)
class UMediaTexture : public UTexture
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	CMember(TEnumAsByte<TextureAddress>)               AddressX                                                    OFFSET(get<T>, {0x130, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               AddressY                                                    OFFSET(get<T>, {0x131, 1, 0, 0})
	DMember(bool)                                      AutoClear                                                   OFFSET(get<bool>, {0x132, 1, 0, 0})
	SMember(FLinearColor)                              ClearColor                                                  OFFSET(getStruct<T>, {0x134, 16, 0, 0})
	DMember(bool)                                      EnableGenMips                                               OFFSET(get<bool>, {0x144, 1, 0, 0})
	DMember(char)                                      NumMips                                                     OFFSET(get<char>, {0x145, 1, 0, 0})
	DMember(bool)                                      NewStyleOutput                                              OFFSET(get<bool>, {0x146, 1, 0, 0})
	CMember(TEnumAsByte<MediaTextureOutputFormat>)     OutputFormat                                                OFFSET(get<T>, {0x147, 1, 0, 0})
	DMember(float)                                     CurrentAspectRatio                                          OFFSET(get<float>, {0x148, 4, 0, 0})
	CMember(TEnumAsByte<MediaTextureOrientation>)      CurrentOrientation                                          OFFSET(get<T>, {0x14C, 1, 0, 0})
	CMember(class UMediaPlayer*)                       MediaPlayer                                                 OFFSET(get<T>, {0x150, 8, 0, 0})


	/// Functions
	// Function /Script/MediaAssets.MediaTexture.UpdateResource
	// void UpdateResource();                                                                                                   // [0x1172024] Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaTexture.SetMediaPlayer
	// void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);                                                                 // [0x62f22c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaTexture.GetWidth
	// int32_t GetWidth();                                                                                                      // [0x62ef190] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetTextureNumMips
	// int32_t GetTextureNumMips();                                                                                             // [0x62ee310] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x62ec92c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetHeight
	// int32_t GetHeight();                                                                                                     // [0x34b15d4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetAspectRatio
	// float GetAspectRatio();                                                                                                  // [0x62ec424] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaSource
/// Size: 0x0058 (0x000028 - 0x000080)
class UMediaSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:


	/// Functions
	// Function /Script/MediaAssets.MediaSource.Validate
	// bool Validate();                                                                                                         // [0x1dca220] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionString
	// void SetMediaOptionString(FName& Key, FString Value);                                                                    // [0x62f1a28] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionInt64
	// void SetMediaOptionInt64(FName& Key, int64_t Value);                                                                     // [0x62f18f0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionFloat
	// void SetMediaOptionFloat(FName& Key, float Value);                                                                       // [0x62f17e0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionBool
	// void SetMediaOptionBool(FName& Key, bool Value);                                                                         // [0x62f16d0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.GetUrl
	// FString GetUrl();                                                                                                        // [0x62eecd4] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.BaseMediaSource
/// Size: 0x0008 (0x000080 - 0x000088)
class UBaseMediaSource : public UMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     PlayerName                                                  OFFSET(getStruct<T>, {0x80, 4, 0, 0})
};

/// Class /Script/MediaAssets.FileMediaSource
/// Size: 0x0028 (0x000088 - 0x0000B0)
class UFileMediaSource : public UBaseMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FString)                                   FilePath                                                    OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	DMember(bool)                                      PrecacheFile                                                OFFSET(get<bool>, {0x98, 1, 0, 0})


	/// Functions
	// Function /Script/MediaAssets.FileMediaSource.SetFilePath
	// void SetFilePath(FString Path);                                                                                          // [0x62f0f8c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UMediaComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UMediaTexture*)                      MediaTexture                                                OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UMediaPlayer*)                       MediaPlayer                                                 OFFSET(get<T>, {0xA8, 8, 0, 0})


	/// Functions
	// Function /Script/MediaAssets.MediaComponent.GetMediaTexture
	// class UMediaTexture* GetMediaTexture();                                                                                  // [0x30d0478] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaComponent.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x62ec914] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaTimeStampInfo
/// Size: 0x0010 (0x000028 - 0x000038)
class UMediaTimeStampInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FTimespan)                                 Time                                                        OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(int64_t)                                   SequenceIndex                                               OFFSET(get<int64_t>, {0x30, 8, 0, 0})
};

/// Class /Script/MediaAssets.MediaPlayer
/// Size: 0x0140 (0x000028 - 0x000168)
class UMediaPlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FMulticastInlineDelegate)                  OnEndReached                                                OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaClosed                                               OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaOpened                                               OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaOpenFailed                                           OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlaybackResumed                                           OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlaybackSuspended                                         OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSeekCompleted                                             OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTracksChanged                                             OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetadataChanged                                           OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FTimespan)                                 CacheAhead                                                  OFFSET(getStruct<T>, {0xC0, 8, 0, 0})
	SMember(FTimespan)                                 CacheBehind                                                 OFFSET(getStruct<T>, {0xC8, 8, 0, 0})
	SMember(FTimespan)                                 CacheBehindGame                                             OFFSET(getStruct<T>, {0xD0, 8, 0, 0})
	DMember(bool)                                      NativeAudioOut                                              OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(bool)                                      PlayOnOpen                                                  OFFSET(get<bool>, {0xD9, 1, 0, 0})
	DMember(bool)                                      Shuffle                                                     OFFSET(get<bool>, {0xDC, 1, 1, 0})
	DMember(bool)                                      Loop                                                        OFFSET(get<bool>, {0xDC, 1, 1, 1})
	CMember(class UMediaPlaylist*)                     Playlist                                                    OFFSET(get<T>, {0xE0, 8, 0, 0})
	DMember(int32_t)                                   PlaylistIndex                                               OFFSET(get<int32_t>, {0xE8, 4, 0, 0})
	SMember(FTimespan)                                 TimeDelay                                                   OFFSET(getStruct<T>, {0xF0, 8, 0, 0})
	DMember(float)                                     HorizontalFieldOfView                                       OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     VerticalFieldOfView                                         OFFSET(get<float>, {0xFC, 4, 0, 0})
	SMember(FRotator)                                  ViewRotation                                                OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	SMember(FGuid)                                     PlayerGuid                                                  OFFSET(getStruct<T>, {0x140, 16, 0, 0})


	/// Functions
	// Function /Script/MediaAssets.MediaPlayer.SupportsSeeking
	// bool SupportsSeeking();                                                                                                  // [0x62f2c0c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SupportsScrubbing
	// bool SupportsScrubbing();                                                                                                // [0x62f2b94] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SupportsRate
	// bool SupportsRate(float Rate, bool Unthinned);                                                                           // [0x62f2ac8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SetViewRotation
	// bool SetViewRotation(FRotator& Rotation, bool Absolute);                                                                 // [0x62f29ac] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetViewField
	// bool SetViewField(float Horizontal, float Vertical, bool Absolute);                                                      // [0x62f28ac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	// bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate);                                   // [0x62f27b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetTrackFormat
	// bool SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex);                               // [0x62f26bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetTimeDelay
	// void SetTimeDelay(FTimespan TimeDelay);                                                                                  // [0x62f258c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetRate
	// bool SetRate(float Rate);                                                                                                // [0x62f23ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetNativeVolume
	// bool SetNativeVolume(float Volume);                                                                                      // [0x62f2344] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetMediaOptions
	// void SetMediaOptions(class UMediaSource* Options);                                                                       // [0x62f2188] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetLooping
	// bool SetLooping(bool Looping);                                                                                           // [0x62f1640] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetDesiredPlayerName
	// void SetDesiredPlayerName(FName PlayerName);                                                                             // [0x62f0cbc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetBlockOnTime
	// void SetBlockOnTime(FTimespan& Time);                                                                                    // [0x62f0c30] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SelectTrack
	// bool SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                                       // [0x62f0b70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Seek
	// bool Seek(FTimespan& Time);                                                                                              // [0x62f0ad8] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Rewind
	// bool Rewind();                                                                                                           // [0x62f0a48] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Reopen
	// bool Reopen();                                                                                                           // [0x62f093c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Previous
	// bool Previous();                                                                                                         // [0x62f07ac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.PlayAndSeek
	// void PlayAndSeek();                                                                                                      // [0x62f0798] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Play
	// bool Play();                                                                                                             // [0x62f0774] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Pause
	// bool Pause();                                                                                                            // [0x62f0750] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenUrl
	// bool OpenUrl(FString URL);                                                                                               // [0x62f00a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSourceWithOptions
	// bool OpenSourceWithOptions(class UMediaSource* MediaSource, FMediaPlayerOptions& Options);                               // [0x62effbc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSourceLatent
	// void OpenSourceLatent(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class UMediaSource* MediaSource, FMediaPlayerOptions& Options, bool& bSuccess); // [0x62efcbc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSource
	// bool OpenSource(class UMediaSource* MediaSource);                                                                        // [0x62efc2c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylistIndex
	// bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32_t Index);                                                 // [0x62efb68] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylist
	// bool OpenPlaylist(class UMediaPlaylist* InPlaylist);                                                                     // [0x62efad8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenFile
	// bool OpenFile(FString FilePath);                                                                                         // [0x62ef428] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Next
	// bool Next();                                                                                                             // [0x62ef3f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.IsReady
	// bool IsReady();                                                                                                          // [0x62ef3cc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPreparing
	// bool IsPreparing();                                                                                                      // [0x62ef3a0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x3f2f640] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPaused
	// bool IsPaused();                                                                                                         // [0x62ef37c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsLooping
	// bool IsLooping();                                                                                                        // [0x62ef358] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsConnecting
	// bool IsConnecting();                                                                                                     // [0x62ef2e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsClosed
	// bool IsClosed();                                                                                                         // [0x62ef2bc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsBuffering
	// bool IsBuffering();                                                                                                      // [0x62ef298] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.HasError
	// bool HasError();                                                                                                         // [0x62ef1a8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetViewRotation
	// FRotator GetViewRotation();                                                                                              // [0x62ef158] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackType
	// FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex);                                                      // [0x62ef06c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	// FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex);                                            // [0x62eef9c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	// float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex);                                                   // [0x62eeed4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackDimensions
	// FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex);                                              // [0x62eee08] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	// float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex);                                                 // [0x62eed40] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVerticalFieldOfView
	// float GetVerticalFieldOfView();                                                                                          // [0x62eed18] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetUrl
	// FString GetUrl();                                                                                                        // [0x62eecb0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackLanguage
	// FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                               // [0x62ee588] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackFormat
	// int32_t GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                                 // [0x62ee4c0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackDisplayName
	// FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                              // [0x62ee3dc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTimeStamp
	// class UMediaTimeStampInfo* GetTimeStamp();                                                                               // [0x62ee370] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTimeDelay
	// FTimespan GetTimeDelay();                                                                                                // [0x62ee354] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTime
	// FTimespan GetTime();                                                                                                     // [0x62ee328] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetSupportedRates
	// void GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned);                                                   // [0x62edb64] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetSelectedTrack
	// int32_t GetSelectedTrack(EMediaPlayerTrack TrackType);                                                                   // [0x62ed440] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetRate
	// float GetRate();                                                                                                         // [0x62ed414] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaylistIndex
	// int32_t GetPlaylistIndex();                                                                                              // [0x62ed2cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaylist
	// class UMediaPlaylist* GetPlaylist();                                                                                     // [0x62ed294] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlayerName
	// FName GetPlayerName();                                                                                                   // [0x62ed268] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetNumTracks
	// int32_t GetNumTracks(EMediaPlayerTrack TrackType);                                                                       // [0x62ed194] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetNumTrackFormats
	// int32_t GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                             // [0x62ed07c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetMediaName
	// FText GetMediaName();                                                                                                    // [0x62ec8cc] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetMediaMetadataItems
	// TMap<FString, FMediaMetadataItemsBPT> GetMediaMetadataItems();                                                           // [0x62ec828] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	// float GetHorizontalFieldOfView();                                                                                        // [0x62ec800] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDuration
	// FTimespan GetDuration();                                                                                                 // [0x62ec7a8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDisplayTimeStamp
	// class UMediaTimeStampInfo* GetDisplayTimeStamp();                                                                        // [0x62ec73c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDisplayTime
	// FTimespan GetDisplayTime();                                                                                              // [0x62ec6ec] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDesiredPlayerName
	// FName GetDesiredPlayerName();                                                                                            // [0x62ec6d0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackType
	// FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex);                                                      // [0x62ec5e4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	// int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex);                                                // [0x62ec520] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackChannels
	// int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex);                                                  // [0x62ec45c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.Close
	// void Close();                                                                                                            // [0x62ebf10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPlayUrl
	// bool CanPlayUrl(FString URL);                                                                                            // [0x62eb7e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPlaySource
	// bool CanPlaySource(class UMediaSource* MediaSource);                                                                     // [0x62eb688] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPause
	// bool CanPause();                                                                                                         // [0x62eb610] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaPlayerProxyInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMediaPlayerProxyInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MediaAssets.MediaPlaylist
/// Size: 0x0010 (0x000028 - 0x000038)
class UMediaPlaylist : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UMediaSource*>)               Items                                                       OFFSET(get<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/MediaAssets.MediaPlaylist.Replace
	// bool Replace(int32_t Index, class UMediaSource* Replacement);                                                            // [0x62f0960] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.RemoveAt
	// bool RemoveAt(int32_t Index);                                                                                            // [0x62f0874] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Remove
	// bool Remove(class UMediaSource* MediaSource);                                                                            // [0x62f07d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Num
	// int32_t Num();                                                                                                           // [0x62ef414] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Insert
	// void Insert(class UMediaSource* MediaSource, int32_t Index);                                                             // [0x62ef1d4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetRandom
	// class UMediaSource* GetRandom(int32_t& OutIndex);                                                                        // [0x62ed37c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetPrevious
	// class UMediaSource* GetPrevious(int32_t& InOutIndex);                                                                    // [0x62ed2e4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetNext
	// class UMediaSource* GetNext(int32_t& InOutIndex);                                                                        // [0x62ec950] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Get
	// class UMediaSource* Get(int32_t Index);                                                                                  // [0x62ec398] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.AddUrl
	// bool AddUrl(FString URL);                                                                                                // [0x62eae18] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.AddFile
	// bool AddFile(FString FilePath);                                                                                          // [0x62ea6f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Add
	// bool Add(class UMediaSource* MediaSource);                                                                               // [0x62ea630] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaSoundComponent
/// Size: 0x00E0 (0x0008F0 - 0x0009D0)
class UMediaSoundComponent : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2512;

public:
	CMember(EMediaSoundChannels)                       Channels                                                    OFFSET(get<T>, {0x8F0, 4, 0, 0})
	DMember(bool)                                      DynamicRateAdjustment                                       OFFSET(get<bool>, {0x8F4, 1, 0, 0})
	DMember(float)                                     RateAdjustmentFactor                                        OFFSET(get<float>, {0x8F8, 4, 0, 0})
	SMember(FFloatRange)                               RateAdjustmentRange                                         OFFSET(getStruct<T>, {0x8FC, 16, 0, 0})
	CMember(class UMediaPlayer*)                       MediaPlayer                                                 OFFSET(get<T>, {0x910, 8, 0, 0})


	/// Functions
	// Function /Script/MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
	// void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);           // [0x62f247c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetMediaPlayer
	// void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);                                                                 // [0x62f2244] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
	// void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec);                                      // [0x62f0ea0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
	// void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);                                                         // [0x62f0df0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
	// void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);                                                              // [0x62f0d3c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetSpectralData
	// TArray<FMediaSoundComponentSpectralData> GetSpectralData();                                                              // [0x62ed4d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
	// TArray<FMediaSoundComponentSpectralData> GetNormalizedSpectralData();                                                    // [0x62ec9e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x3c43250] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSoundComponent.GetEnvelopeValue
	// float GetEnvelopeValue();                                                                                                // [0x62ec7d4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
	// bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);                                // [0x62eb520] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MediaAssets.PlatformMediaSource
/// Size: 0x0008 (0x000080 - 0x000088)
class UPlatformMediaSource : public UMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UMediaSource*)                       MediaSource                                                 OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Class /Script/MediaAssets.StreamMediaSource
/// Size: 0x0010 (0x000088 - 0x000098)
class UStreamMediaSource : public UBaseMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FString)                                   StreamUrl                                                   OFFSET(getStruct<T>, {0x88, 16, 0, 0})
};

/// Class /Script/MediaAssets.TimeSynchronizableMediaSource
/// Size: 0x0018 (0x000088 - 0x0000A0)
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bUseTimeSynchronization                                     OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(int32_t)                                   FrameDelay                                                  OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
	DMember(double)                                    TimeDelay                                                   OFFSET(get<double>, {0x90, 8, 0, 0})
	DMember(bool)                                      bAutoDetectInput                                            OFFSET(get<bool>, {0x98, 1, 0, 0})
};

/// Class /Script/MediaAssets.MediaBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
	// void EnumerateWebcamCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);                             // [0x62ec21c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
	// void EnumerateVideoCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);                              // [0x62ec0a0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
	// void EnumerateAudioCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);                              // [0x62ebf24] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/MediaAssets.MediaMetadataItemBPT
/// Size: 0x0040 (0x000000 - 0x000040)
class FMediaMetadataItemBPT : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   LanguageCode                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   MimeType                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   StringData                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TArray<char>)                              BinaryData                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/MediaAssets.MediaMetadataItemsBPT
/// Size: 0x0010 (0x000000 - 0x000010)
class FMediaMetadataItemsBPT : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FMediaMetadataItemBPT>)             Items                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MediaAssets.MediaSoundComponentSpectralData
/// Size: 0x0008 (0x000000 - 0x000008)
class FMediaSoundComponentSpectralData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     FrequencyHz                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/MediaAssets.MediaSourceCacheSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FMediaSourceCacheSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bOverride                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     TimeToLookAhead                                             OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/MediaAssets.MediaCaptureDevice
/// Size: 0x0028 (0x000000 - 0x000028)
class FMediaCaptureDevice : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   URL                                                         OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Enum /Script/MediaAssets.MediaTextureOutputFormat
/// Size: 0x03
enum MediaTextureOutputFormat : uint8_t
{
	MTOF_Default                                                                     = 0,
	MTOF_SRGB_LINOUT                                                                 = 1,
	MTOF_MAX                                                                         = 2
};

/// Enum /Script/MediaAssets.MediaTextureOrientation
/// Size: 0x05
enum MediaTextureOrientation : uint8_t
{
	MTORI_Original                                                                   = 0,
	MTORI_CW90                                                                       = 1,
	MTORI_CW180                                                                      = 2,
	MTORI_CW270                                                                      = 3,
	MTORI_MAX                                                                        = 4
};

/// Enum /Script/MediaAssets.EMediaPlayerTrack
/// Size: 0x08
enum EMediaPlayerTrack : uint8_t
{
	EMediaPlayerTrack__Audio                                                         = 0,
	EMediaPlayerTrack__Caption                                                       = 1,
	EMediaPlayerTrack__Metadata                                                      = 2,
	EMediaPlayerTrack__Script                                                        = 3,
	EMediaPlayerTrack__Subtitle                                                      = 4,
	EMediaPlayerTrack__Text                                                          = 5,
	EMediaPlayerTrack__Video                                                         = 6,
	EMediaPlayerTrack__EMediaPlayerTrack_MAX                                         = 7
};

/// Enum /Script/MediaAssets.EMediaSoundChannels
/// Size: 0x04
enum EMediaSoundChannels : uint32_t
{
	EMediaSoundChannels__Mono                                                        = 0,
	EMediaSoundChannels__Stereo                                                      = 1,
	EMediaSoundChannels__Surround                                                    = 2,
	EMediaSoundChannels__EMediaSoundChannels_MAX                                     = 3
};

/// Enum /Script/MediaAssets.EMediaSoundComponentFFTSize
/// Size: 0x05
enum EMediaSoundComponentFFTSize : uint8_t
{
	EMediaSoundComponentFFTSize__Min                                                 = 0,
	EMediaSoundComponentFFTSize__Small                                               = 1,
	EMediaSoundComponentFFTSize__Medium                                              = 2,
	EMediaSoundComponentFFTSize__Large                                               = 3,
	EMediaSoundComponentFFTSize__EMediaSoundComponentFFTSize_MAX                     = 4
};

/// Enum /Script/MediaAssets.EMediaTextureVisibleMipsTiles
/// Size: 0x04
enum EMediaTextureVisibleMipsTiles : uint8_t
{
	EMediaTextureVisibleMipsTiles__None                                              = 0,
	EMediaTextureVisibleMipsTiles__Plane                                             = 1,
	EMediaTextureVisibleMipsTiles__Sphere                                            = 2,
	EMediaTextureVisibleMipsTiles__EMediaTextureVisibleMipsTiles_MAX                 = 3
};

/// Enum /Script/MediaAssets.EMediaAudioCaptureDeviceFilter
/// Size: 0x06
enum EMediaAudioCaptureDeviceFilter : uint8_t
{
	EMediaAudioCaptureDeviceFilter__None                                             = 0,
	EMediaAudioCaptureDeviceFilter__Card                                             = 1,
	EMediaAudioCaptureDeviceFilter__Microphone                                       = 2,
	EMediaAudioCaptureDeviceFilter__Software                                         = 4,
	EMediaAudioCaptureDeviceFilter__Unknown                                          = 8,
	EMediaAudioCaptureDeviceFilter__EMediaAudioCaptureDeviceFilter_MAX               = 9
};

/// Enum /Script/MediaAssets.EMediaVideoCaptureDeviceFilter
/// Size: 0x06
enum EMediaVideoCaptureDeviceFilter : uint8_t
{
	EMediaVideoCaptureDeviceFilter__None                                             = 0,
	EMediaVideoCaptureDeviceFilter__Card                                             = 1,
	EMediaVideoCaptureDeviceFilter__Software                                         = 2,
	EMediaVideoCaptureDeviceFilter__Unknown                                          = 4,
	EMediaVideoCaptureDeviceFilter__Webcam                                           = 8,
	EMediaVideoCaptureDeviceFilter__EMediaVideoCaptureDeviceFilter_MAX               = 9
};

/// Enum /Script/MediaAssets.EMediaWebcamCaptureDeviceFilter
/// Size: 0x06
enum EMediaWebcamCaptureDeviceFilter : uint8_t
{
	EMediaWebcamCaptureDeviceFilter__None                                            = 0,
	EMediaWebcamCaptureDeviceFilter__DepthSensor                                     = 1,
	EMediaWebcamCaptureDeviceFilter__Front                                           = 2,
	EMediaWebcamCaptureDeviceFilter__Rear                                            = 4,
	EMediaWebcamCaptureDeviceFilter__Unknown                                         = 8,
	EMediaWebcamCaptureDeviceFilter__EMediaWebcamCaptureDeviceFilter_MAX             = 9
};

