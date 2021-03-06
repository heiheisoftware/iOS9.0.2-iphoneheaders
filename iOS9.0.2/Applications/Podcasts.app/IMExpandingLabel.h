/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>

@protocol IMExpandingLabelDelegate;
@class CAGradientLayer, UITextView, NSString, NSDictionary, UIButton;

@interface IMExpandingLabel : UIView {

	CAGradientLayer* _gradientLayer;
	id _gradientClearColor;
	id _gradientSemiClearColor;
	id _gradientSolidColor;
	char _expanded;
	char _hasGradient;
	char _fitsWithinLineLimit;
	UITextView* _textView;
	NSString* _text;
	NSDictionary* _textAttributes;
	unsigned _numberOfLines;
	int _textMode;
	UIButton* _moreButton;
	float _gradientHeight;
	id<IMExpandingLabelDelegate> _delegate;
	unsigned _languageDirection;

}

@property (nonatomic,retain) UITextView * textView;                                     //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSString * text;                                             //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSDictionary * textAttributes;                               //@synthesize textAttributes=_textAttributes - In the implementation block
@property (assign,getter=isScrollEnabled,nonatomic) char scrollEnabled; 
@property (assign,nonatomic) unsigned numberOfLines;                                    //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) int textMode;                                              //@synthesize textMode=_textMode - In the implementation block
@property (nonatomic,retain) UIButton * moreButton;                                     //@synthesize moreButton=_moreButton - In the implementation block
@property (assign,getter=isExpanded,nonatomic) char expanded;                           //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) char hasGradient;                                          //@synthesize hasGradient=_hasGradient - In the implementation block
@property (assign,nonatomic) float gradientHeight;                                      //@synthesize gradientHeight=_gradientHeight - In the implementation block
@property (assign,nonatomic,__weak) id<IMExpandingLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char fitsWithinLineLimit;                                  //@synthesize fitsWithinLineLimit=_fitsWithinLineLimit - In the implementation block
@property (assign,nonatomic) unsigned languageDirection;                                //@synthesize languageDirection=_languageDirection - In the implementation block
-(void)moreButtonTapped:(id)arg1 ;
-(unsigned)maximumNumberOfLinesThatFitHeight:(float)arg1 ;
-(void)setMoreButtonFont:(id)arg1 ;
-(void)setHasGradient:(char)arg1 ;
-(void)setFitsWithinLineLimit:(char)arg1 ;
-(char)fitsWithinLineLimit;
-(unsigned)languageDirection;
-(int)textMode;
-(void)setLanguageDirection:(unsigned)arg1 ;
-(void)setTextMode:(int)arg1 ;
-(UIButton *)moreButton;
-(float)heightForWidth:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IMExpandingLabelDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IMExpandingLabelDelegate>)delegate;
-(void)setNumberOfLines:(unsigned)arg1 ;
-(void)setScrollEnabled:(char)arg1 ;
-(char)isScrollEnabled;
-(void)setFont:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)_font;
-(NSDictionary *)textAttributes;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(char)isExpanded;
-(unsigned)numberOfLines;
-(void)setExpanded:(char)arg1 ;
-(UITextView *)textView;
-(char)hasGradient;
-(void)setMoreButton:(UIButton *)arg1 ;
-(void)setGradientHeight:(float)arg1 ;
-(float)gradientHeight;
@end

