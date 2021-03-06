/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDate;

@interface MSASSharingRelationship : NSObject <NSCopying> {

	char _isMine;
	NSString* _GUID;
	NSString* _albumGUID;
	NSString* _email;
	NSArray* _emails;
	NSArray* _phones;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _fullName;
	NSString* _personID;
	NSDate* _subscriptionDate;
	int _state;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                    //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) NSString * email;                        //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSArray * emails;                        //@synthesize emails=_emails - In the implementation block
@property (nonatomic,retain) NSArray * phones;                        //@synthesize phones=_phones - In the implementation block
@property (nonatomic,retain) NSString * fullName;                     //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                    //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                     //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSDate * subscriptionDate;               //@synthesize subscriptionDate=_subscriptionDate - In the implementation block
@property (assign,nonatomic) int state;                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) char isMine;                             //@synthesize isMine=_isMine - In the implementation block
+(char)supportsSecureCoding;
+(id)MSASPSharingRelationshipFromProtocolDictionary:(id)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubscriptionDate:(NSDate *)arg1 ;
-(id)_fullName;
-(char)isEqualToSharingRelationship:(id)arg1 ;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(NSString *)fullName;
-(NSString *)GUID;
-(void)setGUID:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(NSDate *)subscriptionDate;
-(void)setIsMine:(char)arg1 ;
-(NSString *)albumGUID;
-(char)isMine;
-(void)setAlbumGUID:(NSString *)arg1 ;
-(NSString *)email;
-(NSArray *)emails;
-(NSArray *)phones;
-(void)setEmails:(NSArray *)arg1 ;
-(void)setPhones:(NSArray *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
@end

