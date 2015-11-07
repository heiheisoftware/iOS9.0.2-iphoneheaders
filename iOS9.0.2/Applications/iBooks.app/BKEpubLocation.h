/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKLocation.h>
#import <iBooks/BKDOMRangeable.h>

@class NSArray;

@interface BKEpubLocation : BKLocation <BKDOMRangeable> {

	NSArray* _startPath;
	unsigned _startOffset;
	NSArray* _endPath;
	unsigned _endOffset;
	char _singlePage;

}

@property (nonatomic,retain) NSArray * startPath;               //@synthesize startPath=_startPath - In the implementation block
@property (assign,nonatomic) unsigned startOffset;              //@synthesize startOffset=_startOffset - In the implementation block
@property (nonatomic,retain) NSArray * endPath;                 //@synthesize endPath=_endPath - In the implementation block
@property (assign,nonatomic) unsigned endOffset;                //@synthesize endOffset=_endOffset - In the implementation block
@property (assign,nonatomic) char singlePage;                   //@synthesize singlePage=_singlePage - In the implementation block
+(id)locationForNode:(id)arg1 inOrdinal:(unsigned)arg2 ;
+(id)locationForRange:(id)arg1 inOrdinal:(unsigned)arg2 ;
+(id)deserializeLocationFromDictionary:(id)arg1 ;
-(id)DOMRangeInWebView:(id)arg1 ;
-(id)extendedDOMRangeInWebView:(id)arg1 ;
-(NSRange)adjustRangeForSinglePageMode:(NSRange)arg1 ;
-(void)setSinglePage:(char)arg1 ;
-(NSArray *)startPath;
-(void)setStartPath:(NSArray *)arg1 ;
-(void)setEndPath:(NSArray *)arg1 ;
-(id)serializeLocationToDictionary;
-(id)initWithLocationDictionary:(id)arg1 ;
-(char)singlePage;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)endOffset;
-(unsigned)startOffset;
-(void)setStartOffset:(unsigned)arg1 ;
-(void)setEndOffset:(unsigned)arg1 ;
-(unsigned)pageOffset;
-(NSArray *)endPath;
@end
