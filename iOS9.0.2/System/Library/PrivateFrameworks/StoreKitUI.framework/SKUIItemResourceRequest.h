/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIResourceRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SKUIItemRequestDelegate;
@class NSString, NSArray;

@interface SKUIItemResourceRequest : SKUIResourceRequest <NSCopying> {

	id<SKUIItemRequestDelegate> _delegate;
	NSString* _imageProfile;
	NSArray* _itemIdentifiers;
	NSString* _keyProfile;

}

@property (assign,nonatomic,__weak) id<SKUIItemRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * imageProfile;                                    //@synthesize imageProfile=_imageProfile - In the implementation block
@property (nonatomic,copy) NSString * keyProfile;                                      //@synthesize keyProfile=_keyProfile - In the implementation block
@property (nonatomic,copy) NSArray * itemIdentifiers;                                  //@synthesize itemIdentifiers=_itemIdentifiers - In the implementation block
-(void)setDelegate:(id<SKUIItemRequestDelegate>)arg1 ;
-(id<SKUIItemRequestDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKeyProfile:(NSString *)arg1 ;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(void)finishWithResource:(id)arg1 ;
-(id)newLoadOperation;
-(NSString *)imageProfile;
-(void)setImageProfile:(NSString *)arg1 ;
-(NSString *)keyProfile;
-(NSArray *)itemIdentifiers;
@end

