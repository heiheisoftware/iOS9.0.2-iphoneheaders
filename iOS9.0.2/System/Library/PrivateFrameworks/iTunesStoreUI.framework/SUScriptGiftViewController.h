/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class SKUIItem;

@interface SUScriptGiftViewController : SUScriptViewController {

	int _giftCategory;
	SKUIItem* _item;

}

@property (nonatomic,readonly) int giftCategoryApps; 
@property (nonatomic,readonly) int giftCategoryBooks; 
@property (nonatomic,readonly) int giftCategoryMedia; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)newNativeViewController;
-(void)setCreditGiftStyle:(int)arg1 ;
-(void)setProductGiftItem:(id)arg1 ;
-(int)giftCategoryApps;
-(int)giftCategoryBooks;
-(int)giftCategoryMedia;
@end

