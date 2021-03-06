/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, GEOPDPlaceGlobalResult;

@interface GEOPDPlaceResponse : PBCodable <NSCopying> {

	NSMutableArray* _displayLanguages;
	NSString* _displayRegion;
	GEOPDPlaceGlobalResult* _globalResult;
	NSMutableArray* _placeResults;
	int _requestType;
	NSMutableArray* _spokenLanguages;
	int _status;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) int status;                                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) char hasRequestType; 
@property (assign,nonatomic) int requestType;                                    //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) char hasGlobalResult; 
@property (nonatomic,retain) GEOPDPlaceGlobalResult * globalResult;              //@synthesize globalResult=_globalResult - In the implementation block
@property (nonatomic,retain) NSMutableArray * placeResults;                      //@synthesize placeResults=_placeResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayLanguages;                  //@synthesize displayLanguages=_displayLanguages - In the implementation block
@property (nonatomic,readonly) char hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion;                           //@synthesize displayRegion=_displayRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * spokenLanguages;                   //@synthesize spokenLanguages=_spokenLanguages - In the implementation block
-(int)requestType;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasRequestType:(char)arg1 ;
-(void)setRequestType:(int)arg1 ;
-(char)hasRequestType;
-(id)_disambiguationLabels;
-(void)setDisplayLanguages:(NSMutableArray *)arg1 ;
-(NSMutableArray *)displayLanguages;
-(unsigned)spokenLanguagesCount;
-(NSString *)displayRegion;
-(id)spokenLanguageAtIndex:(unsigned)arg1 ;
-(void)addDisplayLanguage:(id)arg1 ;
-(unsigned)displayLanguagesCount;
-(id)displayLanguageAtIndex:(unsigned)arg1 ;
-(char)hasDisplayRegion;
-(void)setSpokenLanguages:(NSMutableArray *)arg1 ;
-(NSMutableArray *)spokenLanguages;
-(void)clearSpokenLanguages;
-(void)addSpokenLanguage:(id)arg1 ;
-(void)clearDisplayLanguages;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(void)setHasStatus:(char)arg1 ;
-(char)hasStatus;
-(void)setPlaceResults:(NSMutableArray *)arg1 ;
-(id)placeResultAtIndex:(unsigned)arg1 ;
-(unsigned)placeResultsCount;
-(void)addPlaceResult:(id)arg1 ;
-(NSMutableArray *)placeResults;
-(void)clearPlaceResults;
-(id)initWithPlace:(id)arg1 forRequestType:(int)arg2 ;
-(GEOPDPlaceGlobalResult *)globalResult;
-(char)hasGlobalResult;
-(void)setGlobalResult:(GEOPDPlaceGlobalResult *)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

