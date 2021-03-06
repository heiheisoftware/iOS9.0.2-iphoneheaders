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

@class NSMutableArray, NSString;

@interface GEOPBTransitIncident : PBCodable <NSCopying> {

	unsigned long long _incidentMuid;
	NSMutableArray* _affectedEntitys;
	unsigned _creationDatetime;
	unsigned _endDatetime;
	int _iconEnum;
	NSString* _longDescriptionString;
	NSString* _messageForAllBlocking;
	NSString* _messageForIncidentType;
	NSString* _messageString;
	NSString* _shortDescriptionString;
	unsigned _startDatetime;
	NSString* _titleString;
	unsigned _updatedDatetime;
	char _blocking;
	SCD_Struct_GE63 _has;

}

@property (assign,nonatomic) char hasIncidentMuid; 
@property (assign,nonatomic) unsigned long long incidentMuid;                //@synthesize incidentMuid=_incidentMuid - In the implementation block
@property (assign,nonatomic) char hasIconEnum; 
@property (assign,nonatomic) int iconEnum;                                   //@synthesize iconEnum=_iconEnum - In the implementation block
@property (assign,nonatomic) char hasStartDatetime; 
@property (assign,nonatomic) unsigned startDatetime;                         //@synthesize startDatetime=_startDatetime - In the implementation block
@property (assign,nonatomic) char hasEndDatetime; 
@property (assign,nonatomic) unsigned endDatetime;                           //@synthesize endDatetime=_endDatetime - In the implementation block
@property (assign,nonatomic) char hasCreationDatetime; 
@property (assign,nonatomic) unsigned creationDatetime;                      //@synthesize creationDatetime=_creationDatetime - In the implementation block
@property (assign,nonatomic) char hasUpdatedDatetime; 
@property (assign,nonatomic) unsigned updatedDatetime;                       //@synthesize updatedDatetime=_updatedDatetime - In the implementation block
@property (nonatomic,retain) NSMutableArray * affectedEntitys;               //@synthesize affectedEntitys=_affectedEntitys - In the implementation block
@property (assign,nonatomic) char hasBlocking; 
@property (assign,nonatomic) char blocking;                                  //@synthesize blocking=_blocking - In the implementation block
@property (nonatomic,readonly) char hasLongDescriptionString; 
@property (nonatomic,retain) NSString * longDescriptionString;               //@synthesize longDescriptionString=_longDescriptionString - In the implementation block
@property (nonatomic,readonly) char hasShortDescriptionString; 
@property (nonatomic,retain) NSString * shortDescriptionString;              //@synthesize shortDescriptionString=_shortDescriptionString - In the implementation block
@property (nonatomic,readonly) char hasTitleString; 
@property (nonatomic,retain) NSString * titleString;                         //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,readonly) char hasMessageString; 
@property (nonatomic,retain) NSString * messageString;                       //@synthesize messageString=_messageString - In the implementation block
@property (nonatomic,readonly) char hasMessageForAllBlocking; 
@property (nonatomic,retain) NSString * messageForAllBlocking;               //@synthesize messageForAllBlocking=_messageForAllBlocking - In the implementation block
@property (nonatomic,readonly) char hasMessageForIncidentType; 
@property (nonatomic,retain) NSString * messageForIncidentType;              //@synthesize messageForIncidentType=_messageForIncidentType - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAffectedEntitys:(NSMutableArray *)arg1 ;
-(void)setMessageString:(NSString *)arg1 ;
-(void)clearAffectedEntitys;
-(int)iconEnum;
-(void)setHasCreationDatetime:(char)arg1 ;
-(void)addAffectedEntity:(id)arg1 ;
-(NSString *)titleString;
-(void)setIconEnum:(int)arg1 ;
-(char)hasEndDatetime;
-(void)setHasBlocking:(char)arg1 ;
-(NSString *)shortDescriptionString;
-(char)hasBlocking;
-(void)setCreationDatetime:(unsigned)arg1 ;
-(char)hasMessageString;
-(unsigned)startDatetime;
-(void)setUpdatedDatetime:(unsigned)arg1 ;
-(id)affectedEntityAtIndex:(unsigned)arg1 ;
-(unsigned)affectedEntitysCount;
-(void)setMessageForAllBlocking:(NSString *)arg1 ;
-(void)setLongDescriptionString:(NSString *)arg1 ;
-(void)setHasUpdatedDatetime:(char)arg1 ;
-(NSString *)messageForAllBlocking;
-(char)hasShortDescriptionString;
-(char)hasCreationDatetime;
-(char)hasIconEnum;
-(void)setHasIconEnum:(char)arg1 ;
-(char)hasTitleString;
-(unsigned long long)incidentMuid;
-(NSString *)messageString;
-(unsigned)updatedDatetime;
-(void)setStartDatetime:(unsigned)arg1 ;
-(unsigned)creationDatetime;
-(char)hasUpdatedDatetime;
-(void)setShortDescriptionString:(NSString *)arg1 ;
-(char)hasMessageForAllBlocking;
-(void)setHasStartDatetime:(char)arg1 ;
-(void)setMessageForIncidentType:(NSString *)arg1 ;
-(unsigned)endDatetime;
-(char)hasMessageForIncidentType;
-(void)setIncidentMuid:(unsigned long long)arg1 ;
-(NSString *)messageForIncidentType;
-(void)setEndDatetime:(unsigned)arg1 ;
-(NSString *)longDescriptionString;
-(void)setBlocking:(char)arg1 ;
-(void)setTitleString:(NSString *)arg1 ;
-(char)hasStartDatetime;
-(char)blocking;
-(void)setHasIncidentMuid:(char)arg1 ;
-(char)hasIncidentMuid;
-(void)setHasEndDatetime:(char)arg1 ;
-(NSMutableArray *)affectedEntitys;
-(char)hasLongDescriptionString;
-(char)readFrom:(id)arg1 ;
@end

