/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOPDDepartureSequence : PBCodable <NSCopying> {

	unsigned long long _lineId;
	SCD_Struct_GE51* _operatingHours;
	unsigned _operatingHoursCount;
	unsigned _operatingHoursSpace;
	unsigned long long _stopId;
	NSMutableArray* _departureFrequencys;
	NSMutableArray* _departures;
	NSString* _directionNameString;
	NSString* _headsignString;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) char hasLineId; 
@property (assign,nonatomic) unsigned long long lineId;                         //@synthesize lineId=_lineId - In the implementation block
@property (assign,nonatomic) char hasStopId; 
@property (assign,nonatomic) unsigned long long stopId;                         //@synthesize stopId=_stopId - In the implementation block
@property (nonatomic,retain) NSMutableArray * departures;                       //@synthesize departures=_departures - In the implementation block
@property (nonatomic,retain) NSMutableArray * departureFrequencys;              //@synthesize departureFrequencys=_departureFrequencys - In the implementation block
@property (nonatomic,readonly) unsigned operatingHoursCount; 
@property (nonatomic,readonly) SCD_Struct_GE51* operatingHours; 
@property (nonatomic,readonly) char hasDirectionNameString; 
@property (nonatomic,retain) NSString * directionNameString;                    //@synthesize directionNameString=_directionNameString - In the implementation block
@property (nonatomic,readonly) char hasHeadsignString; 
@property (nonatomic,retain) NSString * headsignString;                         //@synthesize headsignString=_headsignString - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)departures;
-(void)clearDepartureFrequencys;
-(char)hasDirectionNameString;
-(void)addOperatingHours:(SCD_Struct_GE51)arg1 ;
-(void)clearDepartures;
-(char)hasStopId;
-(void)setHasLineId:(char)arg1 ;
-(SCD_Struct_GE51*)operatingHours;
-(char)hasHeadsignString;
-(NSMutableArray *)departureFrequencys;
-(void)setDepartures:(NSMutableArray *)arg1 ;
-(void)addDeparture:(id)arg1 ;
-(unsigned)operatingHoursCount;
-(id)departureFrequencyAtIndex:(unsigned)arg1 ;
-(char)hasLineId;
-(void)clearOperatingHours;
-(NSString *)directionNameString;
-(unsigned long long)lineId;
-(void)addDepartureFrequency:(id)arg1 ;
-(void)setHeadsignString:(NSString *)arg1 ;
-(void)setStopId:(unsigned long long)arg1 ;
-(unsigned)departuresCount;
-(unsigned long long)stopId;
-(id)departureAtIndex:(unsigned)arg1 ;
-(SCD_Struct_GE51)operatingHoursAtIndex:(unsigned)arg1 ;
-(void)setDirectionNameString:(NSString *)arg1 ;
-(unsigned)departureFrequencysCount;
-(NSString *)headsignString;
-(void)setDepartureFrequencys:(NSMutableArray *)arg1 ;
-(void)setHasStopId:(char)arg1 ;
-(void)setLineId:(unsigned long long)arg1 ;
-(void)setOperatingHours:(SCD_Struct_GE51*)arg1 count:(unsigned)arg2 ;
-(char)readFrom:(id)arg1 ;
@end
