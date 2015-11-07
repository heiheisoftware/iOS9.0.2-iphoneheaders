/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIView.h>

@class NSDate, NSMutableArray, WorkoutDetailView, FIUIRingsViewController, MoveDetailView, ExerciseDetailView, StandDetailView, StepsDistanceView, AwardsView, UILabel;

@interface ActivityDayView : UIView {

	NSDate* _date;
	double _energyPercentage;
	double _briskPercentage;
	double _activeHoursPercentage;
	NSMutableArray* _detailViews;
	WorkoutDetailView* _workoutDetailView;
	FIUIRingsViewController* _ringsVC;
	MoveDetailView* _moveDetailView;
	ExerciseDetailView* _exerciseDetailView;
	StandDetailView* _standDetailView;
	StepsDistanceView* _stepsDistanceView;
	AwardsView* _awardsView;
	UILabel* _dateLabel;

}

@property (nonatomic,readonly) FIUIRingsViewController * ringsVC;                    //@synthesize ringsVC=_ringsVC - In the implementation block
@property (nonatomic,readonly) MoveDetailView * moveDetailView;                      //@synthesize moveDetailView=_moveDetailView - In the implementation block
@property (nonatomic,readonly) ExerciseDetailView * exerciseDetailView;              //@synthesize exerciseDetailView=_exerciseDetailView - In the implementation block
@property (nonatomic,readonly) StandDetailView * standDetailView;                    //@synthesize standDetailView=_standDetailView - In the implementation block
@property (nonatomic,readonly) StepsDistanceView * stepsDistanceView;                //@synthesize stepsDistanceView=_stepsDistanceView - In the implementation block
@property (nonatomic,readonly) AwardsView * awardsView;                              //@synthesize awardsView=_awardsView - In the implementation block
@property (nonatomic,retain) UILabel * dateLabel;                                    //@synthesize dateLabel=_dateLabel - In the implementation block
-(void)updateDateTitleTextWithCurrentDate;
-(void)_setupDetailViews;
-(void)setActivityCacheData:(id)arg1 ;
-(void)updateWithWorkouts:(id)arg1 from:(id)arg2 ;
-(void)setRingsToZero;
-(void)setRingsToCurrentValuesAnimated:(char)arg1 ;
-(FIUIRingsViewController *)ringsVC;
-(MoveDetailView *)moveDetailView;
-(ExerciseDetailView *)exerciseDetailView;
-(StandDetailView *)standDetailView;
-(StepsDistanceView *)stepsDistanceView;
-(AwardsView *)awardsView;
-(id)initWithDate:(id)arg1 ;
-(void)setDateLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)dateLabel;
@end
