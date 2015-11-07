/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSNumber, NSString, NSObject, SSDownloadPolicy, NSMutableDictionary, NSArray, SSItem, SSItemOffer, SSNetworkConstraints, SSURLRequestProperties, NSDictionary, NSData;

@interface SSPurchase : NSObject <SSXPCCoding, NSCoding, NSCopying> {

	NSNumber* _accountIdentifier;
	NSString* _affiliateIdentifier;
	char _backgroundPurchase;
	int _batchIdentifier;
	NSString* _buyParameters;
	char _createsDownloads;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	char _displaysOnLockScreen;
	SSDownloadPolicy* _downloadPolicy;
	NSMutableDictionary* _downloadProperties;
	NSNumber* _enabledServiceType;
	long long _expectedDownloadFileSize;
	NSArray* _filteredAssetTypes;
	NSArray* _gratisIdentifiers;
	char _ignoresForcedPasswordRestriction;
	SSItem* _item;
	SSItemOffer* _itemOffer;
	SSNetworkConstraints* _networkConstraints;
	long long _placeholderDownloadIdentifier;
	char _preauthenticated;
	SSURLRequestProperties* _requestProperties;
	id _requiredDeviceCapabilities;
	long long _uniqueIdentifier;
	char _usesLocalRedownloadParametersIfPossible;

}

@property (retain) NSNumber * accountIdentifier; 
@property (copy) NSString * affiliateIdentifier; 
@property (copy) NSString * buyParameters; 
@property (assign,nonatomic) char createsDownloads; 
@property (copy) NSArray * filteredAssetTypes; 
@property (getter=isBackgroundPurchase) char backgroundPurchase; 
@property (assign) long long placeholderDownloadIdentifier; 
@property (copy) SSURLRequestProperties * requestProperties; 
@property (copy) NSDictionary * downloadProperties; 
@property (assign) char displaysOnLockScreen; 
@property (copy) SSDownloadPolicy * downloadPolicy; 
@property (assign) char ignoresForcedPasswordRestriction; 
@property (copy) SSNetworkConstraints * networkConstraints; 
@property (assign) int batchIdentifier; 
@property (copy) NSNumber * enabledServiceType; 
@property (assign) long long expectedDownloadFileSize; 
@property (copy) NSArray * gratisIdentifiers; 
@property (copy) id requiredDeviceCapabilities; 
@property (assign) long long uniqueIdentifier; 
@property (assign) char usesLocalRedownloadParametersIfPossible; 
@property (getter=isPreauthenticated) char preauthenticated; 
@property (readonly) NSData * databaseEncoding; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)purchaseWithBuyParameters:(id)arg1 ;
+(id)newPurchaseWithDatabaseEncoding:(id)arg1 ;
+(id)newPurchaseWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(long long)placeholderDownloadIdentifier;
-(void)setIgnoresForcedPasswordRestriction:(char)arg1 ;
-(SSDownloadPolicy *)downloadPolicy;
-(void)setDownloadPolicy:(SSDownloadPolicy *)arg1 ;
-(void)setBackgroundPurchase:(char)arg1 ;
-(void)setDisplaysOnLockScreen:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)item;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)uniqueIdentifier;
-(void)setUniqueIdentifier:(long long)arg1 ;
-(NSString *)buyParameters;
-(void)setBuyParameters:(NSString *)arg1 ;
-(void)setAffiliateIdentifier:(NSString *)arg1 ;
-(void)setRequestProperties:(SSURLRequestProperties *)arg1 ;
-(NSString *)affiliateIdentifier;
-(void)setExpectedDownloadFileSize:(long long)arg1 ;
-(void)setRequiredDeviceCapabilities:(id)arg1 ;
-(void)setUsesLocalRedownloadParametersIfPossible:(char)arg1 ;
-(void)setValue:(id)arg1 forDownloadProperty:(id)arg2 ;
-(void)setEnabledServiceType:(NSNumber *)arg1 ;
-(void)setGratisIdentifiers:(NSArray *)arg1 ;
-(id)valueForDownloadProperty:(id)arg1 ;
-(id)itemOffer;
-(id)initWithItem:(id)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(SSNetworkConstraints *)networkConstraints;
-(id)requiredDeviceCapabilities;
-(void)setCreatesDownloads:(char)arg1 ;
-(char)createsDownloads;
-(id)_initSSPurchase;
-(void)_setValuesUsingDatabaseEncoding:(id)arg1 ;
-(void)_addEntriesToDatabaseEncoding:(id)arg1 ;
-(char)displaysOnLockScreen;
-(NSArray *)filteredAssetTypes;
-(char)ignoresForcedPasswordRestriction;
-(char)isBackgroundPurchase;
-(void)setFilteredAssetTypes:(NSArray *)arg1 ;
-(id)initWithDatabaseEncoding:(id)arg1 ;
-(int)batchIdentifier;
-(NSData *)databaseEncoding;
-(NSNumber *)enabledServiceType;
-(long long)expectedDownloadFileSize;
-(NSArray *)gratisIdentifiers;
-(char)isPreauthenticated;
-(void)setBatchIdentifier:(int)arg1 ;
-(void)setDefaultUserAgent:(id)arg1 ;
-(void)setPlaceholderDownloadIdentifier:(long long)arg1 ;
-(void)setPreauthenticated:(char)arg1 ;
-(char)usesLocalRedownloadParametersIfPossible;
-(id)downloadMetadata;
-(void)setDownloadMetadata:(id)arg1 ;
-(SSURLRequestProperties *)requestProperties;
-(void)setNetworkConstraints:(SSNetworkConstraints *)arg1 ;
-(id)initWithItem:(id)arg1 offer:(id)arg2 ;
-(NSDictionary *)downloadProperties;
-(void)setDownloadProperties:(NSDictionary *)arg1 ;
@end
