/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/navd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEONavdXPCInterface <NSObject>
@required
-(void)forceWork;
-(void)forceCacheRefresh;
-(void)didPostUINotification:(unsigned)arg1 forDestination:(id)arg2 fromClient:(id)arg3;
-(void)forceNone;
-(void)forceHome;
-(void)statusWithCallback:(/*^block*/id)arg1;
-(void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2;
-(void)stopMonitoringSuggestionsForClient:(id)arg1;
-(void)startMonitoringSuggestionsForClient:(id)arg1;
-(void)startMonitoringDestination:(id)arg1 forClient:(id)arg2;

@end

