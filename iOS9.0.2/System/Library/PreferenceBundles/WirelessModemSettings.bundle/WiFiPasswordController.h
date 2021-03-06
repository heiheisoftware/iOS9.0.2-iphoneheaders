/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface WiFiPasswordController : PSListController <UITextFieldDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generateDefaultPassword;
-(id)specifiers;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)textDidChange:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)doneButtonClicked:(id)arg1 ;
-(void)emptySetter:(id)arg1 specifier:(id)arg2 ;
-(id)wifiPassword:(id)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
@end

