/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/BrowserPanel.h>

@class WBUPrintPageRenderer, _WKFrameHandle, NSString;

@interface PrintBrowserPanel : NSObject <BrowserPanel> {

	WBUPrintPageRenderer* _pageRenderer;
	_WKFrameHandle* _frame;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)panelType;
-(id)printControllerForTabDocument:(id)arg1 printFooter:(char)arg2 ;
-(id)initWithFrame:(id)arg1 ;
@end
