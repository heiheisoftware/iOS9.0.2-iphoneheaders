/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, NSString;

@interface COSPinKeyView : UIView {

	NSArray* _dashLayers;
	NSArray* _digitLayers;
	NSString* _digits;

}

@property (nonatomic,retain) NSArray * dashLayers;               //@synthesize dashLayers=_dashLayers - In the implementation block
@property (nonatomic,retain) NSArray * digitLayers;              //@synthesize digitLayers=_digitLayers - In the implementation block
@property (nonatomic,copy) NSString * digits;                    //@synthesize digits=_digits - In the implementation block
-(int)expectedPinLength;
-(void)setCodeLength:(int)arg1 ;
-(NSArray *)dashLayers;
-(void)setDashLayers:(NSArray *)arg1 ;
-(NSArray *)digitLayers;
-(void)setDigitLayers:(NSArray *)arg1 ;
-(NSString *)digits;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDigits:(NSString *)arg1 ;
@end

