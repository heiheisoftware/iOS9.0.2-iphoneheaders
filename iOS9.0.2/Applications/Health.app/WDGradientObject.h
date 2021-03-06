/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Health/Health-Structs.h>
@class NSArray;

@interface WDGradientObject : NSObject {

	NSArray* _colors;
	NSArray* _locations;

}

@property (nonatomic,readonly) NSArray * colors;                 //@synthesize colors=_colors - In the implementation block
@property (nonatomic,readonly) NSArray * locations;              //@synthesize locations=_locations - In the implementation block
+(id)gradientWithColors:(id)arg1 locations:(id)arg2 ;
+(id)gradientWithTopColor:(id)arg1 bottomColor:(id)arg2 ;
-(CGGradientRef)newGradientRef;
-(float*)_locationsArray;
-(char)isValid;
-(NSArray *)colors;
-(id)initWithColors:(id)arg1 locations:(id)arg2 ;
-(NSArray *)locations;
@end

