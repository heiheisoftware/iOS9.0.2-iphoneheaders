/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UILabel.h>

@protocol TopBarStyledLabelDelegate;
@class NSDictionary;

@interface TopBarStyledLabel : UILabel {

	NSDictionary* _attributeCollection;
	/*^block*/id _textProvider;
	id<TopBarStyledLabelDelegate> _delegate;

}

@property (nonatomic,copy) id textProvider;                                              //@synthesize textProvider=_textProvider - In the implementation block
@property (nonatomic,copy) NSDictionary * attributeCollection;                           //@synthesize attributeCollection=_attributeCollection - In the implementation block
@property (assign,nonatomic,__weak) id<TopBarStyledLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultAttributeCollection;
-(void)setAttributeCollection:(NSDictionary *)arg1 ;
-(NSDictionary *)attributeCollection;
-(void)setDelegate:(id<TopBarStyledLabelDelegate>)arg1 ;
-(id<TopBarStyledLabelDelegate>)delegate;
-(void)setAttributedText:(id)arg1 ;
-(void)_updateText;
-(void)setTextProvider:(id)arg1 ;
-(id)textProvider;
@end

