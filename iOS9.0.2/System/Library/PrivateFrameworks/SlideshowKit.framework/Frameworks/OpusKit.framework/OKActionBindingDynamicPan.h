/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBindingPan.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIAttachmentBehavior, NSString;

@interface OKActionBindingDynamicPan : OKActionBindingPan <UIGestureRecognizerDelegate> {

	float _length;
	float _damping;
	float _frequency;
	UIAttachmentBehavior* _draggingBehavior;

}

@property (assign,nonatomic) float length;                          //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) float damping;                         //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) float frequency;                       //@synthesize frequency=_frequency - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(id)init;
-(void)setDamping:(float)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(float)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)handlePan:(id)arg1 ;
-(void)setLength:(float)arg1 ;
-(float)damping;
-(float)frequency;
-(void)setFrequency:(float)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(void)unload;
-(id)settingObjectForKey:(id)arg1 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned)arg2 ;
-(char)respondsToAction:(id)arg1 isTouchCountAgnostic:(char)arg2 ;
-(void)performActionWithState:(unsigned)arg1 location:(CGPoint)arg2 touchCount:(unsigned)arg3 translation:(CGPoint)arg4 velocity:(CGPoint)arg5 direction:(unsigned)arg6 context:(id)arg7 ;
@end
