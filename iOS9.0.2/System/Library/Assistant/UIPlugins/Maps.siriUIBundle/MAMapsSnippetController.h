/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <Maps/MAListSnippetViewDelegate.h>
#import <Maps/MAMapSnippetViewDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol SiriUISnippetViewControllerDelegate;
@class CLLocationManager, SALocation, SALocalSearchMapItemSnippet, NSString;

@interface MAMapsSnippetController : SiriUISnippetViewController <MAListSnippetViewDelegate, MAMapSnippetViewDelegate, CLLocationManagerDelegate> {

	CLLocationManager* _locManager;
	char _appearing;
	SALocation* _searchRegionCenter;
	double _fallbackDistance;
	char _hasEverStartedLoading;
	id<SiriUISnippetViewControllerDelegate> _delegate;
	SALocalSearchMapItemSnippet* _snippet;

}

@property (nonatomic,retain) SALocalSearchMapItemSnippet * snippet;              //@synthesize snippet=_snippet - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)headerLocationForSearchCenter:(id)arg1 location:(SCD_Struct_MA0)arg2 forMapItem:(id)arg3 ;
-(void)mapViewDidChooseMapAttribution:(id)arg1 ;
-(void)mapView:(id)arg1 didChooseMapItem:(id)arg2 ;
-(id)nearCityString:(id)arg1 ;
-(void)listView:(id)arg1 didChooseMapItem:(id)arg2 ;
-(id)titleForList:(id)arg1 ;
-(void)updateTitleAndSubtitleWithCompletionHandler:(/*^block*/id)arg1 ;
-(float)desiredHeightForWidth:(float)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setSnippet:(SALocalSearchMapItemSnippet *)arg1 ;
-(SALocalSearchMapItemSnippet *)snippet;
-(id)initWithSnippet:(id)arg1 ;
-(void)_cleanUp;
@end

