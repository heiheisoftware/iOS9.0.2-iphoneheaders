/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MobileMail/MobileMail-Structs.h>
@class NSObject, CRRecentContactsLibrary, _MessageAddressScannerQueue, MFMailMessageLibrary;

@interface MessageAddressScanner : NSObject {

	void* _ab;
	NSObject*<OS_dispatch_queue> _queue;
	CRRecentContactsLibrary* _recentsLibrary;
	DDScannerRef _scanner;
	_MessageAddressScannerQueue* _pendingRemovalQueue;
	unsigned _scheduledPendingRemovalQueueFlush : 1;
	MFMailMessageLibrary* _library;

}

@property (nonatomic,retain) MFMailMessageLibrary * library;              //@synthesize library=_library - In the implementation block
+(id)coreRecentsMetadataForMessage:(id)arg1 ;
+(id)weightForMessage:(id)arg1 addressBook:(void*)arg2 ;
+(id)sharedInstance;
-(void)_messagesWillBeCompacted:(id)arg1 ;
-(void)scanSummary:(id)arg1 forMessage:(id)arg2 ;
-(void)_messagesWereCompacted:(id)arg1 ;
-(id)recentsLibrary;
-(void)_messagesFlagsChanged:(id)arg1 ;
-(void)_scheduleRemovalOfDetectedAddressesInMessages:(id)arg1 ;
-(void)_addAddressDetectorResult:(DDResultRef)arg1 forMessage:(id)arg2 ;
-(void)handleAddressBookChange;
-(DDScannerRef)scanner;
-(MFMailMessageLibrary *)library;
-(void)setLibrary:(MFMailMessageLibrary *)arg1 ;
-(void)dealloc;
-(id)init;
-(void*)addressBook;
@end

