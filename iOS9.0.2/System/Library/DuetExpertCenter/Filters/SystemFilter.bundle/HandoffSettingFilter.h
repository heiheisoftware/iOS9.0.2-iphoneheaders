/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DuetExpertCenter/Filters/SystemFilter.bundle/SystemFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <libobjc.A.dylib/_DECFilter.h>

@class NSString;

@interface HandoffSettingFilter : NSObject <MCProfileConnectionObserver, _DECFilter> {

	char _continuitySuggestionAllowed;

}

@property (assign) char continuitySuggestionAllowed;                //@synthesize continuitySuggestionAllowed=_continuitySuggestionAllowed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContinuitySuggestionAllowed:(char)arg1 ;
-(char)continuitySuggestionAllowed;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(char)acceptPredictionItem:(id)arg1 forConsumer:(unsigned)arg2 ;
@end
