/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/iCloudDriveSettings.bundle/iCloudDriveSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@protocol CDSUpgradeViewControllerDelegate;
@class UIScrollView, UIView, UIImageView, UILabel, UIButton, UIActivityIndicatorView, NSArray, NSDictionary;

@interface CDSUpgradeViewController : ACUIViewController {

	UIScrollView* _scrollView;
	UIView* _contentView;
	UIImageView* _cloudDriveLogo;
	UILabel* _titleLabel;
	UILabel* _warningLabel;
	UIButton* _upgradeButton;
	UIActivityIndicatorView* _spinner;
	NSArray* _devicesThatNeedUpgrade;
	NSArray* _devicesThatCannotUpgrade;
	NSDictionary* _plainTextAttributes;
	NSDictionary* _boldTextAttributes;
	NSDictionary* _compactBoldTextAttributes;
	id<CDSUpgradeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CDSUpgradeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_warningForAllDevicesBeingIneligibleForUpgrade;
-(id)_upgradeWarningText;
-(void)_showFailedUpgradeAlert;
-(float)_heightForText:(id)arg1 withFont:(id)arg2 constrainedToWidth:(float)arg3 ;
-(float)_heightForAttributedTextInLabel:(id)arg1 ;
-(void)_handleSaveCompletionForAccount:(id)arg1 success:(char)arg2 error:(id)arg3 ;
-(id)_commaSeparatedStringWithBoldNamesForDevices:(id)arg1 ;
-(void)_loadListOfDevicesImpactedByMigration;
-(id)_warningForSomeDevicesBeingEligibleForUpgrade;
-(void)_upgradeButtonWasTapped:(id)arg1 ;
-(id)specifiers;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)setDelegate:(id<CDSUpgradeViewControllerDelegate>)arg1 ;
-(id)init;
-(id<CDSUpgradeViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_dismiss;
@end

