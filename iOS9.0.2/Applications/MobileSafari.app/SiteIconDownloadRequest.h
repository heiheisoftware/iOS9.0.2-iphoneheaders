/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SiteIconDownloadRequestDelegate;
@class NSURLConnection, NSMutableData, NSString, NSURL, NSMutableArray;

@interface SiteIconDownloadRequest : NSObject {

	char _fetchForFavoritesIcon;
	char _paused;
	NSURLConnection* _URLConnection;
	NSMutableData* _iconData;
	NSString* _bookmarkUUID;
	unsigned _bookmarkID;
	NSString* _bookmarkAddress;
	id<SiteIconDownloadRequestDelegate> _delegate;
	NSURL* _mainResourceURL;
	NSMutableArray* _iconURLs;
	NSString* _userAgentString;

}

@property (nonatomic,readonly) NSString * bookmarkUUID;                                        //@synthesize bookmarkUUID=_bookmarkUUID - In the implementation block
@property (nonatomic,readonly) unsigned bookmarkID;                                            //@synthesize bookmarkID=_bookmarkID - In the implementation block
@property (nonatomic,readonly) NSString * bookmarkAddress;                                     //@synthesize bookmarkAddress=_bookmarkAddress - In the implementation block
@property (assign,nonatomic,__weak) id<SiteIconDownloadRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * mainResourceURL;                                          //@synthesize mainResourceURL=_mainResourceURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconURLs;                                        //@synthesize iconURLs=_iconURLs - In the implementation block
@property (nonatomic,retain) NSString * userAgentString;                                       //@synthesize userAgentString=_userAgentString - In the implementation block
+(id)iconURLListForWebClipIcons:(id)arg1 faviconURLs:(id)arg2 pageURL:(id)arg3 ;
+(id)iconURLListForWebClipLinkTags:(id)arg1 pageURL:(id)arg2 ;
-(id)initWithBookmark:(id)arg1 ;
-(id)initWithBookmark:(id)arg1 iconURLs:(id)arg2 ;
-(void)_fetchMainResource;
-(void)fetchNextIcon;
-(void)setBookmarkFetchedIconData;
-(id)_bestImageWithData:(id)arg1 forWidth:(float)arg2 ;
-(void)_cancelConnectionAndFetchNextIcon;
-(void)_processIconDataAndNotifyDelegate;
-(id)initWithBookmark:(id)arg1 singleResourceURL:(id)arg2 ;
-(NSString *)bookmarkUUID;
-(NSString *)bookmarkAddress;
-(NSURL *)mainResourceURL;
-(void)setMainResourceURL:(NSURL *)arg1 ;
-(void)setIconURLs:(NSMutableArray *)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<SiteIconDownloadRequestDelegate>)arg1 ;
-(id<SiteIconDownloadRequestDelegate>)delegate;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSMutableArray *)iconURLs;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(NSString *)userAgentString;
-(unsigned)bookmarkID;
-(void)setUserAgentString:(NSString *)arg1 ;
@end

