/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/MNRouteManagerDelegate.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>

@class MNNavigationSession, MNRouteManager, RAPGraphDirectionsRecorder, NSString;

@interface MNDirectionsSession : NSObject <MNRouteManagerDelegate, MKLocationManagerObserver> {

	MNNavigationSession* _navigationSession;
	MNRouteManager* _routeManager;
	char _didBeginNavigation;
	char _didEndNavigation;
	RAPGraphDirectionsRecorder* _reportAProblemRecorder;

}

@property (nonatomic,readonly) MNNavigationSession * navigationSession;                          //@synthesize navigationSession=_navigationSession - In the implementation block
@property (nonatomic,readonly) MNRouteManager * routeManager;                                    //@synthesize routeManager=_routeManager - In the implementation block
@property (nonatomic,readonly) RAPGraphDirectionsRecorder * reportAProblemRecorder;              //@synthesize reportAProblemRecorder=_reportAProblemRecorder - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MNNavigationSession *)navigationSession;
-(void)routeManager:(id)arg1 receivedTrafficIncidentAlert:(id)arg2 ;
-(void)routeManagerDidFailToRecordTrace:(id)arg1 ;
-(void)routeManagerDidChangeState:(id)arg1 newRouteState:(int)arg2 ;
-(void)routeManagerUpdatedTrafficIncidents:(id)arg1 ;
-(void)routeManagerUpdatedETA:(id)arg1 ;
-(void)routeManager:(id)arg1 willSendETARequest:(id)arg2 ;
-(void)routeManager:(id)arg1 failedWithError:(id)arg2 ;
-(void)routeManager:(id)arg1 didChangeRoutePreloadSession:(id)arg2 ;
-(void)routeManager:(id)arg1 didSwitchToNewRoute:(id)arg2 alreadyOnRoute:(char)arg3 ;
-(void)routeManagerDidChangeActiveRouteSet:(id)arg1 ;
-(MNRouteManager *)routeManager;
-(RAPGraphDirectionsRecorder *)reportAProblemRecorder;
-(char)setupNavigatorForTransportType:(int)arg1 useSimulation:(char)arg2 tracePlayer:(id)arg3 ;
-(id)initWithRouteManager:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(char)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)dealloc;
-(void)routeManager:(id)arg1 recordRouteResponse:(id)arg2 ;
-(void)routeManagerFailedToRecalculateRoute:(id)arg1 previousRoute:(id)arg2 errorCode:(int)arg3 ;
-(void)routeManagerWillRequestRoute:(id)arg1 ;
-(void)routeManagerFailedToReceiveRoutes:(id)arg1 error:(id)arg2 ;
-(void)routeManager:(id)arg1 recordRouteRequest:(id)arg2 ;
-(void)routeManagerWillRecalculateRoute:(id)arg1 ;
-(void)routeManager:(id)arg1 addedRoutesToRouteSet:(id)arg2 ;
-(void)routeManagerCanceledRequest:(id)arg1 ;
-(void)routeManager:(id)arg1 recalculatedNewRoute:(id)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
@end
