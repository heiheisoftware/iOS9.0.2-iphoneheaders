/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPTableCheckmarkRadioSection.h>

@class RAPDirectionsWhichTransferQuestion;

@interface RAPReportComposerDirectionsWhichTransferSection : RAPTableCheckmarkRadioSection {

	RAPDirectionsWhichTransferQuestion* _question;

}
-(id)initWithQuestion:(id)arg1 ;
-(char)usesAutoLayoutForRowAtIndex:(int)arg1 ;
-(void)configureCell:(id)arg1 forValue:(id)arg2 ;
-(void)selectedValueDidChange;
-(Class)defaultCellClass;
-(void)dealloc;
@end

