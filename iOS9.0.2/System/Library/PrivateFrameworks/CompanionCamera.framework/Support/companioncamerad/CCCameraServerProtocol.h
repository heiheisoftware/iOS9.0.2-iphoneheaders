/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/Support/companioncamerad
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CCCameraServerProtocol
@required
-(void)photoTaken:(id)arg1;
-(oneway void)xpc_modeSelected:(int)arg1;
-(oneway void)xpc_orientationChanged:(int)arg1;
-(oneway void)xpc_mirroringChanged:(char)arg1;
-(oneway void)xpc_countdownCanceled;
-(void)checkin;

@end

