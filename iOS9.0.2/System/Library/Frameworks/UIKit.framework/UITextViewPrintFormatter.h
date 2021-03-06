/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewPrintFormatter.h>

@class NSArray;

@interface UITextViewPrintFormatter : UIViewPrintFormatter {

	struct {
		unsigned initializedUsedRects : 1;
	}  _textViewPrintFormatterFlags;
	NSArray* _pageData;

}
-(void)setTextAlignment:(int)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)attributedText;
-(id)font;
-(int)textAlignment;
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)_textView;
-(int)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(int)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(int)arg2 ;
-(id)_pageData;
@end

