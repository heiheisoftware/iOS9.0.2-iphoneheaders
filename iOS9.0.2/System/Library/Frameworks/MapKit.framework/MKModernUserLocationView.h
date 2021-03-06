/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKUserLocationView.h>

@class CALayer, UIImage;

@interface MKModernUserLocationView : MKUserLocationView {

	CALayer* _innerCircleLayer;
	char _isShowingStaleColor;
	char _shouldInnerPulse;
	UIImage* _innerImageMask;
	char _rotateInnerImageToMatchCourse;
	CALayer* _baseLayer;
	CALayer* _baseDimmingLayer;

}

@property (assign,nonatomic) char shouldInnerPulse;                           //@synthesize shouldInnerPulse=_shouldInnerPulse - In the implementation block
@property (nonatomic,retain) UIImage * innerImageMask;                        //@synthesize innerImageMask=_innerImageMask - In the implementation block
@property (assign,nonatomic) char rotateInnerImageToMatchCourse;              //@synthesize rotateInnerImageToMatchCourse=_rotateInnerImageToMatchCourse - In the implementation block
+(float)innerDiameter;
+(float)baseDiameter;
-(void)_setMapDisplayStyle:(SCD_Struct_MK14)arg1 ;
-(void)_setMapType:(unsigned)arg1 ;
-(void)_setPresentationCourse:(double)arg1 ;
-(void)_setMapRotationRadians:(float)arg1 ;
-(UIImage *)innerImageMask;
-(void)setShouldInnerPulse:(char)arg1 ;
-(void)_updatePulseColor;
-(char)shouldInnerPulse;
-(CGColorRef)_accuracyFillColor;
-(void)setRotateInnerImageToMatchCourse:(char)arg1 ;
-(void)_resetLayerToMatchAccuracyRing;
-(void)_updateInnerMaskLayer;
-(id)_pulseLayer;
-(id)_innerPulseAnimation;
-(id)_pulseAnimation;
-(void)_updateInnerCourseRotation;
-(void)setEffectsEnabled:(char)arg1 ;
-(void)_updateAccuracyColors;
-(void)_updateLayers;
-(id)_animationToSynchronizePulse:(id*)arg1 ;
-(id)_baseLayer;
-(id)_baseDimmingLayer;
-(void)_updateInnerImage;
-(id)_layerToMatchAccuracyRing;
-(void)setInnerImageMask:(UIImage *)arg1 ;
-(void)_updateBaseImage;
-(char)rotateInnerImageToMatchCourse;
-(void)_setupLayers;
-(void)_updatePulseAnimation;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)didMoveToWindow;
-(void)tintColorDidChange;
-(void)_dealloc;
@end

