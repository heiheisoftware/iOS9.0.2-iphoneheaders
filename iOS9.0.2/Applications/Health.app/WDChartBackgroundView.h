/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <UIKit/UIView.h>

@class NSNumber, HKDataUnit, HKUnitController;

@interface WDChartBackgroundView : UIView {

	char _hideAverageLine;
	char _hideMinMaxLabels;
	char _showNoDataLabel;
	NSNumber* _maxValue;
	NSNumber* _maxDataValue;
	NSNumber* _minValue;
	NSNumber* _averageValue;
	int _decimalPrecision;
	HKDataUnit* _dataUnit;
	HKUnitController* _unitController;
	UIEdgeInsets _chartInsets;

}

@property (nonatomic,readonly) NSNumber * maxValue;                            //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maxDataValue;                        //@synthesize maxDataValue=_maxDataValue - In the implementation block
@property (nonatomic,readonly) NSNumber * minValue;                            //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,readonly) NSNumber * averageValue;                        //@synthesize averageValue=_averageValue - In the implementation block
@property (nonatomic,readonly) int decimalPrecision;                           //@synthesize decimalPrecision=_decimalPrecision - In the implementation block
@property (nonatomic,readonly) HKDataUnit * dataUnit;                          //@synthesize dataUnit=_dataUnit - In the implementation block
@property (nonatomic,readonly) HKUnitController * unitController;              //@synthesize unitController=_unitController - In the implementation block
@property (assign,nonatomic) UIEdgeInsets chartInsets;                         //@synthesize chartInsets=_chartInsets - In the implementation block
@property (assign,nonatomic) char hideAverageLine;                             //@synthesize hideAverageLine=_hideAverageLine - In the implementation block
@property (assign,nonatomic) char hideMinMaxLabels;                            //@synthesize hideMinMaxLabels=_hideMinMaxLabels - In the implementation block
@property (assign,nonatomic) char showNoDataLabel;                             //@synthesize showNoDataLabel=_showNoDataLabel - In the implementation block
-(NSNumber *)averageValue;
-(HKDataUnit *)dataUnit;
-(HKUnitController *)unitController;
-(UIEdgeInsets)chartInsets;
-(void)setChartInsets:(UIEdgeInsets)arg1 ;
-(int)decimalPrecision;
-(void)setMinValue:(id)arg1 maxValue:(id)arg2 averageValue:(id)arg3 maxDataValue:(id)arg4 decimalPrecision:(int)arg5 dataUnit:(id)arg6 unitController:(id)arg7 ;
-(void)setShowNoDataLabel:(char)arg1 ;
-(void)setHideAverageLine:(char)arg1 ;
-(void)setHideMinMaxLabels:(char)arg1 ;
-(char)hideMinMaxLabels;
-(char)hideAverageLine;
-(NSNumber *)maxDataValue;
-(char)showNoDataLabel;
-(NSNumber *)maxValue;
-(id)init;
-(NSNumber *)minValue;
@end
