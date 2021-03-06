/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/FindMyFriends-Structs.h>
#import <FMCoreUI/FMDynamicTypeButton.h>

@class UIImageView;

@interface CustomSelectionButton : FMDynamicTypeButton {

	UIImageView* _customSelectionBackgroundView;
	UIEdgeInsets _selectionInsets;

}

@property (assign,nonatomic) UIEdgeInsets selectionInsets;                             //@synthesize selectionInsets=_selectionInsets - In the implementation block
@property (nonatomic,retain) UIImageView * customSelectionBackgroundView;              //@synthesize customSelectionBackgroundView=_customSelectionBackgroundView - In the implementation block
+(id)_selectedButtonBackgroundImage;
-(void)setSelectionInsets:(UIEdgeInsets)arg1 ;
-(UIImageView *)customSelectionBackgroundView;
-(UIEdgeInsets)selectionInsets;
-(void)setCustomSelectionBackgroundView:(UIImageView *)arg1 ;
-(void)_updateColors;
-(void)awakeFromNib;
-(void)tintColorDidChange;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
@end

