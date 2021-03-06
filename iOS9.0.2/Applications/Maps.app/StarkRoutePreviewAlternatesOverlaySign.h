/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Maps/StarkRoutePreviewAlternatesViewDelegate.h>
#import <Maps/StarkRoutePreviewSign.h>

@protocol StarkRoutePreviewAlternatesOverlayDelegate, StarkRoutePreviewOverlayDataSource;
@class NSArray, UIView, NSString;

@interface StarkRoutePreviewAlternatesOverlaySign : UIView <StarkRoutePreviewAlternatesViewDelegate, StarkRoutePreviewSign> {

	NSArray* _alternateRouteViews;
	UIView* _topKeyline;
	UIView* _bottomKeyline;
	id<StarkRoutePreviewAlternatesOverlayDelegate> _delegate;
	id<StarkRoutePreviewOverlayDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<StarkRoutePreviewAlternatesOverlayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<StarkRoutePreviewOverlayDataSource> dataSource;                    //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInitialSelection;
-(void)alternateRouteViewDidBecomeSelected:(id)arg1 ;
-(void)_selectRouteAtIndex:(unsigned)arg1 ;
-(void)_updateContents;
-(void)_updateStyling;
-(void)_clearSelection;
-(void)setDataSource:(id<StarkRoutePreviewOverlayDataSource>)arg1 ;
-(void)setDelegate:(id<StarkRoutePreviewAlternatesOverlayDelegate>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(id<StarkRoutePreviewOverlayDataSource>)dataSource;
-(id<StarkRoutePreviewAlternatesOverlayDelegate>)delegate;
-(id)preferredFocusedView;
-(id)initWithDataSource:(id)arg1 delegate:(id)arg2 ;
@end

