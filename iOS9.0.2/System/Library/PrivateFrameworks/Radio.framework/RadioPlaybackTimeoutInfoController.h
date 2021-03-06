/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, RadioPlaybackTimeoutInfo, RadioLoadStoreBagRequest, RadioStoreBag, NSMutableArray, NSDictionary;

@interface RadioPlaybackTimeoutInfoController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	long long _activeAccountIdentifier;
	RadioPlaybackTimeoutInfo* _currentTimeoutInfo;
	RadioLoadStoreBagRequest* _loadStoreBagRequest;
	RadioStoreBag* _storeBag;
	NSMutableArray* _currentTimeoutInfoLoadCompletionHandlers;
	NSDictionary* _syncOverrideTimeoutDictionary;

}
+(void)_clearAccountRelatedTimeoutInfo;
-(void)dealloc;
-(id)init;
-(void)_invalidateCurrentTimeoutInfoAllowingChangeNotification:(char)arg1 ;
-(void)_setSyncOverrideTimeoutDictionary:(id)arg1 ;
-(double)_playbackTimeoutForRadioConfigurationKey:(id)arg1 fallbackRadioConfigurationKey:(id)arg2 syncOverrideTimeoutKey:(id)arg3 fallbackSyncOverrideTimeoutKey:(id)arg4 defaultValue:(double)arg5 ;
-(void)_radioRequestDidFinishNotification:(id)arg1 ;
-(void)_storeBagDidLoadNotification:(id)arg1 ;
-(void)getCurrentTimeoutInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_generateCurrentTimeoutInfoReturningReady:(char*)arg1 ;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
@end

