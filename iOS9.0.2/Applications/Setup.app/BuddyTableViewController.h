/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UIView, UITableView, BFFPaneHeaderView, NSString, NSAttributedString;

@interface BuddyTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UIView* _containerView;
	UITableView* _tableView;
	BFFPaneHeaderView* _headerView;
	NSString* _titleText;
	NSString* _subTitleText;
	NSAttributedString* _attributedSubTitleText;

}

@property (nonatomic,readonly) UITableView * tableView;                              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                     //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * subTitleText;                                  //@synthesize subTitleText=_subTitleText - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedSubTitleText;              //@synthesize attributedSubTitleText=_attributedSubTitleText - In the implementation block
@property (nonatomic,readonly) BFFPaneHeaderView * headerView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSubTitleText:(NSString *)arg1 ;
-(NSAttributedString *)attributedSubTitleText;
-(NSString *)subTitleText;
-(void)setAttributedSubTitleText:(NSAttributedString *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(UITableView *)tableView;
-(float)heightForHeaderInTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(int)arg2 ;
-(id)contentScrollView;
-(BFFPaneHeaderView *)headerView;
-(void)updateHeaderView;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
@end

