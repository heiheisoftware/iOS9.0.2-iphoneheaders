/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface SSVFairPlaySubscriptionStatus : NSObject <SSXPCCoding> {

	char _hasSubscriptionLease;
	char _hasSubscriptionSlot;

}

@property (assign,nonatomic) char hasSubscriptionLease;              //@synthesize hasSubscriptionLease=_hasSubscriptionLease - In the implementation block
@property (assign,nonatomic) char hasSubscriptionSlot;               //@synthesize hasSubscriptionSlot=_hasSubscriptionSlot - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)hasSubscriptionLease;
-(char)hasSubscriptionSlot;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(void)setHasSubscriptionLease:(char)arg1 ;
-(void)setHasSubscriptionSlot:(char)arg1 ;
@end
