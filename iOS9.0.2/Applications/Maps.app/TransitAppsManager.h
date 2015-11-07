/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class TransitAppRanker;

@interface TransitAppsManager : NSObject {

	TransitAppRanker* _transitAppRanker;

}

@property (nonatomic,retain) TransitAppRanker * transitAppRanker;              //@synthesize transitAppRanker=_transitAppRanker - In the implementation block
+(id)defaultManager;
-(void)_updateCoverageFileForAppProxy:(id)arg1 libraryItem:(id)arg2 ;
-(TransitAppRanker *)transitAppRanker;
-(void)loadRelevantTransitAppsForSource:(SCD_Struct_RA7)arg1 destination:(SCD_Struct_RA7)arg2 completion:(/*^block*/id)arg3 ;
-(void)setTransitAppRanker:(TransitAppRanker *)arg1 ;
-(id)_appIdsStringWithApplicationProxies:(id)arg1 ;
-(void)recordAppLaunch:(id)arg1 ;
-(void)updateCoverageFiles;
-(id)_installedApps;
@end
