/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AKAnnotation : NSObject <NSSecureCoding> {

	char _isTranslating;
	char _isEditingText;
	char _textIsFixedWidth;
	char _textIsFixedHeight;
	char _textIsClipped;
	char _shouldUsePlaceholderText;
	float _originalModelBaseScaleFactor;
	int _originalExifOrientation;

}

@property (readonly) NSString * displayName; 
@property (assign,nonatomic) float originalModelBaseScaleFactor;              //@synthesize originalModelBaseScaleFactor=_originalModelBaseScaleFactor - In the implementation block
@property (assign,nonatomic) int originalExifOrientation;                     //@synthesize originalExifOrientation=_originalExifOrientation - In the implementation block
@property (readonly) CGRect hitTestBounds; 
@property (readonly) CGRect drawingBounds; 
@property (readonly) CGRect integralDrawingBounds; 
@property (assign) char isTranslating;                                        //@synthesize isTranslating=_isTranslating - In the implementation block
@property (assign) char isEditingText;                                        //@synthesize isEditingText=_isEditingText - In the implementation block
@property (assign) char textIsFixedWidth;                                     //@synthesize textIsFixedWidth=_textIsFixedWidth - In the implementation block
@property (assign) char textIsFixedHeight;                                    //@synthesize textIsFixedHeight=_textIsFixedHeight - In the implementation block
@property (assign) char textIsClipped;                                        //@synthesize textIsClipped=_textIsClipped - In the implementation block
@property (assign) char shouldUsePlaceholderText;                             //@synthesize shouldUsePlaceholderText=_shouldUsePlaceholderText - In the implementation block
+(id)placeholderText;
+(char)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(int)originalExifOrientation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isTranslating;
-(NSString *)displayName;
-(float)originalModelBaseScaleFactor;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(void)adjustModelToCompensateForOriginalExif;
-(void)setIsTranslating:(char)arg1 ;
-(CGRect)hitTestBounds;
-(void)translateBy:(CGPoint)arg1 ;
-(id)keysForValuesToObserveForAdornments;
-(CGRect)drawingBounds;
-(char)textIsFixedHeight;
-(char)textIsFixedWidth;
-(char)isEditingText;
-(void)setIsEditingText:(char)arg1 ;
-(void)setTextIsFixedWidth:(char)arg1 ;
-(void)setTextIsFixedHeight:(char)arg1 ;
-(char)textIsClipped;
-(void)setTextIsClipped:(char)arg1 ;
-(char)shouldUsePlaceholderText;
-(void)setShouldUsePlaceholderText:(char)arg1 ;
-(void)setOriginalExifOrientation:(int)arg1 ;
-(void)setOriginalModelBaseScaleFactor:(float)arg1 ;
-(CGRect)integralDrawingBounds;
@end

