/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UILabel.h>

@class NSString, NSAttributedString;

@interface ICLabel : UILabel {

	NSString* _string;
	NSAttributedString* _attributedString;
	float _spacing;
	float _paragraphSpacing;
	float _lineHeight;

}

@property (nonatomic,copy) NSString * string;                                  //@synthesize string=_string - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (assign,nonatomic) float spacing;                                    //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) float paragraphSpacing;                           //@synthesize paragraphSpacing=_paragraphSpacing - In the implementation block
@property (assign,nonatomic) float lineHeight;                                 //@synthesize lineHeight=_lineHeight - In the implementation block
-(void)setParagraphSpacing:(float)arg1 ;
-(NSString *)string;
-(float)lineHeight;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(void)setLineHeight:(float)arg1 ;
-(NSAttributedString *)attributedString;
-(void)setString:(NSString *)arg1 ;
-(void)updateText;
-(void)setSpacing:(float)arg1 ;
-(float)spacing;
-(float)paragraphSpacing;
@end
