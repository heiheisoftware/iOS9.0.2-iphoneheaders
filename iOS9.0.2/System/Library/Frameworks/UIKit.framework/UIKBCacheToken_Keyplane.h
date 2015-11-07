/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBCacheToken.h>

@class NSString;

@interface UIKBCacheToken_Keyplane : UIKBCacheToken {

	CGSize _size;
	SCD_Union_UI83 _style;
	NSString* _geometrySetName;
	NSString* _keySetName;

}
+(id)tokenForKeyplane:(id)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(void)setSize:(CGSize)arg1 ;
-(SCD_Struct_UI37)styling;
-(void)setStyling:(SCD_Struct_UI37)arg1 ;
-(id)stringForSplitState:(char)arg1 ;
-(char)isUsableForCacheToken:(id)arg1 withRenderFlags:(int)arg2 ;
-(id)_initWithKeyplane:(id)arg1 keylayout:(id)arg2 ;
@end
