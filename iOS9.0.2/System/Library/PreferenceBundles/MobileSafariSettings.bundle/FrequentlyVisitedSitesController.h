/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/WBSFrequentlyVisitedSitesController.h>

@class NSMutableArray, WebBookmarkCollection;

@interface FrequentlyVisitedSitesController : WBSFrequentlyVisitedSitesController {

	NSMutableArray* _cachedFrequentlyVisitedBookmarks;
	WebBookmarkCollection* _bookmarkCollection;
	BOOL _bookmarksNeedToSave;
	char _ignoreBookmarksFolderChangeNotifications;

}
+(id)sharedController;
-(void)dealloc;
-(id)initWithBookmarkCollection:(id)arg1 ;
-(void)_receivedBookmarksFolderContentChangedNotification:(id)arg1 ;
-(void)_clearFrequentlyVisitedSitesInBookmarksDB;
-(void)promoteFrequentlyVisitedSite:(id)arg1 toFavoriteAtIndex:(unsigned)arg2 ;
-(void)banFrequentlyVisitedSite:(id)arg1 ;
-(void)saveFrequentlyVisitedSitesToBookmarksDBWithCompletion:(/*^block*/id)arg1 ;
-(id)_canonicalizedFavoritesURLStringSet;
-(id)frequentlyVisitedSites;
-(void)clearFrequentlyVisitedSites;
@end
