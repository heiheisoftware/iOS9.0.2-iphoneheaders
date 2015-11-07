/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIColor, UILabel, NSLayoutConstraint, NSString, UIFont;

@interface GKDashboardSectionHeaderView : UICollectionReusableView {

	char _onDarkBackground;
	UIColor* _titleColor;
	UILabel* _titleLabel;
	NSLayoutConstraint* _leftMarginConstraint;
	NSLayoutConstraint* _rightMarginConstraint;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIFont * font; 
@property (assign,nonatomic) char onDarkBackground;                                   //@synthesize onDarkBackground=_onDarkBackground - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                                    //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * leftMarginConstraint;               //@synthesize leftMarginConstraint=_leftMarginConstraint - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * rightMarginConstraint;              //@synthesize rightMarginConstraint=_rightMarginConstraint - In the implementation block
+(float)widthForTitle:(id)arg1 withFont:(id)arg2 ;
+(CGSize)platformSizeForTitle:(id)arg1 withFont:(id)arg2 ;
+(float)defaultHeight;
-(void)setOnDarkBackground:(char)arg1 ;
-(char)onDarkBackground;
-(NSLayoutConstraint *)leftMarginConstraint;
-(void)setLeftMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)rightMarginConstraint;
-(void)setRightMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setFont:(UIFont *)arg1 ;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(UILabel *)titleLabel;
-(UIFont *)font;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end
