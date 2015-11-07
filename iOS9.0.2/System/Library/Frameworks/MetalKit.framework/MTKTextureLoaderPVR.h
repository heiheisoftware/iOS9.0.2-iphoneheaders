/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MetalKit/MTKTextureLoaderData.h>

@interface MTKTextureLoaderPVR : MTKTextureLoaderData {

	unsigned _pvrFormat;
	unsigned _numSurfaces;

}
+(char)isPVRFile:(id)arg1 ;
-(char)loadData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)uploadDataWithOptions:(id)arg1 ;
-(char)determineFormat:(unsigned)arg1 options:(id)arg2 ;
-(void)determineBlockSize:(unsigned*)arg1 blocksWide:(unsigned*)arg2 blocksHigh:(unsigned*)arg3 bytesPerBlock:(unsigned*)arg4 fromFormat:(unsigned)arg5 width:(unsigned)arg6 andHeight:(unsigned)arg7 ;
-(void)dealloc;
@end
