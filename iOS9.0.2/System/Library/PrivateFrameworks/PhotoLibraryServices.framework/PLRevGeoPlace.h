/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, PLRevGeoPlaceAnnotation;

@interface PLRevGeoPlace : NSObject {

	NSMutableArray* _placeTypeInfoMap[15];
	PLRevGeoPlaceAnnotation* _placeAnnotation;
	char _isHome;

}

@property (assign,nonatomic) char isHome;              //@synthesize isHome=_isHome - In the implementation block
+(/*^block*/id)sortedAdditionalPlaceInfoComparator;
-(char)isHome;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)initWithGEOMapItem:(id)arg1 placeAnnotationData:(id)arg2 ;
-(id)bestPlaceInfoForOrderType:(unsigned)arg1 ;
-(id)placeInfosForOrderType:(unsigned)arg1 ;
-(id)minimumAreaForOrderType:(unsigned)arg1 name:(id)arg2 ;
-(void)setIsHome:(char)arg1 ;
-(void)_mergeGEOMapItem:(id)arg1 ;
-(id)_placeInfosForOrderType:(unsigned)arg1 createIfNeeded:(char)arg2 ;
-(unsigned)_dominantOrderTypeForPlaceType:(int)arg1 lastOrderType:(unsigned)arg2 ;
-(id)_newFilterSortedPlaceInfos:(id)arg1 usingPlaceAnnotation:(id)arg2 outFoundOrderType:(unsigned*)arg3 outPreviousOrderType:(unsigned*)arg4 ;
-(void)_addPlaceName:(id)arg1 placeInfo:(id)arg2 forOrderType:(unsigned)arg3 ;
-(void)_removePlacesInPlaceInfos:(id)arg1 fromOrderType:(unsigned)arg2 ;
@end
