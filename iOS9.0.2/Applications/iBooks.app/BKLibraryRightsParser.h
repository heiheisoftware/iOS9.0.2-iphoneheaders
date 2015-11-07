/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableDictionary, NSData, NSString, NSMutableString;

@interface BKLibraryRightsParser : NSObject <NSXMLParserDelegate> {

	NSMutableDictionary* _rightsInfo;
	NSData* _sinfData;
	NSString* _rightsId;
	NSMutableString* _foundText;

}

@property (nonatomic,retain) NSMutableDictionary * rightsInfo;              //@synthesize rightsInfo=_rightsInfo - In the implementation block
@property (nonatomic,retain) NSData * sinfData;                             //@synthesize sinfData=_sinfData - In the implementation block
@property (nonatomic,copy) NSString * rightsId;                             //@synthesize rightsId=_rightsId - In the implementation block
@property (nonatomic,copy) NSMutableString * foundText;                     //@synthesize foundText=_foundText - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableDictionary *)rightsInfo;
-(void)setRightsId:(NSString *)arg1 ;
-(void)setSinfData:(NSData *)arg1 ;
-(NSMutableString *)foundText;
-(NSString *)rightsId;
-(NSData *)sinfData;
-(void)setRightsInfo:(NSMutableDictionary *)arg1 ;
-(void)setFoundText:(NSMutableString *)arg1 ;
-(id)init;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 foundCDATA:(id)arg2 ;
@end
