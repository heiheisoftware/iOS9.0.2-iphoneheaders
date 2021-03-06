/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@interface _MFTouchDownTapRecognizer : UIGestureRecognizer {

	unsigned _numberOfTouches;
	id _touchdownTarget;
	SEL _touchdownAction;

}

@property (assign,nonatomic) id touchdownTarget;               //@synthesize touchdownTarget=_touchdownTarget - In the implementation block
@property (assign,nonatomic) SEL touchdownAction;              //@synthesize touchdownAction=_touchdownAction - In the implementation block
-(id)touchdownTarget;
-(void)setTouchdownTarget:(id)arg1 ;
-(SEL)touchdownAction;
-(void)setTouchdownAction:(SEL)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(unsigned)numberOfTouches;
@end

