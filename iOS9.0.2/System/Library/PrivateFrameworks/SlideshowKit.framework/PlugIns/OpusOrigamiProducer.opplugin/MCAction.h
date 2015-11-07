/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObjectLight.h>

@class NSString;

@interface MCAction : MCObjectLight {

	unsigned long _flags;
	NSString* _targetObjectID;

}

@property (copy) NSString * targetObjectID;                    //@synthesize targetObjectID=_targetObjectID - In the implementation block
@property (assign,nonatomic) char tracksInParent; 
-(void)setTracksInParent:(char)arg1 ;
-(void)demolish;
-(void)setTargetObjectID:(NSString *)arg1 ;
-(char)tracksInParent;
-(NSString *)targetObjectID;
-(char)isSnapshot;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(id)description;
-(id)snapshot;
-(id)imprint;
@end
