/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel;

@interface VideosDetailsTableViewCell : UITableViewCell {

	NSLayoutConstraint* _titleLabelTrailingConstraint;
	NSLayoutConstraint* _detailLabelTrailingConstraint;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	UILabel* _columnTwoTitleLabel;
	UILabel* _columnTwoDetailLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                       //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) UILabel * columnTwoTitleLabel;               //@synthesize columnTwoTitleLabel=_columnTwoTitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * columnTwoDetailLabel;              //@synthesize columnTwoDetailLabel=_columnTwoDetailLabel - In the implementation block
-(void)prepareForTwoColumnDisplay;
-(UILabel *)columnTwoTitleLabel;
-(UILabel *)columnTwoDetailLabel;
-(UILabel *)detailLabel;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
@end

