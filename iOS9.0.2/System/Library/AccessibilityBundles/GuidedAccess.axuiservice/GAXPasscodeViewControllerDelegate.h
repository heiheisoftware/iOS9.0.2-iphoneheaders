/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GAXPasscodeViewControllerDelegate <NSObject>
@optional
-(void)passcodeViewController:(id)arg1 isPasscode:(id)arg2 correctWithCompletionHandler:(/*^block*/id)arg3;
-(void)passcodeViewController:(id)arg1 didFinishSettingUpPasscode:(id)arg2;
-(void)passcodeViewController:(id)arg1 passcodeViewIsVisible:(char)arg2;
-(void)passcodeViewController:(id)arg1 wasDismissedWithReason:(int)arg2;
-(char)shouldShowCancelButtonForPasscodeViewController:(id)arg1;

@end
