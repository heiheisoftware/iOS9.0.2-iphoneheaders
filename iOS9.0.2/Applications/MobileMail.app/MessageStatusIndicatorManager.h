/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MessageStatusIndicatorManager : NSObject {

	unsigned _indicatorOptions;
	unsigned _disabledIndicatorOptions;

}

@property (assign,nonatomic) char hidesUnreadIndicator; 
@property (assign,nonatomic) char hidesVIPIndicator; 
@property (assign,nonatomic) char hidesAttachmentIndicator; 
@property (assign,nonatomic) unsigned indicatorOptions;                         //@synthesize indicatorOptions=_indicatorOptions - In the implementation block
@property (nonatomic,readonly) unsigned effectiveIndicatorOptions; 
+(id)flagShapeImage;
+(id)dotIndicatorImage;
+(id)unreadFlaggedImageWithUnreadColor:(id)arg1 flaggedColor:(id)arg2 ;
+(void)initialize;
-(unsigned)effectiveIndicatorOptions;
-(id)statusIndicatorImageWithOptionsMask:(unsigned)arg1 ;
-(void)setHidesUnreadIndicator:(char)arg1 ;
-(void)setIndicatorOptions:(unsigned)arg1 ;
-(char)hidesUnreadIndicator;
-(void)_setIndicatorOptions:(unsigned)arg1 disabled:(char)arg2 ;
-(char)_indicatorOptionsAreDisabled:(unsigned)arg1 ;
-(unsigned)indicatorOptions;
-(void)setHidesAttachmentIndicator:(char)arg1 ;
-(char)hidesAttachmentIndicator;
-(id)statusIndicatorImageWithOptions:(unsigned)arg1 ;
-(char)hidesVIPIndicator;
-(void)setHidesVIPIndicator:(char)arg1 ;
@end

