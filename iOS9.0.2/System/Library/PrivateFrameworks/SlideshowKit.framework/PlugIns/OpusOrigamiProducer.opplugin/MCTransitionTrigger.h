/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAction.h>
#import <OpusOrigamiProducer/MCTransitionTrigger.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface MCTransitionTrigger : MCAction <MCTransitionTrigger> {

	NSMutableDictionary* _transitionAttributes;
	NSString* _transitionID;
	NSString* _transitionDestinationPlugID;
	double _transitionDuration;

}

@property (copy) NSString * transitionDestinationPlugID;                     //@synthesize transitionDestinationPlugID=_transitionDestinationPlugID - In the implementation block
@property (copy) NSString * transitionID;                                    //@synthesize transitionID=_transitionID - In the implementation block
@property (assign,nonatomic) double transitionDuration;                      //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (nonatomic,copy) NSDictionary * transitionAttributes;              //@synthesize transitionAttributes=_transitionAttributes - In the implementation block
+(id)transitionForTargetPlugObjectID:(id)arg1 withTransitionID:(id)arg2 ;
-(void)demolish;
-(NSString *)transitionID;
-(void)setTransitionAttributes:(NSDictionary *)arg1 ;
-(void)setTransitionID:(NSString *)arg1 ;
-(void)setTransitionDestinationPlugID:(NSString *)arg1 ;
-(NSDictionary *)transitionAttributes;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(NSString *)transitionDestinationPlugID;
-(id)initWithImprint:(id)arg1 ;
-(id)description;
-(double)transitionDuration;
-(void)setTransitionDuration:(double)arg1 ;
-(id)imprint;
@end

