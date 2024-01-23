
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameFeatures
/// dependency: GameplayTags
/// dependency: StructUtils
/// dependency: Tweening
/// dependency: UMG

/// Class /Script/StyleSheets.GameFeatureAction_ActivateStyleTheme
/// Size: 0x0008 (0x000028 - 0x000030)
class UGameFeatureAction_ActivateStyleTheme : public UGameFeatureAction
{ 
public:
	FName                                              ThemeName;                                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/StyleSheets.GameFeatureAction_RegisterStyleThemes
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameFeatureAction_RegisterStyleThemes : public UGameFeatureAction
{ 
public:
	SDK_UNDEFINED(32,15236) /* TWeakObjectPtr<UStyleThemeConfig*> */ __um(StyleThemeConfig);                       // 0x0028   (0x0020)  
};

/// Class /Script/StyleSheets.PropertyTweenContext
/// Size: 0x0008 (0x000028 - 0x000030)
class UPropertyTweenContext : public UObject
{ 
public:
	FName                                              PropertyPath;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/StyleSheets.StyleAnimationProvider
/// Size: 0x0050 (0x000028 - 0x000078)
class UStyleAnimationProvider : public UObject
{ 
public:
	SDK_UNDEFINED(80,15237) /* TMap<FWidgetProperty, int32_t> */ __um(WidgetPropertyTweens);                       // 0x0028   (0x0050)  
};

/// Class /Script/StyleSheets.StyleProvider
/// Size: 0x00E8 (0x000028 - 0x000110)
class UStyleProvider : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0028   (0x0020)  MISSED
	SDK_UNDEFINED(8,15238) /* TWeakObjectPtr<UStyleRuleTree*> */ __um(StyleRuleTree);                              // 0x0048   (0x0008)  
	SDK_UNDEFINED(8,15239) /* TWeakObjectPtr<UStyleAnimationProvider*> */ __um(StyleAnimationProvider);            // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0xB8];                                      // 0x0058   (0x00B8)  MISSED
};

/// Struct /Script/StyleSheets.StyleSelectorItem
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStyleSelectorItem
{ 
	TArray<FGameplayTag>                               Targets;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/StyleSheets.StyleClass
/// Size: 0x0108 (0x000000 - 0x000108)
struct FStyleClass
{ 
	FInstancedPropertyBag                              StylePropertyBag;                                           // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,15240) /* TMap<FName, FStyleAnimationData> */ __um(PropertyAnimations);                       // 0x0010   (0x0050)  
	SDK_UNDEFINED(80,15241) /* TMap<FName, FInstancedPropertyBag> */ __um(MaterialParameters);                     // 0x0060   (0x0050)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x00B0   (0x0058)  MISSED
};

/// Class /Script/StyleSheets.StyleRule
/// Size: 0x0138 (0x000028 - 0x000160)
class UStyleRule : public UObject
{ 
public:
	TArray<class UStyleRule*>                          Children;                                                   // 0x0028   (0x0010)  
	FStyleSelectorItem                                 StyleSelectorItem;                                          // 0x0038   (0x0010)  
	SDK_UNDEFINED(8,15242) /* TWeakObjectPtr<UStyleRule*> */ __um(Parent);                                         // 0x0048   (0x0008)  
	FStyleClass                                        style;                                                      // 0x0050   (0x0108)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0158   (0x0008)  MISSED
};

/// Struct /Script/StyleSheets.StyleRuleEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FStyleRuleEntry
{ 
	TArray<FStyleSelectorItem>                         SelectorItems;                                              // 0x0000   (0x0010)  
	class UStyleRule*                                  StyleRule;                                                  // 0x0010   (0x0008)  
};

/// Class /Script/StyleSheets.StyleRuleTree
/// Size: 0x0040 (0x000028 - 0x000068)
class UStyleRuleTree : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0028   (0x0018)  MISSED
	TArray<class UStyleSheetCollection*>               StyleSheetCollections;                                      // 0x0040   (0x0010)  
	TArray<FStyleRuleEntry>                            StyleRuleEntries;                                           // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Struct /Script/StyleSheets.StyleSheetSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStyleSheetSettings
{ 
	TArray<class UClass*>                              StylableWidgetClasses;                                      // 0x0000   (0x0010)  
};

/// Class /Script/StyleSheets.StyleSheet
/// Size: 0x0020 (0x000028 - 0x000048)
class UStyleSheet : public UObject
{ 
public:
	TArray<class UStyleRule*>                          StyleRules;                                                 // 0x0028   (0x0010)  
	FStyleSheetSettings                                Settings;                                                   // 0x0038   (0x0010)  
};

/// Class /Script/StyleSheets.StyleSheetCollection
/// Size: 0x0010 (0x000030 - 0x000040)
class UStyleSheetCollection : public UDataAsset
{ 
public:
	TArray<class UStyleSheet*>                         StyleSheets;                                                // 0x0030   (0x0010)  
};

/// Class /Script/StyleSheets.StyleTagFinder
/// Size: 0x0000 (0x000028 - 0x000028)
class UStyleTagFinder : public UObject
{ 
public:
};

/// Struct /Script/StyleSheets.StyleThemeConfigEntry
/// Size: 0x0030 (0x000000 - 0x000030)
struct FStyleThemeConfigEntry
{ 
	FName                                              ThemeName;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,15243) /* TWeakObjectPtr<UStyleSheetCollection*> */ __um(Theme);                              // 0x0008   (0x0020)  
	class UStyleSheetCollection*                       ThemeInstance;                                              // 0x0028   (0x0008)  
};

/// Class /Script/StyleSheets.StyleThemeConfig
/// Size: 0x0010 (0x000030 - 0x000040)
class UStyleThemeConfig : public UDataAsset
{ 
public:
	TArray<FStyleThemeConfigEntry>                     Entries;                                                    // 0x0030   (0x0010)  
};

/// Class /Script/StyleSheets.StyleThemeProvider
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UStyleThemeProvider : public UObject
{ 
public:
	SDK_UNDEFINED(8,15244) /* TWeakObjectPtr<UStyleRuleTree*> */ __um(StyleRuleTree);                              // 0x0028   (0x0008)  
	SDK_UNDEFINED(80,15245) /* TMap<FStyleThemeConfigKey, UStyleThemeConfig*> */ __um(ThemeConfigSourceMap);       // 0x0030   (0x0050)  
	SDK_UNDEFINED(80,15246) /* TSet<FName> */          __um(ActiveThemeNames);                                     // 0x0080   (0x0050)  
};

/// Class /Script/StyleSheets.WidgetBlueprintGeneratedClassExtension_StyleClass
/// Size: 0x0050 (0x000028 - 0x000078)
class UWidgetBlueprintGeneratedClassExtension_StyleClass : public UWidgetBlueprintGeneratedClassExtension
{ 
public:
	SDK_UNDEFINED(80,15247) /* TMap<FName, FStyleTag> */ __um(WidgetStyleTagMap);                                  // 0x0028   (0x0050)  
};

/// Class /Script/StyleSheets.StylableWidget
/// Size: 0x0000 (0x000028 - 0x000028)
class UStylableWidget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/StyleSheets.StylableWidget.BP_OnWidgetStyled
	// void BP_OnWidgetStyled();                                                                                             // [0x2177018] RequiredAPI|Event|Protected|BlueprintEvent 
};

