/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, SSItemArtworkImage;

@interface SUItemContentRating : NSObject <NSCopying> {

	NSDictionary* _dictionary;
	int _rank;
	NSString* _ratingDescription;
	NSString* _ratingLabel;
	int _ratingSystem;
	SSItemArtworkImage* _ratingSystemLogo;
	char _shouldHideWhenRestricted;

}

@property (getter=isExplicitContent,nonatomic,readonly) char explicitContent; 
@property (assign,nonatomic) int rank;                                                     //@synthesize rank=_rank - In the implementation block
@property (nonatomic,copy) NSString * ratingDescription;                                   //@synthesize ratingDescription=_ratingDescription - In the implementation block
@property (nonatomic,copy) NSString * ratingLabel;                                         //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (assign,nonatomic) int ratingSystem;                                             //@synthesize ratingSystem=_ratingSystem - In the implementation block
@property (nonatomic,copy) SSItemArtworkImage * ratingSystemLogo;                          //@synthesize ratingSystemLogo=_ratingSystemLogo - In the implementation block
@property (getter=isRestricted,nonatomic,readonly) char restricted; 
@property (assign,nonatomic) char shouldHideWhenRestricted;                                //@synthesize shouldHideWhenRestricted=_shouldHideWhenRestricted - In the implementation block
+(int)ratingSystemFromString:(id)arg1 ;
-(char)isExplicitContent;
-(char)_isRatingSystemForApps:(int)arg1 ;
-(char)_isRatingSystemForMovies:(int)arg1 ;
-(char)_isRatingSystemForTV:(int)arg1 ;
-(char)_isRatingSystemForMusic:(int)arg1 ;
-(NSString *)ratingDescription;
-(void)setRatingDescription:(NSString *)arg1 ;
-(NSString *)ratingLabel;
-(void)setRatingLabel:(NSString *)arg1 ;
-(int)ratingSystem;
-(void)setRatingSystem:(int)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(int)rank;
-(void)setRank:(int)arg1 ;
-(char)isRestricted;
-(char)shouldHideWhenRestricted;
-(SSItemArtworkImage *)ratingSystemLogo;
-(void)setRatingSystemLogo:(SSItemArtworkImage *)arg1 ;
-(void)setShouldHideWhenRestricted:(char)arg1 ;
@end

