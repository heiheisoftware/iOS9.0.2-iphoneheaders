/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 4:55:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /sbin/launchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libxpc.dylib/OS_xpc_object.h>
#import <launchd/OS_launch_event.h>

@protocol OS_launch_event <NSObject>
@end


@class NSString;

@interface OS_launch_event : OS_xpc_object <OS_launch_event>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
@end
