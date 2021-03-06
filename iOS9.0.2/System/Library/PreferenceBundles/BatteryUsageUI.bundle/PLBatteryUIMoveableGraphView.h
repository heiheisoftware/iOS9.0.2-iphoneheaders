/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BatteryUsageUI/BatteryUsageUI-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableDictionary, NSMutableArray, UIColor, NSDate;

@interface PLBatteryUIMoveableGraphView : UIView {

	float maxPower;
	float minPower;
	int _errValue;
	float horizontal_label_offset;
	float vertical_label_offset;
	float rectWidth;
	float rectHeight;
	float xInterval;
	float yInterval;
	NSMutableDictionary* defaultTextAttributes;
	NSMutableArray* _dateChangeArray;
	int _graphType;
	NSMutableArray* _inputData;
	UIColor* _labelColor;
	UIColor* _graphBackgroundColor;
	UIColor* _lineColor;
	UIColor* _gridColor;
	NSDate* _startDate;
	NSDate* _endDate;
	double _displayRange;
	CGSize _displaySize;
	double _MaxDataRange;

}

@property (assign,nonatomic) double displayRange;                       //@synthesize displayRange=_displayRange - In the implementation block
@property (assign,nonatomic) CGSize displaySize;                        //@synthesize displaySize=_displaySize - In the implementation block
@property (assign,nonatomic) double MaxDataRange;                       //@synthesize MaxDataRange=_MaxDataRange - In the implementation block
@property (assign,nonatomic) int graphType;                             //@synthesize graphType=_graphType - In the implementation block
@property (nonatomic,copy) NSMutableArray * inputData;                  //@synthesize inputData=_inputData - In the implementation block
@property (nonatomic,copy) UIColor * labelColor;                        //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,copy) UIColor * graphBackgroundColor;              //@synthesize graphBackgroundColor=_graphBackgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * lineColor;                         //@synthesize lineColor=_lineColor - In the implementation block
@property (nonatomic,copy) UIColor * gridColor;                         //@synthesize gridColor=_gridColor - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                        //@synthesize endDate=_endDate - In the implementation block
+(int)graphHeight;
-(UIColor *)gridColor;
-(void)setGridColor:(UIColor *)arg1 ;
-(double)MaxDataRange;
-(id)DateChangeArray;
-(void)setGraphType:(int)arg1 ;
-(void)setMaxDataRange:(double)arg1 ;
-(void)drawErrorText:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(void)setGraphBackgroundColor:(UIColor *)arg1 ;
-(void)setDisplaySize:(CGSize)arg1 ;
-(int)graphType;
-(double)displayRange;
-(void)drawGrid:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(void)setRangesFromArray:(id)arg1 ;
-(void)setDefaultRange;
-(double)setGridRange:(double)arg1 ;
-(void)setDisplayRange:(double)arg1 ;
-(void)initGraphAttributes;
-(UIColor *)graphBackgroundColor;
-(void)drawDayLines:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(void)drawFill:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(void)drawLine:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(UIColor *)labelColor;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(NSMutableArray *)inputData;
-(void)setInputData:(NSMutableArray *)arg1 ;
-(void)setLabelColor:(UIColor *)arg1 ;
-(CGSize)displaySize;
@end

