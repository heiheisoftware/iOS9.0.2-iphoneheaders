/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/HomeSettings.bundle/HomeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSEditableListController.h>
#import <HomeSettings/HSUserListManagerTableDelegate.h>

@class HMHome, HOSHomeTableManager, NSString;

@interface HOSHomeViewController : PSEditableListController <HSUserListManagerTableDelegate> {

	HMHome* _home;
	HOSHomeTableManager* _tableViewManager;

}

@property (nonatomic,retain) HMHome * home;                                       //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HOSHomeTableManager * tableViewManager;              //@synthesize tableViewManager=_tableViewManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)deleteHome;
-(void)setTableViewManager:(HOSHomeTableManager *)arg1 ;
-(HOSHomeTableManager *)tableViewManager;
-(void)_reallyDeleteHome;
-(void)managerDidSendInvitations:(id)arg1 ;
-(void)managerDidDismissWithError:(id)arg1 ;
-(void)managerDidUpdateUserList;
-(void)suspend;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setEditable:(char)arg1 ;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)didLock;
@end

