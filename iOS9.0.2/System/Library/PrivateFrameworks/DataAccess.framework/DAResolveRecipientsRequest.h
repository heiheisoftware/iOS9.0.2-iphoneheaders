/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSDate;

@interface DAResolveRecipientsRequest : NSObject {

	char _retrieveCertificates;
	char _retrieveAvailablilty;
	NSArray* _emailAddresses;
	NSDate* _startTime;
	NSDate* _endTime;

}

@property (nonatomic,retain) NSArray * emailAddresses;               //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (assign,nonatomic) char retrieveCertificates;              //@synthesize retrieveCertificates=_retrieveCertificates - In the implementation block
@property (assign,nonatomic) char retrieveAvailablilty;              //@synthesize retrieveAvailablilty=_retrieveAvailablilty - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                       //@synthesize endTime=_endTime - In the implementation block
-(NSArray *)emailAddresses;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSDate *)startTime;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setRetrieveAvailablilty:(char)arg1 ;
-(id)initWithEmailAddresses:(id)arg1 retrieveCertificates:(char)arg2 retrieveAvailability:(char)arg3 withStartTime:(id)arg4 endTime:(id)arg5 ;
-(char)retrieveAvailablilty;
-(char)retrieveCertificates;
-(void)setRetrieveCertificates:(char)arg1 ;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(id)initWithEmailAddresses:(id)arg1 ;
@end
