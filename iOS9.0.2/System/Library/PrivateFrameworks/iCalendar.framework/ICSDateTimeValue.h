/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSDateValue.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface ICSDateTimeValue : ICSDateValue <NSCoding> {

	int _hour;
	int _minute;
	int _second;

}

@property (readonly) int hour;                //@synthesize hour=_hour - In the implementation block
@property (readonly) int minute;              //@synthesize minute=_minute - In the implementation block
@property (readonly) int second;              //@synthesize second=_second - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)hour;
-(int)minute;
-(int)second;
-(id)components;
-(id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3 ;
-(id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3 hour:(int)arg4 minute:(int)arg5 second:(int)arg6 ;
-(void)_ICSStringWithOptions:(unsigned)arg1 appendingToString:(id)arg2 ;
-(int)dateType;
@end
