/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIColor, CALayer;

@interface BKThumbnailScrubberCell : UIView {

	UIImage* _image;
	UIColor* _strokeColor;
	CALayer* _borderLayer;

}

@property (nonatomic,retain) UIImage * image;                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
+(id)emptyBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIImage *)image;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
@end

