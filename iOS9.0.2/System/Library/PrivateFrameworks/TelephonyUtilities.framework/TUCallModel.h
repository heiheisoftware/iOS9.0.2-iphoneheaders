/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TUCallModel : NSObject {

	char _ambiguous;
	char _swappable;
	char _mergeable;
	char _holdAllowed;
	char _addCallAllowed;
	char _takingCallsPrivateAllowed;
	char _hardPauseAvailable;
	char _endAndAnswerAllowed;
	char _holdAndAnswerAllowed;
	char _sendToVoicemailAllowed;
	int _ambiguityState;

}

@property (getter=isAmbiguous,nonatomic,readonly) char ambiguous;                                              //@synthesize ambiguous=_ambiguous - In the implementation block
@property (nonatomic,readonly) int ambiguityState;                                                             //@synthesize ambiguityState=_ambiguityState - In the implementation block
@property (getter=isSwappable,nonatomic,readonly) char swappable;                                              //@synthesize swappable=_swappable - In the implementation block
@property (getter=isMergeable,nonatomic,readonly) char mergeable;                                              //@synthesize mergeable=_mergeable - In the implementation block
@property (getter=isHoldAllowed,nonatomic,readonly) char holdAllowed;                                          //@synthesize holdAllowed=_holdAllowed - In the implementation block
@property (getter=isAddCallAllowed,nonatomic,readonly) char addCallAllowed;                                    //@synthesize addCallAllowed=_addCallAllowed - In the implementation block
@property (getter=isTakingCallsPrivateAllowed,nonatomic,readonly) char takingCallsPrivateAllowed;              //@synthesize takingCallsPrivateAllowed=_takingCallsPrivateAllowed - In the implementation block
@property (getter=isHardPauseAvailable,nonatomic,readonly) char hardPauseAvailable;                            //@synthesize hardPauseAvailable=_hardPauseAvailable - In the implementation block
@property (getter=isEndAndAnswerAllowed,nonatomic,readonly) char endAndAnswerAllowed;                          //@synthesize endAndAnswerAllowed=_endAndAnswerAllowed - In the implementation block
@property (getter=isHoldAndAnswerAllowed,nonatomic,readonly) char holdAndAnswerAllowed;                        //@synthesize holdAndAnswerAllowed=_holdAndAnswerAllowed - In the implementation block
@property (getter=isSendToVoicemailAllowed,nonatomic,readonly) char sendToVoicemailAllowed;                    //@synthesize sendToVoicemailAllowed=_sendToVoicemailAllowed - In the implementation block
+(id)sharedInstance;
-(id)description;
-(char)isAmbiguous;
-(char)isMergeable;
-(int)ambiguityState;
-(char)isTakingCallsPrivateAllowed;
-(char)isHardPauseAvailable;
-(char)isEndAndAnswerAllowed;
-(char)isSendToVoicemailAllowed;
-(id)audioCategoryForCall:(id)arg1 ;
-(char)shouldPlayDTMFToneForCall:(id)arg1 ;
-(char)isSwappable;
-(char)isHoldAllowed;
-(char)isAddCallAllowed;
-(char)isHoldAndAnswerAllowed;
-(id)audioModeForCall:(id)arg1 ;
@end

