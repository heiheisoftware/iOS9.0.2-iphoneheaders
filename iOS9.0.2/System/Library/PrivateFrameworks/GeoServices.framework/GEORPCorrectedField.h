/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEORPCorrectedField : PBCodable <NSCopying> {

	NSString* _correctedValue;
	int _field;
	NSString* _fieldName;
	NSString* _originalValue;
	char _isMarkedIncorrect;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) char hasField; 
@property (assign,nonatomic) int field;                              //@synthesize field=_field - In the implementation block
@property (nonatomic,readonly) char hasFieldName; 
@property (nonatomic,retain) NSString * fieldName;                   //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) char hasOriginalValue; 
@property (nonatomic,retain) NSString * originalValue;               //@synthesize originalValue=_originalValue - In the implementation block
@property (nonatomic,readonly) char hasCorrectedValue; 
@property (nonatomic,retain) NSString * correctedValue;              //@synthesize correctedValue=_correctedValue - In the implementation block
@property (assign,nonatomic) char hasIsMarkedIncorrect; 
@property (assign,nonatomic) char isMarkedIncorrect;                 //@synthesize isMarkedIncorrect=_isMarkedIncorrect - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)field;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasCorrectedValue;
-(char)hasOriginalValue;
-(void)setCorrectedValue:(NSString *)arg1 ;
-(NSString *)originalValue;
-(NSString *)correctedValue;
-(void)setOriginalValue:(NSString *)arg1 ;
-(NSString *)fieldName;
-(void)setField:(int)arg1 ;
-(char)hasIsMarkedIncorrect;
-(void)setFieldName:(NSString *)arg1 ;
-(char)hasFieldName;
-(char)isMarkedIncorrect;
-(char)hasField;
-(void)setHasIsMarkedIncorrect:(char)arg1 ;
-(void)setHasField:(char)arg1 ;
-(void)setIsMarkedIncorrect:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

