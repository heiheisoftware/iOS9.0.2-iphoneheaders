/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Tips/Tips-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface TPSLikedTip : NSObject <NSCopying, NSCoding> {

	char _matched;
	NSString* _identifier;
	NSString* _title;

}

@property (assign,nonatomic) char matched;                       //@synthesize matched=_matched - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * title;                   //@synthesize title=_title - In the implementation block
+(id)likedTipWithTip:(id)arg1 ;
-(char)updateWithTip:(id)arg1 ;
-(id)initWithTip:(id)arg1 ;
-(void)setMatched:(char)arg1 ;
-(char)matched;
-(id)titleForTip:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)debugDescription;
-(NSString *)identifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
@end

