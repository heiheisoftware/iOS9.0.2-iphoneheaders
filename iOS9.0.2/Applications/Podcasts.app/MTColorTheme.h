/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIColor;

@interface MTColorTheme : NSObject {

	char _isBackgroundLight;
	UIColor* _backgroundColor;
	UIColor* _primaryTextColor;
	UIColor* _secondaryTextColor;

}

@property (nonatomic,retain) UIColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * primaryTextColor;                //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryTextColor;              //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (assign,nonatomic) char isBackgroundLight;                    //@synthesize isBackgroundLight=_isBackgroundLight - In the implementation block
-(char)isBackgroundDark;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(char)isEqual:(id)arg1 ;
-(UIColor *)primaryTextColor;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(UIColor *)secondaryTextColor;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(char)isBackgroundLight;
-(void)setIsBackgroundLight:(char)arg1 ;
@end
