/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/XPCServices/IMRemoteURLConnectionAgent.xpc/IMRemoteURLConnectionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AWDServerConnection;

@interface IMRemoteURLAWDLogging : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AWDServerConnection* _AWDServerConnection;

}
+(id)sharedInstance;
-(id)_metricContainerForMetricType:(unsigned)arg1 ;
-(void)_submitAWDMetric:(id)arg1 withContainer:(id)arg2 ;
-(char)shouldSubmit;
-(void)_populateMetric:(id)arg1 withTiming:(id)arg2 ;
-(void)submitTiming:(id)arg1 withError:(id)arg2 ;
-(void)submitTiming:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
