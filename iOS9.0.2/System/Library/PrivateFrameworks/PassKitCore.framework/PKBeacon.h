/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSNumber, NSString;

@interface PKBeacon : NSObject <NSSecureCoding> {

	NSUUID* _proximityUUID;
	NSNumber* _major;
	NSNumber* _minor;
	NSString* _name;
	NSString* _relevantText;

}

@property (nonatomic,retain) NSUUID * proximityUUID;               //@synthesize proximityUUID=_proximityUUID - In the implementation block
@property (nonatomic,retain) NSNumber * major;                     //@synthesize major=_major - In the implementation block
@property (nonatomic,retain) NSNumber * minor;                     //@synthesize minor=_minor - In the implementation block
@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * relevantText;              //@synthesize relevantText=_relevantText - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSUUID *)proximityUUID;
-(void)setProximityUUID:(NSUUID *)arg1 ;
-(void)setRelevantText:(NSString *)arg1 ;
-(NSString *)relevantText;
-(void)setProximityUUIDWithString:(id)arg1 ;
-(id)proximityUUIDAsString;
-(void)setMajor:(NSNumber *)arg1 ;
-(void)setMinor:(NSNumber *)arg1 ;
-(NSNumber *)major;
-(NSNumber *)minor;
@end
