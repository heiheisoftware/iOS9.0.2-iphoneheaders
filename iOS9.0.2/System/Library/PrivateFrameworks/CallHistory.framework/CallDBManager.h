/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DBManager;

@interface CallDBManager : NSObject {

	char _deviceUnlocked;
	unsigned char _dataStoreType;
	unsigned char _notifyDataStoreChangeReason;
	DBManager* _dbManager;

}

@property (retain) DBManager * dbManager;                                  //@synthesize dbManager=_dbManager - In the implementation block
@property (assign) char deviceUnlocked;                                    //@synthesize deviceUnlocked=_deviceUnlocked - In the implementation block
@property (assign) unsigned char dataStoreType;                            //@synthesize dataStoreType=_dataStoreType - In the implementation block
@property (assign) unsigned char notifyDataStoreChangeReason;              //@synthesize notifyDataStoreChangeReason=_notifyDataStoreChangeReason - In the implementation block
+(id)getDBLocationIsSandboxed:(char)arg1 isTemporary:(char)arg2 error:(unsigned char*)arg3 ;
+(id)dataStoreName;
+(id)modelURL;
-(id)init;
-(id)createManagedObjectContext;
-(id)tempDBLocation:(unsigned char*)arg1 ;
-(DBManager *)dbManager;
-(char)notifyDataStoreChanged;
-(unsigned char)dataStoreType;
-(void)setNotifyDataStoreChangeReason:(unsigned char)arg1 ;
-(void)handlePermanentCreated;
-(void)moveCallsFromTempDatabase;
-(void)createDataStore;
-(id)permDBLocation:(unsigned char*)arg1 ;
-(void)handleTemporaryCreated;
-(char)shouldCreatePermanent;
-(void)createPermanent;
-(char)shouldCreateTemporary;
-(void)createTemporary;
-(unsigned char)notifyDataStoreChangeReason;
-(void)setDataStoreType:(unsigned char)arg1 ;
-(void)reFetchState;
-(void)setDbManager:(DBManager *)arg1 ;
-(char)deviceUnlocked;
-(void)setDeviceUnlocked:(char)arg1 ;
-(void)registerForNotifications;
@end
