/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSMS.app/MobileSMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSMS/MobileSMS-Structs.h>
#import <UIKit/UIApplication.h>
#import <libobjc.A.dylib/IMSystemMonitorListener.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, CKMessagesController, CKRegistrationViewController, NSString, NSArray, BKSProcessAssertion, TLAlert, NSURL;

@interface SMSApplication : UIApplication <IMSystemMonitorListener, UIApplicationDelegate> {

	char _waitToSendFinishLaunching;
	char _isLocked;
	char _isSuspended;
	UIWindow* _window;
	CKMessagesController* _messagesController;
	CKRegistrationViewController* _madridRegistrationController;
	NSString* _defaultPng;
	NSArray* _suspendUnreadMessages;
	BKSProcessAssertion* _backgroundAssertion;
	TLAlert* _alert;
	char _isHandlingLaunchTask;
	NSURL* _deferredLoadURL;
	/*^block*/id _alertViewHandler;

}

@property (nonatomic,retain) NSURL * deferredLoadURL;                                //@synthesize deferredLoadURL=_deferredLoadURL - In the implementation block
@property (nonatomic,retain) CKMessagesController * messagesController;              //@synthesize messagesController=_messagesController - In the implementation block
@property (nonatomic,copy) id alertViewHandler;                                      //@synthesize alertViewHandler=_alertViewHandler - In the implementation block
@property (assign,nonatomic) char isHandlingLaunchTask;                              //@synthesize isHandlingLaunchTask=_isHandlingLaunchTask - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)startShowMessagesTest:(id)arg1 ;
-(void)startShowPeoplePickerTest:(id)arg1 ;
-(void)startCancelPeoplePickerTest:(id)arg1 ;
-(void)startSelectContactPeoplePickerTest:(id)arg1 ;
-(void)startShowNewComposeTest:(id)arg1 ;
-(void)startResolveContactTest:(id)arg1 ;
-(void)startScrollConversationsTest:(id)arg1 ;
-(void)startScrollTranscriptTest:(id)arg1 ;
-(void)startRotationTest:(id)arg1 ;
-(void)startPhotoTest:(id)arg1 ;
-(void)dismissPhotoPickerWithCompletion:(/*^block*/id)arg1 ;
-(void)showTranscriptListNotAnimated;
-(void)cleanupCurrentTest;
-(void)showNextMessage;
-(void)showTranscriptList;
-(void)scrollTranscript;
-(char)validateTranscriptVisibility:(id)arg1 expected:(char)arg2 withResultsDictionary:(id)arg3 ;
-(char)validateTranscriptVendingIAV:(id)arg1 expected:(char)arg2 withResultsDictionary:(id)arg3 ;
-(char)validateEntryViewIsFirstResponder:(id)arg1 expected:(char)arg2 withResultsDictionary:(id)arg3 ;
-(char)validateNonzeroTranscriptInsets:(id)arg1 expected:(char)arg2 withResultsDictionary:(id)arg3 ;
-(char)validateBottomInsetGreaterThanIAVHeight:(id)arg1 expected:(char)arg2 withResultsDictionary:(id)arg3 ;
-(char)validateIAVisExpanded:(id)arg1 expected:(char)arg2 withResultsDictionary:(id)arg3 ;
-(char)validateTranscriptIsScrolledToBottom:(id)arg1 expected:(char)arg2 withResultsDictionary:(id)arg3 ;
-(void)_recordResult:(char)arg1 forKey:(id)arg2 comment:(id)arg3 resultsDictionary:(id)arg4 ;
-(char)validateTranscriptNewRecipientState:(id)arg1 expected:(char)arg2 withResultsDictionary:(id)arg3 ;
-(char)validateRecipientSelectionControllerIsFirstResponder:(id)arg1 expected:(char)arg2 withResultsDictionary:(id)arg3 ;
-(void)contactPickerDidHide;
-(void)installNotificationObserverForNotificationName:(id)arg1 notificationName:(id)arg2 forOneNotification:(char)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)_dismissPeoplePickerWithCompletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)newComposeDismissContactPicker:(id)arg1 ;
-(void)_showPeoplePickerTest:(id)arg1 ;
-(void)tearDownShowPeoplePickerTest:(id)arg1 ;
-(void)dissmissComposeSheet;
-(void)_startPeoplePickerTest;
-(void)_startSelectContactPeoplePickerTest;
-(void)_selectContact:(id)arg1 ;
-(void)tearDownSelectContactPeoplePickerTest;
-(void)_startCancelPeoplePickerTest;
-(void)_cancelPeoplePicker;
-(void)tearDownCancelPeoplePickerTest;
-(void)_startResolveContactTest:(id)arg1 ;
-(void)tearDownResolveContactTest:(/*^block*/id)arg1 ;
-(void)_resolveContactTest:(id)arg1 ;
-(void)showPhotoPickerInTranscriptWithCompletion:(/*^block*/id)arg1 ;
-(void)selectAPhotoInPickerWithCompletion:(/*^block*/id)arg1 ;
-(void)clearEntryView;
-(void)sendSelectedPhotoWithCompletion:(/*^block*/id)arg1 ;
-(void)didShowNewCompose;
-(void)UITestDeleteTopChat;
-(void)UITestPushTranscript;
-(void)UITestPushTranscriptWithDraft;
-(void)UITestPushTranscriptKeyboardDownExpandTextEntry;
-(void)UITestPushTranscriptAndDetails;
-(void)UITestPushTranscriptAndDetailsKeyboardUp;
-(void)UITestRotateTranscript;
-(void)UITestRotateTranscriptKeyboardUp;
-(void)UITestRotateTranscriptTwice;
-(void)UITestRotateTranscriptTwiceKeyboardUp;
-(void)UITestPresentNewCompose;
-(void)UITestPresentNewComposeWithDraft;
-(void)UITestSendNewComposeDraft;
-(void)UITestNewComposeDismissContactPicker;
-(void)tearDownShowPeoplePickerTest;
-(char)_shouldShowMadridRegistrationView;
-(char)isHandlingLaunchTask;
-(char)_restoreState:(out /*^block*/id*)arg1 ;
-(void)setIsHandlingLaunchTask:(char)arg1 ;
-(void)_messageReceived:(id)arg1 ;
-(void)_messageSent:(id)arg1 ;
-(void)_messageSendFailed:(id)arg1 ;
-(void)_handleAccountsChanged:(id)arg1 ;
-(void)_destroyMadridRegistrationView;
-(void)_playMessageReceivedForMessage:(id)arg1 inChat:(id)arg2 ;
-(void)_playSendSoundForMessage:(id)arg1 ;
-(void)setAlertViewHandler:(id)arg1 ;
-(void)_loadURLMessageGUID:(id)arg1 ;
-(void)_activateSiriForConversation:(id)arg1 ;
-(void)_activateSiriForRecipient:(id)arg1 ;
-(void)setWaitToSendFinishLaunching:(char)arg1 ;
-(id)defaultPng;
-(NSURL *)deferredLoadURL;
-(void)setDeferredLoadURL:(NSURL *)arg1 ;
-(void)reportAppLaunchFinished;
-(void)setDefaultPng:(id)arg1 ;
-(void)_storeState;
-(void)_scheduleDeferredSetup;
-(void)_updateMadridRegistrationViewAnimated:(char)arg1 ;
-(char)_restoreState;
-(void)_prepareForResume:(char)arg1 ;
-(void)_showMadridRegistrationViewIfNecessary;
-(void)__updateAppSnapshot;
-(void)_updateAppSnapshot;
-(void)__showMadridRegistrationViewIfNecessary;
-(void)_createMadridRegistrationViewIfNecessary;
-(id)alertViewHandler;
-(char)_isShowingNewComposition;
-(void)_applicationDidRemoveDeactivationReason:(id)arg1 ;
-(void)_prepareForSuspend;
-(void)didChangeOrientation:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationSignificantTimeChange:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)_application:(id)arg1 handleSiriTask:(id)arg2 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 ;
-(void)applicationDidResumeFromUnderLock;
-(char)applicationSuspendWithSettings:(id)arg1 ;
-(char)openURL:(id)arg1 ;
-(void)applicationOpenURL:(id)arg1 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(char)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(char)isHandlingURL;
-(char)isLocked;
-(void)failedTest:(id)arg1 ;
-(void)failedTest:(id)arg1 withFailure:(id)arg2 withResults:(id)arg3 ;
-(char)runTest:(id)arg1 options:(id)arg2 ;
-(void)failedTest:(id)arg1 withFailure:(id)arg2 ;
-(void)showKeyboard;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_resetIdleTimer;
-(void)didShowAMessage;
-(void)_chatItemsDidChange:(id)arg1 ;
-(CKMessagesController *)messagesController;
-(void)didShowTranscriptList;
-(void)didDeleteChat;
-(void)setMessagesController:(CKMessagesController *)arg1 ;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
-(void)systemApplicationDidSuspendForEventsOnly;
-(void)systemApplicationDidResumeForEventsOnly;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(void)deleteChat:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)_clearFailureBadge;
@end
