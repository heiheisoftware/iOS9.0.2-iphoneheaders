/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/StarkRouteGeniusFullSignViewDelegate.h>
#import <Maps/StarkLikelyRouteUpdaterObserver.h>
#import <Maps/StarkNavigationStartupDelegate.h>
#import <Maps/StarkGuidanceButtonOverlaySignDelegate.h>
#import <Maps/StarkMapBrowsingMode.h>

@protocol MapsChromeViews, StarkRouteGeniusModeDelegate;
@class StarkMapBrowsingModeController, StarkRouteGeniusFullSignView, StarkETAOnlyOverlaySign, StarkGuidanceButtonOverlaySign, NSArray, StarkLikelyRouteUpdater, StarkNavigationStartupSession, NSTimer, StarkRouteGeniusLikelyRoutesProvider, SearchResult, NSString, UIView;

@interface StarkRouteGeniusModeController : NSObject <StarkRouteGeniusFullSignViewDelegate, StarkLikelyRouteUpdaterObserver, StarkNavigationStartupDelegate, StarkGuidanceButtonOverlaySignDelegate, StarkMapBrowsingMode> {

	StarkRouteGeniusFullSignView* _fullOverlaySign;
	StarkETAOnlyOverlaySign* _smallOverlaySign;
	StarkGuidanceButtonOverlaySign* _guidanceButtonOverlaySign;
	/*^block*/id _completion;
	NSArray* _overlayItems;
	char _showingFullSign;
	int _outcome;
	StarkLikelyRouteUpdater* _likelyRouteUpdater;
	id<MapsChromeViews> _views;
	char _isCurrent;
	StarkNavigationStartupSession* _currentSession;
	NSTimer* _etaUpdateTimer;
	char _shouldRecenter;
	StarkMapBrowsingModeController* _mapBrowsingMode;
	StarkRouteGeniusLikelyRoutesProvider* _provider;
	SearchResult* _startPin;
	SearchResult* _destinationPin;
	id<StarkRouteGeniusModeDelegate> _delegate;

}

@property (nonatomic,readonly) StarkRouteGeniusLikelyRoutesProvider * provider;                    //@synthesize provider=_provider - In the implementation block
@property (assign,nonatomic) char shouldRecenter;                                                  //@synthesize shouldRecenter=_shouldRecenter - In the implementation block
@property (assign,nonatomic,__weak) id<StarkRouteGeniusModeDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SearchResult * startPin;                                              //@synthesize startPin=_startPin - In the implementation block
@property (nonatomic,retain) SearchResult * destinationPin;                                        //@synthesize destinationPin=_destinationPin - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (assign,nonatomic,__weak) StarkMapBrowsingModeController * mapBrowsingMode;              //@synthesize mapBrowsingMode=_mapBrowsingMode - In the implementation block
-(void)likelyRouteUpdaterRerouted:(id)arg1 ;
-(void)likelyRouteUpdater:(id)arg1 matchedToRoute:(id)arg2 ;
-(void)likelyRouteUpdaterUpdatedETA:(id)arg1 ;
-(void)likelyRouteUpdaterArrived:(id)arg1 ;
-(id)overlayItemsForState:(id)arg1 ;
-(char)starkTopBarModifiesInsets;
-(id)parentFocusEnvironment;
-(void)layoutForUnobscuredBoundsChange;
-(void)recenterCameraOnRouteAnimated:(char)arg1 ;
-(id)chrome;
-(void)setLikelyRouteUpdater:(id)arg1 ;
-(void)_updateAnnotations;
-(void)navigationStartupSession:(id)arg1 willRouteFromWaypoint:(id)arg2 toWaypoint:(id)arg3 ;
-(void)resignCurrentMode;
-(SearchResult *)destinationPin;
-(void)_updateSigns;
-(StarkMapBrowsingModeController *)mapBrowsingMode;
-(void)navigationStartupSession:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startNavigationToLikelyRoute:(id)arg1 withGuidance:(char)arg2 ;
-(void)collapseOverlay;
-(id)initWithProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)shouldRecenter;
-(void)_completeWithRoute:(id)arg1 outcome:(int)arg2 ;
-(SearchResult *)startPin;
-(void)setMapBrowsingMode:(StarkMapBrowsingModeController *)arg1 ;
-(void)_updateOverlayItems;
-(void)setStartPin:(SearchResult *)arg1 ;
-(void)_updateSearchPins;
-(void)setShouldRecenter:(char)arg1 ;
-(void)starkGuidanceOverlayButtonTapped:(id)arg1 ;
-(void)signViewSelectedRoute:(id)arg1 ;
-(void)resetLoading;
-(void)becomeCurrentModeWithViews:(id)arg1 ;
-(void)tappedSign;
-(void)_scheduleETAUpdate;
-(void)signViewCanceledRoute:(id)arg1 ;
-(void)_cancelScheduledETAUpdate;
-(void)setDestinationPin:(SearchResult *)arg1 ;
-(void)setDelegate:(id<StarkRouteGeniusModeDelegate>)arg1 ;
-(void)dealloc;
-(id<StarkRouteGeniusModeDelegate>)delegate;
-(void)setNeedsFocusUpdate;
-(UIView *)preferredFocusedView;
-(void)updateFocusIfNeeded;
-(char)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)dismiss;
-(void)_updateETA;
-(StarkRouteGeniusLikelyRoutesProvider *)provider;
-(void)_updateTraffic;
@end
