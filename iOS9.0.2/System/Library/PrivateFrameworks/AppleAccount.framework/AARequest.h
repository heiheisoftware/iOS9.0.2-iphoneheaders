/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AppleAccount-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString, NSURLRequest;

@interface AARequest : NSObject <NSURLSessionDataDelegate> {

	NSString* _initialURLString;
	char _flushCache;
	OpaqueCFHTTPCookieStorageRef _cookieStorage;
	NSString* _oneTimePassword;
	NSString* _machineId;
	/*^block*/id _handler;

}

@property (readonly) NSURLRequest * urlRequest; 
@property (assign,nonatomic) char flushCache;                       //@synthesize flushCache=_flushCache - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)responseClass;
+(id)protocolVersion;
-(id)urlString;
-(void)dealloc;
-(void)setFlushCache:(char)arg1 ;
-(id)redactedBodyStringWithPropertyList:(id)arg1 ;
-(void)_handleDataTaskCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)setDeviceProvisioningOneTimePassword:(id)arg1 ;
-(void)setDeviceProvisioningMachineId:(id)arg1 ;
-(id)urlCredential;
-(id)_redactedHeadersFromHTTPHeaders:(id)arg1 ;
-(char)flushCache;
-(void)setCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(id)initWithURLString:(id)arg1 ;
-(NSURLRequest *)urlRequest;
-(id)bodyDictionary;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
@end

