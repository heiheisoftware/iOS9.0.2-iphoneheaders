/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PACountedFrame.h>

@class PASampleFrame;

@interface PACountedSampleFrame : PACountedFrame {

	PASampleFrame* _sampleFrame;

}

@property (readonly) PASampleFrame * sampleFrame;              //@synthesize sampleFrame=_sampleFrame - In the implementation block
-(void)dealloc;
-(id)debugDescription;
-(PASampleFrame *)sampleFrame;
-(id)initWithSampleFrame:(id)arg1 ;
@end

