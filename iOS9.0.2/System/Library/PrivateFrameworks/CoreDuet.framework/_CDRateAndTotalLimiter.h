/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDuet/_CDRateLimiter.h>

@interface _CDRateAndTotalLimiter : _CDRateLimiter {

	int _totalCount;
	int _currentTotal;

}

@property (readonly) int totalCount;              //@synthesize totalCount=_totalCount - In the implementation block
@property (assign) int currentTotal;              //@synthesize currentTotal=_currentTotal - In the implementation block
-(id)description;
-(id)initWithCount:(int)arg1 perPeriod:(double)arg2 totalCountLimit:(int)arg3 ;
-(id)initWithCount:(int)arg1 perPeriod:(double)arg2 ;
-(char)debited;
-(int)totalCount;
-(int)currentTotal;
-(void)setCurrentTotal:(int)arg1 ;
-(char)credit;
@end

