/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSURL, PLDatabaseReader, NSArray, NSString;

@interface FBAPowerLogIndexViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate> {

	NSURL* _logURL;
	PLDatabaseReader* _databaseReader;
	NSArray* _tableNames;

}

@property (retain) NSURL * logURL;                                  //@synthesize logURL=_logURL - In the implementation block
@property (retain) PLDatabaseReader * databaseReader;               //@synthesize databaseReader=_databaseReader - In the implementation block
@property (copy) NSArray * tableNames;                              //@synthesize tableNames=_tableNames - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)canDisplayURL:(id)arg1 ;
-(void)setLogURL:(NSURL *)arg1 ;
-(NSURL *)logURL;
-(void)setDatabaseReader:(PLDatabaseReader *)arg1 ;
-(PLDatabaseReader *)databaseReader;
-(void)setTableNames:(NSArray *)arg1 ;
-(NSArray *)tableNames;
-(void)setPowerLogURL:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)viewDidLoad;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
@end
