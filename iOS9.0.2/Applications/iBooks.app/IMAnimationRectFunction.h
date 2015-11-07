/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBooks/iBooks-Structs.h>
@class CAMediaTimingFunction, IMAnimationPointFunction, IMAnimationSizeFunction;

@interface IMAnimationRectFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	float _speed;
	IMAnimationPointFunction* _originFunction;
	IMAnimationSizeFunction* _sizeFunction;
	CGRect _startValue;
	CGRect _endValue;

}

@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;                 //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) CGRect startValue;                                      //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) CGRect endValue;                                        //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) float speed;                                            //@synthesize speed=_speed - In the implementation block
@property (nonatomic,retain) IMAnimationPointFunction * originFunction;              //@synthesize originFunction=_originFunction - In the implementation block
@property (nonatomic,retain) IMAnimationSizeFunction * sizeFunction;                 //@synthesize sizeFunction=_sizeFunction - In the implementation block
-(void)_reloadFunctions;
-(id)initWithTimingFunction:(id)arg1 startRect:(CGRect)arg2 endRect:(CGRect)arg3 speed:(float)arg4 ;
-(IMAnimationPointFunction *)originFunction;
-(void)setOriginFunction:(IMAnimationPointFunction *)arg1 ;
-(CGRect)solveForTime:(float)arg1 ;
-(IMAnimationSizeFunction *)sizeFunction;
-(void)setSizeFunction:(IMAnimationSizeFunction *)arg1 ;
-(CGRect)endValue;
-(CGRect)startValue;
-(void)setSpeed:(float)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(float)speed;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setStartValue:(CGRect)arg1 ;
-(void)setEndValue:(CGRect)arg1 ;
@end
