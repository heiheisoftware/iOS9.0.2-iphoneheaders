/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMFoundation/IMHTMLToSuperParserContext.h>

@class NSMutableArray, SMSTextPart, NSArray;

@interface SMSToSuperParserContext : IMHTMLToSuperParserContext {

	NSMutableArray* _orderedParts;
	SMSTextPart* _currentTextPart;

}

@property (nonatomic,retain,readonly) NSArray * orderedParts;              //@synthesize orderedParts=_orderedParts - In the implementation block
-(void)dealloc;
-(id)name;
-(NSArray *)orderedParts;
-(void)_addPart:(id)arg1 ;
@end
