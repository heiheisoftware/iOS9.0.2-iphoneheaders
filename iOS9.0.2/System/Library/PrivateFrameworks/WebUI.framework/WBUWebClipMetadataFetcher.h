/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSMutableArray, WBUInjectedJavaScriptController;

@interface WBUWebClipMetadataFetcher : NSObject {

	NSDictionary* _metaTags;
	NSArray* _linkTags;
	NSMutableArray* _metadataConsumers;
	char _fetchingCompleted;
	WBUInjectedJavaScriptController* _jsController;

}
+(id)metadataFetcherScriptSource;
-(void)_startFetchingMetadata;
-(id)_webClipLinkTagWithDictionary:(id)arg1 ;
-(id)initWithInjectedJavascriptController:(id)arg1 ;
-(void)fetchMetadataWithConsumer:(/*^block*/id)arg1 ;
@end

