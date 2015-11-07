/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, CALayer, NSLayoutConstraint;

@interface ICAudioBarView : UIView {

	UIButton* _doneButton;
	CALayer* _borderLayer;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) UIButton * doneButton;                              //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic) float height; 
@property (nonatomic,retain) CALayer * borderLayer;                              //@synthesize borderLayer=_borderLayer - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;              //@synthesize heightConstraint=_heightConstraint - In the implementation block
-(void)setBorderLayer:(CALayer *)arg1 ;
-(CALayer *)borderLayer;
-(char)_accessibilityHitTestShouldFallbackToNearestChild;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(float)height;
-(NSLayoutConstraint *)heightConstraint;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityElements;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
-(void)setHeight:(float)arg1 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setupConstraints;
@end
