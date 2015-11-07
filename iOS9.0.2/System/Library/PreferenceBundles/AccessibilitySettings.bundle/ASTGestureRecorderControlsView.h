/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UIView.h>

@protocol ASTGestureRecorderControlsViewDelegate;
@class UIButton, ASTBiggerProgressView;

@interface ASTGestureRecorderControlsView : UIView {

	id<ASTGestureRecorderControlsViewDelegate> _delegate;
	UIButton* _leftButton;
	UIButton* _rightButton;
	ASTBiggerProgressView* _progressView;
	UIButton* _middleButton;

}

@property (assign,nonatomic) id<ASTGestureRecorderControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float progress; 
@property (assign,getter=isLeftButtonEnabled,nonatomic) char leftButtonEnabled; 
@property (assign,getter=isRightButtonEnabled,nonatomic) char rightButtonEnabled; 
@property (nonatomic,retain) UIButton * middleButton;                                          //@synthesize middleButton=_middleButton - In the implementation block
@property (nonatomic,retain) id leftButton;                                                    //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) id rightButton;                                                   //@synthesize rightButton=_rightButton - In the implementation block
+(float)defaultHeight;
-(void)setLeftButtonEnabled:(char)arg1 ;
-(char)isLeftButtonEnabled;
-(char)isRightButtonEnabled;
-(UIButton *)middleButton;
-(void)setRightButtonEnabled:(char)arg1 ;
-(void)setMiddleButton:(UIButton *)arg1 ;
-(void)setLeftButtonColor:(int)arg1 title:(id)arg2 enabled:(char)arg3 rightButtonColor:(int)arg4 title:(id)arg5 enabled:(char)arg6 animationDuration:(double)arg7 completion:(/*^block*/id)arg8 ;
-(id)makeButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<ASTGestureRecorderControlsViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<ASTGestureRecorderControlsViewDelegate>)delegate;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(void)_buttonTapped:(id)arg1 ;
-(id)leftButton;
-(id)rightButton;
-(void)setLeftButton:(id)arg1 ;
-(void)setRightButton:(id)arg1 ;
@end
