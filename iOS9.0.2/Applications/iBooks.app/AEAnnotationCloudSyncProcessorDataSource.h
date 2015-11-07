/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AEAnnotationCloudSyncProcessorDataSource <NSObject>
@optional
-(char)processor:(id)arg1 shouldGetKeysForKeyGroup:(int)arg2;
-(void)processor:(id)arg1 didMergeDataForAssetID:(id)arg2;

@required
-(int)numberOfKeyGroupsForProcessor:(id)arg1;
-(id)processor:(id)arg1 keyPrefixForKeyGroup:(int)arg2;
-(id)processor:(id)arg1 annotationTypesForKeyGroup:(int)arg2;
-(id)processor:(id)arg1 assetIDsForKeyGroup:(int)arg2;
-(id)processor:(id)arg1 maxModificationDatesDictionaryForKeyGroup:(int)arg2;
-(id)processor:(id)arg1 versionForAssetID:(id)arg2 inKeyGroup:(int)arg3;
-(void)processor:(id)arg1 setVersion:(id)arg2 maxModificationDate:(id)arg3 forAssetID:(id)arg4 inKeyGroup:(int)arg5;

@end
