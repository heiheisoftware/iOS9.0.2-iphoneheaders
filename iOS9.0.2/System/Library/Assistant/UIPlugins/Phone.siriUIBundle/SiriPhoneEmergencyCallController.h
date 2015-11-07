/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Phone.siriUIBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>

@class NSTimer, SiriPhoneEmergencyCallView, SAPhoneCallEmergencySnippet;

@interface SiriPhoneEmergencyCallController : SiriUISnippetViewController {

	int _seconds;
	NSTimer* _countdownTimer;

}

@property (nonatomic,retain) SiriPhoneEmergencyCallView * view; 
@property (nonatomic,retain) SAPhoneCallEmergencySnippet * snippet; 
-(void)_setCountdownString;
-(void)_updateCountdown:(id)arg1 ;
-(float)desiredHeightForWidth:(float)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)setCancelled:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)setSnippet:(SAPhoneCallEmergencySnippet *)arg1 ;
-(void)setConfirmed:(char)arg1 ;
-(void)willCancel;
-(void)willConfirm;
@end
