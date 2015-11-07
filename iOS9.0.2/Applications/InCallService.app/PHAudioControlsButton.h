/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <UIKit/UIButton.h>

@class PHRingView;

@interface PHAudioControlsButton : UIButton {

	unsigned _controlType;
	PHRingView* _ringView;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) unsigned controlType;              //@synthesize controlType=_controlType - In the implementation block
@property (assign) UIEdgeInsets contentInsets;                  //@synthesize contentInsets=_contentInsets - In the implementation block
@property (retain) PHRingView * ringView;                       //@synthesize ringView=_ringView - In the implementation block
-(float)_titleOffset;
-(unsigned)controlType;
-(void)setControlType:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)setContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(CGSize)_buttonSize;
-(PHRingView *)ringView;
-(void)setRingView:(PHRingView *)arg1 ;
@end
