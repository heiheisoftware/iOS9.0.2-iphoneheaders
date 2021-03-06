/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol UniversalSearchFirstTimeExperienceViewDelegate;
@class NSLayoutConstraint, NSMutableArray, NSArray, UIViewController, EvenlyDistributedImagesView, UITextView, UIButton, NSString;

@interface UniversalSearchFirstTimeExperienceView : UIView <UITextViewDelegate> {

	NSLayoutConstraint* _iconImageViewVerticalPlacementConstraint;
	NSLayoutConstraint* _introductionTextLabelBaselineConstraint;
	NSLayoutConstraint* _continueButtonBaselineConstraint;
	NSMutableArray* _sizeDependentConstraints;
	NSArray* _iconImageNames;
	UIViewController*<UniversalSearchFirstTimeExperienceViewDelegate> _delegate;
	EvenlyDistributedImagesView* _iconsView;
	UITextView* _introductionTextLabel;
	UIButton* _continueButton;

}

@property (assign,nonatomic,__weak) UIViewController*<UniversalSearchFirstTimeExperienceViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) EvenlyDistributedImagesView * iconsView;                                                      //@synthesize iconsView=_iconsView - In the implementation block
@property (nonatomic,readonly) UITextView * introductionTextLabel;                                                           //@synthesize introductionTextLabel=_introductionTextLabel - In the implementation block
@property (nonatomic,readonly) UIButton * continueButton;                                                                    //@synthesize continueButton=_continueButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_configureText;
-(void)configureSizeClassDependentUI;
-(void)_continueButtonPressed:(id)arg1 ;
-(EvenlyDistributedImagesView *)iconsView;
-(UITextView *)introductionTextLabel;
-(UIButton *)continueButton;
-(void)setDelegate:(UIViewController*<UniversalSearchFirstTimeExperienceViewDelegate>)arg1 ;
-(UIViewController*<UniversalSearchFirstTimeExperienceViewDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(char)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(void)_configureUI;
@end

