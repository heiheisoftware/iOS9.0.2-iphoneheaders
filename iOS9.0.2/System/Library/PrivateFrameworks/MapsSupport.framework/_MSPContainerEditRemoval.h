/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsSupport/_MSPContainerEdit.h>
#import <libobjc.A.dylib/MSPContainerEditRemoval.h>

@class NSArray, NSIndexSet, NSString;

@interface _MSPContainerEditRemoval : _MSPContainerEdit <MSPContainerEditRemoval> {

	NSArray* _originalObjects;
	NSArray* _removedImmutableObjects;
	NSIndexSet* _indexesOfRemovedObjects;

}

@property (nonatomic,readonly) NSArray * originalObjects;                         //@synthesize originalObjects=_originalObjects - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * removedImmutableObjects;                 //@synthesize removedImmutableObjects=_removedImmutableObjects - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexesOfRemovedObjects;              //@synthesize indexesOfRemovedObjects=_indexesOfRemovedObjects - In the implementation block
-(NSString *)description;
-(id)initWithRemovedObjects:(id)arg1 indexes:(id)arg2 ;
-(NSIndexSet *)indexesOfRemovedObjects;
-(NSArray *)originalObjects;
-(void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(/*^block*/id)arg2 ;
-(NSArray *)removedImmutableObjects;
@end
