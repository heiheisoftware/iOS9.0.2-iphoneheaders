/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView, NSMutableArray, CALayer, NSTimer, CADisplayLink;

@interface UIDictationMeterView : UIButton {

	UIImageView* _background;
	UIImageView* _overlay;
	NSMutableArray* _micListeningImages;
	CALayer* _micImageLayer;
	CALayer* _animatingLayer;
	NSTimer* _fillTimer;
	int _phase;
	int _state;
	float _runningPowerLevels[5];
	unsigned _powerPointer;
	CADisplayLink* _displayLink;
	double _releaseStart;
	float _releaseLevel;
	int _cachedViewMode;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setState:(int)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)_reset;
-(id)_emptyMicImage;
-(void)_startListening;
-(void)_startAttack;
-(void)_clearDisplayLink;
-(void)_removeAnimationsAndClearLayers;
-(float)_updateMedianWithNewValue:(float)arg1 ;
-(float)_powerLevelForMicPower:(float)arg1 ;
-(double)_animationInterval;
-(id)imageForMicLevel:(float)arg1 ;
-(float)_adjustedDuration:(float)arg1 ;
-(id)_keyframeAnimationForCGImages:(id)arg1 duration:(double)arg2 ;
-(id)_attackKeyFrameAnimation;
-(id)_decayKeyFrameAnimation;
-(id)_sustainKeyFrameAnimation;
-(float)_currentMicPowerLevel;
-(void)_resetRunningPowerLevels;
-(void)_updateReleaseAnimation:(id)arg1 ;
-(void)_updateListeningAnimation:(id)arg1 ;
-(void)_startDecay;
-(void)_startSustain;
-(void)_startRelease;
@end

