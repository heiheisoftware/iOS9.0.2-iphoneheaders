/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKPersistentObject.h>

@class EKPersistentCalendar, NSString, NSDate;

@interface EKPersistentInviteReplyNotification : EKPersistentObject

@property (nonatomic,readonly) EKPersistentCalendar * calendar; 
@property (nonatomic,readonly) NSString * calendarName; 
@property (nonatomic,readonly) NSString * shareeDisplayName; 
@property (nonatomic,readonly) NSString * shareeAddress; 
@property (nonatomic,readonly) NSString * shareeFirstName; 
@property (nonatomic,readonly) NSString * shareeLastName; 
@property (nonatomic,readonly) unsigned status; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) char alerted; 
+(id)defaultPropertiesToLoad;
+(id)relations;
-(NSString *)shareeDisplayName;
-(NSString *)shareeAddress;
-(NSString *)shareeFirstName;
-(NSString *)shareeLastName;
-(char)alerted;
-(NSString *)calendarName;
-(NSDate *)creationDate;
-(EKPersistentCalendar *)calendar;
-(unsigned)status;
@end

