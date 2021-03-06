/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>

@interface _DKStarkMonitor : _DKMonitor
+(id)_eventWithState:(id)arg1 ;
+(id)eventStream;
+(id)entitlements;
-(void)onCarplayIsConnectedAttributeNotification:(id)arg1 ;
-(void)saveCurrentState;
-(void)onServerConnectionDiedNotification:(id)arg1 ;
-(void)stop;
-(void)start;
-(void)registerForCallbacks;
@end

