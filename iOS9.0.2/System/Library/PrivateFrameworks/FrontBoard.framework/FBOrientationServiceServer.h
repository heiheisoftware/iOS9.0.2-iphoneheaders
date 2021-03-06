/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FBSystemServiceFacility.h>

@class NSMutableSet;

@interface FBOrientationServiceServer : FBSystemServiceFacility {

	NSMutableSet* _interestedClients;

}
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 clientAuthenticator:(id)arg3 ;
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(void)_updateInterest:(unsigned)arg1 forClient:(id)arg2 ;
-(void)_handleRegisterOrientationInterest:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleRequestActiveOrientation:(id)arg1 fromClient:(id)arg2 ;
-(void)noteInterfaceOrientationChanged:(int)arg1 animationSettings:(id)arg2 direction:(int)arg3 ;
-(id)prerequisiteMilestones;
@end

