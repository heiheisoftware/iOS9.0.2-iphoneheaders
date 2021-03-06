/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLTimeReference.h>

@class NSDate;

@interface PLTimeReferenceKernel : PLTimeReference {

	NSDate* _lastSystemTimeRecalibrated;
	NSDate* _lastKernelTimeRecalibrated;

}

@property (retain) NSDate * lastSystemTimeRecalibrated;              //@synthesize lastSystemTimeRecalibrated=_lastSystemTimeRecalibrated - In the implementation block
@property (retain) NSDate * lastKernelTimeRecalibrated;              //@synthesize lastKernelTimeRecalibrated=_lastKernelTimeRecalibrated - In the implementation block
-(id)currentTime;
-(void)initializeOffsetWithEntries:(id)arg1 ;
-(NSDate *)lastSystemTimeRecalibrated;
-(NSDate *)lastKernelTimeRecalibrated;
-(void)setLastSystemTimeRecalibrated:(NSDate *)arg1 ;
-(void)setLastKernelTimeRecalibrated:(NSDate *)arg1 ;
-(double)resolution;
@end

