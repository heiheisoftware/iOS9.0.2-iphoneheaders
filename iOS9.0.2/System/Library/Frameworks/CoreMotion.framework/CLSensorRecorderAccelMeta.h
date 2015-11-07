/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderAccelMeta : NSObject <NSSecureCoding> {

	char _movement;
	unsigned _offset;
	unsigned _dataSize;
	unsigned long long _identifier;
	double _startTime;
	unsigned long long _timestamp;
	unsigned long long _dataIdentifier;

}

@property (assign) unsigned long long identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (assign) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) unsigned long long dataIdentifier;              //@synthesize dataIdentifier=_dataIdentifier - In the implementation block
@property (assign) unsigned offset;                                //@synthesize offset=_offset - In the implementation block
@property (assign) unsigned dataSize;                              //@synthesize dataSize=_dataSize - In the implementation block
@property (assign) char movement;                                  //@synthesize movement=_movement - In the implementation block
+(char)supportsSecureCoding;
-(unsigned long long)dataIdentifier;
-(unsigned)dataSize;
-(void)setDataIdentifier:(unsigned long long)arg1 ;
-(void)setDataSize:(unsigned)arg1 ;
-(char)movement;
-(void)setMovement:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned long long)identifier;
-(void)setStartTime:(double)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
-(double)startTime;
@end
