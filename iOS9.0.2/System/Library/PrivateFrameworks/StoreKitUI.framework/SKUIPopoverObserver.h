/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPopoverControllerDelegate.h>

@class UIPopoverController, NSString;

@interface SKUIPopoverObserver : NSObject <UIPopoverControllerDelegate> {

	UIPopoverController* _popoverController;
	SEL _selector;
	id _target;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)dismissPopoverAnimated:(char)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)initWithPopoverController:(id)arg1 ;
-(void)setTarget:(id)arg1 selector:(SEL)arg2 ;
@end
