/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRCModule.h>
#import <libobjc.A.dylib/BRCLowDiskDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class BRCAccountSession, NSString, NSMutableSet, NSMutableDictionary, NSObject, BRCStagePersistedState, brc_task_tracker;

@interface BRCStageRegistry : NSObject <BRCModule, BRCLowDiskDelegate> {

	BRCAccountSession* _session;
	NSString* _stageDirectoryPath[6];
	unsigned long long _stageDirectoryFileID[6];
	NSMutableSet* _unflushedStagedFileIDs;
	NSMutableSet* _containersWithUnflushedFileIDs;
	NSMutableSet* _activeUploadStageIDs;
	NSMutableSet* _activeDownloadStageIDs;
	NSMutableDictionary* _lockedFileIDs;
	NSObject*<OS_dispatch_source> _lockedTestTimer;
	NSObject*<OS_dispatch_queue> _flushingQueue;
	BRCStagePersistedState* _persistedState;
	char _lowDiskSpace;
	Ai _suspendCount;
	NSObject*<OS_dispatch_queue> _queue;
	brc_task_tracker* _tracker;
	char _isCancelled;
	int _deviceID;

}

@property (nonatomic,readonly) int deviceID;                        //@synthesize deviceID=_deviceID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char isCancelled;                      //@synthesize isCancelled=_isCancelled - In the implementation block
+(void)migrateStageToVersion2_0WithSession:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)suspend;
-(char)isCancelled;
-(void)resume;
-(void)close;
-(void)willFlushAllStagedFileIDs;
-(id)initWithAccountSession:(id)arg1 ;
-(long long)purgeSpace:(long long)arg1 withUrgency:(int)arg2 ;
-(void)cleanupStagedDownloadWithID:(id)arg1 forItemID:(id)arg2 ;
-(id)createURLForDownloadWithStageID:(id)arg1 name:(id)arg2 ;
-(void)forgetWatchedLockedFileIDsForContainer:(id)arg1 ;
-(void)forgetWatchedLockedFileID:(unsigned long long)arg1 ;
-(char)moveFromStageToGraveyard:(unsigned long long)arg1 forItemID:(id)arg2 ;
-(char)makeSideFaultInStageGatherFileID:(unsigned long long*)arg1 generationID:(unsigned*)arg2 documentID:(unsigned*)arg3 properties:(id)arg4 inContainer:(id)arg5 forCreation:(char)arg6 error:(id*)arg7 ;
-(char)didFlushStagedFileID:(unsigned long long)arg1 ;
-(id)createURLForUploadWithStageID:(id)arg1 name:(id)arg2 ;
-(void)associateUploadStageID:(id)arg1 withOperation:(id)arg2 ;
-(char)copyPackageFileWithPackageFd:(int)arg1 toStageFd:(int)arg2 relpath:(id)arg3 ;
-(int)_performInStageDirectory:(unsigned char)arg1 block:(/*^block*/id)arg2 ;
-(long long)garbageCollectSpace:(long long)arg1 withUrgency:(int)arg2 ;
-(void)disarmLockedTestTimer;
-(void)_testLockedFiles;
-(int)_openStageDirectory:(unsigned char)arg1 ;
-(id)nonLocalFaultURLForAdditionName:(id)arg1 ;
-(void)applyMetadataOnFileDescriptor:(int)arg1 liveFileDescriptor:(int)arg2 container:(id)arg3 statInfo:(id)arg4 version:(id)arg5 ;
-(id)_pathInStage:(unsigned long long)arg1 index:(unsigned char*)arg2 generationID:(unsigned*)arg3 ;
-(void)cleanupStagedUploadWithID:(id)arg1 ;
-(char)_graveyardAt:(int)arg1 path:(id)arg2 forItemID:(id)arg3 ;
-(void)_watchLockedRelpath:(id)arg1 ;
-(long long)purgeGraveyardSpace:(long long)arg1 withUrgency:(int)arg2 ;
-(long long)_purgeSpaceUnderQueue:(long long)arg1 withUrgency:(int)arg2 ;
-(void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(char)arg2 ;
-(char)mayLockFileID:(unsigned long long)arg1 ;
-(char)makeDirectoryInStageGatherFileID:(unsigned long long*)arg1 generationID:(unsigned*)arg2 inContainer:(id)arg3 error:(id*)arg4 ;
-(id)makeNonLocalVersionSideFaultWithAdditionName:(id)arg1 container:(id)arg2 statInfo:(id)arg3 version:(id)arg4 error:(id*)arg5 ;
-(char)moveFromStage:(unsigned long long)arg1 toPath:(id)arg2 fileName:(id)arg3 error:(id*)arg4 ;
-(void)associateDownloadStageID:(id)arg1 withOperation:(id)arg2 ;
-(char)rememberStagedDownloadWithID:(id)arg1 gatherFileID:(unsigned long long*)arg2 generationID:(unsigned*)arg3 documentID:(unsigned*)arg4 container:(id)arg5 error:(id*)arg6 ;
-(char)moveOldVersionFromPath:(id)arg1 error:(id*)arg2 ;
-(char)moveToGraveyardFromPath:(id)arg1 forItemID:(id)arg2 error:(id*)arg3 ;
-(char)existsInStage:(unsigned long long)arg1 generationID:(unsigned*)arg2 ;
-(char)existsInOldVersionStage:(unsigned long long)arg1 generationID:(unsigned*)arg2 ;
-(char)transferDocumentID:(unsigned)arg1 fromOldVersionStage:(unsigned long long)arg2 toStage:(unsigned long long)arg3 ;
-(long long)purgableSpace;
-(void)setIsCancelled:(char)arg1 ;
-(void)open;
-(int)deviceID;
@end

