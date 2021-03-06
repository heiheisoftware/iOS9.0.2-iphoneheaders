/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class FBSSystemService, BKSApplicationStateMonitor, NSMutableDictionary;

@interface BBApplicationLauncher : NSObject {

	FBSSystemService* _systemService;
	BKSApplicationStateMonitor* _appStateMonitor;
	NSMutableDictionary* _bundleIdentifierToAssertions;

}
-(void)dealloc;
-(void)_setupApplicationStateMonitor;
-(void)_applicationFinishedBackgroundNotificationAction:(id)arg1 ;
-(char)_launchInForegroundForBulletin:(id)arg1 response:(id)arg2 ;
-(id)_bundleIDForBulletin:(id)arg1 response:(id)arg2 ;
-(id)_launchOptionsForBulletin:(id)arg1 response:(id)arg2 ;
-(id)_urlForBulletin:(id)arg1 response:(id)arg2 ;
-(id)_newProcessAssertionForBundleID:(id)arg1 ;
-(void)_setProcessAssertion:(id)arg1 forBundleID:(id)arg2 ;
-(void)_removeProcessAssertionForBundleID:(id)arg1 invalidate:(char)arg2 ;
-(void)_queue_removeProcessAssertionForBundleID:(id)arg1 invalidate:(char)arg2 ;
-(void)_queue_setProcessAssertion:(id)arg1 forBundleID:(id)arg2 ;
-(void)_queue_updateApplicationStateMonitor;
-(id)initWithSystemService:(id)arg1 ;
-(void)launchApplicationForBulletin:(id)arg1 response:(id)arg2 ;
-(char)canLaunchApplicationForBulletin:(id)arg1 response:(id)arg2 ;
@end

