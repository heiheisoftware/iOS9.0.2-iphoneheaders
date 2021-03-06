/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObject.h>
#import <OpusOrigamiProducer/MCAnimationPathSupport.h>
#import <OpusOrigamiProducer/MCActionSupport.h>
#import <OpusOrigamiProducer/MCPlugTiming.h>

@class NSMutableSet, NSMutableDictionary, MCContainer, NSSet, NSDictionary;

@interface MCPlug : MCObject <MCAnimationPathSupport, MCActionSupport, MCPlugTiming> {

	unsigned long mFlags;
	NSMutableSet* mAnimationPaths;
	NSMutableDictionary* mActions;
	MCContainer* mContainer;
	double mPhaseInDuration;
	double mLoopDuration;
	double mPhaseOutDuration;
	double mNumberOfLoops;

}

@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned countOfAnimationPaths; 
@property (readonly) NSDictionary * actions; 
@property (nonatomic,readonly) unsigned countOfActions; 
@property (retain) MCContainer * container; 
@property (assign,nonatomic) char startsPaused; 
@property (assign,nonatomic) char preactivatesWithParent; 
@property (assign,nonatomic) double phaseInDuration; 
@property (assign,nonatomic) double loopDuration; 
@property (assign,nonatomic) double phaseOutDuration; 
@property (nonatomic,readonly) double fullDuration; 
@property (assign,nonatomic) double numberOfLoops; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)removeAllAnimationPaths;
-(double)loopDuration;
-(double)fullDuration;
-(void)demolishActions;
-(void)demolish;
-(char)startsPaused;
-(NSSet *)animationPaths;
-(double)phaseInDuration;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(double)phaseOutDuration;
-(void)setPhaseOutDuration:(double)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)setStartsPaused:(char)arg1 ;
-(void)setLoopDuration:(double)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(void)addAnimationPath:(id)arg1 ;
-(unsigned)countOfAnimationPaths;
-(char)preactivatesWithParent;
-(void)setPreactivatesWithParent:(char)arg1 ;
-(void)initActionsWithImprints:(id)arg1 ;
-(id)imprintsForActions;
-(void)initAnimationPathsWithImprints:(id)arg1 ;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;
-(void)setNumberOfLoops:(double)arg1 ;
-(double)numberOfLoops;
-(void)removeActionForKey:(id)arg1 ;
-(id)init;
-(NSDictionary *)actions;
-(id)actionForKey:(id)arg1 ;
-(MCContainer *)container;
-(void)setContainer:(MCContainer *)arg1 ;
-(void)removeAllActions;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned)countOfActions;
-(id)imprint;
@end

