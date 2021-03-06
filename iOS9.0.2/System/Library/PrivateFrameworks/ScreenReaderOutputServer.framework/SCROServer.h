/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCROServerDelegate;
#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
@class NSLock;

@interface SCROServer : NSObject {

	NSLock* _contentLock;
	id<SCROServerDelegate> _delegate;
	CFRunLoopSourceRef _serverSource;
	CFRunLoopSourceRef _deathSource;
	CFRunLoopTimerRef _deathTimer;
	unsigned _serverPort;
	unsigned _deathPort;
	long _clientCount;
	char _isRegisteredWithMach;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)sharedServer;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned)retainCount;
-(id)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)unregisterWithMach;
-(long)_clientCount;
-(long)_incrementClientCount;
-(void)_setClientCount:(long)arg1 ;
-(CFRunLoopTimerRef)_deathTimer;
-(int)_registerForNotificationOnDeathPort:(unsigned)arg1 ;
-(char)isRegisteredWithMach;
-(char)registerWithMach;
-(CFRunLoopSourceRef)serverSource;
@end

