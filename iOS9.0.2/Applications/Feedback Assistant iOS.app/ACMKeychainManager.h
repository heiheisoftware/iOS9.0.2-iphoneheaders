/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ACMKeychainManager : NSObject
+(id)sharedInstance;
-(id)universalAccessGroup;
-(id)obtainAccessGroup;
-(void)dumpResults:(id)arg1 printAttributes:(char)arg2 ;
-(id)searchItemWithInfo:(id)arg1 ;
-(void)dumpResults:(id)arg1 ;
-(id)sharedAccessGroup;
-(long)storeItemWithInfo:(id)arg1 share:(char)arg2 result:(id*)arg3 ;
-(char)removeItemWithInfo:(id)arg1 ;
@end
