/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <CoreData/NSManagedObject.h>
#import <Podcasts/IMMetricsDataSource.h>

@class NSString, NSAttributedString, NSSet, MTPodcast;

@interface MTEpisode : NSManagedObject <IMMetricsDataSource>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * assetURL; 
@property (assign,nonatomic) char audio; 
@property (assign,nonatomic) char saved; 
@property (nonatomic,retain) NSString * author; 
@property (assign,nonatomic) long long byteSize; 
@property (nonatomic,retain) NSString * category; 
@property (nonatomic,retain) NSString * cleanedTitle; 
@property (assign,nonatomic) double downloadDate; 
@property (nonatomic,retain) NSString * downloadManagerPath; 
@property (nonatomic,retain) NSString * downloadPath; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,retain) NSString * enclosureURL; 
@property (assign,nonatomic) long long episodeLevel; 
@property (assign,nonatomic) char explicit; 
@property (assign,nonatomic) char externalType; 
@property (assign,nonatomic) char feedDeleted; 
@property (assign,nonatomic) long long flags; 
@property (assign,nonatomic) char fromiTunes; 
@property (nonatomic,retain) NSString * guid; 
@property (assign,nonatomic) int importSource; 
@property (assign,nonatomic) double importDate; 
@property (nonatomic,readonly) char isNew; 
@property (nonatomic,readonly) long long isNewSource; 
@property (nonatomic,retain) NSString * itemDescription; 
@property (assign,nonatomic) char itemDescriptionHasHTML; 
@property (nonatomic,retain) NSAttributedString * itemDescriptionWithHTML; 
@property (nonatomic,retain) NSString * itemDescriptionWithoutHTML; 
@property (assign,nonatomic) double lastDatePlayed; 
@property (assign,nonatomic) double lastUserMarkedAsPlayedDate; 
@property (nonatomic,retain) NSString * metadataIdentifier; 
@property (assign,nonatomic) double metadataTimestamp; 
@property (assign,nonatomic) char metadataFirstSyncEligible; 
@property (nonatomic,retain) NSString * mimeType; 
@property (assign,nonatomic) long long persistentID; 
@property (assign,nonatomic) long long playCount; 
@property (assign,nonatomic) float playhead; 
@property (assign,nonatomic) char backCatalog; 
@property (nonatomic,readonly) long long playState; 
@property (nonatomic,readonly) long long playStateSource; 
@property (nonatomic,readonly) char playStateManuallySet; 
@property (assign,nonatomic) double playStateLastModifiedDate; 
@property (nonatomic,retain) NSString * podcastUuid; 
@property (assign,nonatomic) double pubDate; 
@property (assign,nonatomic) char sentNotification; 
@property (assign,nonatomic) long long storeTrackId; 
@property (assign,nonatomic) char suppressAutoDownload; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) long long trackNum; 
@property (assign,nonatomic) char unplayedTab; 
@property (nonatomic,retain) NSString * uti; 
@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) char video; 
@property (nonatomic,retain) NSSet * playlists; 
@property (nonatomic,retain) MTPodcast * podcast; 
@property (nonatomic,retain) NSSet * settings; 
@property (assign,nonatomic) char visible; 
@property (assign,nonatomic) char userDeleted; 
@property (assign,nonatomic) char manuallyAdded; 
@property (assign,nonatomic) char hasBeenPlayed; 
+(id)predicateForAllEpisodesOnPodcastUuid:(id)arg1 ;
+(id)predicateForSaved:(char)arg1 ;
+(long long)downloadSizeLimitForEpisode:(id)arg1 ;
+(id)friendlyPubDateStringForEpisode:(id)arg1 ;
+(id)formattedStringCache;
+(id)friendlyPubDateStringForEpisode:(id)arg1 abbreviated:(char)arg2 ;
+(id)predicateForUserEpisodesOnPodcastUuid:(id)arg1 episodeLimit:(long long)arg2 deletePlayedEpisodes:(char)arg3 ;
+(id)predicateForEpisodesOnUnplayedTabOnPodcastUuid:(id)arg1 episodeLimit:(long long)arg2 deletePlayedEpisodes:(char)arg3 ;
+(id)predicateForEpisodesDeterminedByLimitSettings:(long long)arg1 ;
+(id)predicateForPlayed:(char)arg1 ;
+(id)predicateForPlayStateManuallySet:(char)arg1 ;
+(id)predicateForFromiTunes:(char)arg1 ;
+(id)predicateForUnplayedTabFlag:(char)arg1 ;
+(id)predicateForPodcastIsHidden:(char)arg1 ;
+(id)predicateForRecentlyPlayed;
+(id)predicateForLimittedEpisodesOnPodcastUuid:(id)arg1 determinedByLimit:(long long)arg2 deletePlayedEpisodes:(char)arg3 ;
+(id)predicateForOtherEpisodesOnPodcastUuid:(id)arg1 limittedEpisodesPredicate:(id)arg2 deletePlayedEpisodes:(char)arg3 ;
+(id)predicateForFeedDeleted:(char)arg1 ;
+(id)predicateForEpisodesOnSavedTabForPodcastUuid:(id)arg1 ;
+(id)predicateForIsNew:(char)arg1 ;
+(id)insertNewEpisodeInManagedObjectContext:(id)arg1 ;
+(id)episodeWithMetadataIdentifier:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)episodeWithEnclosureURL:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)dateLabelDescriptionForEpisode:(id)arg1 download:(id)arg2 ;
+(id)timeRemainingStringForEpisode:(id)arg1 ;
+(void)parseAndPersistHTMLDescriptionIfNeededForEpisodeUuid:(id)arg1 ;
+(id)userDefaultPropertiesAffectingPredicates;
+(id)predicateForSavedEpisodesOnPodcastUuid:(id)arg1 ;
+(id)predicateForSuppressAutoDownload:(char)arg1 ;
+(id)predicateForSentNotification:(char)arg1 ;
+(id)predicateForExplicit:(char)arg1 ;
+(id)predicateForSavedTab:(char)arg1 ;
+(id)predicateForBacklog:(char)arg1 ;
+(id)predicateForEpisodesOnUnplayedTab;
+(id)predicateForDownloaded:(char)arg1 ;
+(id)predicateForVideo:(char)arg1 ;
+(id)predicateForAudio:(char)arg1 ;
+(id)predicateForMetadataFirstSyncEligible:(char)arg1 ;
+(id)predicateForExternalType:(char)arg1 ;
+(id)predicateForEpisodeUuid:(id)arg1 ;
+(id)predicateForEpisodeGuid:(id)arg1 ;
+(id)predicateForPersitentId:(id)arg1 ;
+(id)predicateForEpisodesImportedAfterDate:(id)arg1 ;
+(id)predicateForRecentlyPlayedEpisodesToBeDeletedOnPodcastUuid:(id)arg1 deletePlayedEpisodes:(char)arg2 ;
+(id)predicateForEpisodesFromiTunesOnPodcastUuid:(id)arg1 ;
+(id)predicateForEpisodesInFeedForPodcastUuid:(id)arg1 ;
+(id)predicateForEpisodesPublishedToday;
+(id)predicateForEpisodesPublishedThisWeek;
+(id)predicateForEpisodesPublishedThisMonth;
+(id)predicateForNewEpisodesOnPodcastUuid:(id)arg1 ;
+(id)predicateForEpisodeStoreTrackId:(long long)arg1 ;
+(id)predicateForUserEpisodesOnPodcastUuid:(id)arg1 ctx:(id)arg2 ;
+(id)predicateForEpisodesOnUnplayedTabOnPodcastUuid:(id)arg1 ctx:(id)arg2 ;
-(void)setPlayed:(char)arg1 manually:(char)arg2 source:(int)arg3 ;
-(unsigned)reasonForNotPlayable;
-(void)setPlayState:(long long)arg1 manually:(char)arg2 source:(int)arg3 ;
-(void)setLastDatePlayed:(double)arg1 ;
-(void)setMetadataFirstSyncEligible:(char)arg1 ;
-(void)setNew:(char)arg1 source:(int)arg2 ;
-(void)updateUPPIdentifierIfNeeded;
-(char)isExternalType;
-(id)defaultArtworkImageWithSize:(CGSize)arg1 ;
-(id)playStatusImageForTheme:(id)arg1 ;
-(char)isBackCatalogItem;
-(void)_setValue:(id)arg1 forKey:(id)arg2 asynchronously:(char)arg3 ;
-(id)lazyDescriptionWithHTML:(char)arg1 ;
-(void)updateUPPTimestamp;
-(void)setPlayhead:(float)arg1 ;
-(float)endOfTrack;
-(char)isUserEpisode;
-(char)isInPodcastDetailsUnplayedTab;
-(id)artworkImageWithSize:(CGSize)arg1 ;
-(id)playStatusImage;
-(id)bestTitle;
-(void)incremementPlayCount;
-(char)isPartiallyPlayed;
-(char)isUnplayed;
-(char)isVisuallyPlayed;
-(char)isPlayheadResumable;
-(void)setStoreTrackId:(long long)arg1 ;
-(id)metricsContentIdentifier;
-(id)bestUrl;
-(char)isEpisodeVisited;
-(char)hasValidDownloadManagerPath;
-(char)isDownloaded;
-(void)setPlayCount:(long long)arg1 ;
-(char)isDownloadable;
-(float)playbackProgress;
-(char)isMedia;
-(char)isPlayable;
-(char)isAudio;
-(void)setUti:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(char)isVideo;
-(char)isSaved;
-(char)isPlayed;
-(void)setItemDescription:(NSString *)arg1 ;
-(void)setPodcast:(MTPodcast *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setSaved:(char)arg1 ;
-(float)timeRemaining;
-(char)isRestricted;
-(void)setPersistentID:(long long)arg1 ;
-(void)setAssetURL:(NSString *)arg1 ;
@end
