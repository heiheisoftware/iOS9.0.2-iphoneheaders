/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CNObserver : NSObject
+(void)sendArray:(id)arg1 error:(id)arg2 toObserver:(id)arg3 ;
+(id)observerWithResultBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
+(id)observerWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)observerWithWeakTarget:(id)arg1 resultSelector:(SEL)arg2 ;
+(void)sendResult:(id)arg1 error:(id)arg2 toObserver:(id)arg3 ;
+(id)observerWithResultBlock:(/*^block*/id)arg1 ;
+(void)sendObserver:(id)arg1 resultsOfBlock:(/*^block*/id)arg2 ;
@end
