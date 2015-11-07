/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray, PSSpecifier;

@interface COSDisplayAndBrightnessController : PSListController {

	NSArray* _contentSizeCategories;
	PSSpecifier* _brightnessSlider;

}

@property (nonatomic,retain) PSSpecifier * brightnessSlider;              //@synthesize brightnessSlider=_brightnessSlider - In the implementation block
-(id)_sliderTextImageWithSize:(float)arg1 ;
-(void)_handleCancelForBoldText;
-(id)boldTextEnabled:(id)arg1 ;
-(void)setTextSize:(id)arg1 specifier:(id)arg2 ;
-(id)textSize:(id)arg1 ;
-(PSSpecifier *)brightnessSlider;
-(void)setBrightnessSlider:(PSSpecifier *)arg1 ;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(id)contentSizeCategories;
-(void)setBoldTextEnabled:(id)arg1 specifier:(id)arg2 ;
@end
