/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPCommentContent : PBCodable <NSCopying> {

	NSData* _comment;
	char _encrypted;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) char hasEncrypted; 
@property (assign,nonatomic) char encrypted;                 //@synthesize encrypted=_encrypted - In the implementation block
@property (nonatomic,readonly) char hasComment; 
@property (nonatomic,retain) NSData * comment;               //@synthesize comment=_comment - In the implementation block
-(void)setComment:(NSData *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)encrypted;
-(void)setEncrypted:(char)arg1 ;
-(void)setHasEncrypted:(char)arg1 ;
-(char)hasEncrypted;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasComment;
-(NSData *)comment;
-(char)readFrom:(id)arg1 ;
@end

