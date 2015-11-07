/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class TPSAppController, UIView, NSString, UIActivityIndicatorView, APDKVOManager, UILabel;

@interface TPSViewController : UIViewController {

	TPSAppController* _appController;
	UIView* _contentStructView;
	NSString* _defaultErrorTitleText;
	NSString* _messageLabelTitle;
	NSString* _messageLabelDetailText;
	UIActivityIndicatorView* _activityIndicatorView;
	char _viewDidAppeared;
	char _loading;
	APDKVOManager* _kvoManager;
	UILabel* _messageLabel;

}

@property (assign,nonatomic) char viewDidAppeared;                          //@synthesize viewDidAppeared=_viewDidAppeared - In the implementation block
@property (assign,nonatomic) char loading;                                  //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) TPSAppController * appController;              //@synthesize appController=_appController - In the implementation block
@property (nonatomic,retain) APDKVOManager * kvoManager;                    //@synthesize kvoManager=_kvoManager - In the implementation block
@property (nonatomic,retain) UIView * contentStructView;                    //@synthesize contentStructView=_contentStructView - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                        //@synthesize messageLabel=_messageLabel - In the implementation block
-(TPSAppController *)appController;
-(void)setAppController:(TPSAppController *)arg1 ;
-(id)initWithAppController:(id)arg1 ;
-(APDKVOManager *)kvoManager;
-(void)connectionChangedInitialCall;
-(void)commonUnloadView;
-(void)connectionChanged;
-(void)showInlineLabelWithTitle:(id)arg1 message:(id)arg2 ;
-(UIView *)contentStructView;
-(void)removeInlineMessageLabel;
-(void)showInlineNoConnectionMessage;
-(void)showInlineGenericErrorMessage;
-(void)showInlineMessageForError:(id)arg1 ;
-(void)setContentStructView:(UIView *)arg1 ;
-(char)viewDidAppeared;
-(void)setViewDidAppeared:(char)arg1 ;
-(void)setKvoManager:(APDKVOManager *)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UILabel *)messageLabel;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)commonInit;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setLoading:(char)arg1 ;
-(char)loading;
@end
