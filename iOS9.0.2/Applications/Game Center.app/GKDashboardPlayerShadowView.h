/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <UIKit/UIView.h>

@class GKDashboardPlayerPhotoView, UICollectionViewCell, GKPlayer, UIView;

@interface GKDashboardPlayerShadowView : UIView {

	GKDashboardPlayerPhotoView* _photoView;
	UICollectionViewCell* _parentCell;

}

@property (assign,nonatomic) GKDashboardPlayerPhotoView * photoView;              //@synthesize photoView=_photoView - In the implementation block
@property (nonatomic,retain) GKPlayer * player; 
@property (assign,nonatomic) UICollectionViewCell * parentCell;                   //@synthesize parentCell=_parentCell - In the implementation block
@property (nonatomic,readonly) UIView * parentView; 
-(void)setupPhoto;
-(UIView *)parentView;
-(id)layerForShadow;
-(UICollectionViewCell *)parentCell;
-(void)setParentCell:(UICollectionViewCell *)arg1 ;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKDashboardPlayerPhotoView *)photoView;
-(void)setPhotoView:(GKDashboardPlayerPhotoView *)arg1 ;
-(GKPlayer *)player;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)awakeFromNib;
@end

