/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <storebookkeeperd/SBDDomainServiceHandler.h>
#import <libobjc.A.dylib/SBCDomainValueServiceProtocol.h>

@class SBKUniversalPlaybackPositionStore, NSString;

@interface SBDDomainValueServiceHandler : SBDDomainServiceHandler <SBCDomainValueServiceProtocol> {

	SBKUniversalPlaybackPositionStore* _cloudStore;

}

@property (nonatomic,readonly) SBKUniversalPlaybackPositionStore * cloudStore;              //@synthesize cloudStore=_cloudStore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDomain:(id)arg1 ;
-(oneway void)pullPlaybackPositionEntity:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)pushPlaybackPositionEntity:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(SBKUniversalPlaybackPositionStore *)cloudStore;
@end

