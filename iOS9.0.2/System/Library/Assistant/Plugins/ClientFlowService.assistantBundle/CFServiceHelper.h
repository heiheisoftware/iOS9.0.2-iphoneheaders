/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ClientFlowService/AFServiceHelper.h>

@protocol AFServiceHelper;
@class CFKeyValueStore, NSString;

@interface CFServiceHelper : NSObject <AFServiceHelper> {

	id<AFServiceHelper> _serviceHelper;
	CFKeyValueStore* _keyValueStore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isDeviceLockedWithPasscode;
-(void)handlePutStringCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithServiceHelper:(id)arg1 ;
-(void)submitMetricsForKey:(id)arg1 domain:(id)arg2 executionTime:(int)arg3 ;
-(id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3 ;
-(char)openSensitiveURL:(id)arg1 ;
-(void)handleGetStringCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissAssistant;
-(void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

