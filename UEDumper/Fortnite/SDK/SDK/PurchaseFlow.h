
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/PurchaseFlow.PurchaseFlowJSBridge
/// Size: 0x0010 (0x000028 - 0x000038)
class UPurchaseFlowJSBridge : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.RequestClose
	// void RequestClose(FString CloseInfo);                                                                                 // [0x7e48980] Final|Native|Public  
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.Receipt
	// void Receipt(FPurchaseFlowReceiptParam Receipt);                                                                      // [0x7e4881c] Final|Native|Public  
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.LaunchValidatedExternalBrowserUrl
	// bool LaunchValidatedExternalBrowserUrl(FString AllowedBrowserID, FString URL);                                        // [0x7e48114] Final|Native|Public  
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.LaunchExternalBrowserUrl
	// bool LaunchExternalBrowserUrl(FString URL);                                                                           // [0x7e47a38] Final|Native|Public  
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserPath
	// FString GetExternalBrowserPath(FString BrowserId);                                                                    // [0x7e4736c] Final|Native|Public  
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserName
	// FString GetExternalBrowserName(FString BrowserId);                                                                    // [0x7e46ca0] Final|Native|Public  
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.GetDefaultExternalBrowserID
	// FString GetDefaultExternalBrowserID(FString URL);                                                                     // [0x7e465e8] Final|Native|Public  
};

/// Struct /Script/PurchaseFlow.PurchaseFlowItem
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPurchaseFlowItem
{ 
	SDK_UNDEFINED(16,14930) /* FString */              __um(ItemId);                                               // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,14931) /* FString */              __um(EntitlementId);                                        // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,14932) /* FString */              __um(ValidationInfo);                                       // 0x0020   (0x0010)  
};

/// Struct /Script/PurchaseFlow.PurchaseFlowOffer
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPurchaseFlowOffer
{ 
	SDK_UNDEFINED(16,14933) /* FString */              __um(OfferNamespace);                                       // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,14934) /* FString */              __um(OfferId);                                              // 0x0010   (0x0010)  
	int32_t                                            Quantity;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FPurchaseFlowItem>                          Items;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/PurchaseFlow.PurchaseFlowReceiptParam
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPurchaseFlowReceiptParam
{ 
	SDK_UNDEFINED(16,14935) /* FString */              __um(TransactionId);                                        // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,14936) /* FString */              __um(TransactionState);                                     // 0x0010   (0x0010)  
	TArray<FPurchaseFlowOffer>                         Offers;                                                     // 0x0020   (0x0010)  
};

