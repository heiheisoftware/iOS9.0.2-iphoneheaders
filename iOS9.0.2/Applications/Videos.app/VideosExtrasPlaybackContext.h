/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPPlaybackContext.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSArray;

@interface VideosExtrasPlaybackContext : MPPlaybackContext {

	NSMutableArray* _bookmarkTimes;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _assetTypes;
	char _isBackgroundContext;
	NSArray* _assets;

}

@property (nonatomic,readonly) NSArray * assets;                      //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) char isBackgroundContext;              //@synthesize isBackgroundContext=_isBackgroundContext - In the implementation block
+(Class)queueFeederClass;
-(id)initWithMediaElements:(id)arg1 isBackgroundContent:(char)arg2 ;
-(void)loadExtrasBookmarksWithCompletion:(/*^block*/id)arg1 ;
-(char)isBackgroundContext;
-(unsigned)itemTypeForAssetAtIndex:(unsigned)arg1 ;
-(double)startTimeForAssetAtIndex:(unsigned)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)descriptionComponents;
-(NSArray *)assets;
@end

