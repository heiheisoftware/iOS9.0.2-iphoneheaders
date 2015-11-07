/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, MFSearchSuggestion, NSArray, NSLayoutConstraint;

@interface MFSearchSuggestionsTableViewCell : UITableViewCell {

	UIImageView* _glyph;
	UILabel* _title;
	UILabel* _subtitle;
	MFSearchSuggestion* _suggestion;
	NSArray* _defaultConstraints;
	NSArray* _titleOnlyConstraints;
	NSArray* _subtitleConstraints;
	NSLayoutConstraint* _singleLineTitleBaselineConstraint;
	NSLayoutConstraint* _singleLineBottomBaselineConstraint;
	NSLayoutConstraint* _titleBaselineConstraint;
	NSLayoutConstraint* _interLabelBaselineConstraint;
	NSLayoutConstraint* _subtitleBaselineConstraint;

}

@property (nonatomic,retain) MFSearchSuggestion * suggestion;                                      //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,copy) NSArray * defaultConstraints;                                           //@synthesize defaultConstraints=_defaultConstraints - In the implementation block
@property (nonatomic,copy) NSArray * titleOnlyConstraints;                                         //@synthesize titleOnlyConstraints=_titleOnlyConstraints - In the implementation block
@property (nonatomic,copy) NSArray * subtitleConstraints;                                          //@synthesize subtitleConstraints=_subtitleConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * singleLineTitleBaselineConstraint;               //@synthesize singleLineTitleBaselineConstraint=_singleLineTitleBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * singleLineBottomBaselineConstraint;              //@synthesize singleLineBottomBaselineConstraint=_singleLineBottomBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleBaselineConstraint;                         //@synthesize titleBaselineConstraint=_titleBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * interLabelBaselineConstraint;                    //@synthesize interLabelBaselineConstraint=_interLabelBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * subtitleBaselineConstraint;                      //@synthesize subtitleBaselineConstraint=_subtitleBaselineConstraint - In the implementation block
+(char)requiresConstraintBasedLayout;
-(MFSearchSuggestion *)suggestion;
-(void)setSuggestion:(MFSearchSuggestion *)arg1 ;
-(void)setDefaultConstraints:(NSArray *)arg1 ;
-(float)_singleLineTitleBaselineConstant;
-(void)setSingleLineTitleBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(float)_singleLineBottomBaselineConstant;
-(void)setSingleLineBottomBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)singleLineTitleBaselineConstraint;
-(NSLayoutConstraint *)singleLineBottomBaselineConstraint;
-(void)setTitleOnlyConstraints:(NSArray *)arg1 ;
-(float)_titleBaselineConstant;
-(void)setTitleBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(float)_interLabelBaselineConstant;
-(void)setInterLabelBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(float)_subtitleBottomBaselineConstant;
-(NSLayoutConstraint *)titleBaselineConstraint;
-(NSLayoutConstraint *)interLabelBaselineConstraint;
-(void)setSubtitleConstraints:(NSArray *)arg1 ;
-(NSArray *)defaultConstraints;
-(NSArray *)titleOnlyConstraints;
-(NSArray *)subtitleConstraints;
-(void)_preferredContentSizeCategoryDidChange:(id)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(id)_titleFont;
-(NSLayoutConstraint *)subtitleBaselineConstraint;
-(void)setSubtitleBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_subtitleFont;
@end
