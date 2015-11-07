/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKLocationManagerObserver.h>

@class NSString;

@interface MapsLaunchLocationUpdater : NSObject <MKLocationManagerObserver> {

	char _started;
	double _maxLocationAge;
	double _timeout;
	/*^block*/id _handler;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTimeout:(double)arg1 maxLocationAge:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(char)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerFailedToUpdateHeading:(id)arg1 withError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
@end
