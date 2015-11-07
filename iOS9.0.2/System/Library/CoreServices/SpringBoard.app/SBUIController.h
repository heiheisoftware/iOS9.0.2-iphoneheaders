/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBUIActiveOrientationObserver.h>
#import <SpringBoard/SBWallpaperObserver.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <SpringBoard/SBTouchTemplateGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>
#import <UIKit/UIWindowDelegate.h>

@class SBHomeScreenWindow, UIView, UIStatusBar, SBDismissOnlyAlertItem, SBAppSwitcherSettings, SBScrunchSystemGestureRecognizer, SBScrunchAppsSystemGestureWorkspaceTransaction, SBSwitcherSlideUpSystemGestureRecognizer, SBSwitcherForcePressSystemGestureRecognizer, SBSwitchAppSystemGestureWorkspaceTransaction, SBSwitchAppSystemGestureRecognizer, SBSwitchAppList, NSCountedSet, NSString;

@interface SBUIController : NSObject <SBUIActiveOrientationObserver, SBWallpaperObserver, _UISettingsKeyObserver, SBTouchTemplateGestureRecognizerDelegate, BSTransactionObserver, UIWindowDelegate> {

	SBHomeScreenWindow* _window;
	UIView* _iconsView;
	UIView* _contentView;
	UIStatusBar* _fakeSpringBoardStatusBar;
	unsigned _ignoringEvents : 1;
	unsigned _lastVolumeDownToControl : 1;
	unsigned _isBatteryCharging : 1;
	unsigned _isOnAC : 1;
	unsigned _isConnectedToExternalChargingAccessory : 1;
	unsigned _isConnectedToUnsupportedChargingAccessory : 1;
	unsigned _isConnectedToChargeIncapablePowerSource : 1;
	id _volumeHandler;
	float _batteryCapacity;
	char _supportsDetailedBatteryCapacity;
	int _batteryLoggingStartCapacity;
	SBDismissOnlyAlertItem* _unsupportedChargerAlert;
	SBAppSwitcherSettings* _switcherSettings;
	SBScrunchSystemGestureRecognizer* _scrunchSystemGestureRecognizer;
	SBScrunchAppsSystemGestureWorkspaceTransaction* _scrunchAppsTransaction;
	SBSwitcherSlideUpSystemGestureRecognizer* _switcherSlideUpGestureRecognizer;
	SBSwitcherForcePressSystemGestureRecognizer* _switcherForcePressRecognizer;
	SBSwitchAppSystemGestureWorkspaceTransaction* _switchAppTransaction;
	SBSwitchAppSystemGestureRecognizer* _switchAppSystemGestureRecognizer;
	SBSwitchAppList* _switchAppList;
	int _ignoreSwitchAppListClearRequests;
	char _handlingHomePress;
	NSCountedSet* _contentRequiringReasons;
	char _wasTornDownWhenBeganRequiring;

}

