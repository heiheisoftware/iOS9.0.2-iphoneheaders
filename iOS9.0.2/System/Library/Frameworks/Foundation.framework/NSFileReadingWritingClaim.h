/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSURL, NSFileAccessNode;

@interface NSFileReadingWritingClaim : NSFileAccessClaim {

	NSURL* _readingURL;
	char _readingURLDidChange;
	unsigned _readingOptions;
	NSURL* _writingURL;
	char _writingURLDidChange;
	unsigned _writingOptions;
	NSFileAccessNode* _readingLocation;
	NSFileAccessNode* _writingLocation;
	NSFileAccessNode* _rootNode;
	int _readingLinkResolutionCount;

}
-(char)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(char)arg2 ;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(id)initWithClient:(id)arg1 messageParameters:(id)arg2 arbiterQueue:(id)arg3 replySender:(/*^block*/id)arg4 ;
-(id)allURLs;
-(void)granted;
-(void)invokeClaimer;
-(char)blocksClaim:(id)arg1 ;
-(void)devalueSelf;
-(char)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned)arg2 ;
-(char)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned)arg2 ;
-(void)resolveURLsThenMaybeContinueInvokingClaimer:(/*^block*/id)arg1 ;
-(id)initWithPurposeID:(id)arg1 readingURL:(id)arg2 options:(unsigned)arg3 writingURL:(id)arg4 options:(unsigned)arg5 claimer:(/*^block*/id)arg6 ;
-(void)dealloc;
@end
