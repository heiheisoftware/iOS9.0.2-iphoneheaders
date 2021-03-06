/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface BBThumbnailSizeConstraints : NSObject <NSSecureCoding> {

	int _constraintType;
	float _fixedWidth;
	float _fixedHeight;
	float _fixedDimension;
	float _minAspectRatio;
	float _maxAspectRatio;
	float _thumbnailScale;

}

@property (assign,nonatomic) int constraintType;                //@synthesize constraintType=_constraintType - In the implementation block
@property (assign,nonatomic) float fixedWidth;                  //@synthesize fixedWidth=_fixedWidth - In the implementation block
@property (assign,nonatomic) float fixedHeight;                 //@synthesize fixedHeight=_fixedHeight - In the implementation block
@property (assign,nonatomic) float fixedDimension;              //@synthesize fixedDimension=_fixedDimension - In the implementation block
@property (assign,nonatomic) float minAspectRatio;              //@synthesize minAspectRatio=_minAspectRatio - In the implementation block
@property (assign,nonatomic) float maxAspectRatio;              //@synthesize maxAspectRatio=_maxAspectRatio - In the implementation block
@property (assign,nonatomic) float thumbnailScale;              //@synthesize thumbnailScale=_thumbnailScale - In the implementation block
+(char)supportsSecureCoding;
-(void)setFixedHeight:(float)arg1 ;
-(float)fixedHeight;
-(float)maxAspectRatio;
-(void)setMaxAspectRatio:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(char)areReasonable;
-(int)constraintType;
-(float)minAspectRatio;
-(float)fixedWidth;
-(float)fixedDimension;
-(void)setConstraintType:(int)arg1 ;
-(void)setFixedWidth:(float)arg1 ;
-(void)setFixedDimension:(float)arg1 ;
-(void)setMinAspectRatio:(float)arg1 ;
-(void)setThumbnailScale:(float)arg1 ;
-(float)thumbnailScale;
@end

