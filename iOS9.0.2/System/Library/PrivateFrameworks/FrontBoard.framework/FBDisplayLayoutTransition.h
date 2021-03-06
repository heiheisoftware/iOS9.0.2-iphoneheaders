/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface FBDisplayLayoutTransition : NSObject {

	NSString* _name;
	NSString* _transitionReason;
	unsigned _displayType;
	int _interfaceOrientation;

}

@property (nonatomic,readonly) unsigned displayType;                 //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * transitionReason;              //@synthesize transitionReason=_transitionReason - In the implementation block
@property (assign,nonatomic) int interfaceOrientation;               //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
+(char)isTransitioningForDisplayType:(unsigned)arg1 ;
+(void)flushLayoutForDisplayType:(unsigned)arg1 ;
-(void)endTransition;
-(void)beginTransition;
-(void)dealloc;
-(id)description;
-(int)interfaceOrientation;
-(NSString *)name;
-(void)setInterfaceOrientation:(int)arg1 ;
-(unsigned)displayType;
-(id)initWithDisplayType:(unsigned)arg1 name:(id)arg2 ;
-(void)setTransitionReason:(NSString *)arg1 ;
-(NSString *)transitionReason;
@end

