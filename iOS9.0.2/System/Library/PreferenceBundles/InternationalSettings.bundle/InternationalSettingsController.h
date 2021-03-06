/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/InternationalSettings.bundle/InternationalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSLocale, NSString, PSSpecifier, NSArray, NSMutableArray;

@interface InternationalSettingsController : PSListController {

	NSLocale* _locale;
	char _shouldReloadSpecifiers;
	unsigned _deviceLanguageIndex;
	NSString* _topMostLanguage;
	char _changePrimaryLanguage;
	PSSpecifier* _addLanguageSpecifier;
	NSArray* _deviceLanguageGroup;
	NSArray* _preferredLanguagesGroup;
	NSArray* _regionFormatGroup;
	NSArray* _regionFormatExampleGroup;
	NSMutableArray* _updatedAppleLanguages;
	PSSpecifier* _numberingSystemSpecifier;

}

@property (assign,nonatomic) char shouldReloadSpecifiers;                         //@synthesize shouldReloadSpecifiers=_shouldReloadSpecifiers - In the implementation block
@property (nonatomic,retain) PSSpecifier * addLanguageSpecifier;                  //@synthesize addLanguageSpecifier=_addLanguageSpecifier - In the implementation block
@property (nonatomic,retain) NSArray * deviceLanguageGroup;                       //@synthesize deviceLanguageGroup=_deviceLanguageGroup - In the implementation block
@property (nonatomic,retain) NSArray * preferredLanguagesGroup;                   //@synthesize preferredLanguagesGroup=_preferredLanguagesGroup - In the implementation block
@property (nonatomic,retain) NSArray * regionFormatGroup;                         //@synthesize regionFormatGroup=_regionFormatGroup - In the implementation block
@property (nonatomic,retain) NSArray * regionFormatExampleGroup;                  //@synthesize regionFormatExampleGroup=_regionFormatExampleGroup - In the implementation block
@property (nonatomic,retain) NSMutableArray * updatedAppleLanguages;              //@synthesize updatedAppleLanguages=_updatedAppleLanguages - In the implementation block
@property (assign,nonatomic) char changePrimaryLanguage;                          //@synthesize changePrimaryLanguage=_changePrimaryLanguage - In the implementation block
@property (nonatomic,retain) PSSpecifier * numberingSystemSpecifier;              //@synthesize numberingSystemSpecifier=_numberingSystemSpecifier - In the implementation block
+(id)reloadLocale:(id)arg1 ;
+(id)baseLanguageIdentifierFromLanguageList:(id)arg1 ;
+(id)formattedTime:(id)arg1 ;
+(id)effectiveSystemLanguagesWithUnsupportedVariant:(char)arg1 forPreferredLanguages:(id)arg2 ;
+(id)formattedMoneyAndNumbers:(id)arg1 country:(id)arg2 ;
+(void)postNotificationForLanguageChange;
+(double)sampleTime;
+(id)formattedDate:(id)arg1 ;
+(void)setLanguage:(id)arg1 ;
+(id)canonicalLocaleIdentifierWithValidCalendarForComponents:(id)arg1 ;
-(void)updateCell:(id)arg1 forPreferredLanguageAtIndex:(unsigned)arg2 ;
-(char)changePrimaryLanguage;
-(id)numberingSystemsTitles;
-(void)setNumberingSystem:(id)arg1 specifier:(id)arg2 ;
-(void)setChangePrimaryLanguage:(char)arg1 ;
-(NSArray *)preferredLanguagesGroup;
-(id)numberingSystemsShortTitles;
-(id)numberingSystem:(id)arg1 ;
-(id)localizedLanguage:(id)arg1 ;
-(id)locale:(id)arg1 ;
-(void)setShouldReloadSpecifiers:(char)arg1 ;
-(void)setCalendar:(id)arg1 specifier:(id)arg2 ;
-(id)calendar:(id)arg1 ;
-(void)showLocaleSheet:(id)arg1 ;
-(void)changeLanguage:(id)arg1 ;
-(void)logStatistics;
-(void)setUpdatedAppleLanguages:(NSMutableArray *)arg1 ;
-(void)toggleEdit;
-(NSMutableArray *)updatedAppleLanguages;
-(void)reloadLocale;
-(unsigned)sectionIndexForTableView:(id)arg1 fromSuperSectionIndex:(unsigned)arg2 ;
-(char)canEditLanguageAtIndexPath:(id)arg1 tableView:(id)arg2 ;
-(PSSpecifier *)numberingSystemSpecifier;
-(void)setNumberingSystemSpecifier:(PSSpecifier *)arg1 ;
-(void)showOfficialLanguageSheet:(id)arg1 ;
-(void)cancelChangeLanguage:(id)arg1 ;
-(NSArray *)deviceLanguageGroup;
-(NSArray *)regionFormatGroup;
-(NSArray *)regionFormatExampleGroup;
-(PSSpecifier *)addLanguageSpecifier;
-(void)setDeviceLanguageGroup:(NSArray *)arg1 ;
-(void)setRegionFormatGroup:(NSArray *)arg1 ;
-(void)setRegionFormatExampleGroup:(NSArray *)arg1 ;
-(void)setPreferredLanguagesGroup:(NSArray *)arg1 ;
-(void)setAddLanguageSpecifier:(PSSpecifier *)arg1 ;
-(void)updateSelectionStyleForVisibleCells;
-(void)updateSpecifiersForLocaleRegionChange:(id)arg1 ;
-(char)shouldReloadSpecifiers;
-(id)numberingSystemsValues;
-(void)showLanguageSheet:(id)arg1 ;
-(id)language:(id)arg1 ;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)cancelEdits;
@end

