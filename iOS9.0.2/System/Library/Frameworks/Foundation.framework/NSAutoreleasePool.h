/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSAutoreleasePool : NSObject {

	void* _token;
	void* _reserved3;
	void* _reserved2;
	void* _reserved;

}
+(void)showPools;
+(void)releaseAllPools;
+(unsigned)autoreleasedObjectCount;
+(unsigned)topAutoreleasePoolCount;
+(char)autoreleasePoolExists;
+(void)enableRelease:(char)arg1 ;
+(void)enableFreedObjectCheck:(char)arg1 ;
+(unsigned)poolCountHighWaterMark;
+(void)setPoolCountHighWaterMark:(unsigned)arg1 ;
+(unsigned)poolCountHighWaterResolution;
+(void)setPoolCountHighWaterResolution:(unsigned)arg1 ;
+(unsigned)totalAutoreleasedObjects;
+(void)resetTotalAutoreleasedObjects;
+(void)addObject:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addObject:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned)retainCount;
-(id)initWithCapacity:(unsigned)arg1 ;
-(void)drain;
@end
