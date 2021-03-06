/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <SiriUI/SiriUIClearBackgroundCell.h>

@class SAMovieV2MovieListCell, UILabel, SiriUIBorderedLabelView, SiriUIDownloadableImageView, SiriMoviesRottenTomatoesRatingView;

@interface SiriMoviesMovieListCellView : SiriUIClearBackgroundCell {

	SAMovieV2MovieListCell* _snippet;
	UILabel* _movieTitleLabel;
	UILabel* _showtimeLabel;
	SiriUIBorderedLabelView* _ratingView;
	SiriUIDownloadableImageView* _posterImageView;
	SiriMoviesRottenTomatoesRatingView* _tomatoView;

}
+(float)_posterHeight;
+(float)_placeHolderVerticalCenterOffset;
+(float)_titleBaselineFromBottomOfImage;
+(float)defaultHeight;
+(id)reuseIdentifier;
+(CGSize)cellSize;
-(id)_movieListViewLabelWithText:(id)arg1 lightWeight:(char)arg2 ;
-(void)configureWithMovieListCell:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
@end

