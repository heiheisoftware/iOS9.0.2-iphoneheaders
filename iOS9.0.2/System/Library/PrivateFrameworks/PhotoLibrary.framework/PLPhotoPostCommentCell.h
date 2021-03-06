/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIButton, UIView;

@interface PLPhotoPostCommentCell : UITableViewCell {

	char _wantsEntryInCell;
	UILabel* _contentLabel;
	UIButton* _addCommentButton;
	UIView* _styledSeparatorView;

}

@property (nonatomic,retain,readonly) UIButton * addCommentButton;               //@synthesize addCommentButton=_addCommentButton - In the implementation block
@property (assign,nonatomic) char wantsEntryInCell;                              //@synthesize wantsEntryInCell=_wantsEntryInCell - In the implementation block
@property (nonatomic,retain,readonly) UILabel * contentLabel;                    //@synthesize contentLabel=_contentLabel - In the implementation block
@property (nonatomic,retain,readonly) UIView * styledSeparatorView;              //@synthesize styledSeparatorView=_styledSeparatorView - In the implementation block
+(float)heightForWidth:(float)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(UIButton *)addCommentButton;
-(void)setupContent;
-(UIView *)styledSeparatorView;
-(id)_commentPostPlaceholder;
-(UILabel *)contentLabel;
-(char)wantsEntryInCell;
-(void)setWantsEntryInCell:(char)arg1 ;
@end

