/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBRenderFactoryiPhone.h>

@interface UIKBRenderFactoryiPad : UIKBRenderFactoryiPhone
-(id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2 ;
-(id)lightKeycapsFontName;
-(void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderConfig:(id)arg3 keycapsFontName:(id)arg4 ;
-(void)setAllowsPaddles:(char)arg1 ;
-(char)shouldClearBaseDisplayStringForVariants:(id)arg1 ;
-(id)thinKeycapsFontName;
-(float)keyCornerRadius;
-(id)displayContentsForKey:(id)arg1 ;
-(float)spaceKeyFontSize;
-(id)multitapCompleteKeyImageName;
-(id)muttitapReverseKeyImageName;
-(void)setupLayoutSegments;
-(id)shiftKeyImageName;
-(id)shiftOnKeyImageName;
-(id)shiftLockImageName;
-(float)deleteKeyFontSize;
-(float)moreKeyFontSize;
-(float)internationalKeyFontSize;
-(float)dictationKeyFontSize;
-(float)dismissKeyFontSize;
-(CGPoint)dismissKeyOffset;
-(id)deleteKeyImageName;
-(id)deleteOnKeyImageName;
-(float)skinnyKeyThreshold;
-(id)globalEmojiKeyImageName;
-(id)globalKeyImageName;
-(id)dismissKeyImageName;
-(id)dictationKeyImageName;
-(CGPoint)internationalKeyOffset;
-(CGPoint)dictationKeyOffset;
-(CGPoint)deleteKeyOffset;
-(float)shiftKeyFontSize;
-(CGPoint)shiftKeyOffset;
-(CGPoint)stringKeyOffset;
-(float)stringKeyFontSize;
-(CGPoint)returnKeyOffset;
-(float)zhuyinFirstToneKeyFontSize;
-(void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3 ;
-(void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3 ;
-(void)_customizePopupTraits:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3 ;
-(UIEdgeInsets)variantDisplayFrameInsets;
-(UIEdgeInsets)variantSymbolFrameInsets;
-(int)rowLimitForKey:(id)arg1 ;
-(id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned)arg2 rowLimit:(int)arg3 ;
-(float)_row4ControlSegmentWidth;
-(CGPoint)secondaryShiftKeyOffset;
-(float)predictiveKeyCornerRadius;
-(float)keyInsetBottom;
-(float)cornerRadiusForKey:(id)arg1 ;
-(CGRect)insetFrame:(CGRect)arg1 forKey:(id)arg2 ;
-(float)symbolFrameInset;
-(CGRect)shiftKeySymbolFrame;
-(CGRect)dismissKeySymbolFrame;
-(float)returnKeySymbolFrameInset;
-(float)fontSizeAdjustmentForNonAlphanumericKeycaps;
-(float)dualStringKeyFontSizeAdjustment;
-(float)bottomRowDefaultFontSize;
-(float)smallKanaKeyFontSize;
-(float)emailDotKeyFontSize;
-(float)facemarkKeyFontSize;
-(float)fallbackFontSize;
-(CGSize)defaultVariantGeometrySize;
-(float)defaultVariantSizeThreshold;
-(CGPoint)dualStringKeyOffset;
-(float)dualStringKeyMiddleMargin;
-(float)defaultPathWeight;
@end

