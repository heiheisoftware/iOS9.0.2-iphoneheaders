/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface VoiceOverLanguageRotorController : PSListController
-(void)_editPressed:(id)arg1 ;
-(void)_donePressed;
-(void)_manageEditButton;
-(char)_shouldShowDialect;
-(char)_useDialectVerbiage;
-(id)_defaultDialectValue:(id)arg1 ;
-(id)makeNewLanguageSpecifier;
-(void)showVoiceDetailsForDefaultDialect;
-(void)showVoiceDetailsForRotorLanguage:(id)arg1 ;
-(id)_languageSpecs;
-(id)_valueForLanguage:(id)arg1 ;
-(id)_numberOfPronunciations:(id)arg1 ;
-(id)specifiers;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
@end

