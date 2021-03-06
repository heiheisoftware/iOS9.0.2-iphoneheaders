/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol StopWatchControlsTarget;
@class MTCircleButton;

@interface MTStopwatchController : NSObject {

	id<StopWatchControlsTarget> _target;
	MTCircleButton* _startStopButton;
	MTCircleButton* _lapControlButton;
	int _mode;
	unsigned _buttonSize;

}

@property (nonatomic,__weak,readonly) id<StopWatchControlsTarget> target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) MTCircleButton * startStopButton;                       //@synthesize startStopButton=_startStopButton - In the implementation block
@property (nonatomic,readonly) MTCircleButton * lapControlButton;                      //@synthesize lapControlButton=_lapControlButton - In the implementation block
@property (assign,nonatomic) int mode;                                                 //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) unsigned buttonSize;                                      //@synthesize buttonSize=_buttonSize - In the implementation block
-(MTCircleButton *)startStopButton;
-(MTCircleButton *)lapControlButton;
-(void)_startStopButtonDown:(id)arg1 ;
-(void)_lapControlButtonDown:(id)arg1 ;
-(void)setMode:(int)arg1 force:(char)arg2 ;
-(void)setButtonSize:(unsigned)arg1 ;
-(unsigned)buttonSize;
-(id<StopWatchControlsTarget>)target;
-(id)initWithTarget:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
@end

