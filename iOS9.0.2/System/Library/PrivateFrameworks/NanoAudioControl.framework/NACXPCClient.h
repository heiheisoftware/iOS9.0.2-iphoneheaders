/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NACXPCInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableSet, NSString;

@interface NACXPCClient : NSObject <NACXPCInterface> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcConnectionQueue;
	char _isObservingVolume;
	NSMutableSet* _routeObservingCategories;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedClient;
-(id)init;
-(id)_proxy;
-(void)_createConnection;
-(void)beginObservingVolume;
-(void)beginObservingAudioRoutesForCategory:(id)arg1 ;
-(void)endObservingVolume;
-(void)volumeValueForCategory:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)volumeControlAvailabilityForCategory:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)mutedStateForCategory:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)hapticIntensity:(/*^block*/id)arg1 ;
-(void)systemMutedState:(/*^block*/id)arg1 ;
-(void)EULimitForCategory:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)volumeWarningForCategory:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)setVolumeValue:(float)arg1 category:(id)arg2 ;
-(void)setMuted:(char)arg1 category:(id)arg2 ;
-(void)setHapticIntensity:(float)arg1 ;
-(void)setSystemMuted:(char)arg1 ;
-(void)audioRoutesForCategory:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)endObservingAudioRoutesForCategory:(id)arg1 ;
-(void)pickAudioRouteWithIdentifier:(id)arg1 category:(id)arg2 ;
-(void)playAudioAndHapticPreview;
-(void)_resumeVolumeObservingIfNecessary;
-(void)_resumeRouteObservingIfNecessary;
@end

