/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceReferable.h>

@class NSString;

@interface SABaseAceObject : AceObject <SAAceReferable>

@property (nonatomic,copy) NSString * aceId; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)baseAceObject;
+(id)baseAceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)aceId;
-(void)setAceId:(NSString *)arg1 ;
@end

