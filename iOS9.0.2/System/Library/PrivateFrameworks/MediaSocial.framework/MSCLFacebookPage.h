/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MSCLFacebookPage : NSObject <NSCopying> {

	NSString* _accessToken;
	NSString* _categoryName;
	NSString* _identifier;
	NSString* _name;
	int _numberOfLikes;

}

@property (nonatomic,copy) NSString * accessToken;               //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSString * categoryName;              //@synthesize categoryName=_categoryName - In the implementation block
@property (nonatomic,copy) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int numberOfLikes;                  //@synthesize numberOfLikes=_numberOfLikes - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setNumberOfLikes:(int)arg1 ;
-(int)numberOfLikes;
-(NSString *)accessToken;
-(id)initWithGraphDictionary:(id)arg1 ;
-(void)setAccessToken:(NSString *)arg1 ;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
@end

