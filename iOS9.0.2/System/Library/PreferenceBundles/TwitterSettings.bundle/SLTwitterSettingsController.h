/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/TwitterSettings.bundle/TwitterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FacebookSettings/SLSettingsController.h>
#import <TwitterSettings/SLTwitterAccountCreationDelegate.h>
#import <TwitterSettings/SLTwitterContactUpdaterDelegate.h>

@class ACAccount, ACAccountType, NSArray, NSMutableDictionary, PSSpecifier, SLTwitterContactUpdater, SLTwitterUpdateContactsFooterView, SLNetworkReachabilityWarning, UIAlertView, PSSetupController, NSString;

@interface SLTwitterSettingsController : SLSettingsController <SLTwitterAccountCreationDelegate, SLTwitterContactUpdaterDelegate> {

	ACAccount* _signInAccount;
	ACAccountType* _twitterAccountType;
	NSArray* _accounts;
	NSMutableDictionary* _authorizedAppList;
	NSArray* _authorizedAppListSpecifiers;
	PSSpecifier* _signInButtonSpecifier;
	PSSpecifier* _updateContactsGroupSpecifier;
	PSSpecifier* _updateContactsSpecifier;
	PSSpecifier* _createNewAccountGroupSpecifier;
	SLTwitterContactUpdater* _contactUpdater;
	SLTwitterUpdateContactsFooterView* _updateContactsFooterView;
	NSArray* _accountStateDependentSpecifiers;
	SLNetworkReachabilityWarning* _networkWarning;
	UIAlertView* _appInstallAlert;
	PSSetupController* _accountCreationContainerVC;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_networkWarning;
-(id)_loginSpecifiers;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(id)_authorizedAppsListSpecifiers;
-(void)_setAppAllowedAccess:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_isAppAllowedAccountAccessWithSpecifier:(id)arg1 ;
-(void)_learnMoreLinkButtonTapped:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(void)_handleAccountAuthenticationWithResult:(char)arg1 error:(id)arg2 ;
-(void)_showAppDownloadAlert;
-(void)_cancelUpdateContactsTapped:(id)arg1 ;
-(id)_twitterApp;
-(void)twitterContactUpdater:(id)arg1 didUpdateProgress:(float)arg2 ;
-(void)twitterContactUpdater:(id)arg1 didFinishUpdatingContacts:(int)arg2 ;
-(id)_twitterAccountType;
-(id)_learnMoreLinkSpecifier;
-(void)_updateContactsButtonTapped:(id)arg1 ;
-(char)_isTwitterParentalRestrictionEnabled;
-(void)_signInButtonTapped:(id)arg1 ;
-(id)_createNewAccountButtonSpecifier;
-(id)_accountListSpecifiers;
-(id)_noAccountsSpecifiers;
-(void)_reloadAuthorizedAppList;
-(void)accountCreationController:(id)arg1 didFinishWithSuccess:(char)arg2 ;
-(id)_specifierForAccount:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(id)specifiers;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)navigationItem;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)_willEnterForeground:(id)arg1 ;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)appInstallerWillStart:(id)arg1 ;
-(void)_createNewAccountButtonTapped:(id)arg1 ;
-(void)returnPressedAtEnd;
-(void)_setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_updateSignInButton;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)setUsername:(id)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
@end

