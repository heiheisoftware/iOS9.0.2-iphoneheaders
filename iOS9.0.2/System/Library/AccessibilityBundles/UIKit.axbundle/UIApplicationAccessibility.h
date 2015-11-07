/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIApplicationAccessibility_super.h>

@interface UIApplicationAccessibility : __UIApplicationAccessibility_super
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)_accessibilitySpeakThisViewController;
-(char)_accessibilityOverrideStartStopExtraExtras;
-(char)_accessibilityStartStopDictation;
-(void)_loadAllAccessibilityInformation;
-(void)_accessibilityAVCaptureStarted:(id)arg1 ;
-(void)_accessibilityAVCaptureStopped:(id)arg1 ;
-(void)_accessibilityKeyboardDidHide:(id)arg1 ;
-(void)_accessibilityKeyboardDidShow:(id)arg1 ;
-(id)_accessibilityResponderElement:(char)arg1 ;
-(id)_accessibilityMainWindow;
-(id)_accessibilityResponderElement;
-(id)_accessibilitySummaryElement;
-(id)_accessibilityValidateResponderForFocus:(id)arg1 ;
-(id)_accessibilityWindows;
-(char)_accessibilitySoftwareKeyboardActive;
-(id)_accessibilityUIWindowFindWithGlobalPoint:(CGPoint)arg1 ;
-(id)_findContainerAccessibleElement:(id)arg1 first:(char)arg2 focus:(char)arg3 allowScrolling:(char)arg4 ;
-(id)_accessibilityFirstElement;
-(id)_accessibilityLastElement;
-(id)_accessibilityElementFirst:(char)arg1 last:(char)arg2 forFocus:(char)arg3 allowScrolling:(char)arg4 ;
-(id)_accessibilityElementFirst:(char)arg1 last:(char)arg2 forFocus:(char)arg3 ;
-(char)_accessibilityElementBelongsToKeyboardWindow:(id)arg1 ;
-(id)_axSubviews;
-(id)_accessibilityFirstElementForFocus;
-(id)_accessibilityResponderElementForFocus;
-(id)_accessibilityNativeFocusElement;
-(id)_accessibilityNativeFocusPreferredElement;
-(id)_accessibilityBundleIdentifier;
-(id)_accessibilityTypingCandidates;
-(id)_firstStatusBarElement;
-(id)_lastStatusBarElement;
-(id)_accessibilityTitleBarElement;
-(char)_accessibilityDictationIsListening;
-(id)_accessibilityCurrentHardwareKeyboardLayout;
-(id)_accessibilityCurrentSoftwareKeyboardLayout;
-(id)_accessibilityCurrentSoftwareLanguage;
-(id)_accessibilitySemanticContext;
-(id)_accessibilityIsolatedWindows;
-(id)accessibilityAttributeValue:(int)arg1 ;
-(char)_accessibilityActionIsPhysicalButton:(int)arg1 nativeUIKitTypeRef:(int*)arg2 ;
-(void)_accessibilityShowKeyboardHints;
-(char)accessibilityPerformAction:(int)arg1 withValue:(id)arg2 ;
-(id)_accessibilityApplicationSemanticContextWithViewController:(id)arg1 ;
-(id)_accessibilitySpeakThisElementsAndStrings;
-(CGRect)_accessibilityConvertSystemBoundedScreenRectToContextSpace:(CGRect)arg1 ;
-(char)accessibilityStartStopToggle;
-(void)_accessibilityInitialize;
-(void)accessibilityDisable;
-(id)_accessibilityElementsForSearchParameter:(id)arg1 ;
-(id)_accessibilityUserTestingChildren;
-(void)_accessibilitySetAllowsNotificationsDuringSuspension:(char)arg1 ;
-(char)_accessibilityAllowsNotificationsDuringSuspension;
-(id)_accessibilityTableViewCellWithRowIndex:(int)arg1 andColumn:(int)arg2 ;
-(id)_axAllSubviews;
-(char)_accessibilitySoftwareKeyboardCoversElement:(id)arg1 ;
-(CGRect)_accessibilitySoftwareKeyboardAccessibilityFrame;
-(char)_accessibilityHardwareKeyboardActive;
-(void)_accessibilityFixPhysicalEvent:(id)arg1 ;
-(char)_accessibilityDispatchKeyboardAction:(id)arg1 ;
-(int)_accessibilityApplicationForPosition:(CGPoint)arg1 ;
-(id)_accessibilityElementCommunityIdentifier;
-(id)_accessibilityElementsWithSemanticContext;
-(char)_accessibilityBeginMonitoringIdleRunLoop;
-(id)_accessibilityExplorerElements;
-(id)_accessibilityNativeFocusableElements;
-(int)_accessibilityOrientationForCompareGeometry;
-(void)dealloc;
-(char)openURL:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)_finishButtonEvent:(id)arg1 ;
-(void)handleKeyHIDEvent:(IOHIDEventRef)arg1 ;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(char)accessibilityPerformEscape;
-(unsigned)_accessibilityMachPort;
@end
