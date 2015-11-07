/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <iBooks/BKWebViewDelegate.h>

@class UILabel, UIImage, IMTheme, BKVerticalLabel, BKWebView, UIImageView, NSString, UIColor;

@interface BKTOCTableViewCell : UITableViewCell <BKWebViewDelegate> {

	UILabel* _pageLabel;
	UIImage* _highlightImage;
	UIImage* _multipleSelectionTickBackgroundImage;
	UIEdgeInsets _contentInsets;
	IMTheme* _theme;
	int _writingDirection;
	char _vertical;
	BKVerticalLabel* _verticalLabel;
	BKWebView* _webView;
	UIImageView* _cachedImageView;
	NSString* _cacheKey;
	NSString* _selectedCacheKey;
	char _hasHTMLTitle;
	UIColor* _highlightTextColor;
	UIImageView* _highlightImageView;
	UIImageView* _multipleSelectionTickBackgroundImageView;

}

@property (nonatomic,retain,readonly) UILabel * pageLabel; 
@property (nonatomic,retain) UIImage * highlightImage;                                            //@synthesize highlightImage=_highlightImage - In the implementation block
@property (nonatomic,retain) UIColor * highlightTextColor;                                        //@synthesize highlightTextColor=_highlightTextColor - In the implementation block
@property (nonatomic,retain) UIImage * multipleSelectionTickBackgroundImage;                      //@synthesize multipleSelectionTickBackgroundImage=_multipleSelectionTickBackgroundImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                          //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) IMTheme * theme;                                                     //@synthesize theme=_theme - In the implementation block
@property (assign,nonatomic) int writingDirection;                                                //@synthesize writingDirection=_writingDirection - In the implementation block
@property (assign,getter=isVertical,nonatomic) char vertical;                                     //@synthesize vertical=_vertical - In the implementation block
@property (nonatomic,retain) UIImageView * highlightImageView;                                    //@synthesize highlightImageView=_highlightImageView - In the implementation block
@property (nonatomic,retain) UIImageView * multipleSelectionTickBackgroundImageView;              //@synthesize multipleSelectionTickBackgroundImageView=_multipleSelectionTickBackgroundImageView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)maxSpanForTextWithIndentation:(int)arg1 font:(id)arg2 width:(float)arg3 ;
+(float)cellHeightForCellWidth:(float)arg1 pageLabelWidth:(float)arg2 text:(id)arg3 indentationLevel:(unsigned)arg4 indentationWidth:(float)arg5 font:(id)arg6 ;
+(id)tocWebTemplate;
+(CGSize)titleSizeForText:(id)arg1 indentation:(int)arg2 font:(id)arg3 width:(float)arg4 ;
+(CGSize)sizeForText:(id)arg1 indentation:(int)arg2 font:(id)arg3 width:(float)arg4 ;
-(UILabel *)pageLabel;
-(void)displayHTMLWithContents:(id)arg1 fontFamily:(id)arg2 fontSize:(float)arg3 maxSpan:(float)arg4 baseURL:(id)arg5 ;
-(UIImage *)multipleSelectionTickBackgroundImage;
-(void)_syncVerticalLabel;
-(UIImageView *)multipleSelectionTickBackgroundImageView;
-(void)_setSelectedAppearance:(char)arg1 ;
-(void)setMultipleSelectionTickBackgroundImageView:(UIImageView *)arg1 ;
-(void)setHighlightBackgroundColor:(id)arg1 ;
-(void)_adjustLabelTextAlignment;
-(UIColor *)highlightTextColor;
-(void)setMultipleSelectionTickBackgroundImage:(UIImage *)arg1 ;
-(UIImageView *)highlightImageView;
-(void)setHighlightImageView:(UIImageView *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(UIEdgeInsets)contentInsets;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(int)writingDirection;
-(char)isVertical;
-(void)setHighlightImage:(UIImage *)arg1 ;
-(UIImage *)highlightImage;
-(void)setVertical:(char)arg1 ;
-(void)setHighlightTextColor:(UIColor *)arg1 ;
-(void)setWritingDirection:(int)arg1 ;
-(IMTheme *)theme;
-(void)setTheme:(IMTheme *)arg1 ;
@end
