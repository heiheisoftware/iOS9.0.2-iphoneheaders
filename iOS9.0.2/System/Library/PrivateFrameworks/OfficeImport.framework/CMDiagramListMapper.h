/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDiagramShapeMapper.h>

@interface CMDiagramListMapper : CMDiagramShapeMapper {

	float mMaxLineCount;

}
-(CGSize)textSize;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(void)mapChildrenAt:(id)arg1 withState:(id)arg2 ;
-(float)setFonSizeForChildNode:(id)arg1 atIndex:(unsigned)arg2 level:(int)arg3 ;
-(CGSize)sizeForNode:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setDefaultFonSize;
-(void)mapListItemAt:(id)arg1 index:(unsigned)arg2 withState:(id)arg3 ;
-(id)suggestedBoundsForHListItemWithIndex:(unsigned)arg1 ;
@end
