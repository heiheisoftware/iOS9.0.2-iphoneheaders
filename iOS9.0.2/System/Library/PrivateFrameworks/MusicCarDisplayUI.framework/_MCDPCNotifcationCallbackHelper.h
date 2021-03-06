/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSIndexPath, MCDPCModel;

@interface _MCDPCNotifcationCallbackHelper : NSObject {

	char _playback;
	/*^block*/id _loadCompletion;
	/*^block*/id _playCompletion;
	NSIndexPath* _indexPath;
	MCDPCModel* _model;
	id _selfRef;

}
-(void)dealloc;
-(void)invalidate;
-(void)begin;
-(void)_load;
-(void)_beginPlayback;
-(void)_finishLoadingNotification:(id)arg1 ;
-(id)initForLoadingIndexPath:(id)arg1 withModel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initForPlaybackAtIndexPath:(id)arg1 withModel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_finishPlaybackNotification:(id)arg1 ;
-(char)_noteHasCorrectIndexPath:(id)arg1 ;
-(id)_errorForNotification:(id)arg1 ;
@end

