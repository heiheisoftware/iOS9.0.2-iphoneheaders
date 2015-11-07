/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIInputViewAnimationStyle;

@interface UIKeyboardRotationState : NSObject {

	int _state;
	char _requiresNewState;
	int _postRotationState;
	UIInputViewAnimationStyle* _animationStyle;
	int _targetOrientation;

}

@property (assign,nonatomic) int state;                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) char requiresNewState;                                   //@synthesize requiresNewState=_requiresNewState - In the implementation block
@property (assign,nonatomic) int postRotationState;                                   //@synthesize postRotationState=_postRotationState - In the implementation block
@property (nonatomic,retain) UIInputViewAnimationStyle * animationStyle;              //@synthesize animationStyle=_animationStyle - In the implementation block
@property (assign,nonatomic) int targetOrientation;                                   //@synthesize targetOrientation=_targetOrientation - In the implementation block
+(id)stateWithState:(int)arg1 targetOrientation:(int)arg2 ;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(UIInputViewAnimationStyle *)animationStyle;
-(int)targetOrientation;
-(void)setPostRotationState:(int)arg1 animationStyle:(id)arg2 ;
-(void)setAnimationStyle:(UIInputViewAnimationStyle *)arg1 ;
-(void)setRequiresNewState:(char)arg1 ;
-(void)setPostRotationState:(int)arg1 ;
-(void)setTargetOrientation:(int)arg1 ;
-(char)requiresNewState;
-(int)postRotationState;
@end
