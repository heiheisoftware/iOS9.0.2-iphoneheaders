/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface ADResultObjectCache : NSObject {

	NSMutableDictionary* _requestMap;
	NSMutableSet* _requestsWithPhoneCall;

}
-(id)commandsForReply:(id)arg1 toCommand:(id)arg2 missingReferences:(id*)arg3 ;
-(void)addResultObjects:(id)arg1 ;
-(void)clearResultObjectsForRequestId:(id)arg1 ;
-(char)callIsPossibleForRequestId:(id)arg1 ;
-(char)hasResultObjectsForRequestId:(id)arg1 ;
-(id)objectsForIds:(id)arg1 missingReferences:(id*)arg2 ;
-(void)clearResultObjectsForAllRequestIdsExcept:(id)arg1 ;
-(id)_requestMap;
-(void)_addObjects:(id)arg1 forRequestId:(id)arg2 ;
-(id)commandsForSuccessReplyToCommand:(id)arg1 ;
@end

