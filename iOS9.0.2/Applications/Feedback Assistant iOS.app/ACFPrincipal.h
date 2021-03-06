/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/Feedback Assistant iOS-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface ACFPrincipal : NSObject <NSCopying, NSCoding> {

	NSString* _userName;
	NSString* _realm;
	NSString* _principalString;

}

@property (nonatomic,retain) NSString * userName;                     //@synthesize userName=_userName - In the implementation block
@property (nonatomic,retain) NSString * realm;                        //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) NSString * principalString; 
+(id)principalWithUserName:(id)arg1 realm:(id)arg2 ;
+(id)principalWithPrincipalString:(id)arg1 ;
-(NSString *)userName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRealm:(NSString *)arg1 ;
-(char)isEqualTo:(id)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(NSString *)realm;
-(void)setPrincipalString:(NSString *)arg1 ;
-(NSString *)principalString;
-(void)releaseCaches;
@end

