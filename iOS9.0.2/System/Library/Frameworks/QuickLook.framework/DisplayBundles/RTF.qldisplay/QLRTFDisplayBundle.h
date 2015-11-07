/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/RTF.qldisplay/RTF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RTF/RTF-Structs.h>
#import <QuickLook/QLDisplayBundle.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSAttributedString, UITextView, NSString;

@interface QLRTFDisplayBundle : QLDisplayBundle <UITextViewDelegate, UIGestureRecognizerDelegate> {

	NSAttributedString* _content;

}

@property (nonatomic,retain) UITextView * view; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_loadContent;
-(void)loadWithHints:(id)arg1 ;
-(char)needsContentInset;
-(int)airPlayMode;
-(id)printPageHelper;
-(void)dealloc;
-(id)scrollView;
-(void)loadView;
@end
