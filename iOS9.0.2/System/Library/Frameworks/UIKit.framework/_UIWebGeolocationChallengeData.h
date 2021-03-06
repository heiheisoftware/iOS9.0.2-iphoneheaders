/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WebAllowDenyPolicyListener;
@class NSString, NSURL, UIWindow;

@interface _UIWebGeolocationChallengeData : NSObject {

	NSString* _token;
	NSURL* _requestingURL;
	UIWindow* _window;
	id<WebAllowDenyPolicyListener> _listener;

}

@property (nonatomic,retain) NSString * token;                                     //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSURL * requestingURL;                                //@synthesize requestingURL=_requestingURL - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                    //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) id<WebAllowDenyPolicyListener> listener;              //@synthesize listener=_listener - In the implementation block
-(void)dealloc;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(NSURL *)requestingURL;
-(void)setRequestingURL:(NSURL *)arg1 ;
-(id<WebAllowDenyPolicyListener>)listener;
-(void)setListener:(id<WebAllowDenyPolicyListener>)arg1 ;
@end