@property (assign,nonatomic) char wasTornDownWhenBeganRequiring;              //@synthesize wasTornDownWhenBeganRequiring=_wasTornDownWhenBeganRequiring - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)zoomViewForApplication:(id)arg1 screen:(id)arg2 interfaceOrientation:(int)arg3 snapshot:(id)arg4 snapshotSize:(CGSize)arg5 statusBarDescriptor:(id)arg6 decodeImage:(char)arg7 ;
+(id)zoomViewForContextHostView:(id)arg1 application:(id)arg2 sceneID:(id)arg3 statusBarDescriptor:(id)arg4 ;
+(id)zoomViewForApplication:(id)arg1 sceneID:(id)arg2 interfaceOrientation:(int)arg3 statusBarDescriptor:(id)arg4 imageName:(id)arg5 decodeImage:(char)arg6 ;
+(id)zoomViewForApplication:(id)arg1 sceneID:(id)arg2 interfaceOrientation:(int)arg3 statusBarDescriptor:(id)arg4 decodeImage:(char)arg5 ;
+(id)zoomViewWithIOSurfaceSnapshotOfApp:(id)arg1 sceneID:(id)arg2 screen:(id)arg3 statusBarDescriptor:(id)arg4 ;
+(CGRect)statusBarFrameForSnapshotFrame:(CGRect)arg1 orientation:(int)arg2 statusBarStyleRequest:(id)arg3 hidden:(char)arg4 ;
+(void)addStatusBarToView:(id)arg1 withSize:(CGSize)arg2 destinationFrame:(CGRect)arg3 interfaceOrientation:(int)arg4 scaleFactor:(float)arg5 styleRequest:(id)arg6 statusBarDescriptor:(id)arg7 hidden:(char)arg8 ;
+(CGAffineTransform)_transformForStatusBarWithOrientation:(int)arg1 scaleFactor:(float)arg2 ;
+(CGAffineTransform)_transformAndFrame:(CGRect*)arg1 forLaunchImageContextHostViewWithOrientation:(int)arg2 statusBarHeight:(float)arg3 inJailRect:(CGRect)arg4 ;
+(CGRect)statusBarFrameForSnapshotFrame:(CGRect)arg1 remainderFrame:(CGRect*)arg2 orientation:(int)arg3 statusBarStyleRequest:(id)arg4 hidden:(char)arg5 ;
+(CGRect)_referenceBoundsForApp:(id)arg1 ;
+(id)_effectiveStatusBarSettingsForSnapshot:(id)arg1 application:(id)arg2 ;
+(id)_splashboardLaunchImageForApplication:(id)arg1 sceneID:(id)arg2 display:(id)arg3 interfaceOrientation:(int)arg4 referenceSize:(CGSize)arg5 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)animateAppleDown:(char)arg1 ;
-(char)isAppSwitcherShowing;
-(char)handleMenuDoubleTap;
-(void)cancelVolumeEvent;
-(void)handleVolumeEvent:(IOHIDEventRef)arg1 ;
-(char)isOnAC;
-(void)setAllowIconRotation:(char)arg1 forReason:(id)arg2 ;
-(id)_legibilityPrototypeSettings;
-(void)noteStatusBarHeightChanged:(id)arg1 ;
-(void)_awayControllerActivated:(id)arg1 ;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(void)externalChargingAccessoriesChanged;
-(void)_addRemoveSwitcherGesture;
-(void)_handleScrunchGesture:(id)arg1 ;
-(void)_handleSwitcherSlideUpGesture:(id)arg1 ;
-(void)_handleSwitchAppGesture:(id)arg1 ;
-(void)_deviceLockStateChanged:(id)arg1 ;
-(void)_updateLegibility;
-(void)_handleSwitcherForcePressGesture:(id)arg1 ;
-(void)_insertIconsViewIntoContentViewAtIndex:(unsigned)arg1 ;
-(void)finishLaunching;
-(void)systemControllerRouteChanged:(id)arg1 ;
-(void)configureFakeSpringBoardStatusBarWithStyleRequest:(id)arg1 ;
-(void)removeFakeSpringBoardStatusBar;
-(char)isFakeStatusBarStyleEffectivelyDoubleHeight:(int)arg1 ;
-(void)setFakeSpringBoardStatusBarVisible:(char)arg1 ;
-(id)_fakeSpringBoardStatusBar;
-(void)stopRestoringIconList;
-(void)restoreContentUpdatingStatusBar:(char)arg1 ;
-(void)setWasTornDownWhenBeganRequiring:(char)arg1 ;
-(void)_closeOpenFolderIfNecessary;
-(void)updateStatusBarLegibility;
-(void)_switchToHomeScreenWallpaperAnimated:(char)arg1 ;
-(void)restoreContentAndUnscatterIconsAnimated:(char)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)restoreContentAndUnscatterIconsAnimated:(char)arg1 afterDelay:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)restoreContent;
-(char)_isIconListAndBarTornDown;
-(char)wasTornDownWhenBeganRequiring;
-(void)tearDownIconListAndBar;
-(int)_dismissSheetsAndDetermineAlertStateForMenuClickOrSystemGesture;
-(void)_resumeEventsIfNecessary;
-(int)batteryCapacityAsPercentage;
-(void)setIsConnectedToUnsupportedChargingAccessory:(char)arg1 ;
-(void)ACPowerChanged;
-(void)_possiblyWakeForPowerStatusChangeWithUnlockSource:(int)arg1 ;
-(void)forceIconInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)disableAnimationForNextIconRotation;
-(void)_scrunchGestureBegan;
-(char)_ignoringEvents;
-(id)_switchAppList;
-(void)_switchAppGestureBegan:(float)arg1 ;
-(char)_switchAppSystemGestureShouldBegin:(id)arg1 ;
-(char)_isIgnoringSwitchAppListClearRequests;
-(void)_endIgnoringSwitchAppListClearRequests;
-(void)_beginIgnoringSwitchAppListClearRequests;
-(void)_programmaticSwitchAppToApp:(id)arg1 reverseAnimation:(char)arg2 ;
-(char)_scrunchSystemGestureShouldBegin:(id)arg1 ;
-(char)_appSwitcherSystemGestureShouldBegin:(id)arg1 ;
-(char)_appSwitcherForcePressSystemGestureShouldBegin:(id)arg1 ;
-(id)_currentFolderLegibilitySettings;
-(void)wallpaperDidChangeForVariant:(int)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(int)arg2 ;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(char)promptUnlockForAppActivation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)configureFakeSpringBoardStatusBarWithDefaultStyleRequestForStyle:(int)arg1 ;
-(id)fakeStatusBarStyleRequestForStyle:(int)arg1 ;
-(void)animateFakeStatusBarWithParameters:(id)arg1 transition:(id)arg2 ;
-(void)launchIcon:(id)arg1 fromLocation:(int)arg2 context:(id)arg3 ;
-(void)activateApplication:(id)arg1 fromIcon:(id)arg2 location:(int)arg3 ;
-(void)restoreContentAndUnscatterIconsAnimated:(char)arg1 ;
-(void)beginRequiringContentForReason:(id)arg1 ;
-(void)endRequiringContentForReason:(id)arg1 ;
-(char)isHandlingHomeButtonPress;
-(id)lendIconsViewForAppSwitcher;
-(void)returnIconsViewFromAppSwitcher:(id)arg1 ;
-(char)_allowSwitcherGesture;
-(void)_ignoreEvents;
-(void)requestApplicationEventsEnabledIfNecessary;
-(float)batteryCapacity;
-(char)isBatteryCharging;
-(char)isConnectedToExternalChargingSource;
-(char)isConnectedToChargeIncapablePowerSource;
-(char)isConnectedToUnsupportedChargingAccessory;
-(char)supportsDetailedBatteryCapacity;
-(char)isHeadsetDocked;
-(char)isHeadsetBatteryCharging;
-(unsigned char)headsetBatteryCapacity;
-(void)clearSwitchAppList;
-(void)programmaticSwitchAppGestureMoveToLeft;
-(void)programmaticSwitchAppGestureMoveToRight;
-(char)_canPresentCenterController:(id)arg1 ;
-(void)activateApplication:(id)arg1 ;
-(char)_handleButtonEventToSuspendDisplays:(char)arg1 displayWasSuspendedOut:(char*)arg2 ;
-(char)clickedMenuButton;
-(void)updateBatteryState:(id)arg1 ;
-(void)_accessibilityWillBeginAppSwitcherRevealAnimation;
-(void)dealloc;
-(id)window;
-(id)init;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)contentView;
-(void)getRotationContentSettings:(SCD_Struct_SB5*)arg1 forWindow:(id)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_setHidden:(char)arg1 ;
-(id)_legibilitySettings;
-(void)activeInterfaceOrientationWillChangeToOrientation:(int)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(int)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(int)arg3 ;
-(void)transactionDidComplete:(id)arg1 ;
-(void)_hideKeyboard;
@end
