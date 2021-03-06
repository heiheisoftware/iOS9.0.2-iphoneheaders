/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class NSDate, NSString;

@interface IMMessageStatusChatItem : IMTranscriptChatItem {

	int _statusType;
	NSDate* _time;
	int _expireStatusType;
	NSDate* _timeAdded;
	NSDate* _timeStale;
	unsigned _count;

}

@property (nonatomic,readonly) int messageStatusType; 
@property (nonatomic,readonly) int statusType;                           //@synthesize statusType=_statusType - In the implementation block
@property (nonatomic,readonly) char isFromMe; 
@property (nonatomic,retain,readonly) NSDate * time;                     //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) unsigned count;                           //@synthesize count=_count - In the implementation block
@property (nonatomic,retain,readonly) NSString * errorText; 
@property (nonatomic,readonly) int expireStatusType;                     //@synthesize expireStatusType=_expireStatusType - In the implementation block
-(Class)__ck_chatItemClass;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)time;
-(char)isFromMe;
-(int)statusType;
-(int)expireStatusType;
-(NSString *)errorText;
-(int)messageStatusType;
-(id)_initWithItem:(id)arg1 statusType:(int)arg2 time:(id)arg3 count:(unsigned)arg4 expireStatusType:(int)arg5 ;
-(id)_timeStale;
-(id)_timeAdded;
-(void)_setTimeAdded:(id)arg1 ;
-(id)_initWithItem:(id)arg1 statusType:(int)arg2 time:(id)arg3 count:(unsigned)arg4 ;
-(id)_initWithItem:(id)arg1 expireStatusType:(int)arg2 count:(unsigned)arg3 ;
@end

