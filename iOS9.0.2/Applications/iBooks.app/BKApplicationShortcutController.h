/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/NSFetchedResultsControllerDelegate.h>

@class AEAnnotationProvider, NSOperationQueue, NSArray, NSString;

@interface BKApplicationShortcutController : NSObject <NSFetchedResultsControllerDelegate> {

	AEAnnotationProvider* _annotationProvider;
	NSOperationQueue* _queue;
	NSArray* _currentBookShortcuts;

}

@property (__weak) AEAnnotationProvider * annotationProvider;              //@synthesize annotationProvider=_annotationProvider - In the implementation block
@property (retain) NSOperationQueue * queue;                               //@synthesize queue=_queue - In the implementation block
@property (retain) NSArray * currentBookShortcuts;                         //@synthesize currentBookShortcuts=_currentBookShortcuts - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)preWarmWithAnnotationProvider:(id)arg1 ;
-(void)setAnnotationProvider:(AEAnnotationProvider *)arg1 ;
-(AEAnnotationProvider *)annotationProvider;
-(void)_updateShortcuts;
-(id)_predicateForMostRecentBooks;
-(NSArray *)currentBookShortcuts;
-(void)setCurrentBookShortcuts:(NSArray *)arg1 ;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(NSOperationQueue *)queue;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(void)dealloc;
-(id)init;
@end
