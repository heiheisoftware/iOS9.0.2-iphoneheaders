/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKAppMenuBarDocumentDelegate.h>

@protocol SKUIMenuBarViewElementConfigurationDelegate, _SKUIMenuBarViewElementConfigurationReloadDelegate;
@class IKAppMenuBarDocument, NSArray, SKUIMenuItemViewElement, NSString;

@interface SKUIMenuBarViewElementConfiguration : NSObject <IKAppMenuBarDocumentDelegate> {

	IKAppMenuBarDocument* _menuBarDocument;
	int _menuBarStyle;
	NSArray* _menuItemViewElements;
	SKUIMenuItemViewElement* _selectedMenuItemViewElement;
	char _needsReload;
	id<SKUIMenuBarViewElementConfigurationDelegate> _delegate;
	id<_SKUIMenuBarViewElementConfigurationReloadDelegate> _reloadDelegate;

}

@property (assign,nonatomic,__weak) id<SKUIMenuBarViewElementConfigurationDelegate> delegate;                                                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int menuBarStyle; 
@property (nonatomic,readonly) unsigned numberOfMenuItems; 
@property (nonatomic,readonly) SKUIMenuItemViewElement * selectedMenuItemViewElement;                                                                                     //@synthesize selectedMenuItemViewElement=_selectedMenuItemViewElement - In the implementation block
@property (assign,setter=_setNeedsReload:,getter=_needsReload,nonatomic) char needsReload;                                                                                //@synthesize needsReload=_needsReload - In the implementation block
@property (assign,setter=_setReloadDelegate:,getter=_reloadDelegate,nonatomic,__weak) id<_SKUIMenuBarViewElementConfigurationReloadDelegate> reloadDelegate;              //@synthesize reloadDelegate=_reloadDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUIMenuBarViewElementConfigurationDelegate>)arg1 ;
-(id<SKUIMenuBarViewElementConfigurationDelegate>)delegate;
-(void)_ensureDataLoaded;
-(id)documentForEntityUniqueIdentifier:(id)arg1 ;
-(id)documentOptionsForEntityUniqueIdentifier:(id)arg1 ;
-(void)menuBarDocument:(id)arg1 didReplaceDocumentForMenuItem:(id)arg2 ;
-(void)menuBarDocument:(id)arg1 didReplaceDocumentForEntityWithUniqueIdentifier:(id)arg2 ;
-(void)menuBarDocument:(id)arg1 didSelectMenuItem:(id)arg2 animated:(char)arg3 ;
-(id)_initWithMenuBarDocument:(id)arg1 ;
-(int)menuBarStyle;
-(unsigned)numberOfMenuItems;
-(SKUIMenuItemViewElement *)selectedMenuItemViewElement;
-(id)documentForMenuItemAtIndex:(unsigned)arg1 ;
-(id)documentOptionsForMenuItemAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfMenuItemViewElement:(id)arg1 ;
-(void)contentWillAppearForMenuItemAtIndex:(unsigned)arg1 withEntityValueProvider:(id)arg2 clientContext:(id)arg3 ;
-(void)_reloadWithMenuBarStyle:(int)arg1 menuItemViewElements:(id)arg2 ;
-(char)_needsReload;
-(void)_setNeedsReload:(char)arg1 ;
-(id)_reloadDelegate;
-(void)_setReloadDelegate:(id)arg1 ;
@end
