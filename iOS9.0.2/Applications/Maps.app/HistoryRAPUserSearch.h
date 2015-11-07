/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RAPAuxiliaryControlsRecording.h>
#import <Maps/RAPUserSearch.h>

@class GEORPCorrectedSearch, SearchRequestHistoryItem, NSArray, NSString;

@interface HistoryRAPUserSearch : NSObject <RAPAuxiliaryControlsRecording, RAPUserSearch> {

	GEORPCorrectedSearch* _template;
	char _hasOriginatingAuxiliaryControlIndex;
	SearchRequestHistoryItem* _historyItem;
	NSArray* _auxiliaryControls;
	unsigned long long _originatingAuxiliaryControlIndex;

}

@property (nonatomic,readonly) SearchRequestHistoryItem * historyItem;                                    //@synthesize historyItem=_historyItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * auxiliaryControls;                                               //@synthesize auxiliaryControls=_auxiliaryControls - In the implementation block
@property (nonatomic,readonly) char hasOriginatingAuxiliaryControlIndex;                                  //@synthesize hasOriginatingAuxiliaryControlIndex=_hasOriginatingAuxiliaryControlIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long originatingAuxiliaryControlIndex;                       //@synthesize originatingAuxiliaryControlIndex=_originatingAuxiliaryControlIndex - In the implementation block
@property (nonatomic,readonly) id<RAPAuxiliaryControlsRecording> auxiliaryControlsRecording; 
-(id)initWithHistoryItem:(id)arg1 correctedSearchTemplate:(id)arg2 auxiliaryControls:(id)arg3 originatingIndex:(unsigned)arg4 ;
-(id<RAPAuxiliaryControlsRecording>)auxiliaryControlsRecording;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)applyToCorrectedSearch:(id)arg1 ;
-(NSArray *)auxiliaryControls;
-(unsigned long long)originatingAuxiliaryControlIndex;
-(char)hasOriginatingAuxiliaryControlIndex;
-(SearchRequestHistoryItem *)historyItem;
@end
