/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@interface ICSMultiValueProperty : ICSProperty
-(char)isMultiValued;
-(id)value;
-(id)values;
-(void)setValue:(id)arg1 type:(unsigned)arg2 ;
-(id)initWithValue:(id)arg1 type:(unsigned)arg2 ;
-(void)_ICSStringWithOptions:(unsigned)arg1 appendingToString:(id)arg2 ;
-(void)_setParsedValues:(id)arg1 type:(unsigned)arg2 ;
-(void)setValues:(id)arg1 valueType:(unsigned)arg2 ;
@end

