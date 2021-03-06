/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/AXElementInteractionUIServer.axuiservice/AXElementInteractionUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXElementInteractionUIServer/AXElementInteractionUIServer-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface AXElementInteractionCursorView : UIView {

	float _cachedAlpha;
	char _isHidden;
	CGPathRef _path;
	UIColor* _backgroundColor;
	CGRect _cursorFrame;

}

@property (assign,nonatomic) char isHidden;                          //@synthesize isHidden=_isHidden - In the implementation block
@property (nonatomic,retain) CGPathRef path;                         //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) CGRect cursorFrame;                     //@synthesize cursorFrame=_cursorFrame - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
+(CGRect)resizeFrameForDisplay:(CGRect)arg1 ;
-(id)_retrieveFrameBezierPath:(CGRect)arg1 ;
-(id)_retrievePathBezierPaths;
-(void)_orderOut;
-(void)_orderIn;
-(void)setCursorFrame:(CGRect)arg1 ;
-(id)_retrieveBezierPaths:(CGRect)arg1 usingRealPaths:(char*)arg2 ;
-(CGRect)cursorFrame;
-(char)userInteractionEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)dealloc;
-(char)isHidden;
-(CGPathRef)path;
-(float)lineWidth;
-(void)setIsHidden:(char)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
@end

