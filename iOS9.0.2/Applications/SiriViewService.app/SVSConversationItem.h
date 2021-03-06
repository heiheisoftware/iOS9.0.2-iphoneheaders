/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <SiriViewService/AFUIConversationItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SVSMutableConversationItem, NSString;

@interface SVSConversationItem : NSObject <AFUIConversationItem, NSCopying> {

	SVSMutableConversationItem* _delegateItem;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)associatedDataStore;
-(id)aceCommandIdentifier;
-(id)initWithType:(int)arg1 aceObject:(id)arg2 dialogPhase:(id)arg3 presentationState:(int)arg4 aceCommandIdentifier:(id)arg5 virgin:(char)arg6 associatedDataStore:(id)arg7 ;
-(id)initWithIdentifier:(id)arg1 revisionIdentifier:(id)arg2 type:(int)arg3 aceObject:(id)arg4 dialogPhase:(id)arg5 presentationState:(int)arg6 aceCommandIdentifier:(id)arg7 virgin:(char)arg8 associatedDataStore:(id)arg9 ;
-(id)initWithDelegateItem:(id)arg1 ;
-(id)revisionIdentifier;
-(NSString *)description;
-(id)identifier;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)presentationState;
-(id)dialogPhase;
-(id)aceObject;
-(char)isVirgin;
@end

