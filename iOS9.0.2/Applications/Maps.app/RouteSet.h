/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class GEORouteSet, NSArray, MNRoute, NSTimeZone;

@interface RouteSet : NSObject {

	GEORouteSet* _geoRouteSet;
	MNRoute* _currentRoute;
	NSArray* _routes;
	NSArray* _routesAndGaps;
	MNRoute* _drivingRouteEquivalentToWalkingRoute;
	NSArray* _trafficIncidentsOffRoutes;

}

@property (nonatomic,readonly) GEORouteSet * geoRouteSet;                                                       //@synthesize geoRouteSet=_geoRouteSet - In the implementation block
@property (nonatomic,retain) MNRoute * currentRoute;                                                            //@synthesize currentRoute=_currentRoute - In the implementation block
@property (nonatomic,readonly) NSArray * routes;                                                                //@synthesize routes=_routes - In the implementation block
@property (nonatomic,readonly) NSArray * routesAndGaps;                                                         //@synthesize routesAndGaps=_routesAndGaps - In the implementation block
@property (nonatomic,readonly) NSTimeZone * startTimeZone; 
@property (nonatomic,readonly) NSTimeZone * endTimeZone; 
@property (nonatomic,__weak,readonly) MNRoute * drivingRouteEquivalentToWalkingRoute;                           //@synthesize drivingRouteEquivalentToWalkingRoute=_drivingRouteEquivalentToWalkingRoute - In the implementation block
@property (nonatomic,readonly) NSArray * trafficIncidentsOffRoutes;                                             //@synthesize trafficIncidentsOffRoutes=_trafficIncidentsOffRoutes - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> transitRoutingIncidentMessage; 
@property (nonatomic,readonly) char allTransitRoutesBlockedByIncident; 
@property (nonatomic,readonly) char hasScheduledDepartures; 
@property (nonatomic,readonly) char containsOnlyWalkingRoutes; 
@property (nonatomic,readonly) char transitModePreferencesIgnored; 
-(void)setCurrentRoute:(MNRoute *)arg1 ;
-(id)routeStepsTable;
-(void)addRoutesAndContingenciesToTable:(id)arg1 ;
-(id)trafficIncidentsUsingSelectedRoute:(MNRoute*)arg1 includeUnselectedRoutes:(char)arg2 ;
-(void)_conflateWalkingAndDrivingRoutes;
-(MNRoute*)routeForGEORoute:(id)arg1 ;
-(void)_populateTrafficIncidentsFromETARoute:(id)arg1 ;
-(void)_createRoutesForRouteSet:(id)arg1 ;
-(GEORouteSet *)geoRouteSet;
-(id)initWithRouteSet:(id)arg1 ;
-(void)_createRoutesAndGapsFoRouteSet:(id)arg1 ;
-(void)addRoutesFromRouteSet:(id)arg1 ;
-(MNRoute*)_routeInArray:(id)arg1 matchingComposedRoute:(id)arg2 ;
-(NSArray *)trafficIncidentsOffRoutes;
-(MNRoute*)routeForComposedRoute:(id)arg1 ;
-(SCD_Struct_RA7)_mapPointForRoute:(MNRoute*)arg1 atIndex:(unsigned)arg2 ;
-(MNRoute *)drivingRouteEquivalentToWalkingRoute;
-(void)_createTrafficIncidents;
-(char)containsOnlyWalkingRoutes;
-(char)hasScheduledDepartures;
-(NSTimeZone *)startTimeZone;
-(NSTimeZone *)endTimeZone;
-(id)description;
-(NSArray *)routes;
-(id<GEOTransitRoutingIncidentMessage>)transitRoutingIncidentMessage;
-(char)transitModePreferencesIgnored;
-(NSArray *)routesAndGaps;
-(char)allTransitRoutesBlockedByIncident;
-(MNRoute *)currentRoute;
@end

