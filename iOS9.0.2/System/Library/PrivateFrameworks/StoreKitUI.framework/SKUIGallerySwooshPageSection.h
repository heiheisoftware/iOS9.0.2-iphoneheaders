/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUIGallerySwooshViewControllerDelegate.h>

@class NSMapTable, SKUIGallerySwooshViewController, SKUISwooshPageComponent, NSString;

@interface SKUIGallerySwooshPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIGallerySwooshViewControllerDelegate> {

	NSMapTable* _componentArtworkRequests;
	SKUIGallerySwooshViewController* _swooshViewController;

}

@property (nonatomic,readonly) SKUISwooshPageComponent * pageComponent; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(int)numberOfCells;
-(void)prefetchResourcesWithReason:(int)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)_addImpressionForIndex:(int)arg1 toSession:(id)arg2 ;
-(id)_swooshViewController;
-(id)swoosh:(id)arg1 imageForCellAtIndex:(int)arg2 ;
-(void)swoosh:(id)arg1 didSelectCellAtIndex:(int)arg2 ;
-(void)swoosh:(id)arg1 willDisplayCellAtIndex:(int)arg2 ;
-(id)_newArtworkRequestWithArtwork:(id)arg1 ;
-(void)swoosh:(id)arg1 didChangePlaybackState:(int)arg2 forItemAtIndex:(int)arg3 ;
@end

