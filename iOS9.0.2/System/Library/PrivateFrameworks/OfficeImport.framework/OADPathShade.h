/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADShade.h>

@class OADRelativeRect;

@interface OADPathShade : OADShade {

	OADRelativeRect* mFillToRect;
	int mType;
	char mIsTypeOverridden;

}
+(id)defaultProperties;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fillToRect;
-(void)setFillToRect:(id)arg1 ;
-(char)isFillToRectOverridden;
-(char)isTypeOverridden;
-(id)initWithDefaults;
-(char)isAnythingOverridden;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
@end

