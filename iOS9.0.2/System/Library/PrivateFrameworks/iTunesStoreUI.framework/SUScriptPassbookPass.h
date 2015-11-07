/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class PKPass, NSString;

@interface SUScriptPassbookPass : SUScriptObject {

	PKPass* _pass;

}

@property (readonly) NSString * passTypeIdentifier; 
@property (readonly) NSString * passURL; 
@property (readonly) NSString * serialNumber; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSString *)passURL;
-(NSString *)serialNumber;
-(id)initWithPass:(id)arg1 ;
-(NSString *)passTypeIdentifier;
@end
