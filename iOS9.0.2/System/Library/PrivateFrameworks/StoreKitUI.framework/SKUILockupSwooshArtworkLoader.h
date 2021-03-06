/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUISwooshArtworkLoader.h>

@class SKUIItemArtworkContext, SKUIVideoImageDataConsumer, UIImage, SKUILockupSwooshViewController;

@interface SKUILockupSwooshArtworkLoader : SKUISwooshArtworkLoader {

	SKUIItemArtworkContext* _context;
	SKUIVideoImageDataConsumer* _videoImageConsumer;
	UIImage* _videoPlaceholderImage;

}

@property (nonatomic,readonly) SKUILockupSwooshViewController * swooshViewController; 
-(id)placeholderImageForItem:(id)arg1 ;
-(id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2 ;
-(void)setImage:(id)arg1 forRequest:(id)arg2 ;
-(void)loadImagesForNextPageWithReason:(int)arg1 ;
-(char)loadImageForItem:(id)arg1 reason:(int)arg2 ;
-(char)loadImageForVideo:(id)arg1 reason:(int)arg2 ;
-(id)cachedImageForItem:(id)arg1 ;
-(id)cachedImageForVideo:(id)arg1 ;
-(id)placeholderImageForVideo:(id)arg1 ;
@end

