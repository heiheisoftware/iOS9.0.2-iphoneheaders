/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3Collection.h>

@interface ML3Album : ML3Collection
+(id)propertyForMPMediaEntityProperty:(id)arg1 ;
+(int)revisionTrackingCode;
+(id)defaultOrderingTerms;
+(void)initialize;
+(id)databaseTable;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)allProperties;
+(char)propertyIsCountProperty:(id)arg1 ;
+(id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3 ;
+(id)predisambiguatedProperties;
+(id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2 ;
+(id)propertiesForGroupingKey;
+(id)trackForeignPersistentID;
+(id)propertiesForGroupingUniqueCollections;
+(id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2 ;
+(id)_albumArtistProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2 ;
-(id)multiverseIdentifier;
-(void)updateTrackValues:(id)arg1 ;
-(void)updateRepresentativeItem:(id)arg1 inLibrary:(id)arg2 ;
-(id)protocolItem;
@end

