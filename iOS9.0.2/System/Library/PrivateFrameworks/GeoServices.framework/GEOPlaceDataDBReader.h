/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEODBReader.h>

@interface GEOPlaceDataDBReader : GEODBReader {

	sqlite3_stmtRef _sqlMUIDForPhoneNumber;
	sqlite3_stmtRef _sqlAllComponents;
	sqlite3_stmtRef _sqlAllPhoneNumbers;
	sqlite3_stmtRef _sqlAllComponentsPerPlaceData;
	sqlite3_stmtRef _sqlAllComponentsForPlaceData;

}
-(void)dealloc;
-(void)_openDB;
-(id)componentForKey:(_GEOPlaceDataComponentKey)arg1 ;
-(id)allCacheEntries;
-(unsigned long long)muidForPhoneNumber:(unsigned long long)arg1 ;
-(id)_placeDataForIdentifier:(unsigned long long)arg1 ;
-(id)placeDataForMUID:(unsigned long long)arg1 ;
-(id)placeDataForPhoneNumber:(unsigned long long)arg1 ;
-(id)placeDataForKey:(GEOTileKey)arg1 ;
@end

