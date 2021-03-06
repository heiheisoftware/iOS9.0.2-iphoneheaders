/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iap2d/iAP2EASession.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;
@class NSMutableArray, NSRecursiveLock, NSObject;

@interface iAP2EASessionBasic : iAP2EASession {

	unsigned short _maxPayloadSize;
	char* _transferBuffer;
	unsigned short _maxPayloadBufferSize;
	char* _payloadBuffer;
	NSMutableArray* _eaPacketPool;
	NSRecursiveLock* _packetPoolLock;
	char _continueRunningSession;
	char _startSessionTransmitted;
	NSObject*<OS_dispatch_queue> _continueRunningQueue;
	NSObject*<OS_dispatch_semaphore> _continueRunningSemaphore;
	NSObject*<OS_dispatch_queue> _msgSerialQueue;
	NSObject*<OS_dispatch_source> _listenSource;
	NSObject*<OS_dispatch_source> _readSource;

}
-(void)_changeListenerQueuePriorityHigh:(id)arg1 ;
-(void)_changeListenerQueuePriorityStop:(id)arg1 ;
-(void)sendEABufferDataToApp:(char*)arg1 withLength:(unsigned)arg2 ;
-(id)initWithClient:(id)arg1 connection:(id)arg2 protocolID:(unsigned char)arg3 sessionID:(unsigned short*)arg4 ;
-(char)closeDataPipes;
-(void)shuttingDownSession;
-(void)_openPipeToApp;
-(void)_openPipeFromApp;
-(id)_getUnusedEAPacket;
-(void)_releasePacketForSessionAfterUse:(id)arg1 ;
-(void)dealloc;
@end

