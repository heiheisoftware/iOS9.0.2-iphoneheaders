/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OKWidgetView.h>

@class NSURL, OKDocument, OKPresentationViewController;

@interface OKWidgetOpusView : OKWidgetView {

	NSURL* _url;
	OKDocument* _document;
	OKPresentationViewController* _presentationViewController;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(char)prepareForDisplay:(char)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(char)prepareForWarmup:(char)arg1 ;
-(char)prepareForUnload:(char)arg1 ;
-(void)setSettingUrl:(id)arg1 ;
-(void)_loadDocumentIfNeeded;
@end
