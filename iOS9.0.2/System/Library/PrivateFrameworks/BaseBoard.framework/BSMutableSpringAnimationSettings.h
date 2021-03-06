/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSSpringAnimationSettings.h>

@class CAMediaTimingFunction;

@interface BSMutableSpringAnimationSettings : BSSpringAnimationSettings

@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) double frameInterval; 
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction; 
@property (assign,nonatomic) float mass; 
@property (assign,nonatomic) float stiffness; 
@property (assign,nonatomic) float damping; 
@property (assign,nonatomic) float epsilon; 
@property (assign,nonatomic) float initialVelocity; 
-(void)setInitialVelocity:(float)arg1 ;
-(void)setStiffness:(float)arg1 ;
-(void)setDamping:(float)arg1 ;
-(void)setMass:(float)arg1 ;
-(void)setDelay:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFrameInterval:(double)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setEpsilon:(float)arg1 ;
@end

