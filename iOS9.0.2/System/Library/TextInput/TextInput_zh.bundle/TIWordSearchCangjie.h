/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_zh/TIWordSearchShapeBased.h>

@interface TIWordSearchCangjie : TIWordSearchShapeBased {

	char _suchengEnabled;
	char _supportsEnglish;

}

@property (assign) char suchengEnabled;               //@synthesize suchengEnabled=_suchengEnabled - In the implementation block
@property (assign) char supportsEnglish;              //@synthesize supportsEnglish=_supportsEnglish - In the implementation block
-(void)setSuchengEnabled:(char)arg1 ;
-(char)suchengEnabled;
-(void)setSupportsEnglish:(char)arg1 ;
-(char)supportsEnglish;
-(char)validateCode:(id)arg1 withOption:(unsigned long)arg2 ;
-(id)initTIWordSearchWithInputMode:(id)arg1 ;
-(int)mecabraInputMethodType;
-(id)uncachedCandidatesForOperation:(id)arg1 ;
@end

