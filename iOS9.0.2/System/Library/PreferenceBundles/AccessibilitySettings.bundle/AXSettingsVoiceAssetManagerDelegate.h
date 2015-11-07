/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AXSettingsVoiceAssetManagerDelegate <NSObject>
@required
-(void)assetManagerVoiceLanguageIsCompact:(id)arg1 alternateVoiceId:(id)arg2 compact:(char)arg3 error:(id)arg4;
-(void)assetManagerVoiceLanguageIsDownloading:(id)arg1 alternateVoiceId:(id)arg2 downloading:(char)arg3;
-(void)assetManagerVoiceLanguageIsDownloadingPaused:(id)arg1 alternateVoiceId:(id)arg2 paused:(char)arg3;
-(void)assetManagerVoiceLanguageDownloadProgress:(id)arg1 alternateVoiceId:(id)arg2 progress:(float)arg3 storageSize:(long long)arg4 requiredDiskSpace:(char)arg5 versionId:(id)arg6;
-(void)assetManagerVoiceLanguageInProgressDownload:(id)arg1 alternateVoiceId:(id)arg2;

@end
