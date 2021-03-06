/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RoutePickingMessageView.h>

@class UIButton, NSLayoutConstraint;

@interface TransitMessageView : RoutePickingMessageView {

	UIButton* _customTimeButton;
	NSLayoutConstraint* _buttonAlignLeadingConstraint;
	char _showCustomTimeButton;
	/*^block*/id _customTimeButtonTapped;

}

@property (assign,getter=isShowingCustomTimeButton,nonatomic) char showCustomTimeButton;              //@synthesize showCustomTimeButton=_showCustomTimeButton - In the implementation block
@property (nonatomic,copy) id customTimeButtonTapped;                                                 //@synthesize customTimeButtonTapped=_customTimeButtonTapped - In the implementation block
+(id)messageViewWithError:(id)arg1 ;
+(id)transitModePreferencesFailedButtonText;
+(id)transitModePreferencesFailedMessageText;
-(id)customTimeButtonTapped;
-(void)setShowCustomTimeButton:(char)arg1 ;
-(void)_customTimeButtonTapped:(id)arg1 ;
-(void)setCustomTimeButtonTapped:(id)arg1 ;
-(char)isShowingCustomTimeButton;
-(void)_updateFonts;
@end

