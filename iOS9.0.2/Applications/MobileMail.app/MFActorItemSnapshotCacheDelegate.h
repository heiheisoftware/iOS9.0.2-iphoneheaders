/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFActorItemSnapshotCacheDelegate <NSObject>
@required
-(id)snapshotCache:(id)arg1 updatedSnapshotForItemWithIdentifier:(id)arg2;
-(void)snapshotCache:(id)arg1 didCacheSnapshotForItemWithIdentifier:(id)arg2;
-(void)snapshotCache:(id)arg1 didEvictSnapshotForItemWithIdentifier:(id)arg2;
-(char)snapshotCache:(id)arg1 shouldEvictSnapshotForItemWithIdentifier:(id)arg2;

@end
