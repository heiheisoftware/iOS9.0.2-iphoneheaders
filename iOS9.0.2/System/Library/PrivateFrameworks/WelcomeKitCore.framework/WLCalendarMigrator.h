/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WelcomeKitCore/WLMigrationWebService.h>

@class EKEventStore;

@interface WLCalendarMigrator : WLMigrationWebService {

	EKEventStore* _eventStore;

}
+(id)contentType;
-(id)contentType;
-(void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2 ;
-(void)_importDataRecord:(id)arg1 summary:(id)arg2 ;
@end

