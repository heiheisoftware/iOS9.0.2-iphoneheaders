/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableIndexSet;

@interface GKLeaderboardUpdate : NSObject {

	NSMutableIndexSet* _insertedIndexes;
	NSMutableIndexSet* _updatedIndexes;
	NSMutableIndexSet* _removedIndexes;

}

@property (nonatomic,retain) NSMutableIndexSet * insertedIndexes;              //@synthesize insertedIndexes=_insertedIndexes - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * updatedIndexes;               //@synthesize updatedIndexes=_updatedIndexes - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * removedIndexes;               //@synthesize removedIndexes=_removedIndexes - In the implementation block
-(id)indexPathsForIndexes:(id)arg1 section:(int)arg2 ;
-(void)setRemovedIndexes:(NSMutableIndexSet *)arg1 ;
-(NSMutableIndexSet *)insertedIndexes;
-(NSMutableIndexSet *)removedIndexes;
-(NSMutableIndexSet *)updatedIndexes;
-(void)setInsertedIndexes:(NSMutableIndexSet *)arg1 ;
-(void)setUpdatedIndexes:(NSMutableIndexSet *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end
