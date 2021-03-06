/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/WDAddDataViewController.h>

@class NSDateFormatter, NSDate, UITableViewCell, WDManualDataEntryTableViewCell, UIDatePicker, NSArray;

@interface WDUVExposureAddDataViewController : WDAddDataViewController {

	NSDateFormatter* _dateFormatter;
	NSDate* _startDate;
	NSDate* _endDate;
	UITableViewCell* _selectedCell;
	WDManualDataEntryTableViewCell* _uvIndexCell;
	WDManualDataEntryTableViewCell* _startDateCell;
	UIDatePicker* _startDatePicker;
	WDManualDataEntryTableViewCell* _endDateCell;
	UIDatePicker* _endDatePicker;
	NSArray* _sections;

}
-(id)initWithDataUnitGroup:(id)arg1 controllerManager:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 ;
-(void)_startDatePickerChanged:(id)arg1 ;
-(void)_endDatePickerChanged:(id)arg1 ;
-(id)_rowsForSection:(int)arg1 ;
-(id)generateHKObjects;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
@end

