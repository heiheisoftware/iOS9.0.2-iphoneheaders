/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BWStillImageCaptureStatusDelegate <NSObject>
@required
-(void)stillImageCoordinator:(id)arg1 willBeginCaptureForSettings:(id)arg2 resolvedCaptureType:(int)arg3;
-(void)stillImageCoordinator:(id)arg1 willCapturePhotoForSettings:(id)arg2 sisActive:(char)arg3;
-(void)stillImageCoordinator:(id)arg1 didCapturePreBracketedEV0ImageForSettings:(id)arg2 resolvedCaptureType:(int)arg3 pts:(SCD_Struct_BW2)arg4;
-(void)stillImageCoordinator:(id)arg1 didCapturePhotoForSettings:(id)arg2 resolvedCaptureType:(int)arg3 pts:(SCD_Struct_BW2)arg4;
-(void)stillImageCoordinator:(id)arg1 willPrepareStillImageBracketWithSettings:(id)arg2 clientInitiated:(char)arg3;

@end

