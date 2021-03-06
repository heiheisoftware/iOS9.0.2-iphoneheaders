/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfiguration : NSObject {

	SCPreferencesRef _prefs;

}
+(id)sharedInstance;
+(void)releaseSharedInstance;
-(void)dealloc;
-(unsigned char)synchronizeForWriting:(char)arg1 ;
-(void)cleanupPrefs;
-(CFStringRef)dataServiceID;
-(CFStringRef)voicemailServiceID;
-(CFStringRef)getServiceIDForPDPContext:(unsigned)arg1 ;
-(id)interfaceConfigurationValueForKey:(CFStringRef)arg1 serviceID:(CFStringRef)arg2 ;
-(void)setInterfaceConfigurationValue:(id)arg1 forKey:(CFStringRef)arg2 serviceID:(CFStringRef)arg3 ;
-(id)protocolConfiguration:(CFStringRef)arg1 serviceID:(CFStringRef)arg2 ;
-(void)setProtocolConfiguration:(id)arg1 protocolType:(CFStringRef)arg2 serviceID:(CFStringRef)arg3 ;
-(id)protocolConfigurationValueForKey:(CFStringRef)arg1 protocolType:(CFStringRef)arg2 serviceID:(CFStringRef)arg3 ;
-(void)setProtocolConfigurationValue:(id)arg1 forKey:(CFStringRef)arg2 protocolType:(CFStringRef)arg3 serviceID:(CFStringRef)arg4 ;
@end

