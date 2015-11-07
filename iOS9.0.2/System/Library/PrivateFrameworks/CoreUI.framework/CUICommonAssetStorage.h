/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSData, NSSet;

@interface CUICommonAssetStorage : NSObject {

	carheader* _header;
	renditionkeyfmt* _keyfmt;
	void* _imagedb;
	void* _colordb;
	void* _fontdb;
	void* _fontsizedb;
	void* _zcglyphdb;
	void* _zcbezeldb;
	void* _facetKeysdb;
	NSData* _globals;
	char _swap;
	NSSet* _externalTags;

}
+(void)initialize;
-(void)dealloc;
-(id)description;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(id)uuid;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long)arg2 ;
-(char)assetExistsForKey:(id)arg1 ;
-(id)renditionNameForKeyList:(renditionkeytoken*)arg1 ;
-(unsigned)colorSpaceID;
-(const renditionkeyfmt*)keyFormat;
-(int)maximumRenditionKeyTokenCount;
-(char)usesCUISystemThemeRenditionKey;
-(id)zeroCodeGlyphList;
-(id)initWithPath:(id)arg1 forWriting:(char)arg2 ;
-(char)_commonInitWithStorage:(BOMStorageRef)arg1 forWritting:(char)arg2 ;
-(void)_initDefaultHeaderVersion:(double)arg1 versionString:(const char*)arg2 ;
-(void)_swapHeader;
-(void)_bringHeaderInfoUpToDate;
-(void)_swapKeyFormat;
-(long)_storagefileTimestamp;
-(char)assetExistsForKeyData:(const void*)arg1 length:(unsigned long)arg2 ;
-(id)assetKeysMatchingBlock:(/*^block*/id)arg1 ;
-(char)swapped;
-(void)_swapRenditionKeyArray:(unsigned short*)arg1 ;
-(renditionkeytoken)_swapRenditionKeyToken:(renditionkeytoken)arg1 ;
-(void)_swapZeroCodeInformation:(SCD_Struct_CU17*)arg1 ;
-(id)_zeroCodeListFromTree:(const void*)arg1 ;
-(const FontValue*)_fontValueForFontType:(id)arg1 ;
-(unsigned)storageVersion;
-(unsigned)coreuiVersion;
-(long)storageTimestamp;
-(int)keySemantics;
-(id)keyFormatData;
-(id)catalogGlobalData;
-(unsigned)renditionCount;
-(unsigned)associatedChecksum;
-(id)assetForKey:(id)arg1 ;
-(id)allAssetKeys;
-(const renditionkeytoken*)renditionKeyForName:(const char*)arg1 hotSpot:(CGPoint*)arg2 ;
-(id)allRenditionNames;
-(id)zeroCodeBezelList;
-(char)getColor:(colordef*)arg1 forName:(const char*)arg2 ;
-(char)hasColorForName:(const char*)arg1 ;
-(char)getFontName:(id*)arg1 baselineOffset:(float*)arg2 forFontType:(id)arg3 ;
-(char)getBaselineOffset:(float*)arg1 forFontType:(id)arg2 ;
-(float)fontSizeForFontSizeType:(id)arg1 ;
-(id)externalTags;
-(unsigned)schemaVersion;
-(void)finalize;
-(const char*)versionString;
@end
