/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@interface UITextMagnifierRenderer : UIView {

	int m_autoscrollDirections;
	int m_magnifierMethod;

}

@property (assign,nonatomic) int autoscrollDirections; 
@property (assign,nonatomic) int magnifierMethod; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setAutoscrollDirections:(int)arg1 ;
-(void)drawMagnifier:(CGRect)arg1 ;
-(void)drawAutoscroller:(CGRect)arg1 ;
-(int)magnifierMethod;
-(int)autoscrollDirections;
-(void)setMagnifierMethod:(int)arg1 ;
@end

