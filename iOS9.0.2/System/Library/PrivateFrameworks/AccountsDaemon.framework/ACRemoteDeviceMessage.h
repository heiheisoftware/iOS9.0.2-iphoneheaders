/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSData, NSString, ACAccount, NSDictionary, NSError;

@interface ACRemoteDeviceMessage : NSObject {

	NSMutableDictionary* _payload;
	NSData* _data;
	char _needsReply;
	char _isReply;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * command; 
@property (nonatomic,readonly) ACAccount * account; 
@property (nonatomic,readonly) NSDictionary * options; 
@property (nonatomic,readonly) NSString * sentMessageIdentifier; 
@property (nonatomic,readonly) char success; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) NSObject*<NSCoding> result; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) char needsReply;                                 //@synthesize needsReply=_needsReply - In the implementation block
@property (assign,nonatomic) char isReply;                                    //@synthesize isReply=_isReply - In the implementation block
+(id)actionMessageWithCommand:(id)arg1 account:(id)arg2 options:(id)arg3 ;
+(id)replyForMessage:(id)arg1 withSuccess:(char)arg2 result:(id)arg3 error:(id)arg4 ;
+(id)replyForMessage:(id)arg1 withSuccess:(char)arg2 error:(id)arg3 ;
-(void)setNeedsReply:(char)arg1 ;
-(char)needsReply;
-(NSString *)command;
-(NSError *)error;
-(id)init;
-(id)description;
-(NSString *)identifier;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(NSDictionary *)options;
-(NSObject*<NSCoding>)result;
-(void)_invalidateCachedData;
-(NSString *)sentMessageIdentifier;
-(void)_setPayloadObject:(id)arg1 forKey:(id)arg2 ;
-(id)_payloadObjectForKey:(id)arg1 ;
-(void)setIsReply:(char)arg1 ;
-(char)isReply;
-(char)success;
-(ACAccount *)account;
@end
