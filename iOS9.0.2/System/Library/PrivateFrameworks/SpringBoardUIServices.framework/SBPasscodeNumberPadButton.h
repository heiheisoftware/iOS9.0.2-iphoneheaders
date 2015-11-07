/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <TelephonyUI/TPNumberPadDarkStyleButton.h>
#import <libobjc.A.dylib/SBUIPasscodeNumberPadButton.h>

@class NSString;

@interface SBPasscodeNumberPadButton : TPNumberPadDarkStyleButton <SBUIPasscodeNumberPadButton>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)defaultSize;
+(float)_numberPadButtonOuterCircleDiameter;
+(int)_characterTypeForCharacter:(unsigned)arg1 ;
+(id)_stringCharacterForCharacter:(unsigned)arg1 ;
+(UIEdgeInsets)paddingOutsideRing;
-(int)characterType;
-(id)stringCharacter;
-(id)initForCharacter:(unsigned)arg1 ;
@end
