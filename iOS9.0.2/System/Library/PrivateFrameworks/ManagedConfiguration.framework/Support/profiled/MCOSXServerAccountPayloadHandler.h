/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <profiled/MCNewPayloadHandler.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSError, ACAccount;

@interface MCOSXServerAccountPayloadHandler : MCNewPayloadHandler {

	NSObject*<OS_dispatch_semaphore> _doneSema;
	char _validationComplete;
	NSError* _validationError;
	ACAccount* _setAsideAccount;

}

@property (nonatomic,retain) ACAccount * setAsideAccount;              //@synthesize setAsideAccount=_setAsideAccount - In the implementation block
-(char)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)setAsideWithInstaller:(id)arg1 ;
-(id)userInputFields;
-(char)preflightUserInputResponses:(id)arg1 outError:(id*)arg2 ;
-(void)setUserInputResponses:(id)arg1 ;
-(id)_errorFromValidationError:(id)arg1 ;
-(void)_deleteAccountAndAssociatedData:(id)arg1 ;
-(ACAccount *)setAsideAccount;
-(void)setSetAsideAccount:(ACAccount *)arg1 ;
-(id)_reallyInstallInstaller:(id)arg1 isInstalledByMDM:(char)arg2 ;
-(id)_installedAccount;
-(id)_accountFromPayloadWithUserInputResponses:(id)arg1 ;
-(void)_preflightWithAccount:(id)arg1 ;
-(void)_verifyCredentialsForAccount:(id)arg1 ;
-(char)isInstalled;
-(id)accountStore;
-(void)remove;
@end
