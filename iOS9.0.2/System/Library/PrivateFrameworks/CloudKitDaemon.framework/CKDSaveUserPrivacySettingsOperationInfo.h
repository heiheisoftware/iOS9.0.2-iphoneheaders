/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>

@class NSString;

@interface CKDSaveUserPrivacySettingsOperationInfo : CKOperationInfo {

	int _discoverable;
	NSString* _applicationBundleID;

}

@property (assign,nonatomic) int discoverable;                          //@synthesize discoverable=_discoverable - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleID;              //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
-(id)init;
-(NSString *)applicationBundleID;
-(int)discoverable;
-(void)setDiscoverable:(int)arg1 ;
-(void)setApplicationBundleID:(NSString *)arg1 ;
@end

