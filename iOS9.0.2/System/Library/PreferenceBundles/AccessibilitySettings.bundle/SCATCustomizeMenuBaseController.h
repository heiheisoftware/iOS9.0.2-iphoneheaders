/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AXReorderableCheckmarkListController.h>

@class NSMutableDictionary;

@interface SCATCustomizeMenuBaseController : AXReorderableCheckmarkListController {

	NSMutableDictionary* _hiddenIndexesToDictionaries;

}

@property (nonatomic,retain) NSMutableDictionary * hiddenIndexesToDictionaries;              //@synthesize hiddenIndexesToDictionaries=_hiddenIndexesToDictionaries - In the implementation block
-(id)_nameForToggle;
-(id)menuItemSpecifiersIncludingToggleButton;
-(int)indexOfSectionForItems;
-(id)filterAndTrackMenuItemsMatchingBlock:(/*^block*/id)arg1 allItems:(id)arg2 ;
-(id)restorePreviouslyFilteredItemsToItems:(id)arg1 ;
-(id)titleForItem:(id)arg1 ;
-(void)_toggleButtonTapped:(id)arg1 ;
-(void)setHiddenIndexesToDictionaries:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)hiddenIndexesToDictionaries;
-(char)_toggleShouldEnableAllMenuItems;
-(id)itemAfterTogglingEnabledState:(id)arg1 ;
-(void)_updateToggleButtonName;
-(id)specifiers;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(char)isItemEnabled:(id)arg1 ;
@end

