/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebApp/WebApp-Structs.h>
#import <UIKit/UIViewController.h>

@class WebAppController;

@interface WebAppViewController : UIViewController {

	char _setupRootViewColor;
	int _statusBarStyle;
	WebAppController* _webAppController;

}

@property (assign,nonatomic) int statusBarStyle;                                      //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (assign,nonatomic,__weak) WebAppController * webAppController;              //@synthesize webAppController=_webAppController - In the implementation block
-(int)statusBarStyle;
-(int)preferredStatusBarStyle;
-(void)setStatusBarStyle:(int)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(WebAppController *)webAppController;
-(void)setWebAppController:(WebAppController *)arg1 ;
@end
