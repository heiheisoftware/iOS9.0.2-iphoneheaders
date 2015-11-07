/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate, NSMutableSet;

@interface NNMKSyncedMessage : NSObject {

	char _usedProtectedChannelForMessageSync;
	char _usedNotificationPriorityForMessageSync;
	char _contentSyncedUsingNotificationPriority;
	char _contentSyncedBecauseUserRequested;
	char _contentSynced;
	char _contentRequestedByUser;
	char _resendRequested;
	NSString* _messageId;
	unsigned _status;
	unsigned _statusVersion;
	NSDate* _dateReceived;
	NSMutableSet* _attachmentsContentIdsNotYetSynced;
	NSString* _conversationId;
	unsigned _resendInterval;
	unsigned _contentResendInterval;

}

@property (nonatomic,retain) NSString * messageId;                                          //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic) unsigned status;                                               //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned statusVersion;                                        //@synthesize statusVersion=_statusVersion - In the implementation block
@property (nonatomic,retain) NSDate * dateReceived;                                         //@synthesize dateReceived=_dateReceived - In the implementation block
@property (assign,nonatomic) char usedProtectedChannelForMessageSync;                       //@synthesize usedProtectedChannelForMessageSync=_usedProtectedChannelForMessageSync - In the implementation block
@property (assign,nonatomic) char usedNotificationPriorityForMessageSync;                   //@synthesize usedNotificationPriorityForMessageSync=_usedNotificationPriorityForMessageSync - In the implementation block
@property (assign,nonatomic) char contentSyncedUsingNotificationPriority;                   //@synthesize contentSyncedUsingNotificationPriority=_contentSyncedUsingNotificationPriority - In the implementation block
@property (assign,nonatomic) char contentSyncedBecauseUserRequested;                        //@synthesize contentSyncedBecauseUserRequested=_contentSyncedBecauseUserRequested - In the implementation block
@property (assign,nonatomic) char contentSynced;                                            //@synthesize contentSynced=_contentSynced - In the implementation block
@property (assign,nonatomic) char contentRequestedByUser;                                   //@synthesize contentRequestedByUser=_contentRequestedByUser - In the implementation block
@property (nonatomic,retain) NSMutableSet * attachmentsContentIdsNotYetSynced;              //@synthesize attachmentsContentIdsNotYetSynced=_attachmentsContentIdsNotYetSynced - In the implementation block
@property (nonatomic,retain) NSString * conversationId;                                     //@synthesize conversationId=_conversationId - In the implementation block
@property (assign,nonatomic) char resendRequested;                                          //@synthesize resendRequested=_resendRequested - In the implementation block
@property (assign,nonatomic) unsigned resendInterval;                                       //@synthesize resendInterval=_resendInterval - In the implementation block
@property (assign,nonatomic) unsigned contentResendInterval;                                //@synthesize contentResendInterval=_contentResendInterval - In the implementation block
-(id)init;
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
-(void)setConversationId:(NSString *)arg1 ;
-(void)setDateReceived:(NSDate *)arg1 ;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(NSDate *)dateReceived;
-(NSString *)conversationId;
-(void)setStatusVersion:(unsigned)arg1 ;
-(unsigned)statusVersion;
-(char)usedProtectedChannelForMessageSync;
-(char)usedNotificationPriorityForMessageSync;
-(char)contentSynced;
-(char)contentSyncedUsingNotificationPriority;
-(char)contentSyncedBecauseUserRequested;
-(char)contentRequestedByUser;
-(char)resendRequested;
-(unsigned)resendInterval;
-(unsigned)contentResendInterval;
-(NSMutableSet *)attachmentsContentIdsNotYetSynced;
-(void)setUsedProtectedChannelForMessageSync:(char)arg1 ;
-(void)setUsedNotificationPriorityForMessageSync:(char)arg1 ;
-(void)setContentSynced:(char)arg1 ;
-(void)setContentSyncedUsingNotificationPriority:(char)arg1 ;
-(void)setContentRequestedByUser:(char)arg1 ;
-(void)setAttachmentsContentIdsNotYetSynced:(NSMutableSet *)arg1 ;
-(void)setResendRequested:(char)arg1 ;
-(void)setResendInterval:(unsigned)arg1 ;
-(void)setContentResendInterval:(unsigned)arg1 ;
-(void)setContentSyncedBecauseUserRequested:(char)arg1 ;
-(id)initWithMessage:(id)arg1 ;
@end
