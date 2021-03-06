/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLService.h>

@class NSMutableDictionary;

@interface PLSmartPLService : PLService {

	NSMutableDictionary* _smartPLHelpers;

}

@property (retain) NSMutableDictionary * smartPLHelpers;              //@synthesize smartPLHelpers=_smartPLHelpers - In the implementation block
+(id)defaults;
+(void)load;
+(id)entryEventPointDefinitionSmartTrigger;
+(id)entryEventPointDefinitionSample;
+(id)entryEventPointDefinitions;
-(id)init;
-(NSMutableDictionary *)smartPLHelpers;
-(void)logEventPointHeapForProcessName:(id)arg1 ;
-(void)logEventPointVMMapForProcessName:(id)arg1 ;
-(void)logEventPointStackShotWithReason:(id)arg1 ;
-(void)logEventPointSampleForProcessName:(id)arg1 ;
-(void)logEventPointSmartPLFiredFromAuxilary:(Class)arg1 withReason:(id)arg2 ;
-(void)logEventPointHeap;
-(void)logEventPointVMMap;
-(void)logEventPointStackShot;
-(void)logEventPointSample;
-(void)vmmapProcessName:(id)arg1 ;
-(void)setSmartPLHelpers:(NSMutableDictionary *)arg1 ;
-(void)initOperatorDependancies;
@end

