/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/HNDView.h>

@class HNDCursorLayer;

@interface HNDFingerView : HNDView {

	char _actualVisibility;
	HNDCursorLayer* _cursorLayer;

}

@property (assign,nonatomic) char selected; 
@property (nonatomic,readonly) float radius; 
@property (nonatomic,retain) HNDCursorLayer * cursorLayer;              //@synthesize cursorLayer=_cursorLayer - In the implementation block
+(CGSize)fingerSize;
+(float)fingerInnerRadius;
+(id)strokeOutlineColor;
+(id)deselectedFillColor;
+(float)strokeOutlineWidth;
+(id)deselectedStrokeColor;
+(float)fingerInnerCircleInnerRadius;
+(id)selectedStrokeColor;
+(float)fingerRadius;
+(id)selectedFillColor;
+(float)fingerOuterRadius;
+(float)strokeWidth;
-(void)implode:(char)arg1 ;
-(void)explode:(char)arg1 ;
-(void)cancelImplodeAnimation;
-(void)implodeDisplayLinkFired:(id)arg1 ;
-(void)setIsPinchFinger:(int)arg1 ;
-(void)animateToTapWithDuration:(double)arg1 ;
-(HNDCursorLayer *)cursorLayer;
-(void)setCursorLayer:(HNDCursorLayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(char)isUserInteractionEnabled;
-(void)setSelected:(char)arg1 ;
-(char)isVisible;
-(char)selected;
-(void)setVisible:(char)arg1 animated:(char)arg2 ;
@end

