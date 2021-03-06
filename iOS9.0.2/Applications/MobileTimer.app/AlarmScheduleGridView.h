/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, NSMutableArray, NSCalendar, NSDate, NSDateFormatter, UIImageView;

@interface AlarmScheduleGridView : UIView {

	UIImage* _patternImage;
	float _leftMargin;
	float _columnWidth;
	int _highlightedColumnIndex;
	NSMutableArray* _hourLabels;
	NSCalendar* _calendar;
	NSDate* _baseDate;
	NSDateFormatter* _formatter;
	UIImageView* _backgroundImageView;

}

@property (assign,nonatomic) float leftMargin;                                               //@synthesize leftMargin=_leftMargin - In the implementation block
@property (assign,nonatomic) float columnWidth;                                              //@synthesize columnWidth=_columnWidth - In the implementation block
@property (assign,nonatomic) int highlightedColumnIndex;                                     //@synthesize highlightedColumnIndex=_highlightedColumnIndex - In the implementation block
@property (assign,getter=isShowingHourLabels,nonatomic) char showingHourLabels; 
+(id)colorForBackground;
+(float)heightForNumberOfHalfHours:(int)arg1 ;
-(id)newHourLabel;
-(void)setupWithCurrentLocale;
-(void)updateHourLabelValues;
-(void)rebuildGrid;
-(char)isShowingHourLabels;
-(void)setShowingHourLabels:(char)arg1 ;
-(int)highlightedColumnIndex;
-(void)setHighlightedColumnIndex:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setVisibleBounds:(CGRect)arg1 ;
-(float)columnWidth;
-(void)setColumnWidth:(float)arg1 ;
-(float)leftMargin;
-(void)setLeftMargin:(float)arg1 ;
-(void)handleLocaleChange;
@end

