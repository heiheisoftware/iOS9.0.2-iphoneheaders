/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol SKUISettingsDocumentViewDelegate;
@interface SKUISettingsDocumentView : UIView {

	id<SKUISettingsDocumentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKUISettingsDocumentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SKUISettingsDocumentViewDelegate>)arg1 ;
-(id<SKUISettingsDocumentViewDelegate>)delegate;
-(void)tintColorDidChange;
@end