/// Struct /Script/StyleSheets.WidgetTypeEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FWidgetTypeEntry
{ 
	FGameplayTag                                       WidgetType;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<class UClass*>                              WidgetClasses;                                              // 0x0008   (0x0010)  
};

/// Class /Script/StyleSheets.StyleSheetsSettings
/// Size: 0x0038 (0x000028 - 0x000060)
class UStyleSheetsSettings : public UObject
{ 
public:
	TArray<FWidgetTypeEntry>                           WidgetTypes;                                                // 0x0028   (0x0010)  
	SDK_UNDEFINED(32,15248) /* TWeakObjectPtr<UStyleThemeConfig*> */ __um(StyleThemeConfig);                       // 0x0038   (0x0020)  
	bool                                               bAllowAssigningStyleTagsToWidgets;                          // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Class /Script/StyleSheets.StyleSheetsSubsystem
/// Size: 0x0030 (0x000030 - 0x000060)
class UStyleSheetsSubsystem : public UEngineSubsystem
{ 
public:
	class UStyleTagFinder*                             EditorStyleTagFinder;                                       // 0x0030   (0x0008)  
	class UStyleRuleTree*                              StyleRuleTree;                                              // 0x0038   (0x0008)  
	class UStyleAnimationProvider*                     StyleAnimationProvider;                                     // 0x0040   (0x0008)  
	class UStyleProvider*                              StyleProvider;                                              // 0x0048   (0x0008)  
	class UStyleThemeProvider*                         StyleThemeProvider;                                         // 0x0050   (0x0008)  
	class UStyleTagFinder*                             StyleTagFinder;                                             // 0x0058   (0x0008)  
};

/// Struct /Script/StyleSheets.WidgetProperty
/// Size: 0x000C (0x000000 - 0x00000C)
struct FWidgetProperty
{ 
	SDK_UNDEFINED(8,15249) /* TWeakObjectPtr<UWidget*> */ __um(Widget);                                            // 0x0000   (0x0008)  
	FName                                              PropertyPath;                                               // 0x0008   (0x0004)  
};

/// Struct /Script/StyleSheets.StyleAnimationData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FStyleAnimationData
{ 
	float                                              Delay;                                                      // 0x0000   (0x0004)  
	float                                              duration;                                                   // 0x0004   (0x0004)  
	ETweenBuiltInEasing                                Easing;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/StyleSheets.StylePropertyStore
/// Size: 0x0050 (0x000000 - 0x000050)
struct FStylePropertyStore
{ 
	SDK_UNDEFINED(80,15250) /* TMap<UWidget*, FInstancedPropertyBag> */ __um(WidgetToPropertyBagMap);              // 0x0000   (0x0050)  
};

/// Struct /Script/StyleSheets.StyleRulePreviewInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FStyleRulePreviewInfo
{ 
	class UClass*                                      PreviewWidgetClass;                                         // 0x0000   (0x0008)  
	FInstancedPropertyBag                              PreviewPropertyBag;                                         // 0x0008   (0x0010)  
};

/// Struct /Script/StyleSheets.StyleTag
/// Size: 0x0000 (0x000010 - 0x000010)
struct FStyleTag : FStyleSelectorItem
{ 
};

/// Struct /Script/StyleSheets.StyleThemeConfigKey
/// Size: 0x0008 (0x000000 - 0x000008)
struct FStyleThemeConfigKey
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

