/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafariSettings/MobileSafariSettings-Structs.h>
#import <MobileSafariSettings/SafariAutoFillListController.h>
#import <libobjc.A.dylib/SafariSearchControllerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <libobjc.A.dylib/SafariAuthenticationRequiring.h>

@protocol NSObject;
@class NSString, NSMutableArray, SafariSearchController, UIBarButtonItem;

@interface SafariSavedPasswordsController : SafariAutoFillListController <SafariSearchControllerDelegate, UISearchBarDelegate, UISearchResultsUpdating, SafariAuthenticationRequiring> {

	NSString* _searchPattern;
	NSMutableArray* _specifiersForAllSavedPasswords;
	SafariSearchController* _searchController;
	UIBarButtonItem* _deleteToolbarItem;
	UIBarButtonItem* _cancelToolbarItem;
	UIBarButtonItem* _editToolbarItem;
	UIBarButtonItem* _rightToolbarItem;
	char _changingPasswordStore;
	id<NSObject> _passwordStoreChangedObserver;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * authenticationPrompt; 
-(id)specifiers;
-(void)dealloc;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(int)positionForBar:(id)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)_setContentInset:(float)arg1 ;
-(void)didPresentSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)safariSearchController:(id)arg1 willAnimateTransition:(id)arg2 ;
-(id)_editToolbarItem;
-(void)_updateToolbarItemsAnimated:(char)arg1 ;
-(id)_deleteToolbarItem;
-(id)_specifiersForAllSavedPasswords;
-(id)_cancelToolbarItem;
-(char)isSpecifierForAutoFillItem:(id)arg1 ;
-(void)updateDeleteButton;
-(NSString *)authenticationPrompt;
-(id)deleteConfirmationTitle;
-(id)deleteConfirmationMessage;
-(void)deleteItemsForSpecifiers:(id)arg1 ;
-(id)titleForAddItem;
-(Class)controllerClassForAddItem;
@end

