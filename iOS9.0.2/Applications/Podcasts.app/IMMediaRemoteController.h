/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@class IMAVPlayer;

@interface IMMediaRemoteController : NSObject {

	IMAVPlayer* _player;

}

@property (nonatomic,retain) IMAVPlayer * player;              //@synthesize player=_player - In the implementation block
-(int)remotePlay:(id)arg1 ;
-(int)remotePause:(id)arg1 ;
-(int)remoteStop:(id)arg1 ;
-(int)remoteTogglePlayPause:(id)arg1 ;
-(int)remoteNextTrack:(id)arg1 ;
-(int)remotePreviousTrack:(id)arg1 ;
-(int)remoteSeekForward:(id)arg1 ;
-(int)remoteSeekBackward:(id)arg1 ;
-(int)remoteChangePlaybackRate:(id)arg1 ;
-(int)remoteSkipBackward:(id)arg1 ;
-(int)remoteSkipForward:(id)arg1 ;
-(int)remoteSetPlayhead:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(void)setPlayer:(IMAVPlayer *)arg1 ;
-(void)tearDown;
-(IMAVPlayer *)player;
-(void)dealloc;
-(CFArrayRef)copySupportedCommands;
-(void)setup;
@end

