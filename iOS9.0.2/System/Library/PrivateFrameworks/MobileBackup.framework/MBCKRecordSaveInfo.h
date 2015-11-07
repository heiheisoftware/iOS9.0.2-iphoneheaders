/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MBCKSaveDelegate;
@class CKRecord, NSError, NSDate;

@interface MBCKRecordSaveInfo : NSObject {

	id<MBCKSaveDelegate> _delegate;
	CKRecord* _record;
	unsigned _recordSize;
	CKRecord* _serverRecord;
	NSError* _error;
	NSDate* _retryDate;
	unsigned _saveAttempts;
	unsigned _state;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic,__weak) id<MBCKSaveDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKRecord * record;                                 //@synthesize record=_record - In the implementation block
@property (assign) unsigned recordSize;                                         //@synthesize recordSize=_recordSize - In the implementation block
@property (nonatomic,retain) CKRecord * serverRecord;                           //@synthesize serverRecord=_serverRecord - In the implementation block
@property (nonatomic,retain) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSDate * retryDate;                                //@synthesize retryDate=_retryDate - In the implementation block
@property (assign) unsigned saveAttempts;                                       //@synthesize saveAttempts=_saveAttempts - In the implementation block
@property (assign) unsigned state;                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id completionHandler;                                //@synthesize completionHandler=_completionHandler - In the implementation block
-(unsigned)recordSize;
-(void)setRecordSize:(unsigned)arg1 ;
-(NSDate *)retryDate;
-(void)setRetryDate:(NSDate *)arg1 ;
-(NSError *)error;
-(CKRecord *)record;
-(void)setDelegate:(id<MBCKSaveDelegate>)arg1 ;
-(id<MBCKSaveDelegate>)delegate;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setRecord:(CKRecord *)arg1 ;
-(CKRecord *)serverRecord;
-(void)setServerRecord:(CKRecord *)arg1 ;
-(unsigned)saveAttempts;
-(void)setSaveAttempts:(unsigned)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end
