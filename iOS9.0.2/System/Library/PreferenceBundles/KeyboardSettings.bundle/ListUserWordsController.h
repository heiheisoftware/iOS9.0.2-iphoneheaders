/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <KeyboardSettings/KeyboardSettings-Structs.h>
#import <Preferences/PSViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>

@class UITableView, UILabel, NSArray, UIImageView, UIView, NSString, SearchUserWordsController, TIUserDictionaryController, UILocalizedIndexedCollation, UISearchController;

@interface ListUserWordsController : PSViewController <UINavigationControllerDelegate, UISearchControllerDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate> {

	UITableView* _tableView;
	UILabel* _noWordsLabel;
	NSArray* _propertiesToShow;
	UILabel* _noContentLabel;
	UIImageView* _noContentImage;
	UIView* _contentView;
	NSArray* filteredListContent;
	NSString* savedSearchTerm;
	char searchIsActive;
	SearchUserWordsController* _searchResultsController;
	TIUserDictionaryController* _dictionaryController;
	UILocalizedIndexedCollation* _collation;
	NSArray* _sections;
	NSString* currentShortcut;
	UISearchController* _searchController;
	unsigned _searchNavControllerChanges;

}

@property (nonatomic,retain) NSString * currentShortcut; 
@property (nonatomic,retain) UITableView * tableView;                                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) TIUserDictionaryController * dictionaryController;              //@synthesize dictionaryController=_dictionaryController - In the implementation block
@property (nonatomic,retain) UILocalizedIndexedCollation * collation;                        //@synthesize collation=_collation - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                             //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSString * savedSearchTerm; 
@property (assign,nonatomic) char searchIsActive; 
@property (nonatomic,retain) UISearchController * searchController;                          //@synthesize searchController=_searchController - In the implementation block
@property (assign,nonatomic) unsigned searchNavControllerChanges;                            //@synthesize searchNavControllerChanges=_searchNavControllerChanges - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILocalizedIndexedCollation *)collation;
-(void)setCollation:(UILocalizedIndexedCollation *)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(UISearchController *)searchController;
-(void)willPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)setSearchController:(UISearchController *)arg1 ;
-(void)addUserWord;
-(TIUserDictionaryController *)dictionaryController;
-(NSString *)currentShortcut;
-(void)setDictionaryController:(TIUserDictionaryController *)arg1 ;
-(void)userDictionaryWordsDidChange:(id)arg1 ;
-(void)userWordDidUpdate:(id)arg1 ;
-(char)_shouldHideIndex;
-(void)setCurrentShortcut:(NSString *)arg1 ;
-(unsigned)searchNavControllerChanges;
-(void)_showSearchBar;
-(void)_hideSearchBar;
-(void)setSearchNavControllerChanges:(unsigned)arg1 ;
-(void)inlineUserDictionaryDoneEditing;
-(id)mainTableView;
-(id)_mainContentView;
-(NSString *)savedSearchTerm;
-(void)setSavedSearchTerm:(NSString *)arg1 ;
-(char)searchIsActive;
-(void)setSearchIsActive:(char)arg1 ;
-(void)reloadSections;
@end

