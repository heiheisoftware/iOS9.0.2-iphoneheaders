/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSummaryItemValidator.h>
#import <libobjc.A.dylib/PKPaymentValidating.h>

@class NSString;

@interface PKShippingMethodValidator : PKPaymentSummaryItemValidator <PKPaymentValidating>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)validatorWithObject:(id)arg1 ;
+(Class)validatedClass;
-(char)isValidWithError:(id*)arg1 ;
-(id)initWithShippingMethod:(id)arg1 ;
@end

