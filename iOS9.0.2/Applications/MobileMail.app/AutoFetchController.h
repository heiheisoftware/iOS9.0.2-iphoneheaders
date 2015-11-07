/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>
#import <MobileMail/AutoFetchController.h>

@protocol AutoFetchController
@required
-(oneway void)fetchNow:(int)arg1;
-(oneway void)startAutoFetch;
-(oneway void)networkConfigurationChanged;
-(oneway void)stopAutoFetch;
-(oneway void)fetchNow:(int)arg1 withAccounts:(id)arg2;
-(oneway void)fetchNow:(int)arg1 withSources:(id)arg2;
-(oneway void)setDataSource:(id)arg1;
-(char)isIdle;

@end

#import <libobjc.A.dylib/MFContentProtectionObserver.h>
#import <MobileMail/PCConnectionManagerDelegate.h>

@protocol AutoFetchControllerDataSource;
@class PCConnectionManager, NSMutableDictionary, NSMutableSet, NSArray, NSTimer, NSString;

@interface AutoFetchController : NSObject <MFDiagnosticsGenerator, AutoFetchController, MFContentProtectionObserver, PCConnectionManagerDelegate> {

	id<AutoFetchControllerDataSource> _dataSource;
	double _lastNonvisibleAutoFetchDate;
	PCConnectionManager* _manager;
	NSMutableDictionary* _accountResponsiveness;
	NSMutableSet* _uidsToFetchAfterFirstUnlock;
	unsigned _outstandingAccountChangeFetchRequests;
	int _notifyLockStateToken;
	unsigned long long _holdState;
	unsigned _pmNotifier;
	IONotificationPortRef _pmPort;
	CFRunLoopSourceRef _pmSource;
	int _autoFetchState;
	int _fetchType;
	int _pendingFetchType;
	char _lastAutoFetchHadErrors;
	char _lastAutoFetchHadSources;
	NSArray* _fetchAccounts;
	NSArray* _pendingFetchAccounts;
	NSArray* _visibleSources;
	NSArray* _visibleSourceJobInvocations;
	unsigned _outstandingAutoFetchRequests;
	NSTimer* _networkWakeupTimeout;
	unsigned _isReachable : 1;
	unsigned _monitoringReachability : 1;
	unsigned _tryFetchWhenReachable : 1;
	unsigned _PCTimerIsRunning : 1;
	unsigned _waitingForFirstUnlock : 1;

}

@property (assign,nonatomic) int autoFetchState; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(oneway void)fetchNow:(int)arg1 ;
-(oneway void)startAutoFetch;
-(oneway void)_batterySaverModeDidChange;
-(oneway void)networkConfigurationChanged;
-(oneway void)stopAutoFetch;
-(oneway void)fetchNow:(int)arg1 withAccounts:(id)arg2 ;
-(oneway void)fetchNow:(int)arg1 withSources:(id)arg2 ;
-(char)_tryFetch:(int)arg1 ;
-(void)restartPCTimer;
-(void)handlePollEvent;
-(void)_accountContentsDidChange:(id)arg1 ;
-(void)_registerLockUnlockStateNotification;
-(void)_cleanUpReachabilityTimer;
-(char)_tryFetch:(int)arg1 withAccounts:(id)arg2 ;
-(int)autoFetchState;
-(void)_startAutoFetch:(int)arg1 withAccounts:(id)arg2 ;
-(void)lockStateFetch;
-(void)_fetchChangedUids:(id)arg1 forAccount:(id)arg2 options:(int)arg3 ;
-(void)_accountChangedFinished;
-(int)_autoFetchOverrideInterval;
-(id)_invocationWithTarget:(id)arg1 priority:(int)arg2 ;
-(void)_pushFetchCompleted:(id)arg1 ;
-(void)_checkForReachability;
-(void)_checkForWiFi;
-(void)_finishAutoFetch;
-(oneway void)_reportReachabilityTimeout:(id)arg1 ;
-(void)setAutoFetchState:(int)arg1 ;
-(char)_shouldAutoFetchAccount:(id)arg1 whenVisible:(char)arg2 ;
-(void)_createJobList;
-(void)_createJobListFinished:(id)arg1 ;
-(void)_gatherAllFetchJobs;
-(void)_reportSynchronousFetchCompletion:(id)arg1 ;
-(void)_fetchChangedUids:(id)arg1 forAccount:(id)arg2 ;
-(void)_hasWokenUp;
-(oneway void)setDataSource:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_lockStateChanged;
-(void)connectionManager:(id)arg1 handleEvent:(int)arg2 ;
-(void)startup;
-(void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2 ;
-(id)copyDiagnosticInformation;
-(char)isIdle;
-(void)_reportReachabilityChange:(id)arg1 ;
@end
