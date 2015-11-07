/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/imagent.app/imagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <imagent/ParentalControlsProtocol.h>

@class NSMutableDictionary;

@interface ParentalControls : NSObject <ParentalControlsProtocol> {

	NSMutableDictionary* _parentalControls;
	char _active;
	char _disableAV;
	char _forceChatLogging;
	char _shouldPostNotifications;

}

@property (nonatomic,readonly) char active;                             //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) char disableAV; 
@property (nonatomic,readonly) char forceChatLogging; 
@property (assign,nonatomic) char shouldPostNotifications;              //@synthesize shouldPostNotifications=_shouldPostNotifications - In the implementation block
+(id)objectForKey:(id)arg1 ;
+(id)standardControls;
-(id)whitelistForServiceSession:(id)arg1 ;
-(char)forceWhitelistForServiceSession:(id)arg1 ;
-(id)init;
-(char)active;
-(void)setShouldPostNotifications:(char)arg1 ;
-(void)_updateParentalSettings;
-(void)_managedPrefsNotification:(id)arg1 ;
-(id)_serviceWithName:(id)arg1 ;
-(char)disableAV;
-(char)forceChatLogging;
-(char)disableService:(id)arg1 ;
-(char)disableAccount:(id)arg1 ;
-(char)shouldPostNotifications;
-(char)disableServiceSession:(id)arg1 ;
-(void)updateAccountActivation;
@end
