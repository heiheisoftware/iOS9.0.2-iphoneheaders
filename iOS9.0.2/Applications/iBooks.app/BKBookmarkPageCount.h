/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber;

@interface BKBookmarkPageCount : NSManagedObject

@property (nonatomic,retain) NSString * annotationUuid; 
@property (nonatomic,retain) NSString * lookupKey; 
@property (nonatomic,retain) NSNumber * pageNumber; 
@property (nonatomic,retain) NSNumber * pageCount; 
@property (nonatomic,retain) NSString * paginationRevision; 
@property (nonatomic,readonly) NSRange pageRange; 
-(NSRange)pageRange;
@end

