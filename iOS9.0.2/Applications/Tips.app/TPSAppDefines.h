/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Tips/Tips-Structs.h>
@class NSObject, NSString, NSArray, NSDateFormatter, NSMutableDictionary, NSURL;

@interface TPSAppDefines : NSObject {

	char _logEverything;
	NSObject*<OS_dispatch_queue> _logQueue;
	asl_object_sRef _aslClient;
	int _logLevel;
	NSString* _noticeLabel;
	NSArray* _imageAppIdentifierExclusionList;
	NSArray* _borderlessIconIdentifierList;
	NSString* _majorVersion;
	NSString* _model;
	NSString* _tipsAssetBasePath;
	NSString* _hexRepresentationOfProuctHash;
	NSDateFormatter* _lastModifiedDateFormatter;
	NSDateFormatter* _CDSDateFormatter;
	NSMutableDictionary* _appBundleIDMap;
	NSString* _facility;

}

@property (assign,nonatomic) int logLevel;                                             //@synthesize logLevel=_logLevel - In the implementation block
@property (nonatomic,readonly) NSURL * currentTipsFeedURL; 
@property (nonatomic,readonly) NSString * noticeLabel;                                 //@synthesize noticeLabel=_noticeLabel - In the implementation block
@property (nonatomic,readonly) NSString * currentLocaleCountryCode; 
@property (nonatomic,retain) NSArray * imageAppIdentifierExclusionList;                //@synthesize imageAppIdentifierExclusionList=_imageAppIdentifierExclusionList - In the implementation block
@property (nonatomic,retain) NSArray * borderlessIconIdentifierList;                   //@synthesize borderlessIconIdentifierList=_borderlessIconIdentifierList - In the implementation block
@property (nonatomic,retain) NSString * majorVersion;                                  //@synthesize majorVersion=_majorVersion - In the implementation block
@property (nonatomic,retain) NSString * model;                                         //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSString * tipsAssetBasePath;                             //@synthesize tipsAssetBasePath=_tipsAssetBasePath - In the implementation block
@property (nonatomic,retain) NSString * hexRepresentationOfProuctHash;                 //@synthesize hexRepresentationOfProuctHash=_hexRepresentationOfProuctHash - In the implementation block
@property (nonatomic,retain) NSDateFormatter * lastModifiedDateFormatter;              //@synthesize lastModifiedDateFormatter=_lastModifiedDateFormatter - In the implementation block
@property (nonatomic,retain) NSDateFormatter * CDSDateFormatter;                       //@synthesize CDSDateFormatter=_CDSDateFormatter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appBundleIDMap;                     //@synthesize appBundleIDMap=_appBundleIDMap - In the implementation block
@property (nonatomic,retain) NSString * facility;                                      //@synthesize facility=_facility - In the implementation block
+(char)deviceValidWithTargetDictionary:(id)arg1 relatedApp:(id)arg2 ;
+(char)validWithTargetRegions:(id)arg1 ;
+(char)validWithTargetDevices:(id)arg1 ;
+(char)validWithTargetApps:(id)arg1 ;
+(char)validWithTargetCapabilities:(id)arg1 relatedApp:(id)arg2 ;
+(void)targetInfoForArray:(id)arg1 targetedArray:(id*)arg2 excludeArray:(id*)arg3 changeToLowerCase:(char)arg4 ;
+(char)validPublishDateForTip:(id)arg1 ;
+(id)sharedInstance;
-(NSArray *)imageAppIdentifierExclusionList;
-(id)appBundleIDForInstalledAppWithIdentifier:(id)arg1 ;
-(NSArray *)borderlessIconIdentifierList;
-(void)logAtLevel:(int)arg1 message:(id)arg2 ;
-(NSString *)tipsAssetBasePath;
-(NSMutableDictionary *)appBundleIDMap;
-(NSDateFormatter *)CDSDateFormatter;
-(NSURL *)currentTipsFeedURL;
-(NSString *)noticeLabel;
-(NSString *)currentLocaleCountryCode;
-(NSString *)hexRepresentationOfProuctHash;
-(NSDateFormatter *)lastModifiedDateFormatter;
-(id)localizedStringForKey:(id)arg1 localizedStringsFileName:(id)arg2 ;
-(void)setImageAppIdentifierExclusionList:(NSArray *)arg1 ;
-(void)setBorderlessIconIdentifierList:(NSArray *)arg1 ;
-(void)setMajorVersion:(NSString *)arg1 ;
-(void)setTipsAssetBasePath:(NSString *)arg1 ;
-(void)setHexRepresentationOfProuctHash:(NSString *)arg1 ;
-(void)setLastModifiedDateFormatter:(NSDateFormatter *)arg1 ;
-(void)setCDSDateFormatter:(NSDateFormatter *)arg1 ;
-(void)setAppBundleIDMap:(NSMutableDictionary *)arg1 ;
-(int)logLevel;
-(void)setLogLevel:(int)arg1 ;
-(id)init;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(void)setFacility:(NSString *)arg1 ;
-(NSString *)facility;
-(NSString *)majorVersion;
@end
