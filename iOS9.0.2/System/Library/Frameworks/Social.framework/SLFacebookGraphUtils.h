/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SLFacebookGraphUtils : NSObject
+(void)_likeURL:(id)arg1 requestMethod:(int)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)_parseServerResponse:(id)arg1 error:(id*)arg2 ;
+(id)_likeQueryStringForURL:(id)arg1 flags:(unsigned)arg2 ;
+(void)fetchLikeStatusForURL:(id)arg1 flags:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)likeURL:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)unlikeURL:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
