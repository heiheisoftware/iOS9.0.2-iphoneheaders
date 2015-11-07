/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class RMSDAAPRequestManager, RMSFairPlaySession;

@interface RMSDAAPLoginManager : NSObject {

	RMSDAAPRequestManager* _requestManager;
	RMSFairPlaySession* _fairPlaySession;
	char _isFairPlayRequired;

}
-(void)_requestControlInterfaceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_requestFairPlayHandshake:(/*^block*/id)arg1 ;
-(void)_requestLoginWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_requestServerInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)_isFairplayRequiredForServerInfo:(id)arg1 ;
-(void)_continueFairPlayHandshakeWithData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithRequestManager:(id)arg1 ;
-(void)loginWithCompletionHandler:(/*^block*/id)arg1 ;
@end
