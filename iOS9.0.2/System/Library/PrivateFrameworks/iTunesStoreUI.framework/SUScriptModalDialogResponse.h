/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SUScriptModalDialogResponse : NSObject {

	int _buttonIndex;
	NSString* _textFieldValue;

}

@property (assign,nonatomic) int buttonIndex;                        //@synthesize buttonIndex=_buttonIndex - In the implementation block
@property (nonatomic,retain) NSString * textFieldValue;              //@synthesize textFieldValue=_textFieldValue - In the implementation block
-(void)dealloc;
-(int)buttonIndex;
-(NSString *)textFieldValue;
-(void)setTextFieldValue:(NSString *)arg1 ;
-(void)setButtonIndex:(int)arg1 ;
@end
