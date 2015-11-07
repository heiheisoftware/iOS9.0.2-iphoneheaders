/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/StocksBridgeSettings.bundle/StocksBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class BPSAppGlanceManager, NSArray;

@interface StocksSPSettingsController : PSListController {

	BPSAppGlanceManager* _manager;
	NSArray* _nanoSpecifiers;

}

@property (nonatomic,retain) BPSAppGlanceManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSArray * nanoSpecifiers;                   //@synthesize nanoSpecifiers=_nanoSpecifiers - In the implementation block
-(void)setNanoSpecifiers:(NSArray *)arg1 ;
-(NSArray *)nanoSpecifiers;
-(id)defaultStockChoice:(id)arg1 ;
-(void)_setComplicationDisplayDefault:(int)arg1 ;
-(void)setManager:(BPSAppGlanceManager *)arg1 ;
-(BPSAppGlanceManager *)manager;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)localizedPaneTitle;
@end
