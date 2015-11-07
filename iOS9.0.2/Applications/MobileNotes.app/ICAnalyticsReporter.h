/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/ICAnalyticsReporterBase.h>

@class NSDate, NSMutableDictionary, NSMutableSet;

@interface ICAnalyticsReporter : ICAnalyticsReporterBase {

	char _previousLoggingHasFinished;
	NSDate* _timeStampForPreviousLogging;
	NSMutableDictionary* _blocksForNonCountKeys;
	NSMutableDictionary* _blocksForCountKeys;
	NSMutableSet* _distributionKeysToResetBeforeLogging;
	unsigned _keysThatHaveFinishedLogging;

}

@property (assign) char previousLoggingHasFinished;                                  //@synthesize previousLoggingHasFinished=_previousLoggingHasFinished - In the implementation block
@property (nonatomic,retain) NSDate * timeStampForPreviousLogging;                   //@synthesize timeStampForPreviousLogging=_timeStampForPreviousLogging - In the implementation block
@property (retain) NSMutableDictionary * blocksForNonCountKeys;                      //@synthesize blocksForNonCountKeys=_blocksForNonCountKeys - In the implementation block
@property (retain) NSMutableDictionary * blocksForCountKeys;                         //@synthesize blocksForCountKeys=_blocksForCountKeys - In the implementation block
@property (retain) NSMutableSet * distributionKeysToResetBeforeLogging;              //@synthesize distributionKeysToResetBeforeLogging=_distributionKeysToResetBeforeLogging - In the implementation block
@property (assign) unsigned keysThatHaveFinishedLogging;                             //@synthesize keysThatHaveFinishedLogging=_keysThatHaveFinishedLogging - In the implementation block
+(id)sharedReporter;
-(NSDate *)timeStampForPreviousLogging;
-(void)performRepetitiveClearAndLogForNonCountKeys:(id)arg1 ;
-(void)incrementCountForKey:(id)arg1 ;
-(void)findOutAndLogChecklistLengthFromTrackedToDoParagraphs:(id)arg1 ;
-(void)setPreviousLoggingHasFinished:(char)arg1 ;
-(NSMutableDictionary *)blocksForNonCountKeys;
-(NSMutableSet *)distributionKeysToResetBeforeLogging;
-(id)legacyFetchRequestWithEntityName:(id)arg1 andPredicate:(id)arg2 ;
-(id)legacyContext;
-(NSMutableDictionary *)blocksForCountKeys;
-(void)performLoggingOnlyForNonCountKeys:(id)arg1 ;
-(char)previousLoggingHasFinished;
-(void)performClearAndLogForNonCountKeys;
-(void)setKeysThatHaveFinishedLogging:(unsigned)arg1 ;
-(unsigned)keysThatHaveFinishedLogging;
-(id)ICFetchRequestWithEntityName:(id)arg1 andPredicate:(id)arg2 ;
-(void)setTimeStampForPreviousLogging:(NSDate *)arg1 ;
-(void)setBlocksForNonCountKeys:(NSMutableDictionary *)arg1 ;
-(void)setBlocksForCountKeys:(NSMutableDictionary *)arg1 ;
-(void)setDistributionKeysToResetBeforeLogging:(NSMutableSet *)arg1 ;
-(id)init;
@end
