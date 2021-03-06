/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class UIColor, UICollectionView, NSArray, NSString;

@interface AKColorPaletteView : UIControl <UICollectionViewDataSource, UICollectionViewDelegate> {

	UIColor* _color;
	int _scrollDirection;
	UICollectionView* _collectionView;
	NSArray* _colors;

}

@property (nonatomic,retain) UIColor * color;                                //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) int scrollDirection;                            //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSArray * colors;                               //@synthesize colors=_colors - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(void)setScrollDirection:(int)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)_commonInit;
-(UICollectionView *)collectionView;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(NSArray *)colors;
-(int)scrollDirection;
-(CGSize)_itemSizeInContainer;
-(id)_indexPathOfColor:(id)arg1 ;
-(void)scrollToCurrentColor;
@end

